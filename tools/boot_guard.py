"""Bound owned diagnostic children without sending desktop input."""
from dataclasses import dataclass
from pathlib import Path
import math
import os
import subprocess
import time


@dataclass
class Result:
    exit_code: int
    output: str
    reason: str | None
    elapsed_seconds: float


if os.name == "nt":
    import ctypes
    from ctypes import wintypes

    JOB_EXTENDED_LIMITS, JOB_UI_RESTRICTIONS, JOB_CPU_RATE = 9, 4, 15
    LIMIT_DIE_ON_UNHANDLED_EXCEPTION, LIMIT_KILL_ON_JOB_CLOSE = 0x400, 0x2000
    CPU_RATE_ENABLE, CPU_RATE_HARD_CAP = 0x1, 0x4
    # Block mode switches and system-wide settings, never ordinary window input.
    UI_SYSTEM_PARAMETERS, UI_DISPLAY_SETTINGS, UI_DESKTOP, UI_EXIT_WINDOWS = 0x8, 0x10, 0x40, 0x80

    class BasicLimits(ctypes.Structure):
        _fields_ = [("PerProcessUserTimeLimit", ctypes.c_int64), ("PerJobUserTimeLimit", ctypes.c_int64),
                    ("LimitFlags", wintypes.DWORD), ("MinimumWorkingSetSize", ctypes.c_size_t),
                    ("MaximumWorkingSetSize", ctypes.c_size_t), ("ActiveProcessLimit", wintypes.DWORD),
                    ("Affinity", ctypes.c_size_t), ("PriorityClass", wintypes.DWORD),
                    ("SchedulingClass", wintypes.DWORD)]

    class IoCounters(ctypes.Structure):
        _fields_ = [(name, ctypes.c_uint64) for name in (
            "ReadOperationCount", "WriteOperationCount", "OtherOperationCount",
            "ReadTransferCount", "WriteTransferCount", "OtherTransferCount")]

    class ExtendedLimits(ctypes.Structure):
        _fields_ = [("BasicLimitInformation", BasicLimits), ("IoInfo", IoCounters),
                    ("ProcessMemoryLimit", ctypes.c_size_t), ("JobMemoryLimit", ctypes.c_size_t),
                    ("PeakProcessMemoryUsed", ctypes.c_size_t), ("PeakJobMemoryUsed", ctypes.c_size_t)]

    class CpuRate(ctypes.Structure):
        # CpuRate is expressed in hundredths of a percent of all logical processors.
        _fields_ = [("ControlFlags", wintypes.DWORD), ("CpuRate", wintypes.DWORD)]

    class UiLimits(ctypes.Structure):
        _fields_ = [("UIRestrictionsClass", wintypes.DWORD)]

    _kernel32 = ctypes.WinDLL("kernel32", use_last_error=True)
    _user32 = ctypes.WinDLL("user32", use_last_error=True)
    _kernel32.CreateJobObjectW.restype = wintypes.HANDLE
    _kernel32.CreateJobObjectW.argtypes = [wintypes.LPVOID, wintypes.LPCWSTR]
    _kernel32.SetInformationJobObject.argtypes = [wintypes.HANDLE, ctypes.c_int, wintypes.LPVOID, wintypes.DWORD]
    _kernel32.AssignProcessToJobObject.argtypes = [wintypes.HANDLE, wintypes.HANDLE]
    _kernel32.IsProcessInJob.argtypes = [wintypes.HANDLE, wintypes.HANDLE, ctypes.POINTER(wintypes.BOOL)]
    _kernel32.CloseHandle.argtypes = [wintypes.HANDLE]
    _user32.ClipCursor.argtypes = [wintypes.LPVOID]


def _job_call(ok):
    if not ok:
        raise ctypes.WinError(ctypes.get_last_error())


