"""Assemble dist/NFSU2-static: the launcher, a configuration template, a README and checksums.

The package never contains game files: no SPEED2.EXE, no data folders. The launcher refuses to start unless the
user's own SPEED2.EXE has the SHA-256 of the build it was translated from. Before copying, the executable is audited:
it must be a 32-bit PE with a non-executable guest reservation and must not embed the original .text bytes.
"""
from datetime import datetime, timezone
from pathlib import Path
import argparse
import hashlib
import json
import mmap
import shutil
import struct
import zipfile

ROOT = Path(__file__).resolve().parents[1]

INI = """; NFS Underground 2 - NUE - launcher configuration. Every line is optional; lines starting with ';' are ignored.
; Relative paths are relative to this file.
[launcher]
; Folder that contains SPEED2.EXE and the game's data folders (GLOBAL, FRONTEND, CARS, TRACKS, SOUND, ...).
; If omitted, the launcher's own folder and then the current folder are tried.
;game_dir=C:\\Games\\Need for Speed Underground 2
; Where nfsu2_launcher.log (rotating) and native_trace.log are written. Default: "logs" next to the launcher.
;log_dir=logs
;log_max_kb=1024
;log_keep=3
; Diagnostics. watchdog_seconds ends the process after that many seconds (0 = never); max_instructions stops after
; that many translated page exits (0 = unlimited); trace=off disables native_trace.log.
;watchdog_seconds=0
;max_instructions=0
;trace=on
; Frame-rate cap in frames per second (0 = none). Default 60: without it the menus run at 100+ fps and heat the machine.
;fps_limit=60
; Skip Direct3D state calls (SetRenderState, SetSamplerState, SetTextureStageState) that repeat the value the device already has.
; Turned off automatically if the game uses state blocks. Set to off if the picture ever looks wrong.
;state_cache=on
; Vertical sync: off = as the game asks (it asks for none, so frames can tear into horizontal lines); on = Present waits for the
; display refresh. With vsync a late frame is shown for a whole extra refresh (30 fps steps below 60), so try both.
;vsync=off
; Performance report: every 5 s logs/native_trace.log gets the fps, the time spent inside each Direct3D call per frame, call counts,
; the state cache hit rate and memory. Costs a little speed; use it to find out what limits the frame rate (same as --profile).
;profile=off
; Specification used to interpret code the game generates at run time (see README.txt, "Third-party component").
; Default: sleigh\\x86.sla next to the launcher; its SHA-256 is verified at start.
;sleigh_spec=sleigh\\x86.sla

[speed]
; Speed layer: shortcuts in the translated game that never change what it computes. Each can be switched off to compare
; (all at once: --no-speed or enabled=off; the environment variables NFSU2_SPEED_NATIVE_CALLS / _PREDICT / _LOOKUPS = 0 or 1 win).
; native_calls: Windows and Direct3D calls are made straight from the translated code instead of through the dispatch loop.
;native_calls=on
; predict: a return or an indirect call first tries the places the translator found likely, then the full address lookup.
;predict=on
; lookups: the widescreen fix remembers the game addresses it looks up by name.
;lookups=on

[widescreen]
; The widescreen fix is built into this program (a port of the open-source NFSU2 Widescreen Fix; see README.txt). enabled=off
; restores the original game. width/height: the resolution used when none is saved yet (0 = the desktop's); afterwards the
; resolution is chosen in the game's options menu, which now lists every resolution of your display.
;enabled=on
;width=0
;height=0
; The options menu also lists common resolutions your monitor lacks (marked "(scaled)"); choosing one draws the game at that size
; in a borderless window scaled to the screen, aspect ratio kept. off = only the monitor's own resolutions.
;extra_resolutions=on
; Every listed resolution (the monitor's own modes included) is drawn at its size in a borderless window scaled to the screen,
; aspect ratio kept, so all of them behave the same. off = monitor modes use real fullscreen.
;scaled_resolutions=on

; The sections below keep the names and keys of the mod's own configuration file; values and meanings are the mod's.
[MAIN]
;FixHUD = 1                          ; Corrects HUD aspect ratio.
;FixFOV = 1                          ; Corrects FOV aspect ratio.
;Scaling = 0                         ; Adjusts FOV aspect ratio to be mathematically correct. Requires FixFOV.
;HudAspectRatioConstraint = Auto     ; Constrains the HUD to an aspect ratio. Use Auto, 16:9, 21:9, 1920x1080, or a pixel offset.
;FMVWidescreenMode = 1               ; FMVs fill a 16:9 screen. (0 = Original | 1 = Cropped | 2 = Stretched)
;FEScale = 1.00                      ; Size of the in-race HUD (menus and dialogs are never scaled here). (Default = 1.00, Xbox = 0.92)
;FMVScale = 1.00                     ; Size of FMVs.
;AutoFitFE = 0                       ; Automatically fits 16:9 UI content to smaller aspect ratios.
;AutoFitFMV = 1                      ; Automatically scales the FMVs to fully fit the width of the screen (black bars below 16:9).
;FEScaleAnchor = 1                  ; When the interface is scaled (FEScale), elements keep their screen zone: corner elements stay in their corners. (Not in the original mod.)
;FEScaleAnchorZone = 0.30            ; Share of the screen from each edge that counts as an edge zone.
;FEStretchBackdrops = 1             ; Title, loading and other full-height 4:3 backdrops are widened to the whole screen (no black bars at the sides). 0 = keep them 4:3.

[MISC]
;SkipIntro = 1                       ; Skips the FMVs that play when you launch the game.
;WindowedMode = 0                    ; 1 = Borderless | 2 = Border | 3 = Resizable Border | 4 = Borderless Fullscreen | 5 = Borderless Fullscreen Stretched
;DisableCutsceneBorders = 1          ; Removes the letterboxing of cutscenes.
;CustomUserFilesDirectoryInGameDir = 0   ; Saves and profile in a folder inside the game folder (for example: "save"). 0 = off.
;WriteSettingsToFile = 0             ; The game's registry settings go to "Documents\\NFS Underground 2\\Settings.ini" instead of the registry.
;ImproveGamepadSupport = 1           ; Button texts and front-end buttons. (1 = Xbox | 2 = PlayStation | 3 = PC texts | 4 = none; 0 = off)
;LeftStickDeadzone = 10.0
;RightStickDeadzone = 10.0
;FPSLimit = 60                       ; Frame rate the game is set for and this program's cap. 0 = none, -1 = monitor refresh rate, -2 = twice that.
;HighFPSCutscenes = 1                ; Raises the cutscene frame rate to the nearest multiple of 30 (at most 60).
;SingleCoreAffinity = 0              ; Runs the game on one CPU core (the mod's default is 1; off here: this build needs more than one core).
;NoOpticalDriveFix = 1               ; Lets the game run without an optical drive.
;RainDropletsScale = 0.5             ; Size of the on-screen rain droplets.

[CAMERA]
;Enable = 1                          ; Look around with the right stick or the mouse. 0 disables this section.
;CameraReturnTimeout = 3.0
;CameraReturnSpeed = 2.0
;StickLookSensitivity = 1.0
;MouseLookSensitivity = 1.0
;InvertLook = 0
;OnlyAllowHorizontalStickMovement = 0

[GRAPHICS]
;ConsoleGamma = 0                    ; Xbox 360 gamma (the mod's default is 1; off here until it has been seen working on screen).
;HideAABug = 1                       ; Hides a stray line at the screen edge with multisampling. (0 = off | 1 = top/left | 2 = all sides)
;RadarMaskScale = 2.0                ; Size of the map's mask as a multiple of the screen (the original mod uses 2). Not in the original mod.
;RadarMaskLimit = 4096               ; The mask is never larger than this many units: on very large screens a 2x mask can draw the map wrongly.

[NOSTrail]
;FixNOSTrailLength = 1
;CustomNOSTrailLength = 1.0

[LANGUAGE]
;Language =                          ; "English US", "English UK", "French", "German", "Italian", "Spanish", "Swedish", "Danish", "Dutch", "Korean", ...
"""

