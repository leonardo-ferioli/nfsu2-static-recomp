"""Resolve the widescreen fix (WidescreenFixesPack, NFSUnderground2.WidescreenFix, MIT license) against this executable.

    python tools/mods/widescreen.py        ->  mods/widescreen_spec.json

The original mod patches the running game: it rewrites immediates inside code, redirects instruction operands to its own
variables and detours code ranges. A static recompilation has no code to patch at run time, so the same places are found
here, once, in the original .text and recorded as *patch points* that tools/generate_fast.py turns into generated code:
  immediates  a 32-bit immediate of an instruction becomes a run-time variable (default: the original value);
  addresses   the absolute memory operand of an instruction becomes a run-time pointer (default: the original address);
  nops        an instruction is skipped while a run-time flag is set;
  hooks       a native handler runs instead of an instruction range (mode "replace"), before an instruction ("before") or
              instead of a whole function ("function", with the bytes its `ret` pops); while no handler is installed the
              original instructions run, so the unmodified game is unchanged;
  retargets   the destination of a jump changes while a run-time flag is set;  force_jumps  a conditional jump becomes
              unconditional while a flag is set;
  data        addresses of game globals and functions the mod reads or writes at run time (plain memory; no code involved).
"""
import bisect
import gzip
import json
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import pattern as P  # noqa: E402

ROOT = Path(__file__).resolve().parents[2]


def u32_at(address):
    offset = address - P.TEXT_BASE
    return struct.unpack_from("<I", P.text(), offset)[0]


class Spec:
    def __init__(self):
        self.vars = {}
        self.immediates, self.addresses, self.nops, self.hooks, self.data = [], [], [], [], []
        self.retargets, self.force_jumps = [], []
        starts = []
        with gzip.open(ROOT / "export/instructions.jsonl.gz", "rt", encoding="utf-8") as source:
            for line in source:
                d = json.loads(line)
                starts.append((d["a"], d["n"]))
        starts.sort()
        self.starts = [a for a, _ in starts]
        self.lengths = dict(starts)

    def instruction_of(self, byte):
        i = bisect.bisect_right(self.starts, byte) - 1
        a = self.starts[i]
        if not a <= byte < a + self.lengths[a]:
            raise ValueError(f"byte {byte:#x} is not inside an exported instruction")
        return a

    def boundary(self, address):
        if address not in self.lengths:
            raise ValueError(f"{address:#x} is not an instruction start")
        return address

    def var(self, name, default):
        if name in self.vars and self.vars[name] != default:
            raise ValueError(f"variable {name} has two defaults")
        self.vars[name] = default

    def immediate(self, byte, var, note=""):
        value = u32_at(byte)
        self.var(var, value)
        self.immediates.append({"insn": self.instruction_of(byte), "byte": byte, "value": value, "var": var, "note": note})

    def address_operand(self, byte, var, note=""):
        value = u32_at(byte)
        self.var(var, value)   # the variable holds the address to use; it starts as the original one
        self.addresses.append({"insn": self.instruction_of(byte), "byte": byte, "value": value, "var": var, "note": note})

    def nop(self, instruction, flag):
        self.var(flag, 0)
        self.nops.append({"insn": self.boundary(instruction), "flag": flag})

    def hook(self, name, begin, end=None, mode="replace", pop=0):
        self.boundary(begin)
        if end is not None:
            self.boundary(end)
        self.var("hook_" + name, 0)
        self.hooks.append({"name": name, "begin": begin, "end": end, "mode": mode, "pop": pop})

    def function_hook(self, name, address, pop):
        """A native handler replaces the function at `address`; its `ret` pops `pop` bytes of arguments."""
        self.hook(name, address, None, "function", pop)
        self.data.append({"name": "fn_" + name, "address": address, "byte": address})

    def data_pointer(self, name, byte):
        self.data.append({"name": name, "address": u32_at(byte), "byte": byte})

    def named_address(self, name, address):
        self.data.append({"name": name, "address": address, "byte": address})

    def call_target(self, byte):
        """Destination of the CALL/JMP rel32 whose opcode is at `byte`."""
        if P.text()[byte - P.TEXT_BASE] not in (0xE8, 0xE9):
            raise ValueError(f"{byte:#x} is not a CALL/JMP rel32")
        rel = struct.unpack_from("<i", P.text(), byte + 1 - P.TEXT_BASE)[0]
        return byte + 5 + rel

    def _jump(self, insn):
        """(length, destination) of the jump instruction at `insn`."""
        data = P.text()
        o = insn - P.TEXT_BASE
        op = data[o]
        if 0x70 <= op <= 0x7F or op in (0xEB, 0xE3):
            return 2, insn + 2 + struct.unpack_from("<b", data, o + 1)[0]
        if op in (0xE9, 0xE8):
            return 5, insn + 5 + struct.unpack_from("<i", data, o + 1)[0]
        if op == 0x0F and 0x80 <= data[o + 1] <= 0x8F:
            return 6, insn + 6 + struct.unpack_from("<i", data, o + 2)[0]
        raise ValueError(f"{insn:#x} is not a jump")

    def force_jump(self, insn, flag):
        _, target = self._jump(self.boundary(insn))
        self.var(flag, 0)
        self.force_jumps.append({"insn": insn, "flag": flag, "target": self.boundary(target)})

    def retarget(self, insn, new_displacement, flag):
        """The 8-bit displacement of the short jump at `insn` becomes `new_displacement` while the flag is set."""
        length, old = self._jump(self.boundary(insn))
        if length != 2:
            raise ValueError("only short jumps can be retargeted by displacement")
        new = insn + 2 + new_displacement
        self.var(flag, 0)
        self.retargets.append({"insn": insn, "flag": flag, "old": old, "new": self.boundary(new)})


