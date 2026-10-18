"""Run only the rebuilt executable and retain artifact-linked boot evidence."""
from pathlib import Path
from datetime import datetime, timezone
import argparse
import hashlib
import json
import shutil
import sys
import math
from boot_guard import launch, monitor, trace_identity

ROOT = Path(__file__).resolve().parents[1]
parser = argparse.ArgumentParser()
parser.add_argument("--budget", type=int, default=10000000000)
parser.add_argument("--build-dir", type=Path, default=ROOT / "build32")
parser.add_argument("--seconds", type=float, default=30,
                    help="Wall-clock limit for this diagnostic run (default: 30 seconds)")
parser.add_argument("--trace-mib", type=float, default=16,
                    help="Stop if the current trace exceeds this size (default: 16 MiB)")
args = parser.parse_args()
if not math.isfinite(args.seconds) or args.seconds <= 0 or not math.isfinite(args.trace_mib) or args.trace_mib <= 0:
    parser.error("--seconds and --trace-mib must be positive and finite")
exe = args.build_dir.resolve() / "speed_raw.exe"
def digest(path):
    with path.open("rb") as stream:
        return hashlib.file_digest(stream, "sha256").hexdigest()
now = datetime.now(timezone.utc)
manifest = json.loads((ROOT / "export/manifest.json").read_text())
record = dict(started_utc=now.isoformat(), executable=str(exe), executable_sha256=digest(exe),
              input_sha256=manifest["input_sha256"], translated_instructions=manifest["instruction_count"],
              budget=args.budget)
command = [str(exe), "--boot", str(ROOT / "export"), str(ROOT.parent / "data game (pc)"), str(args.budget)]
record["command"] = command
record["status"] = "starting"
record["wall_time_limit_seconds"] = args.seconds
record["trace_limit_bytes"] = int(args.trace_mib * 1024 * 1024)
record["priority"] = "BELOW_NORMAL_PRIORITY_CLASS" if sys.platform == "win32" else "default"
(ROOT / "boot_current.json").write_text(json.dumps(record, indent=2) + "\n")
trace = ROOT / "logs/boot_trace.log"
previous_trace = trace_identity(trace)
process = launch(command)
record["pid"] = process.pid
record["status"] = "running"
(ROOT / "boot_current.json").write_text(json.dumps(record, indent=2) + "\n")
result = monitor(process, timeout_seconds=args.seconds, trace_path=trace,
                 max_trace_bytes=record["trace_limit_bytes"], previous_trace=previous_trace)
print(result.output, end="", flush=True)
record["exit_code"] = result.exit_code
record["guard_stop_reason"] = result.reason
record["elapsed_seconds"] = result.elapsed_seconds
record["status"] = "finished"
record["ended_utc"] = datetime.now(timezone.utc).isoformat()
record["output"] = result.output
if trace.exists() and trace_identity(trace) != previous_trace:
    archive = ROOT / "logs" / ("boot_" + now.strftime("%Y%m%dT%H%M%S%fZ") + ".log")
    shutil.copyfile(trace, archive)
    record["trace"] = str(archive.relative_to(ROOT)).replace("\\", "/")
    record["trace_sha256"] = digest(archive)
    with archive.open(encoding="utf-8", errors="replace") as stream:
        record["stops"] = [line.strip() for line in stream if "STOP " in line or " FAULT " in line]
with (ROOT / "boot_attempts.jsonl").open("a", encoding="utf-8") as stream:
    stream.write(json.dumps(record) + "\n")
(ROOT / "boot_current.json").write_text(json.dumps(record, indent=2) + "\n")
print("Boot evidence recorded:", record.get("trace", "no trace"), flush=True)
sys.exit(124 if result.reason else record["exit_code"])
