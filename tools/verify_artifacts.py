"""Record the identity and actual limits of the compiled raw translation."""
from pathlib import Path
import hashlib
import json
import mmap
import struct
import subprocess
import argparse
from datetime import datetime, timezone

ROOT = Path(__file__).resolve().parents[1]


def sha256(path):
    h = hashlib.sha256()
    with path.open("rb") as f:
        while data := f.read(1024 * 1024):
            h.update(data)
    return h.hexdigest()


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--build-dir", type=Path, default=ROOT / "build32")
    args = parser.parse_args()
    build = args.build_dir.resolve()
    executable = build / "speed_raw.exe"
    library = build / "nfsu2_raw.lib"
    tests = build / "raw_semantics_tests.exe"
    results = []
    for args in [["ctest", "--test-dir", str(build), "--output-on-failure"], [str(executable), "--info"],
                 [str(executable), "--hash", "cars/350z/geometry.bin"],
                 [str(build / "speed_fast.exe"), "--hash", "cars/350z/geometry.bin"]]:
        p = subprocess.run(args, capture_output=True, text=True, timeout=180)
        results.append({"command": args, "exit_code": p.returncode, "stdout": p.stdout, "stderr": p.stderr})
        if p.returncode:
            raise RuntimeError(p.stdout + p.stderr)
    artifacts = []
    original_text = (ROOT.parent / "data/text.bin").read_bytes()
    fast = [build / n for n in ("nfsu2_fast.lib", "speed_fast.exe", "nfsu2_launcher.exe", "fast_platform_tests.exe", "fast_resource_tests.exe")]
    for p in [library, executable, tests, build / "raw_platform_tests.exe", build / "raw_userop_tests.exe", build / "raw_resource_tests.exe"] + fast:
        with p.open("rb") as f, mmap.mmap(f.fileno(), 0, access=mmap.ACCESS_READ) as mm:
            embedded = mm.find(original_text)
            arch = None
            guest_reservation = None
            if mm[:2] == b"MZ":
                pe = struct.unpack_from("<I", mm, 0x3c)[0]
                arch = hex(struct.unpack_from("<H", mm, pe + 4)[0])
                section_count = struct.unpack_from("<H", mm, pe + 6)[0]
                optional_size = struct.unpack_from("<H", mm, pe + 20)[0]
                characteristics = struct.unpack_from("<H", mm, pe + 22)[0]
                for index in range(section_count):
                    off = pe + 24 + optional_size + index * 40
                    if mm[off:off+8].rstrip(b"\0") == b".raw_gue":
                        size, va = struct.unpack_from("<II", mm, off + 8)
                        flags = struct.unpack_from("<I", mm, off + 36)[0]
                        guest_reservation = {"rva": hex(va), "virtual_size": size, "executable": bool(flags & 0x20000000)}
                if arch == "0x14c":
                    if characteristics & 0x20:
                        raise RuntimeError(f"Unexpected large-address-aware host: {p}")
                    requires_image = p.name in ("speed_raw.exe", "raw_platform_tests.exe", "raw_resource_tests.exe", "speed_fast.exe", "nfsu2_launcher.exe",
                                                "fast_platform_tests.exe", "fast_resource_tests.exe")
                    if (requires_image and not guest_reservation) or (guest_reservation and (guest_reservation["rva"] != "0x1000" or guest_reservation["executable"])):
                        raise RuntimeError(f"Missing or executable guest data reservation: {p}")
        holds_image = p.name == "nfsu2_launcher.exe"   # the launcher holds the guest image as data (tools/embed_image.py); it is never executed
        if embedded != -1 and not holds_image:
            raise RuntimeError(f"Original x86 text blob unexpectedly embedded in {p}")
        artifacts.append({"file": str(p.relative_to(ROOT)), "bytes": p.stat().st_size,
                          "sha256": sha256(p), "pe_machine": arch,
                          "contains_original_text_blob": embedded != -1, "guest_reservation": guest_reservation})
    audit = ROOT.parent / "auditoria_gemini_2026-10-16/evidencia_binaria.json"
    preservation = {}
    if audit.exists():
        previous = json.loads(audit.read_text(encoding="utf-8"))
        for rel, item in previous["source_inventory"].items():
            preservation[rel] = sha256(ROOT.parent / rel) == item["sha256"]
        for rel in ["speed.exe", "data game (pc)/speed.exe"]:
            preservation[rel] = sha256(ROOT.parent / rel) == previous["files"][rel]["sha256"]
        if not all(preservation.values()):
            raise RuntimeError("A previously audited source or executable changed")
    trace = ROOT / "logs/boot_trace.log"
    trace_record = None
    if trace.exists():
        with trace.open("rb") as stream:
            stream.seek(max(0, trace.stat().st_size - 65536))
            tail = stream.read(65536).decode("utf-8", errors="replace").splitlines()[-12:]
        trace_record = {"file": str(trace.relative_to(ROOT)), "sha256": sha256(trace), "tail": tail}
    result = {"recorded_utc": datetime.now(timezone.utc).isoformat(), "artifacts": artifacts, "verification": results,
              "previous_project_preserved": preservation,
              "coverage": json.loads((ROOT / "coverage.json").read_text()),
              "boot_trace_snapshot": trace_record,
              "performance": json.loads((ROOT / "performance.json").read_text()) if (ROOT / "performance.json").exists() else None,
              "gameplay_validated": False,
              "status": "Optimized static x86 translation with native Windows bridge; real game boot under investigation. Menu, race, full physics, cars and audible audio are not yet validated."}
    (ROOT / "verification.json").write_text(json.dumps(result, indent=2, ensure_ascii=False), encoding="utf-8")
    print(json.dumps({"artifacts": artifacts, "tests": results[0]["stdout"].strip(),
                      "previous_project_preserved": all(preservation.values())}, indent=2))


if __name__ == "__main__":
    main()