def core(s):
    """Game globals and the frame events (main loop, delta time, device reset, end of scene)."""
    hwnd = P.get("A1 ? ? ? ? 68 ? ? ? ? 50 FF 15", index=0)
    s.data_pointer("hwnd", hwnd + 1)
    s.data_pointer("window_rect", hwnd + 6)
    s.data_pointer("windowed_mode", P.get("A1 ? ? ? ? 33 FF 3B C7 74 ? A1", count=1) + 1)
    s.data_pointer("racing_resolution", P.get("A1 ? ? ? ? 56 8B F0 75", count=1) + 1)
    s.data_pointer("race_coordinator", P.get("A1 ? ? ? ? 3B C3 74 ? ? ? 75", count=1) + 1)
    s.data_pointer("exit_fe_options", P.get("A0 ? ? ? ? 84 C0 74 ? C6 05 ? ? ? ? ? E9", count=1) + 1)
    feng = P.get("8B 0D ? ? ? ? 3B CB 74 ? E8 ? ? ? ? 83 FF", count=1)
    s.data_pointer("feng_instance", feng + 2)
    s.named_address("fn_feng_make_dirty", s.call_target(feng + 10))
    device = P.get("A1 ? ? ? ? ? ? 83 C4 ? 50 FF 92", count=1)
    s.data_pointer("d3d_device", device + 1)
    s.hook("before_end_scene", device, mode="before")
    s.hook("delta_time", P.get("E8 ? ? ? ? 83 C4 ? E8 ? ? ? ? B9 ? ? ? ? 8B F8", count=1), mode="before")
    s.hook("before_reset", P.get("E8 ? ? ? ? A1 ? ? ? ? 85 C0 74 ? ? ? 50 FF 51", count=1), mode="before")
    s.hook("main_loop", P.get("E8 ? ? ? ? A1 ? ? ? ? A3 ? ? ? ? E8", count=1), mode="before")


