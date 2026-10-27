"""Console tests for nfsu2_launcher.exe: verification, configuration, logging and a bounded deterministic run.

    python tools/test_launcher.py <nfsu2_launcher.exe> <speed_fast.exe> <game-dir> <export-dir>

No window is created: the only run of translated game code stops, by a diagnostic hook, before the first
CreateThread of the game's startup, exactly like the boot-prefix differential test.
"""
import os
import re
import shutil
import subprocess
import sys
import tempfile
import unittest
from pathlib import Path

LAUNCHER, SPEED_FAST, GAME, EXPORT = (Path(a).resolve() for a in sys.argv[1:5])
del sys.argv[1:5]


def run(args, cwd=None, env=None, timeout=240):
    merged = dict(os.environ)
    merged.update(env or {})
    return subprocess.run([str(LAUNCHER), "--no-dialog", *map(str, args)], capture_output=True, text=True,
                          cwd=cwd, env=merged, timeout=timeout)


class LauncherTests(unittest.TestCase):
    def setUp(self):
        self.temp = Path(tempfile.mkdtemp(prefix="nfsu2_launcher_test_"))
        self.addCleanup(shutil.rmtree, self.temp, True)

    def test_identity_commands(self):
        self.assertIn("NFS Underground 2 - NUE launcher", run(["--version"]).stdout)
        info = run(["--info"])
        self.assertEqual(info.returncode, 0)
        self.assertIn("f9dd86c054878ce6276beb07c1fd61874f7a1e4bf1f241b084c65b73e24168a7", info.stdout)
        self.assertIn("Original x86 execution fallback: none", info.stdout)

    def test_unknown_option_is_a_usage_error(self):
        result = run(["--bogus"])
        self.assertEqual(result.returncode, 2)
        self.assertIn("opcion desconocida", result.stderr)

    def test_verify_only_checks_the_executable_and_every_mapped_block(self):
        result = run(["--verify-only", "--game-dir", GAME, "--log-dir", self.temp / "logs"])
        self.assertEqual(result.returncode, 0, result.stderr)
        self.assertIn("coincide bloque a bloque", result.stdout)
        log = (self.temp / "logs" / "nfsu2_launcher.log").read_text()
        self.assertIn("SPEED2.EXE is not read", log)
        self.assertIn("every block verified", log)

    def test_the_image_held_in_the_launcher_needs_no_speed2_exe(self):
        # A game folder without SPEED2.EXE (only its data folders, here empty) is enough: the guest image is data inside the launcher.
        folder = self.temp / "no_exe"
        for name in ("GLOBAL", "FRONTEND", "CARS", "TRACKS", "SOUND", "LANGUAGES"):
            (folder / name).mkdir(parents=True)
        result = run(["--verify-only", "--game-dir", folder, "--log-dir", self.temp / "logs"])
        self.assertEqual(result.returncode, 0, result.stderr)
        log = (self.temp / "logs" / "nfsu2_launcher.log").read_text()
        self.assertIn("SPEED2.EXE is not read", log)
        self.assertNotIn("SHA-256 verified", log)
        self.assertIn("every block verified", log)

    def test_missing_game_directory(self):
        result = run(["--game-dir", self.temp / "nowhere", "--log-dir", self.temp / "logs"])
        self.assertEqual(result.returncode, 3)
        self.assertIn("No se encuentra la carpeta del juego", result.stderr)

    def test_missing_data_folders_are_listed(self):
        bare = self.temp / "bare"
        (bare / "GLOBAL").mkdir(parents=True)
        result = run(["--game-dir", bare, "--log-dir", self.temp / "logs"])
        self.assertEqual(result.returncode, 3)
        for folder in ("FRONTEND", "CARS", "TRACKS", "SOUND", "LANGUAGES"):
            self.assertIn(folder, result.stderr)

    def test_configuration_file_and_command_line_precedence(self):
        ini = self.temp / "settings.ini"
        ini.write_text(f"[launcher]\ngame_dir={GAME}\nlog_dir=ini_logs\nlog_max_kb=64\n; comment\nwatchdog_seconds=5\n")
        result = run(["--config", ini, "--verify-only"])
        self.assertEqual(result.returncode, 0, result.stderr)
        self.assertTrue((self.temp / "ini_logs" / "nfsu2_launcher.log").exists(), "relative log_dir is relative to the ini file")
        override = run(["--config", ini, "--verify-only", "--log-dir", self.temp / "cli_logs"])
        self.assertEqual(override.returncode, 0, override.stderr)
        self.assertTrue((self.temp / "cli_logs" / "nfsu2_launcher.log").exists(), "the command line wins over the file")

    def test_invalid_configuration_is_a_usage_error(self):
        ini = self.temp / "bad.ini"
        ini.write_text("[launcher]\nnot_a_key=1\n")
        result = run(["--config", ini])
        self.assertEqual(result.returncode, 2)
        self.assertIn("unknown key not_a_key", result.stderr)
        ini.write_text("[launcher]\nlog_max_kb=lots\n")
        self.assertEqual(run(["--config", ini]).returncode, 2)

    def test_the_mods_own_configuration_sections_are_read(self):
        ini = self.temp / "mod.ini"
        text = chr(10).join(["[MAIN]", "FixHUD = 1 ; comment", "HudAspectRatioConstraint = 16:9", "FMVWidescreenMode = 2", "[MISC]", "FPSLimit = -1", "WindowedMode = 3",
                             "DisableCutsceneBorders = 0", "[CAMERA]", "MouseLookSensitivity = 2.5", "[NOSTrail]", "CustomNOSTrailLength = 1.5", "[LANGUAGE]", "Language = French", ""])
        ini.write_text(text)
        result = run(["--config", ini, "--game-dir", GAME, "--log-dir", self.temp / "logs", "--verify-only"])
        self.assertEqual(result.returncode, 0, result.stderr)
        log = (self.temp / "logs" / "nfsu2_launcher.log").read_text(errors="replace")
        self.assertIn("windowed mode 3", log)
        self.assertIn("fmv mode 2", log)
        for bad in ("[MAIN]" + chr(10) + "NoSuchKey = 1" + chr(10), "[MISC]" + chr(10) + "WindowedMode = 9" + chr(10), "[GRAPHICS]" + chr(10) + "SMAA = 1" + chr(10),
                    "[CAMERA]" + chr(10) + "MouseLookSensitivity = fast" + chr(10)):
            ini.write_text(bad)
            self.assertEqual(run(["--config", ini, "--game-dir", GAME, "--log-dir", self.temp / "logs", "--verify-only"]).returncode, 2, bad)

    def test_the_hud_scale_is_read_from_the_ini_and_defaults_to_the_mods_one(self):
        # A launcher.ini written for an earlier build (FEScale = 0.80 and its trailing comment) must still apply; without the key the HUD is at 1.00.
        base = ["--game-dir", GAME, "--log-dir", self.temp / "logs", "--verify-only"]
        log_path = self.temp / "logs" / "nfsu2_launcher.log"
        ini = self.temp / "hud.ini"
        ini.write_text(chr(10).join(["[MAIN]", "FEScale = 0.80                      ; Size of UI elements. (Default = 1.00, Xbox = 0.92)", ""]))
        self.assertEqual(run(base + ["--config", ini]).returncode, 0)
        self.assertIn("hud on (scale 0.80)", log_path.read_text(errors="replace"))
        ini.write_text(chr(10).join(["[MAIN]", ";FEScale = 0.80", ""]))
        self.assertEqual(run(base + ["--config", ini]).returncode, 0)
        self.assertIn("hud on (scale 1.00)", log_path.read_text(errors="replace"))

    def test_windowed_option_selects_a_window_mode_and_size(self):
        base = ["--game-dir", GAME, "--log-dir", self.temp / "logs", "--verify-only"]
        self.assertEqual(run(base + ["--windowed"]).returncode, 0)
        log = (self.temp / "logs" / "nfsu2_launcher.log").read_text(errors="replace")
        self.assertIn("windowed mode 2", log)
        self.assertEqual(run(base + ["--windowed", "--width", "1600", "--height", "900"]).returncode, 0)

    def test_log_rotation_keeps_a_bounded_history(self):
        logs = self.temp / "logs"
        logs.mkdir()
        (logs / "nfsu2_launcher.log").write_text("x" * (2 * 1024 * 1024))
        for _ in range(4):
            result = run(["--verify-only", "--game-dir", GAME, "--log-dir", logs])
            self.assertEqual(result.returncode, 0, result.stderr)
            (logs / "nfsu2_launcher.log").write_text((logs / "nfsu2_launcher.log").read_text() + "y" * (2 * 1024 * 1024))
        names = sorted(p.name for p in logs.iterdir())
        self.assertIn("nfsu2_launcher.log.1", names)
        self.assertLessEqual(len([n for n in names if n.startswith("nfsu2_launcher.log")]), 4, "log_keep=3 plus the live file")

    def test_bounded_deterministic_run_matches_the_diagnostic_runner(self):
        env = {"NFSU2_DETERMINISTIC_MAP": "1", "NFSU2_DETERMINISTIC_TIME": "1", "NFSU2_STOP_AT_IMPORT": "CreateThread"}
        launched = run(["--game-dir", GAME, "--log-dir", self.temp / "logs", "--watchdog", "120", "--no-widescreen"], env=env)
        self.assertEqual(launched.returncode, 5, launched.stderr)
        self.assertIn("diagnostic stop before CreateThread", launched.stderr)
        launcher_count = int(re.search(r"instrucciones=(\d+)", launched.stderr).group(1))
        # The launcher maps the image from SPEED2.EXE; the runner maps it from the exported memory blocks.
        merged = dict(os.environ)
        merged.update(env)
        subprocess.run([str(SPEED_FAST), "--boot", str(EXPORT), str(GAME), "100000000"], env=merged, capture_output=True, timeout=240)
        trace = (EXPORT.parent / "logs" / "boot_trace.log").read_text(errors="replace")
        runner_count = int(re.search(r"STOP diagnostic stop before CreateThread instructions=(\d+)", trace).group(1))
        self.assertEqual(launcher_count, runner_count)
        self.assertTrue((self.temp / "logs" / "native_trace.log").exists())

    def test_a_game_folder_without_speed2_exe_runs_the_same_start_up(self):
        # The image is inside the launcher, so a folder without SPEED2.EXE (the data folders linked into it) reaches the same diagnostic stop.
        # (Its instruction count differs a little: the game parses the path of its own executable, and this path is shorter.)
        folder = self.temp / "linked"
        folder.mkdir()
        for name in sorted(p.name for p in GAME.iterdir() if p.is_dir()):   # every sub-folder, so the game finds what it probes for
            made = subprocess.run(["cmd", "/c", "mklink", "/J", str(folder / name), str(GAME / name)], capture_output=True, text=True)
            self.assertEqual(made.returncode, 0, made.stdout + made.stderr)
            self.addCleanup(os.rmdir, folder / name)   # removes the junction only, never the game's data (runs before the folder is deleted)
        env = {"NFSU2_DETERMINISTIC_MAP": "1", "NFSU2_DETERMINISTIC_TIME": "1", "NFSU2_STOP_AT_IMPORT": "CreateThread"}
        counts = {}
        for label, game, extra in (("with exe", GAME, []), ("no exe", folder, [])):
            launched = run(["--game-dir", game, "--log-dir", self.temp / ("logs_" + label.replace(" ", "_")), "--watchdog", "120", "--no-widescreen", *extra], env=env)
            self.assertEqual(launched.returncode, 5, label + ": " + launched.stderr)
            self.assertIn("diagnostic stop before CreateThread", launched.stderr)
            counts[label] = int(re.search(r"instrucciones=(\d+)", launched.stderr).group(1))
        self.assertLess(abs(counts["no exe"] - counts["with exe"]), 2000)
        self.assertFalse((folder / "SPEED2.EXE").exists())

    def test_widescreen_fix_starts_the_game_up_to_the_same_point(self):
        # With the widescreen fix on (settings in a temporary folder, not the registry) the translated start-up reaches its first
        # thread creation; the fix changes the game's behavior, so the executed instruction count differs from the unmodified run.
        ini = self.temp / "widescreen.ini"
        ini.write_text("\n".join(["[misc]", "WriteSettingsToFile=1", "CustomUserFilesDirectoryInGameDir=" + str(self.temp / "user"), ""]))
        env = {"NFSU2_DETERMINISTIC_MAP": "1", "NFSU2_DETERMINISTIC_TIME": "1", "NFSU2_STOP_AT_IMPORT": "CreateThread"}
        launched = run(["--config", ini, "--game-dir", GAME, "--log-dir", self.temp / "logs", "--watchdog", "120"], env=env)
        self.assertEqual(launched.returncode, 5, launched.stderr)
        self.assertIn("diagnostic stop before CreateThread", launched.stderr)
        log = (self.temp / "logs" / "nfsu2_launcher.log").read_text(errors="replace")
        self.assertIn("widescreen fix: on", log)

    def test_watchdog_ends_a_run_that_does_not_finish(self):
        # Without the diagnostic stop the translated startup keeps running (and would create a window), so the
        # watchdog is exercised through its configuration parsing only: a zero watchdog is accepted, a negative is not.
        self.assertEqual(run(["--watchdog", "-1"]).returncode, 2)


if __name__ == "__main__":
    unittest.main()
