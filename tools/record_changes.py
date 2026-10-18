"""Inventory files written during the playable-runtime task without a Git baseline."""
from pathlib import Path
from datetime import datetime, timezone
import hashlib
import json

ROOT = Path(__file__).resolve().parents[1]
plan = ROOT.parent / "docs/superpowers/plans/2026-10-16-playable-static.md"
start = getattr(plan.stat(), "st_birthtime", plan.stat().st_mtime)
exclude = {"build", "build32", "analysis", "classes", "__pycache__"}
inventory = []
for path in sorted(ROOT.rglob("*")):
    relative = path.relative_to(ROOT)
    if not path.is_file() or any(part in exclude for part in relative.parts):
        continue
    if path.name == "current_task_changes.json" or path.stat().st_mtime < start:
        continue
    if relative.parts[0] == "tools" and path.suffix in (".exe", ".obj", ".o", ".pdb"):
        continue
    if relative.parts[0] == "generated":
        purpose = "Generated static translation or image metadata"
    elif relative.parts[0] == "export":
        purpose = "Original binary analysis export / runtime data identity"
    elif relative.parts[0] == "logs":
        purpose = "Build, test, reversing or execution evidence"
    elif relative.parts[0] == "tools":
        purpose = "Reproducible analysis, generation, build or verification tooling"
    else:
        purpose = "Runtime, tests, build configuration or documentation"
    with path.open("rb") as stream:
        identity = hashlib.file_digest(stream, "sha256").hexdigest()
    inventory.append(dict(file=str(relative).replace("\\", "/"), bytes=path.stat().st_size,
                          sha256=identity, purpose=purpose))
result = dict(recorded_utc=datetime.now(timezone.utc).isoformat(),
    baseline_utc=datetime.fromtimestamp(start, timezone.utc).isoformat(),
    method="Files with modification times since plan creation; no Git/content baseline exists. A write can preserve content, and this inventory does not claim a byte-level diff against prior raw_recomp work.",
    protected_legacy="See verification.json previous_project_preserved hashes.", files=inventory)
(ROOT / "current_task_changes.json").write_text(json.dumps(result, indent=2) + "\n")
print(f"Recorded {len(inventory)} files written since the playable-runtime plan was created")