def resolution(s):
    """The resolution list, the options menu entry, the label, the saved value and the window placement."""
    s.immediate(P.get("8B 0C 85 ? ? ? ? 85 C9 75 ? 85 C0", count=1) + 3, "supported_res_1", "table of supported resolutions")
    s.immediate(P.get("8B 0C 85 ? ? ? ? 85 C9 75 ? 48", count=1) + 3, "supported_res_2", "table of supported resolutions")
    s.data_pointer("options_changed", P.get("C6 05 ? ? ? ? ? ? ? FF 50", count=1) + 2)
    s.function_hook("inc_screen_res", P.get("8B 54 24 ? 81 FA ? ? ? ? A1 ? ? ? ? 56", count=1), 8)
    for pat in ("89 35 ? ? ? ? A1 ? ? ? ? 89 35", "89 35 ? ? ? ? E8 ? ? ? ? 83 C4 ? E8 ? ? ? ? A1", "89 35 ? ? ? ? E8 ? ? ? ? 81 3D"):
        s.nop(P.get(pat, count=1), "res_store_nop")
    s.function_hook("get_racing_resolution", P.get("A1 ? ? ? ? 83 F8 ? 0F 87 ? ? ? ? FF 24 85 ? ? ? ? 8B 44 24", count=1), 8)
    s.named_address("fn_set_language_hash", s.call_target(P.get("E8 ? ? ? ? A1 ? ? ? ? 83 C4 ? 83 F8 ? 77 ? FF 24 85 ? ? ? ? 8B 4E", count=1)))
    s.named_address("fn_set_string", s.call_target(P.get("E8 ? ? ? ? 5F 81 C4", count=1)))
    s.function_hook("locg_racing_resolution", P.get("56 8B F1 8B 46 ? 68 ? ? ? ? 50 E8 ? ? ? ? A1 ? ? ? ? 83 C4 ? 83 F8 ? 77", count=1), 0)
    s.hook("res_set", P.get("6A ? 68 ? ? ? ? 6A ? 6A ? 68 ? ? ? ? 52 FF D6 8B 44 24 ? 6A ? 68 ? ? ? ? 6A", count=8, index=7) + 7, mode="before")
    s.hook("res_get", P.get("8B 44 24 ? 8D 4C 24 ? 51 68 ? ? ? ? 8D 54 24 ? 52 6A ? 68 ? ? ? ? 50 89 7C 24 ? 89 7C 24 ? FF D6 8B 44 24 ? 8D 4C 24 ? 51 68 ? ? ? ? 8D 54 24 ? 52 6A ? 68 ? ? ? ? 50 89 7C 24 ? 89 7C 24 ? FF D6 8B 4C 24", count=1), mode="before")
    s.function_hook("window_placement", s.call_target(P.get("E8 ? ? ? ? C6 05 ? ? ? ? ? 39 3D", count=1)), 0)
    s.function_hook("wndproc", u32_at(P.get("C7 44 24 ? ? ? ? ? 89 74 24 ? 89 74 24 ? FF D5", count=1) + 4), 16)
    s.hook("show_cursor", P.get("B9 ? ? ? ? E8 ? ? ? ? 84 C0 75 ? A1 ? ? ? ? 85 C0 74 ? 6A", count=1), mode="before")


def system(s):
    """Frame-time constants, cutscene frame rate, the optical-drive check, the audio time step."""
    s.data_pointer("frame_time_a", P.get("D9 05 ? ? ? ? B9 64 00 00 00 D8 64", count=1) + 2)
    s.data_pointer("frame_time_b", P.get("D9 05 ? ? ? ? D8 74 ? ? D9 1D ? ? ? ? C3", count=1) + 33)
    s.data_pointer("frame_time_c", P.get("8B 44 24 14 D9 05 ? ? ? ? 8B 0D ? ? ? ? D8 44 24 14 8B 15 ? ? ? ? D9 05 ? ? ? ?", count=1) + 0x55)
    s.data_pointer("frame_time_d", P.get("8B F1 E8 ? ? ? ? 8A 86 06 05 00 00 84 C0 0F 84 ? ? ? ?", count=1) + 0x2F)
    s.immediate(P.get("68 89 88 88 3C", count=1) + 1, "frame_time_imm", "1/60 pushed as a float")
    s.force_jump(P.get("DD D8 D9 44 24 18 D9 54 24 1C D9 E1 D8 1D ? ? ? ? DF E0 F6 C4 05", count=1) + 23, "steering_fix")
    s.immediate(P.get("7C ? 68 ? ? ? ? E8 ? ? ? ? 83 C4 ? 5F 5E", count=1) + 3, "cutscene_fps_imm", "cutscene frame rate")
    s.data_pointer("cutscene_fps", P.get("8B 15 ? ? ? ? 52 A3 ? ? ? ? E8 ? ? ? ? 83 C4 14", count=1) + 2)
    optical = P.get("56 8B 35 ? ? ? ? A1 ? ? ? ? 85 C0 ? ? E8", count=1)
    s.retarget(optical + 14, 0x78, "no_optical_drive")
    s.retarget(optical + 35, 0x00, "no_optical_drive")
    s.function_hook("sound_update", s.call_target(P.get("E8 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? 89 1D", count=1)), 4)
    s.function_hook("nos_trail", s.call_target(P.get("E8 ? ? ? ? 8B 15 ? ? ? ? 8B 47", count=1)), 0)


