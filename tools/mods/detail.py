"""Patch points of the optional detail settings ([detail] in launcher.ini) against this executable.

    python tools/mods/detail.py        ->  mods/detail_spec.json

What the game does (SPEED2.EXE v1.2, ScenerySection_AddInstance and the car renderer; the addresses agree with the notes of the
NFSU2 ForceLOD 2 plugin by HellRaven-Mods, which is a separate, unlicensed project: nothing of its code is used here):
  * a scenery instance in the main view is dropped when it covers fewer than 17 pixels (`cmp eax,0x11`);
  * its detailed model (LOD A) is drawn only when it is loaded and its pixel size divided by the model's own size reaches 4.0
    (a float of .rdata read only there), else the coarse model (LOD B): distant scenery switches to the detailed model late;
  * cars and tyres pick their LOD unless the engine's debug overrides (two ints, -1 = off) name one: 0 forces LOD A.
The patch points below let the launcher change those numbers; with the defaults the game is unchanged.
"""
import json
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import pattern as P  # noqa: E402
from widescreen import Spec, u32_at, ROOT  # noqa: E402


def build():
    s = Spec()
    # ---- scenery LOD (ScenerySection_AddInstance) -------------------------------------------------------------------------------
    # 5d6694  cmp eax,11h ; jl cull ; mov eax,[edi+30h] ; fld [zero]   (main views: the pixel limit, then the LOD A test)
    cull = P.get("83 F8 11 0F 8C ? ? ? ? 8B 47 30 D9 05", count=1)
    s.var("world_min_pixels", 0x11)
    s.immediates.append({"insn": s.instruction_of(cull), "byte": cull + 2, "value": 0x11, "var": "world_min_pixels",
                         "note": "scenery: fewer pixels than this are not drawn (main views)"})
    # 5d66f2  fidivr dword [esp+0Ch] ; fcomp dword [ratio] ; fnstsw ax ; test ah,1   (pixels / model size must reach the ratio)
    ratio = P.get("DA 7C 24 0C D8 1D ? ? ? ? DF E0 F6 C4 01", count=1) + 6
    s.data_pointer("lod_a_ratio", ratio)
    # ---- cars and tyres: the engine's LOD overrides (-1 = automatic) ----------------------------------------------------------
    # 616795  mov eax,[body] ; cmp eax,-1 ; jz ; mov ecx,eax ; mov [esp+0B8h],ecx ; mov eax,[tyre] ; cmp eax,-1 ; jz
    car = P.get("A1 ? ? ? ? 83 F8 FF 74 09 8B C8 89 8C 24 ? ? ? ? A1 ? ? ? ? 83 F8 FF", count=1)
    s.data_pointer("force_car_lod", car + 1)
    s.data_pointer("force_tire_lod", car + 20)
    return s


def main():
    s = build()
    spec = {"vars": [{"name": k, "default": v} for k, v in s.vars.items()], "immediates": s.immediates, "addresses": s.addresses,
            "nops": s.nops, "hooks": s.hooks, "data": s.data, "retargets": s.retargets, "force_jumps": s.force_jumps}
    out = ROOT / "mods/detail_spec.json"
    out.write_text(json.dumps(spec, indent=1) + "\n")
    print(f"{len(s.immediates)} immediates, {len(s.data)} data addresses -> {out}: " + ", ".join(f"{d['name']}={d['address']:#x}" for d in s.data))


if __name__ == "__main__":
    main()