README = """NFS Underground 2 - NUE (experimental)
====================================

What it is
  A Windows program that runs a static recompilation of Need for Speed: Underground 2's SPEED2.EXE: the game's code
  was translated to C++ and compiled into nfsu2_launcher.exe. The original machine code is not executed. The program
  also holds, as data, the image of that executable build (its sections: initial data, tables, resources), so SPEED2.EXE
  itself is not read. The cars, tracks, sound and other data files are not included: you need your own copy of the game.

What you need
  * 32-bit or 64-bit Windows with the usual system DirectX 9 components.
  * The game folder of the PC release (the one with GLOBAL, FRONTEND, CARS, TRACKS, SOUND and LANGUAGES). The release is the one
    whose SPEED2.EXE has this SHA-256, which is the image the launcher holds:
      f9dd86c054878ce6276beb07c1fd61874f7a1e4bf1f241b084c65b73e24168a7
    SPEED2.EXE does not have to be in that folder.

How to run
  1. Put nfsu2_launcher.exe anywhere. Either copy launcher.ini next to it and set game_dir=, or run it from the game
     folder, or pass --game-dir "C:\\path\\to\\game".
  2. Check without starting the game:   nfsu2_launcher.exe --verify-only --game-dir "C:\\path\\to\\game"
  3. Start the game:                   nfsu2_launcher.exe --game-dir "C:\\path\\to\\game"
  Run with --help for all options. Logs are written to the "logs" folder next to the launcher.

Exit codes
  0 normal; 2 usage or configuration; 3 game folder or executable missing; 4 verification failed;
  5 the translated program stopped (see the log); 124 the diagnostic watchdog expired.

Third-party component (declared dependency)
  The game's audio engine loads x86 code modules from its data files into memory at run time. That code is not part
  of SPEED2.EXE, so it cannot be translated ahead of time. The launcher interprets it instruction by instruction with
  the SLEIGH engine and x86 specification of the Ghidra project (Apache License 2.0), found in the "sleigh" folder
  (x86.sla, PROVENANCE.txt, LICENSE-Apache-2.0.txt, NOTICE-third-party.txt). Only memory the game itself makes
  executable with VirtualProtect/VirtualAlloc outside SPEED2.EXE's image is interpreted; SPEED2.EXE's own code is never
  interpreted. Without the "sleigh" folder the launcher still starts, but stops with an explicit message as soon as the
  game loads such a module.

Widescreen fix (built in)
  The picture uses your desktop resolution instead of 640x480, and the options menu lists every resolution of your display.
  It is a port of the open-source NFSU2 Widescreen Fix of ThirteenAG's WidescreenFixesPack (MIT License; see
  third-party/widescreen-fix/): HUD and field-of-view for any aspect ratio, rain droplets, full-screen cutscenes and videos,
  skipped intros, windowed modes, the game's frame-rate constants, a look-around camera (right stick / mouse), gamepad texts and
  dead zones, the NOS trail fix, console gamma, settings kept in the current user's registry (or a file), a user-files folder
  inside the game folder, and the language setting. Its options are in launcher.ini under the mod's own section names.
  It is not a plug-in: the places the mod patches in the running game were found once in the original code and compiled into
  nfsu2_launcher.exe as variables and hooks; nothing is patched in memory and no .asi file is loaded.
  --no-widescreen (or enabled=off) turns it all off. Not ported: SMAA (undocumented in the mod's .ini), and the compatibility
  code for the separate NFSU_XtendedInput plug-in. Defaults that differ from the mod's: ConsoleGamma and SingleCoreAffinity are
  off, FPSLimit is 60 (the frame-rate cap of this program).

Status
  Experimental. The translated startup code has been validated against the reference translation up to the first
  thread creation of the game's initialization, and individual routines and operations have been tested. A playable
  menu or race has NOT been validated yet; failures are reported explicitly in the log rather than hidden.

Legal
  nfsu2_launcher.exe contains code derived from the game's executable and the executable's image as data (about 5.4 MB,
  including its original code bytes, which are never executed). Do not redistribute it unless you have the right to do
  so. The package contains no other game files (no cars, tracks, sound or videos).
"""