def input_and_camera(s):
    """Look-around camera, gamepad texts and dead zones, mouse and keyboard state."""
    look = P.get("E8 ? ? ? ? 8B 4E ? 8D 84 24 ? ? ? ? 50 51", count=1)
    s.hook("camera_look_at", look, look + 5)
    s.named_address("fn_camera_look_at", s.call_target(look))
    s.hook("camera_data", P.get("8B 5E ? 83 FB ? 74", count=1), mode="before")
    states = P.find_all("83 3D ? ? ? ? 06 ? ? A1")
    values = {u32_at(a + 2) for a in states}
    if len(values) != 1:
        raise ValueError("the game-state pattern refers to different globals")
    s.named_address("game_state", values.pop())
    pad = P.get("B9 ? ? ? ? BE ? ? ? ? F3 A5 5F 5E 5B C3", count=1)
    s.hook("catch_pad", pad, pad + 5)
    text = P.get("8B 0D ? ? ? ? 85 C9 50 74 12 8B 44", count=1)
    s.data_pointer("menu_text_global", text + 2)
    s.hook("menu_text", text, text + 6)
    remap = P.get("89 4E ? 89 4E ? 8B E8", count=1)
    if P.text()[remap - P.TEXT_BASE + 2] != 0x08 or P.text()[remap - P.TEXT_BASE + 5] != 0x0C:
        raise ValueError("the front-end remap stores are not [esi+8] and [esi+0Ch]")
    s.hook("fe_remap", remap, remap + 6)
    buttons = P.get("66 83 7C 24 08 00 5F 74 13 8D 4C 24 04 51", count=1)
    s.hook("buttons", buttons, buttons + 9)
    s.named_address("buttons_empty", buttons + 28)
    s.data_pointer("joy_state_base", P.get("8D 95 ? ? ? ? 8D 3C 28 8B", count=1) + 2)
    s.hook("joy_state", P.get("8B F0 85 F6 7D ? 53 68 ? ? ? ? E8 ? ? ? ? 83 C4 ? 81 FE", count=1), mode="before")
    s.hook("mouse_state", P.get("E8 ? ? ? ? 8B 54 24 ? 8A 4E", count=1), mode="before")
    s.hook("keyboard_state", P.get("85 C0 7D ? 3D ? ? ? ? 74 ? 3D ? ? ? ? 0F 85 ? ? ? ? A1 ? ? ? ? ? ? 50 FF 52 ? 5F 5E 5D 5B 8B E5 5D C3 A0", count=1), mode="before")
    s.function_hook("cursor_function", P.get("55 8B EC 83 E4 ? 81 EC ? ? ? ? A1 ? ? ? ? 53 8B 5D ? 56 57", count=1), 0)


def frontend_scale(s):
    """Front-end and video scaling (FEScale / FMVScale / AutoFit)."""
    s.named_address("fn_set_render_target", s.call_target(P.get("E8 ? ? ? ? 83 C4 ? E8 ? ? ? ? 84 C0 75 ? BE", count=1)))
    s.hook("movie_start", P.get("C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? E8 ? ? ? ? 68 ? ? ? ? E8", count=1), mode="before")
    s.hook("movie_end_1", P.get("E8 ? ? ? ? A1 ? ? ? ? 85 C0 C7 05 ? ? ? ? ? ? ? ? 8B E8", count=1), mode="before")
    s.hook("movie_end_2", P.get("E8 ? ? ? ? A1 ? ? ? ? 85 C0 C7 05 ? ? ? ? ? ? ? ? 8B D8", count=1), mode="before")
    transform = P.get("E8 ? ? ? ? A1 ? ? ? ? ? ? 83 C4 ? 6A ? 6A ? 50 FF 91", count=1)
    s.hook("set_transform", transform, transform + 5)
    s.named_address("fn_set_transform", s.call_target(transform))
    crash = P.get("A1 ? ? ? ? 8A 48 ? 84 C9 DE F9", count=1)
    s.hook("movie_crash_fix", crash + 5, mode="before")
    s.named_address("movie_crash_resume", crash + 14)


