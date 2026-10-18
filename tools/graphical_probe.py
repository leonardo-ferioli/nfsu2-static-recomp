"""Bounded graphical probe of nfsu2_launcher.exe: run it for a few seconds inside a Job Object, record the
windows it creates and capture the window rectangle, then put the desktop back as it was.

    python tools/graphical_probe.py --out logs/graphical_probe [--seconds 30]

Safety: the child runs in a Job Object (kill on close, CPU hard cap, no system-parameter, desktop or exit-windows
changes), under the launcher's own watchdog and this script's hard timeout. Afterwards the cursor clip is released and
the display mode is compared with the one before the run and reset if it changed. Only the rectangle of the game's
own visible window is captured.
"""
import argparse
import ctypes
import ctypes.wintypes as wt
import json
import struct
import subprocess
import sys
import time
import zlib
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import boot_guard  # noqa: E402

ROOT = Path(__file__).resolve().parents[1]
user32 = ctypes.WinDLL("user32", use_last_error=True)
gdi32 = ctypes.WinDLL("gdi32", use_last_error=True)
user32.SetProcessDPIAware()


class DEVMODE(ctypes.Structure):
    _fields_ = [("dmDeviceName", ctypes.c_wchar * 32), ("dmSpecVersion", wt.WORD), ("dmDriverVersion", wt.WORD),
                ("dmSize", wt.WORD), ("dmDriverExtra", wt.WORD), ("dmFields", wt.DWORD), ("dmPositionX", ctypes.c_long),
                ("dmPositionY", ctypes.c_long), ("dmDisplayOrientation", wt.DWORD), ("dmDisplayFixedOutput", wt.DWORD),
                ("dmColor", ctypes.c_short), ("dmDuplex", ctypes.c_short), ("dmYResolution", ctypes.c_short),
                ("dmTTOption", ctypes.c_short), ("dmCollate", ctypes.c_short), ("dmFormName", ctypes.c_wchar * 32),
                ("dmLogPixels", wt.WORD), ("dmBitsPerPel", wt.DWORD), ("dmPelsWidth", wt.DWORD), ("dmPelsHeight", wt.DWORD),
                ("dmDisplayFlags", wt.DWORD), ("dmDisplayFrequency", wt.DWORD), ("dmICMMethod", wt.DWORD),
                ("dmICMIntent", wt.DWORD), ("dmMediaType", wt.DWORD), ("dmDitherType", wt.DWORD), ("dmReserved1", wt.DWORD),
                ("dmReserved2", wt.DWORD), ("dmPanningWidth", wt.DWORD), ("dmPanningHeight", wt.DWORD)]


def display_mode():
    mode = DEVMODE()
    mode.dmSize = ctypes.sizeof(DEVMODE)
    user32.EnumDisplaySettingsW(None, -1, ctypes.byref(mode))  # ENUM_CURRENT_SETTINGS
    return (mode.dmPelsWidth, mode.dmPelsHeight, mode.dmBitsPerPel, mode.dmDisplayFrequency)


def windows_of(pid):
    found = []
    callback_type = ctypes.WINFUNCTYPE(wt.BOOL, wt.HWND, wt.LPARAM)

    def visit(hwnd, _):
        owner = wt.DWORD()
        user32.GetWindowThreadProcessId(hwnd, ctypes.byref(owner))
        if owner.value == pid:
            rect = wt.RECT()
            user32.GetWindowRect(hwnd, ctypes.byref(rect))
            name, title = ctypes.create_unicode_buffer(256), ctypes.create_unicode_buffer(256)
            user32.GetClassNameW(hwnd, name, 256)
            user32.GetWindowTextW(hwnd, title, 256)
            found.append({"hwnd": int(hwnd or 0), "class": name.value, "title": title.value,
                          "dpi": int(user32.GetDpiForWindow(hwnd)), "visible": bool(user32.IsWindowVisible(hwnd)), "iconic": bool(user32.IsIconic(hwnd)),
                          "rect": [rect.left, rect.top, rect.right, rect.bottom]})
        return True

    user32.EnumWindows(callback_type(visit), 0)
    return found