NOTICE = """Third-party components used by nfsu2_launcher.exe
===================================================

Ghidra SLEIGH (C++ decompiler/sleigh sources, compiled into nfsu2_launcher.exe) and x86.sla (processor
specification, run through the project's tools/prepare_sleigh_spec.py, see PROVENANCE.txt).
Copyright the Ghidra authors / National Security Agency. Licensed under the Apache License, Version 2.0
(LICENSE-Apache-2.0.txt). https://github.com/NationalSecurityAgency/ghidra

Use: decoding and interpreting x86 code that the game creates at run time. Not used for SPEED2.EXE's own code.
"""


def sha256(path):
    h = hashlib.sha256()
    with path.open("rb") as f:
        while data := f.read(1 << 20):
            h.update(data)
    return h.hexdigest()


def audit(exe):
    original_text = (ROOT.parent / "data/text.bin").read_bytes()
    with exe.open("rb") as f, mmap.mmap(f.fileno(), 0, access=mmap.ACCESS_READ) as mm:
        embeds_text = mm.find(original_text) != -1   # the guest image is held as data (never executed); see tools/embed_image.py
        pe = struct.unpack_from("<I", mm, 0x3c)[0]
        if mm[:2] != b"MZ" or struct.unpack_from("<H", mm, pe + 4)[0] != 0x14c:
            raise SystemExit(f"{exe.name} is not a 32-bit PE image")
        sections = struct.unpack_from("<H", mm, pe + 6)[0]
        optional = struct.unpack_from("<H", mm, pe + 20)[0]
        reservation = None
        for i in range(sections):
            at = pe + 24 + optional + i * 40
            if mm[at:at + 8].rstrip(b"\0") == b".raw_gue":
                flags = struct.unpack_from("<I", mm, at + 36)[0]
                reservation = {"virtual_size": struct.unpack_from("<I", mm, at + 8)[0], "executable": bool(flags & 0x20000000)}
        if not reservation or reservation["executable"]:
            raise SystemExit(f"{exe.name} lacks the non-executable guest reservation")
        subsystem = struct.unpack_from("<H", mm, pe + 24 + 68)[0]
    return reservation, subsystem, embeds_text


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--build-dir", type=Path, default=ROOT / "build32")
    parser.add_argument("--out", type=Path, default=ROOT / "dist")
    args = parser.parse_args()
    exe = args.build_dir.resolve() / "nfsu2_launcher.exe"
    if not exe.exists():
        raise SystemExit(f"{exe} not found; build the nfsu2_launcher target first")
    reservation, subsystem, embeds_text = audit(exe)
    package = args.out.resolve() / "NFSU2-static"
    package.mkdir(parents=True, exist_ok=True)
    (package / "nfsu2_launcher.exe").write_bytes(exe.read_bytes())
    # The linker map of this exact build (outside the package folder): resolves the addresses of the performance report to translated pages.
    symbol_map = exe.with_suffix(".map")
    if symbol_map.exists():
        (args.out.resolve() / "maps").mkdir(parents=True, exist_ok=True)
        shutil.copyfile(symbol_map, args.out.resolve() / "maps" / f"nfsu2_launcher-{sha256(exe)[:12]}.map")
    # Declared dependency of the run-time P-code interpreter (dynamic_code.hpp): specification, provenance, licenses.
    sleigh = package / "sleigh"
    sleigh.mkdir(exist_ok=True)
    spec_dir = ROOT / "third_party/sleigh_spec"
    shutil.copyfile(spec_dir / "x86.sla", sleigh / "x86.sla")
    shutil.copyfile(spec_dir / "PROVENANCE.txt", sleigh / "PROVENANCE.txt")
    shutil.copyfile(ROOT / "third_party/sleigh/LICENSE-Apache-2.0.txt", sleigh / "LICENSE-Apache-2.0.txt")
    (sleigh / "NOTICE-third-party.txt").write_text(NOTICE, encoding="utf-8", newline="\r\n")
    notices = package / "third-party" / "widescreen-fix"
    notices.mkdir(parents=True, exist_ok=True)
    for name in ("PROVENANCE.txt", "LICENSE-MIT.txt"):
        shutil.copyfile(ROOT / "third_party/widescreen" / name, notices / name)
    # The user's launcher.ini is never overwritten: the template is always written to launcher.default.ini.
    (package / "launcher.default.ini").write_text(INI, encoding="utf-8", newline="\r\n")
    if not (package / "launcher.ini").exists():
        (package / "launcher.ini").write_text(INI, encoding="utf-8", newline="\r\n")
    (package / "README.txt").write_text(README, encoding="utf-8", newline="\r\n")
    manifest = json.loads((ROOT / "export/manifest.json").read_text())
    info = {
        "built_utc": datetime.now(timezone.utc).isoformat(),
        "launcher_sha256": sha256(package / "nfsu2_launcher.exe"),
        "supported_speed2_sha256": manifest["input_sha256"],
        "translated_instructions": manifest["instruction_count"],
        "guest_reservation": reservation,
        "windows_subsystem": subsystem,
        "embedded_guest_image_data": True,
        "contains_original_text_blob": embeds_text,
        "original_code_executed": False,
        "runtime_interpreter": {"engine": "Ghidra SLEIGH (Apache-2.0)", "scope": "memory made executable at run time outside the SPEED2.EXE image",
                                "specification_sha256": sha256(sleigh / "x86.sla")},
        "contains_game_data_files": False,
        "status": "experimental: menu, race, cars and audio not yet validated",
    }
    (package / "VERSION.json").write_text(json.dumps(info, indent=2) + "\n", encoding="utf-8")
    sums = [f"{sha256(package / name)}  {name}" for name in ("nfsu2_launcher.exe", "launcher.default.ini", "README.txt", "VERSION.json", "sleigh/x86.sla", "sleigh/PROVENANCE.txt", "sleigh/LICENSE-Apache-2.0.txt", "sleigh/NOTICE-third-party.txt", "third-party/widescreen-fix/PROVENANCE.txt", "third-party/widescreen-fix/LICENSE-MIT.txt")]
    (package / "SHA256SUMS.txt").write_text("\n".join(sums) + "\n", encoding="utf-8")
    archive = args.out.resolve() / "NFSU2-static.zip"
    with zipfile.ZipFile(archive, "w", zipfile.ZIP_DEFLATED) as z:
        for item in sorted(p for p in package.rglob("*") if p.is_file() and p.relative_to(package).parts[0] != "logs"):   # logs are the user's, not part of the package
            name = item.relative_to(package).as_posix()
            if name == "launcher.default.ini":
                continue
            if name == "launcher.ini":   # the archive carries the template, not the user's edited copy
                z.write(package / "launcher.default.ini", "NFSU2-static/launcher.ini")
                continue
            z.write(item, f"NFSU2-static/{name}")
    print(json.dumps({"package": str(package), "archive": str(archive), **info}, indent=2))


if __name__ == "__main__":
    main()
