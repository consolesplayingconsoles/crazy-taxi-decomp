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


def succ_of(ins, addr2idx, i, switches=None):
    """Successor nodes of node i (EXIT for a return or a jump out of the function)."""
    mn, ops, pc = ins[i]
    out = []
    if mn in ('bt', 'bf', 'bt/s', 'bf/s'):
        t = target_of(ops)
        out.append(addr2idx.get(t, EXIT))
        out.append(i + (2 if mn.endswith('/s') else 1))
    elif mn == 'bra':
        out.append(addr2idx.get(target_of(ops), EXIT))
    elif mn in ('braf', 'jmp') and switches and i in switches:
        out.extend(switches[i])           # a jump table: its distinct targets
    elif mn in ('rts', 'jmp', 'braf', 'rte'):
        out.append(EXIT)
    elif mn in ('jsr', 'bsr', 'bsrf'):
        out.append(i + 2)
    else:
        out.append(i + 1)
    return [EXIT if s >= len(ins) else s for s in out]


class Graph:
    def __init__(s, ins, addr2idx, switches=None):
        s.ins = ins
        s.succ = {}
        todo = [0]
        while todo:
            n = todo.pop()
            if n in s.succ or n == EXIT:
                continue
            s.succ[n] = succ_of(ins, addr2idx, n, switches)
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

    def ijoin(s, n):
        """Where the arms of the branch at n meet: the immediate post-dominator; when a path returns early and no node is on every path,
        the one node both arms can reach that none of the other common nodes comes before (the arms that return early just end)."""
        d = s.ipdom(n)
        if d != EXIT:
            return d
        cache = s.__dict__.setdefault('_ijoin', {})
        if n in cache:
            return cache[n]
        ss = [t for t in s.succ[n] if t != EXIT]
        res = EXIT
        if len(ss) == 2:
            common = (s.reach(ss[0]) & s.reach(ss[1])) - {n}
            if common:
                # the minimal elements: common nodes that no other common node reaches
                firsts = [x for x in common if not any(y != x and x in s.reach(y) and y not in s.reach(x) for y in common)]
                if len(firsts) == 1:
                    res = firsts[0]
        cache[n] = res
        return res

    def ijoin_in(s, n, body):
        """Inside a loop: the one node of the loop body that both arms of the branch at n reach and that no other such node comes
        before (EXIT when there is none, or more than one). Used when the real join lies outside the loop (the arms leave it)."""
        ss = [t for t in s.succ[n] if t != EXIT]
        if len(ss) != 2:
            return EXIT
        common = (s.reach(ss[0]) & s.reach(ss[1]) & body) - {n}
        if not common:
            return EXIT
        firsts = [x for x in common if not any(y != x and x in s.reach(y) and y not in s.reach(x) for y in common)]
        return firsts[0] if len(firsts) == 1 else EXIT

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
        # irreducible flow: a retreating edge n -> t (t is on the depth-first path to n) whose target does not dominate n. The cycle is
        # entered at more than one node; t is taken as its header. A path that enters the cycle partway runs those nodes once as plain
        # code (a peeled pass) and reaches the loop at t, which is the same behaviour.
        state = {}
        order = []
        def dfs(root):
            stack = [(root, iter(s.succ[root]))]
            state[root] = 1
            while stack:
                n, it = stack[-1]
                for t in it:
                    if t == EXIT:
                        continue
                    if state.get(t) == 1 and t not in s.dom[n]:
                        order.append((n, t))
                    elif t not in state:
                        state[t] = 1
                        stack.append((t, iter(s.succ[t])))
                        break
                else:
                    state[n] = 2
                    stack.pop()
        if s.nodes:
            dfs(0)
        for n, t in order:
            fwd = s.reach(t)
            body = s.loops.setdefault(t, {t})
            stack = [n]
            while stack:
                x = stack.pop()
                if x in body or x not in fwd:
                    continue
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

    def reach_cut(s, n, cut):
        """reach(n) without following any edge into a node of cut (the node itself is still reached from n only when n is it)."""
        seen = set()
        todo = [n]
        while todo:
            x = todo.pop()
            if x in seen or x == EXIT:
                continue
            seen.add(x)
            todo.extend(t for t in s.succ[x] if t not in cut)
        return seen

    def never_leaves(s, h):
        """True when loop h has no exit and no return inside it: it runs for ever (a main loop, an error hang)."""
        return not s.loop_exits(h) and not any(EXIT in s.succ[n] for n in s.loops[h])

    def loop_exit(s, h):
        """(main exit, other exits) of loop h. The main exit is the one no other exit leads to; the others are left by
        returning (their code runs inline in the loop). None for the main exit when the loop only ever returns."""
        xs = s.loop_exits(h)
        body = s.loops[h]
        if not xs:
            if not any(EXIT in s.succ[n] for n in body):
                return None, None                       # never leaves: not a function that returns
            return None, []
        cut = {H for H, b in s.loops.items() if H != h and h in b}        # an enclosing loop's header: going round it is not part of leaving this loop
        r = lambda n: s.reach_cut(n, cut)
        main = [x for x in xs if not any(y != x and x in r(y) for y in xs)]
        if not main:
            return None, None
        main = main[0]
        others = [x for x in xs if x != main]
        if any(main in r(x) for x in others):
            return None, None
        return main, others