def write_png(path, width, height, bgra):
    rows = bytearray()
    stride = width * 4
    for y in range(height):
        row = bgra[y * stride:(y + 1) * stride]
        rgb = bytearray(width * 3)
        rgb[0::3], rgb[1::3], rgb[2::3] = row[2::4], row[1::4], row[0::4]
        rows += b"\0" + rgb

    def chunk(kind, data):
        body = kind + data
        return struct.pack(">I", len(data)) + body + struct.pack(">I", zlib.crc32(body) & 0xFFFFFFFF)

    path.write_bytes(b"\x89PNG\r\n\x1a\n" + chunk(b"IHDR", struct.pack(">IIBBBBB", width, height, 8, 2, 0, 0, 0)) +
                     chunk(b"IDAT", zlib.compress(bytes(rows), 6)) + chunk(b"IEND", b""))


def capture(rect, path):
    left, top, right, bottom = rect
    width, height = right - left, bottom - top
    if width < 64 or height < 64 or width > 8192 or height > 8192:
        return None
    screen = user32.GetDC(None)
    memory = gdi32.CreateCompatibleDC(screen)
    bitmap = gdi32.CreateCompatibleBitmap(screen, width, height)
    gdi32.SelectObject(memory, bitmap)
    gdi32.BitBlt(memory, 0, 0, width, height, screen, left, top, 0x00CC0020 | 0x40000000)  # SRCCOPY | CAPTUREBLT

    class Header(ctypes.Structure):
        _fields_ = [("size", wt.DWORD), ("width", ctypes.c_long), ("height", ctypes.c_long), ("planes", wt.WORD),
                    ("bits", wt.WORD), ("compression", wt.DWORD), ("image", wt.DWORD), ("x", ctypes.c_long),
                    ("y", ctypes.c_long), ("used", wt.DWORD), ("important", wt.DWORD)]

    header = Header(ctypes.sizeof(Header), width, -height, 1, 32, 0, 0, 0, 0, 0, 0)
    buffer = ctypes.create_string_buffer(width * height * 4)
    gdi32.GetDIBits(memory, bitmap, 0, height, buffer, ctypes.byref(header), 0)
    gdi32.DeleteObject(bitmap)
    gdi32.DeleteDC(memory)
    user32.ReleaseDC(None, screen)
    data = bytes(buffer)
    write_png(path, width, height, data)
    nonblack = sum(1 for i in range(0, len(data), 4 * 97) if data[i] or data[i + 1] or data[i + 2])
    return {"file": path.name, "width": width, "height": height, "sampled_nonblack": nonblack, "sampled": len(data) // (4 * 97)}


# Only these keys can ever be sent: no modifiers, no function keys, nothing that closes or switches windows.
KEYS = {"enter": (0x1C, False), "esc": (0x01, False), "up": (0x48, True), "down": (0x50, True),
        "left": (0x4B, True), "right": (0x4D, True)}


class KeyboardInput(ctypes.Structure):
    _fields_ = [("wVk", wt.WORD), ("wScan", wt.WORD), ("dwFlags", wt.DWORD), ("time", wt.DWORD), ("dwExtraInfo", ctypes.c_size_t)]


class Input(ctypes.Structure):
    class _U(ctypes.Union):
        _fields_ = [("ki", KeyboardInput), ("pad", ctypes.c_byte * 32)]
    _anonymous_ = ("u",)
    _fields_ = [("type", wt.DWORD), ("u", _U)]


def press(name, pid):
    """Send one key press to the system only if the foreground window belongs to the game process."""
    foreground = user32.GetForegroundWindow()
    owner = wt.DWORD()
    user32.GetWindowThreadProcessId(foreground, ctypes.byref(owner))
    if owner.value != pid:
        return "skipped: the foreground window is not the game's"
    scan, extended = KEYS[name]
    for flags in (0x8 | (0x1 if extended else 0), 0x8 | 0x2 | (0x1 if extended else 0)):  # SCANCODE [| EXTENDED] down, then up
        event = Input(1, Input._U(ki=KeyboardInput(0, scan, flags, 0, 0)))
        user32.SendInput(1, ctypes.byref(event), ctypes.sizeof(Input))
        time.sleep(0.12)
    return "sent"


def focus(windows, pid):
    for w in windows:
        if w["class"] == "GameFrame" and w["visible"]:
            user32.SetForegroundWindow(w["hwnd"])
            return


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--keys", default="", help="schedule such as '8:enter,14:down' (seconds:key; keys: enter esc up down left right)")
    parser.add_argument("--out", type=Path, default=ROOT / "logs/graphical_probe")
    parser.add_argument("--seconds", type=int, default=30)
    parser.add_argument("--launcher", type=Path, default=ROOT / "build32/nfsu2_launcher.exe")
    parser.add_argument("--game-dir", type=Path, default=ROOT.parent / "data game (pc)")
    parser.add_argument("--cpu-percent", type=int, default=70)
    args = parser.parse_args()
    out = args.out.resolve()
    out.mkdir(parents=True, exist_ok=True)
    before = display_mode()
    command = [str(args.launcher), "--game-dir", str(args.game_dir), "--log-dir", str(out), "--watchdog", str(args.seconds), "--no-dialog"]
    started = time.monotonic()
    process = boot_guard.launch(command, cpu_percent=args.cpu_percent, allow_display_changes=True)
    schedule = sorted((float(a.split(":")[0]), a.split(":")[1].strip().lower()) for a in args.keys.split(",") if a.strip())
    for _, key in schedule:
        if key not in KEYS:
            raise SystemExit(f"key not allowed: {key}")
    report = {"command": command, "display_before": before, "samples": [], "shots": [], "keys": []}
    last_shot = 0.0
    try:
        while time.monotonic() - started < args.seconds + 8 and process.poll() is None:
            elapsed = round(time.monotonic() - started, 1)
            windows = windows_of(process.pid)
            report["samples"].append({"t": elapsed, "windows": windows})
            # Only the game's own window, and only after it has had time to paint: an unpainted window would
            # show whatever is behind its rectangle.
            visible = [w for w in windows if w["visible"] and not w["iconic"] and w["class"] == "GameFrame" and (w["rect"][2] - w["rect"][0]) >= 64]
            if visible and elapsed >= 4.0 and time.monotonic() - last_shot >= 3:
                last_shot = time.monotonic()
                shot = capture(visible[0]["rect"], out / f"shot_{len(report['shots']):02d}.png")
                if shot:
                    shot["t"] = elapsed
                    report["shots"].append(shot)
            while schedule and schedule[0][0] <= elapsed:
                when, key = schedule.pop(0)
                focus(windows, process.pid)
                time.sleep(0.2)
                report["keys"].append({"t": elapsed, "key": key, "result": press(key, process.pid)})
            time.sleep(0.5)
    finally:
        result = boot_guard.monitor(process, timeout_seconds=2)
        report["exit_code"] = result.exit_code
        report["stop_reason"] = result.reason
        report["output"] = result.output[-2000:]
        report["elapsed_seconds"] = round(time.monotonic() - started, 1)
        boot_guard.restore_desktop_input()
        report["display_after"] = display_mode()
        if report["display_after"] != before:
            user32.ChangeDisplaySettingsW(None, 0)  # back to the registry's mode
            report["display_restored_to"] = display_mode()
        (out / "report.json").write_text(json.dumps(report, indent=2))
    print(json.dumps({k: report[k] for k in ("exit_code", "stop_reason", "elapsed_seconds", "display_before", "display_after")}, indent=2))
    print("distinct windows:", sorted({(w["class"], w["title"], tuple(w["rect"]), w["dpi"]) for s in report["samples"] for w in s["windows"]})[:10])
    print("keys:", report["keys"])
    print("screenshots:", len(report["shots"]))


if __name__ == "__main__":
    main()
