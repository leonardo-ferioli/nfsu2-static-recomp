"""Exercise diagnostic limits with tiny console children, never the game."""
import ctypes
import ctypes.wintypes
import os
from pathlib import Path
import subprocess
import sys
import tempfile
import unittest

try:
    import boot_guard
except ModuleNotFoundError:
    boot_guard = None


class BootGuardTests(unittest.TestCase):
    def child(self, code):
        self.assertIsNotNone(boot_guard, "The diagnostic process guard is missing")
        process = boot_guard.launch([sys.executable, "-c", code])
        self.addCleanup(lambda: process.poll() is None and process.kill())
        return process

    def test_timeout_stops_a_child_that_never_exits(self):
        process = self.child("import time; print('ready', flush=True); time.sleep(60)")
        result = boot_guard.monitor(process, timeout_seconds=0.3)
        self.assertEqual(result.reason, "wall_time_limit")
        self.assertIsNotNone(process.poll())
        self.assertIn("ready", result.output)
        self.assertLess(result.elapsed_seconds, 3)

    def test_natural_exit_keeps_output_and_exit_status(self):
        process = self.child("print('natural exit'); raise SystemExit(7)")
        result = boot_guard.monitor(process, timeout_seconds=5)
        self.assertIsNone(result.reason)
        self.assertEqual(result.exit_code, 7)
        self.assertEqual(result.output.strip(), "natural exit")

    def test_runaway_trace_stops_its_writer(self):
        with tempfile.TemporaryDirectory() as directory:
            trace = Path(directory) / "trace.log"
            process = self.child(
                "from pathlib import Path; import time; "
                f"Path({str(trace)!r}).write_bytes(b'x' * 4096); time.sleep(60)"
            )
            result = boot_guard.monitor(process, timeout_seconds=5,
                                        trace_path=trace, max_trace_bytes=1024)
            self.assertEqual(result.reason, "trace_size_limit")
            self.assertIsNotNone(process.poll())
            self.assertEqual(trace.stat().st_size, 4096)

    def test_unchanged_old_trace_does_not_stop_a_new_child(self):
        with tempfile.TemporaryDirectory() as directory:
            trace = Path(directory) / "trace.log"
            trace.write_bytes(b'x' * 4096)
            before = boot_guard.trace_identity(trace) if boot_guard else None
            process = self.child("import time; time.sleep(0.3); print('done')")
            result = boot_guard.monitor(process, timeout_seconds=5,
                                        trace_path=trace, max_trace_bytes=1024,
                                        previous_trace=before)
            self.assertIsNone(result.reason)
            self.assertEqual(result.exit_code, 0)

    @unittest.skipUnless(os.name == "nt", "Windows process priority")
    def test_child_starts_below_normal_priority(self):
        process = self.child("import time; time.sleep(60)")
        get_priority = ctypes.windll.kernel32.GetPriorityClass
        get_priority.argtypes = [ctypes.c_void_p]
        get_priority.restype = ctypes.c_ulong
        self.assertEqual(get_priority(int(process._handle)),
                         subprocess.BELOW_NORMAL_PRIORITY_CLASS)
        process.kill()
        process.communicate(timeout=3)


@unittest.skipUnless(os.name == "nt", "Windows Job Objects")
class JobLimitTests(unittest.TestCase):
    def child(self, code, **options):
        self.assertIsNotNone(boot_guard, "The diagnostic process guard is missing")
        process = boot_guard.launch([sys.executable, "-c", code], **options)
        self.addCleanup(lambda: process.poll() is None and process.kill())
        return process

    @staticmethod
    def query(job, kind, structure):
        ok = ctypes.windll.kernel32.QueryInformationJobObject(
            ctypes.c_void_p(job), kind, ctypes.byref(structure), ctypes.sizeof(structure), None)
        return structure if ok else None

    def test_child_belongs_to_a_job_with_kill_on_close(self):
        process = self.child("import time; time.sleep(60)")
        self.assertTrue(boot_guard.in_job(process))
        info = self.query(process.job, 9, boot_guard.ExtendedLimits())
        self.assertIsNotNone(info)
        self.assertTrue(info.BasicLimitInformation.LimitFlags & 0x2000, "KILL_ON_JOB_CLOSE")
        process.kill()
        process.communicate(timeout=3)

    def test_job_hard_caps_cpu_and_blocks_desktop_changes(self):
        process = self.child("import time; time.sleep(60)", cpu_percent=40)
        rate = self.query(process.job, 15, boot_guard.CpuRate())
        self.assertIsNotNone(rate)
        self.assertEqual(rate.ControlFlags, 0x1 | 0x4, "ENABLE | HARD_CAP")
        self.assertEqual(rate.CpuRate, 4000)
        ui = self.query(process.job, 4, boot_guard.UiLimits())
        self.assertIsNotNone(ui)
        for flag in (0x8, 0x10, 0x40, 0x80):  # system params, display, desktop, exit windows
            self.assertTrue(ui.UIRestrictionsClass & flag, hex(flag))
        process.kill()
        process.communicate(timeout=3)

    def test_timeout_also_stops_grandchildren(self):
        code = ("import subprocess, sys, time; "
                "g = subprocess.Popen([sys.executable, '-c', 'import time; time.sleep(60)']); "
                "print(g.pid, flush=True); time.sleep(60)")
        process = self.child(code)
        result = boot_guard.monitor(process, timeout_seconds=1.5)
        self.assertEqual(result.reason, "wall_time_limit")
        grandchild = int(result.output.split()[0])
        handle = ctypes.windll.kernel32.OpenProcess(0x100000, False, grandchild)  # SYNCHRONIZE
        if handle:
            waited = ctypes.windll.kernel32.WaitForSingleObject(handle, 3000)
            ctypes.windll.kernel32.CloseHandle(handle)
            self.assertEqual(waited, 0, "grandchild survived the job close")

    def test_restore_desktop_input_leaves_cursor_unclipped(self):
        self.assertIsNotNone(boot_guard, "The diagnostic process guard is missing")
        self.assertTrue(boot_guard.restore_desktop_input())
        user32 = ctypes.windll.user32
        rect = ctypes.wintypes.RECT()
        self.assertTrue(user32.GetClipCursor(ctypes.byref(rect)))
        left, top = user32.GetSystemMetrics(76), user32.GetSystemMetrics(77)  # virtual screen origin
        width, height = user32.GetSystemMetrics(78), user32.GetSystemMetrics(79)
        self.assertEqual((rect.left, rect.top, rect.right, rect.bottom),
                         (left, top, left + width, top + height))


if __name__ == "__main__":
    unittest.main()
