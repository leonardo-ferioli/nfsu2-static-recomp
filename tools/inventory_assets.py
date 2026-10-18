"""Inventory local resources without claiming that the game loaded them."""
from pathlib import Path
from datetime import datetime, timezone
import collections
import json

ROOT = Path(__file__).resolve().parents[1]
assets = ROOT.parent / "data game (pc)"
groups = []
for directory in sorted(p for p in assets.iterdir() if p.is_dir()):
    files = [p for p in directory.rglob("*") if p.is_file()]
    groups.append(dict(directory=directory.name, files=len(files), bytes=sum(p.stat().st_size for p in files),
                       extensions=dict(collections.Counter(p.suffix.lower() for p in files))))
cars = []
for directory in sorted(p for p in (assets / "CARS").iterdir() if p.is_dir()):
    files = [p for p in directory.rglob("*") if p.is_file()]
    cars.append(dict(directory=directory.name,
        files=[dict(path=str(p.relative_to(directory)).replace("\\", "/"), bytes=p.stat().st_size) for p in files],
        classification="UNCLASSIFIED: may be a vehicle or shared part resource",
        runtime_load_validated=False))
result = dict(recorded_utc=datetime.now(timezone.utc).isoformat(),
    asset_root=str(assets), groups=groups, car_resource_directories=cars,
    limit="File presence is not proof of loading, rendering, playable vehicle support, physics or audible sound.")
(ROOT / "asset_inventory.json").write_text(json.dumps(result, indent=2) + "\n")
print(f"Inventoried {sum(g['files'] for g in groups)} files; {len(cars)} CARS resource directories (includes shared parts)")