def _create_job(process, cpu_percent, allow_display_changes):
    job = _kernel32.CreateJobObjectW(None, None)
    if not job:
        raise ctypes.WinError(ctypes.get_last_error())
    try:
        limits = ExtendedLimits()
        limits.BasicLimitInformation.LimitFlags = LIMIT_KILL_ON_JOB_CLOSE | LIMIT_DIE_ON_UNHANDLED_EXCEPTION
        _job_call(_kernel32.SetInformationJobObject(job, JOB_EXTENDED_LIMITS, ctypes.byref(limits), ctypes.sizeof(limits)))
        rate = CpuRate(CPU_RATE_ENABLE | CPU_RATE_HARD_CAP, int(round(cpu_percent * 100)))
        _job_call(_kernel32.SetInformationJobObject(job, JOB_CPU_RATE, ctypes.byref(rate), ctypes.sizeof(rate)))
        restricted = UI_SYSTEM_PARAMETERS | UI_DESKTOP | UI_EXIT_WINDOWS
        if not allow_display_changes:
            restricted |= UI_DISPLAY_SETTINGS
        ui = UiLimits(restricted)
        _job_call(_kernel32.SetInformationJobObject(job, JOB_UI_RESTRICTIONS, ctypes.byref(ui), ctypes.sizeof(ui)))
        _job_call(_kernel32.AssignProcessToJobObject(job, int(process._handle)))
    except BaseException:
        _kernel32.CloseHandle(job)
        raise
    return job


def in_job(process):
    """True when `process` is a member of the Job Object created by `launch`."""
    result = wintypes.BOOL()
    _job_call(_kernel32.IsProcessInJob(int(process._handle), process.job, ctypes.byref(result)))
    return bool(result.value)


def close_job(process):
    """Close the job handle; KILL_ON_JOB_CLOSE ends the child and all its descendants."""
    job, process.job = getattr(process, "job", None), None
    if job:
        _kernel32.CloseHandle(job)


def restore_desktop_input():
    """Release any cursor clip left behind by an interrupted game window."""
    if os.name != "nt":
        return True
    return bool(_user32.ClipCursor(None))


def launch(command, *, cpu_percent=50, allow_display_changes=False):
    """Start an owned child below normal priority inside a bounded Job Object.

    The job hard-caps CPU at `cpu_percent` of all logical processors, blocks display-mode,
    desktop and system-parameter changes unless `allow_display_changes`, and kills the whole
    process tree when closed. The child is assigned right after creation, so a descendant
    created in that first instant would escape.
    """
    if not 0 < cpu_percent <= 100:
        raise ValueError("cpu_percent must be in (0, 100]")
    flags = 0
    if os.name == "nt":
        flags = subprocess.BELOW_NORMAL_PRIORITY_CLASS | subprocess.CREATE_NO_WINDOW
    process = subprocess.Popen(command, stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
                               text=True, creationflags=flags)
    process.job = None
    if os.name == "nt":
        try:
            process.job = _create_job(process, cpu_percent, allow_display_changes)
        except BaseException:
            process.kill()
            process.communicate(timeout=3)
            raise
    return process


def trace_identity(path):
    try:
        stat = Path(path).stat()
        return stat.st_mtime_ns, stat.st_size
    except FileNotFoundError:
        return None


def monitor(process, *, timeout_seconds=30, trace_path=None,
            max_trace_bytes=16 * 1024 * 1024, previous_trace=None):
    start = time.monotonic()
    reason = None
    try:
        if not math.isfinite(timeout_seconds) or timeout_seconds <= 0 or max_trace_bytes <= 0:
            raise ValueError("Diagnostic time and trace limits must be positive and finite")
        while True:
            remaining = timeout_seconds - (time.monotonic() - start)
            if remaining <= 0:
                reason = "wall_time_limit"
                break
            if trace_path is not None:
                current = trace_identity(trace_path)
                if current is not None and current != previous_trace and current[1] > max_trace_bytes:
                    reason = "trace_size_limit"
                    break
            try:
                output, _ = process.communicate(timeout=min(0.1, remaining))
                return Result(process.returncode, output, None, time.monotonic() - start)
            except subprocess.TimeoutExpired:
                pass
        # Closing the job ends the child and any descendant that still holds the output pipe.
        if process.poll() is None:
            if getattr(process, "job", None):
                close_job(process)
            else:
                process.terminate()
        output, _ = process.communicate(timeout=3)
        return Result(process.returncode, output, reason, time.monotonic() - start)
    finally:
        if process.poll() is None:
            process.kill()
            process.communicate(timeout=3)
        close_job(process)
        restore_desktop_input()
