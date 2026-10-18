"""Whole-program liveness of the x86 flag bytes (register space 0x200..0x21f) and dead-op pruning.

Semantics are conservative (may-liveness):
  * an indirect jump/call, or a successor outside the exported instruction set, observes every flag;
  * a RETURN observes whatever any call return site (the instruction after a CALL/CALLIND) observes;
  * an instruction with branches inside its own P-code never kills liveness.
The per-instruction transfer function runs the same backward scan that later removes the dead
operations, so reads that only feed removed operations do not keep earlier flags alive.
"""

FLAG_LO, FLAG_HI = 0x200, 0x220
ALL_FLAGS = (1 << (FLAG_HI - FLAG_LO)) - 1
UNKNOWN_SUCCESSOR, SIMPLE, IS_RETURN = 1, 2, 4
SIDE_EFFECT = frozenset(("STORE", "CALLOTHER", "BRANCH", "CBRANCH", "CALL", "CALLIND", "BRANCHIND", "RETURN"))
BRANCHING = frozenset(("BRANCH", "CBRANCH", "CALL", "CALLIND", "BRANCHIND", "RETURN"))


def fmask(off, size):
    lo, hi = max(off, FLAG_LO), min(off + size, FLAG_HI)
    return ((1 << (hi - lo)) - 1) << (lo - FLAG_LO) if lo < hi else 0


def inside_flags(off, size):
    return FLAG_LO <= off and off + size <= FLAG_HI


def op_summary(op, slots):
    """(side_effect, flag_def, unique_def, flag_use, unique_use); unique bytes become dense per-instruction bits."""
    dest = op[1]
    fdef = udef = fuse = uuse = 0
    if dest:
        if dest[0] == "register" and inside_flags(int(dest[1], 16), dest[2]):
            fdef = fmask(int(dest[1], 16), dest[2])
        elif dest[0] == "unique":
            off = int(dest[1], 16)
            for b in range(off, off + dest[2]):
                udef |= 1 << slots.setdefault(b, len(slots))
    for node in op[2:]:
        if not node:
            continue
        if node[0] == "register":
            fuse |= fmask(int(node[1], 16), node[2])
        elif node[0] == "unique":
            off = int(node[1], 16)
            for b in range(off, off + node[2]):
                uuse |= 1 << slots.setdefault(b, len(slots))
    return op[0] in SIDE_EFFECT, fdef, udef, fuse, uuse


def scan(summaries, live_flags):
    """Backward scan; returns (flag liveness before the instruction, keep-list)."""
    lf, lu = live_flags, 0
    keep = [True] * len(summaries)
    for i in range(len(summaries) - 1, -1, -1):
        side, fdef, udef, fuse, uuse = summaries[i]
        if not side:
            if fdef:
                if not fdef & lf:
                    keep[i] = False
                    continue
                lf &= ~fdef
            elif udef:
                if not udef & lu:
                    keep[i] = False
                    continue
                lu &= ~udef
        lf |= fuse
        lu |= uuse
    return lf, keep


def analyze(raw):
    """(summaries|None, union of flag uses, successors, flags, return site) for one instruction."""
    ops, a, n = raw["p"], raw["a"], raw["n"]
    labels, intra, mid_branch = set(), False, False
    for i, op in enumerate(ops):
        name = op[0]
        if name in ("BRANCH", "CBRANCH") and op[2][0] == "const":
            intra = True
            off = int(op[2][1], 16)
            if off & (1 << 63):
                off -= 1 << 64
            labels.add(i + off)
        elif name in BRANCHING and i != len(ops) - 1:
            mid_branch = True
    simple = not intra and not mid_branch
    slots = {}
    summaries = [op_summary(op, slots) for op in ops]
    touches_flags = any(s[1] or s[3] for s in summaries)
    use = 0
    for s in summaries:
        use |= s[3]
    succ, unknown, is_return, call_site = [], False, False, False
    for op in ops:
        name = op[0]
        if name in ("CALL", "CALLIND"):
            call_site = True
        if name in ("BRANCH", "CBRANCH", "CALL") and op[2][0] == "ram":
            succ.append(int(op[2][1], 16))
        elif name in ("CALLIND", "BRANCHIND"):
            unknown = True
        elif name == "RETURN":
            is_return = True
    last = ops[-1][0] if ops else None
    terminal = last in ("BRANCH", "CALL", "CALLIND", "BRANCHIND", "RETURN") and len(ops) not in labels
    if not terminal:
        succ.append(a + n)
    flags = (UNKNOWN_SUCCESSOR if unknown else 0) | (SIMPLE if simple else 0) | (IS_RETURN if is_return else 0)
    return (summaries if touches_flags else None), use, tuple(succ), flags, (a + n if call_site else None)


def transfer(info, out):
    summaries, use, _succ, flags, _site = info
    if summaries is None:
        return out
    if not flags & SIMPLE:
        return out | use
    return scan(summaries, out)[0]


def solve(infos):
    order = sorted(infos)
    live_in = dict.fromkeys(order, 0)
    sites = [infos[a][4] for a in order if infos[a][4] is not None]
    changed, rounds, ret_live = True, 0, 0
    import time
    while changed:
        started = time.time()
        changed, rounds, updates = False, rounds + 1, 0
        new_ret = 0
        for s in sites:
            v = live_in.get(s)
            new_ret |= ALL_FLAGS if v is None else v
        if new_ret != ret_live:
            ret_live, changed = new_ret, True
        for a in reversed(order):
            info = infos[a]
            out = _out(info, live_in, ret_live)
            new = transfer(info, out)
            if new != live_in[a]:
                live_in[a] = new
                changed = True
                updates += 1
        print(f'  liveness round {rounds}: {updates} updates, {time.time() - started:.1f}s', flush=True)
    return {a: _out(infos[a], live_in, ret_live) for a in order}, rounds


def _out(info, live_in, ret_live):
    flags = info[3]
    out = ALL_FLAGS if flags & UNKNOWN_SUCCESSOR else (ret_live if flags & IS_RETURN else 0)
    for s in info[2]:
        v = live_in.get(s)
        out |= ALL_FLAGS if v is None else v
    return out


def prune(ins, live_out):
    """Drop pure operations whose flag or temporary results are never observed."""
    if not ins.ops or not (ins.flags & SIMPLE):
        return
    slots = {}
    summaries = [op_summary(op, slots) for op in ins.ops]
    _lf, keep = scan(summaries, live_out)
    if not all(keep):
        ins.ops = [op for op, k in zip(ins.ops, keep) if k]
