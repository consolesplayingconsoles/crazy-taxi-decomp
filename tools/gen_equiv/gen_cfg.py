"""Control-flow facts about one SH-4 function, for the structured C writer in gen_core.

A node is the index of an instruction in the function's list. A branch and its delay slot are one node (the slot is
never a node of its own); the virtual node EXIT stands for every return and tail call. Only nodes reachable from the
entry exist, so literal pools and padding inside the function body never appear.
"""
import re

EXIT = -1


def target_of(ops):
    m = re.search(r'0x([0-9a-f]{8})', ops)
    return int(m.group(1), 16) if m else None


def succ_of(ins, addr2idx, i):
    """Successor nodes of node i (EXIT for a return or a jump out of the function)."""
    mn, ops, pc = ins[i]
    out = []
    if mn in ('bt', 'bf', 'bt/s', 'bf/s'):
        t = target_of(ops)
        out.append(addr2idx.get(t, EXIT))
        out.append(i + (2 if mn.endswith('/s') else 1))
    elif mn == 'bra':
        out.append(addr2idx.get(target_of(ops), EXIT))
    elif mn in ('rts', 'jmp', 'braf', 'rte'):
        out.append(EXIT)
    elif mn in ('jsr', 'bsr', 'bsrf'):
        out.append(i + 2)
    else:
        out.append(i + 1)
    return [EXIT if s >= len(ins) else s for s in out]


class Graph:
    def __init__(s, ins, addr2idx):
        s.ins = ins
        s.succ = {}
        todo = [0]
        while todo:
            n = todo.pop()
            if n in s.succ or n == EXIT:
                continue
            s.succ[n] = succ_of(ins, addr2idx, n)
            todo.extend(s.succ[n])
        s.nodes = sorted(s.succ)
        s.pred = {n: [] for n in s.nodes}
        for n, ss in s.succ.items():
            for t in ss:
                if t != EXIT:
                    s.pred[t].append(n)
        s._dom()
        s._pdom()
        s._loops()

    def _dom(s):
        allset = set(s.nodes)
        s.dom = {n: set(allset) for n in s.nodes}
        s.dom[0] = {0}
        ch = True
        while ch:
            ch = False
            for n in s.nodes:
                if n == 0:
                    continue
                ps = [s.dom[p] for p in s.pred[n]]
                new = {n} | (set.intersection(*ps) if ps else set())
                if new != s.dom[n]:
                    s.dom[n] = new
                    ch = True

    def _pdom(s):
        allset = set(s.nodes) | {EXIT}
        s.pdom = {n: set(allset) for n in s.nodes}
        s.pdom[EXIT] = {EXIT}
        ch = True
        while ch:
            ch = False
            for n in s.nodes:
                ps = [s.pdom[t] for t in s.succ[n]]
                new = {n} | set.intersection(*ps)
                if new != s.pdom[n]:
                    s.pdom[n] = new
                    ch = True

    def ipdom(s, n):
        """The nearest node every path from n to the end goes through (EXIT if none before it)."""
        strict = s.pdom[n] - {n}
        for d in strict:
            if len(s.pdom[d]) == len(strict):
                return d
        return EXIT

    def _loops(s):
        s.loops = {}                       # header -> set of nodes of the natural loop
        for n in s.nodes:
            for t in s.succ[n]:
                if t != EXIT and t in s.dom[n]:           # back edge n -> t
                    body = s.loops.setdefault(t, {t})
                    stack = [n]
                    while stack:
                        x = stack.pop()
                        if x not in body:
                            body.add(x)
                            stack.extend(s.pred[x])

    def loop_exits(s, h):
        """Nodes outside loop h that the loop jumps to."""
        body = s.loops[h]
        return sorted({t for n in body for t in s.succ[n] if t != EXIT and t not in body})

    def innermost(s, n):
        """Header of the smallest loop holding node n, or None."""
        best = None
        for h, body in s.loops.items():
            if n in body and (best is None or len(body) < len(s.loops[best])):
                best = h
        return best

    def reach(s, n):
        """Every node reachable from n (n included)."""
        seen = set()
        todo = [n]
        while todo:
            x = todo.pop()
            if x in seen or x == EXIT:
                continue
            seen.add(x)
            todo.extend(s.succ[x])
        return seen

    def loop_exit(s, h):
        """(main exit, other exits) of loop h. The main exit is the one no other exit leads to; the others are left by
        returning (their code runs inline in the loop). None for the main exit when the loop only ever returns."""
        xs = s.loop_exits(h)
        body = s.loops[h]
        if not xs:
            if not any(EXIT in s.succ[n] for n in body):
                return None, None                       # never leaves: not a function that returns
            return None, []
        main = [x for x in xs if not any(y != x and x in s.reach(y) for y in xs)]
        if not main:
            return None, None
        main = main[0]
        others = [x for x in xs if x != main]
        if any(main in s.reach(x) for x in others):
            return None, None
        return main, others