def build():
    s = Spec()

    core(s)
    resolution(s)
    system(s)
    input_and_camera(s)
    frontend_scale(s)

    # ---- FOV --------------------------------------------------------------------------------------------------------------------
    fov = P.get("DB 40 18 C7 44 24 20 00 00 80 3F DA 70 14", count=1)
    s.hook("fov", fov - 3, fov + 3)                              # MOV EAX,[EBP+58h]; FILD [EAX+18h]
    s.nop(fov + 11, "fov_fix")                                   # the FIDIV that followed
    s.address_operand(P.get("D8 3D ? ? ? ? D9 5C 24 1C DB 44 24 2C D8 4C 24 28 D8 0D ? ? ? ? E8", count=1) + 2, "fov_ptr1")
    s.address_operand(P.get("D8 0D ? ? ? ? E8 ? ? ? ? 8B D8 53", count=2, index=1) + 2, "fov_ptr2")
    s.address_operand(P.get("D8 3D ? ? ? ? D9 5C 24 38 D9 44 24 24 D8 64 24 30 D8 7C 24 24 D9 5C 24 34", count=1) + 2, "fov_ptr3")

    # ---- rain droplets ------------------------------------------------------------------------------------------------------------
    rain = P.get("D9 44 24 0C D8 44 24 10 8B 44 24 08 8B 54 24 10 8B C8")
    s.hook("rain_x", rain, rain + 8)
    s.hook("rain_y", rain + 30, rain + 30 + 8)

    # ---- HUD ------------------------------------------------------------------------------------------------------------------------
    for i, (pat, off) in enumerate([
        ("C7 84 24 A0 00 00 00 00 00 A0 43 C7 84 24 A4 00 00 00 00 00 70 43 C7 84 24 A8 00 00 00 00 00 00 00 0F B7 48 20", 7),
        ("C7 44 24 74 00 00 A0 43 C7 44 24 78 00 00 70 43 C7 44 24 7C 00 00 00 00 E8 ? ? ? ? 8D 4C 24 70", 4),
        ("C7 84 24 84 00 00 00 00 00 A0 43 C7 84 24 88 00 00 00 00 00 70 43 C7 84 24 8C 00 00 00 00 00 00 00 E8 ? ? ? ? 8D 8C 24 80 00 00 00", 7),
        ("C7 84 24 94 00 00 00 00 00 A0 43 C7 84 24 98 00 00 00 00 00 70 43 C7 84 24 9C 00 00 00 00 00 00 00 E8 ? ? ? ? 8D 8C 24 90 00 00 00", 7),
        ("C7 44 24 74 00 00 A0 43 C7 44 24 78 00 00 70 43 C7 44 24 7C 00 00 00 00 E8 ? ? ? ? 8D 54 24 70 52", 4),
        ("C7 05 ? ? ? ? 00 00 A0 43 C7 05 ? ? ? ? 00 00 00 00 C7 05 ? ? ? ? 00 00 00 00 C6 05 ? ? ? ? 82", 6),
        ("C7 84 24 A0 01 00 00 00 00 A0 43 C7 84 24 A4 01 00 00 00 00 70 43 C7 84 24 A8 01 00 00 00 00 00 00 E8 ? ? ? ? 8D 8C 24 30 01 00 00 51 8B F0", 7),
    ]):
        s.immediate(P.get(pat, count=1) + off, "hud_pos_x", f"HUD x origin 320.0 #{i}")
    s.data_pointer("hud_scale_x", P.get("D9 05 ? ? ? ? 89 7C 24 28 C7 44 24 2C 00 00 00 3F D8 C9 C7 44 24 30 00 00 00 3F", count=1) + 2)
    s.data_pointer("hud_pos_x_global", P.get("D8 25 ? ? ? ? 8B 4C 24 28 6A 00 8D 54 24 48 D9 5C 24 48 89 4C 24 50 D9 44 24 28 8B 0B", count=1) + 2)
    s.data_pointer("hud_pos_x2_global", P.get("D8 0D ? ? ? ? D9 5C 24 ? D9 44 24 ? D8 74 24", count=1) + 2)
    mirror = P.get("C7 44 24 ? ? ? ? ? C7 44 24 ? ? ? ? ? C7 44 24 ? ? ? ? ? C7 44 24 ? ? ? ? ? C7 44 24 ? ? ? ? ? C7 44 24 ? ? ? ? ? 33 D2")
    for var, off in (("mirror_left_x1", 4), ("mirror_left_x2", 20), ("mirror_right_x1", -12), ("mirror_right_x2", 36)):
        s.immediate(mirror + off, var, "rear-view mirror")
    borders = P.get("C7 44 24 ? ? ? ? ? C7 44 24 ? ? ? ? ? C7 44 24 ? ? ? ? ? C7 44 24 ? ? ? ? ? C7 44 24 ? ? ? ? ? C7 44 24 ? ? ? ? ? C7 44 24 ? ? ? ? ? C7 44 24 ? ? ? ? ? E8 ? ? ? ? 83 C4 ? 5F")
    s.immediate(borders + 4, "cutscene_border_1")
    s.immediate(borders + 20, "cutscene_border_2")
    borders2 = P.get("C7 44 24 ? ? ? ? ? C7 44 24 ? ? ? ? ? C7 44 24 ? ? ? ? ? C7 44 24 ? ? ? ? ? C7 44 24 ? ? ? ? ? C7 44 24 ? ? ? ? ? C7 44 24 ? ? ? ? ? E8 ? ? ? ? BA")
    s.immediate(borders2 + 4, "cutscene_border_3")
    s.immediate(borders2 + 28, "cutscene_border_4")
    radar = P.get("C7 44 24 ? ? ? ? ? C7 44 24 ? ? ? ? ? C7 44 24 ? ? ? ? ? C7 44 24 ? ? ? ? ? C7 44 24 ? ? ? ? ? C7 44 24 ? ? ? ? ? 7D")
    for var, off in (("radar_width_1", 4), ("radar_width_2", 20), ("radar_height_1", 28), ("radar_height_2", 44)):
        s.immediate(radar + off, var, "radar mask")
    s.data_pointer("dyno_offset", P.get("6A ? 68 ? ? ? ? 68 ? ? ? ? 8B C8 E8 ? ? ? ? EB ? 33 C0 8B CF", count=1) + 8)
    s.address_operand(P.get("DA 0D ? ? ? ? 55 56 8B F0 A1 ? ? ? ? 99", count=1) + 2, "screenshot_width_ptr", "screenshot aspect")

    s.hook("hud", P.get("89 4C 24 60 89 54 24 64 74 ? 8D 8C 24 F0 00 00 00 51", count=1), P.get("89 4C 24 60 89 54 24 64 74 ? 8D 8C 24 F0 00 00 00 51", count=1) + 8)
    blips = P.get("8B 4B 1C 8B 54 24 18 89 0A 8B 43 20", count=1)
    s.hook("blips", blips + 7, blips + 12)
    hud2 = P.get("D9 56 48 8B 4E 1C D8 2D ? ? ? ? 89 4C 24 28 8B 56 20 89 54 24 2C 8B 46 24", count=1)
    s.hook("hud2", hud2, hud2 + 6)
    stop = P.get("D8 02 D9 1E D9 41 04 D8 60 04 D8 4C 24 10 D8 42 04 D8 40 04 D9 5E 04 D9 41 08 D8 60 08", count=1)
    s.hook("stop_sign", stop, stop + 7)

    # ---- full-motion video: the four corners of the video quad -------------------------------------------------------------------
    fmv = P.get("68 00 00 00 3F 68 00 00 00 3F 68 00 00 00 BF 68 00 00 00 BF 8B CB E8 ? ? ? ? 8B 44 24 18 8B CB", count=1) + 1
    for i, var in enumerate(("fmv_bottom", "fmv_right", "fmv_top", "fmv_left")):
        s.immediate(fmv + 5 * i, var, "video quad")

    # ---- intro videos ------------------------------------------------------------------------------------------------------------------
    intro = "8B F1 50 89 74 24 08 E8 ? ? ? ? 8B 46 04 68 ? ? ? ? 68 ? ? ? ? 50"
    for i, byte in enumerate((P.get(intro, count=3, index=0) + 16, P.get(intro, count=3, index=1) + 16,
                              P.get("56 57 8B F1 50 89 74 24 0C E8 ? ? ? ? 68 ? ? ? ? 33 C0", count=1) + 15,
                              P.get("C7 06 ? ? ? ? E8 ? ? ? ? 8B 46 04 68 ? ? ? ? 68 ? ? ? ? 50", count=1) + 15)):
        s.immediate(byte, f"skip_intro_string_{i}", f"intro video name #{i}")
    return s


def main():
    s = build()
    spec = {"vars": [{"name": k, "default": v} for k, v in s.vars.items()], "immediates": s.immediates, "addresses": s.addresses,
            "nops": s.nops, "hooks": s.hooks, "data": s.data, "retargets": s.retargets, "force_jumps": s.force_jumps}
    out = ROOT / "mods/widescreen_spec.json"
    out.parent.mkdir(exist_ok=True)
    out.write_text(json.dumps(spec, indent=1) + "\n")
    print(f"{len(s.vars)} variables, {len(s.immediates)} immediates, {len(s.addresses)} operand addresses, {len(s.nops)} nops, "
          f"{len(s.hooks)} hooks, {len(s.retargets)} retargets, {len(s.force_jumps)} forced jumps, {len(s.data)} data pointers -> {out}")


if __name__ == "__main__":
    main()
