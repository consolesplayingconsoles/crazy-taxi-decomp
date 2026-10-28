"""Control-flow facts about one SH-4 function, for the structured C writer in gen_core.

A node is the index of an instruction in the function's list. A branch and its delay slot are one node (the slot is
never a node of its own); the virtual node EXIT stands for every return and tail call. Only nodes reachable from the
entry exist, so literal pools and padding inside the function body never appear.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '../..')))
import toolpath  # noqa: E402,F401
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


def _idom(nodes, root, succ, pred):
    """Immediate dominators of the nodes reachable from root (Cooper, Harvey, Kennedy, "A Simple, Fast Dominance Algorithm"): {node:
    idom}, root's own None. The set equations it replaces held every node's whole dominator set: playerControl (Virtua Tennis, 21 KB,
    about 10,000 nodes) never finished them in 5 minutes."""
    order, seen, stack = [], {root}, [(root, iter(succ.get(root, ())))]
    while stack:                                  # postorder, iteratively (a deep function overflows recursion)
        n, it = stack[-1]
        for t in it:
            if t not in seen and t in succ:
                seen.add(t)
                stack.append((t, iter(succ[t])))
                break
        else:
            order.append(n)
            stack.pop()
    po = {n: i for i, n in enumerate(order)}
    idom = {root: root}
    rpo = order[::-1]
    ch = True
    while ch:
        ch = False
        for n in rpo:
            if n == root:
                continue
            new = None
            for p in pred.get(n, ()):
                if p not in idom:
                    continue
                if new is None:
                    new = p
                    continue
                a, b = p, new
                while a != b:
                    while po[a] < po[b]:
                        a = idom[a]
                    while po[b] < po[a]:
                        b = idom[b]
                new = a
            if new is not None and idom.get(n) != new:
                idom[n] = new
                ch = True
    idom[root] = None
    return idom


class _Tree:
    """dom[n] as a set-like view: `d in dom[n]` when d dominates n (n itself included), from preorder intervals of the dominator tree."""
    def __init__(s, idom, root):
        kids = {}
        for n, d in idom.items():
            if d is not None:
                kids.setdefault(d, []).append(n)
        s.lo, s.hi, k, stack = {}, {}, 0, [(root, False)]
        while stack:
            n, done = stack.pop()
            if done:
                s.hi[n] = k
                continue
            s.lo[n] = k; k += 1
            stack.append((n, True))
            stack.extend((c, False) for c in kids.get(n, ()))

    def __getitem__(s, n):
        return _Doms(s, n)


class _Doms:
    def __init__(s, tree, n):
        s.t, s.n = tree, n

    def __contains__(s, d):
        t = s.t
        return d in t.lo and s.n in t.lo and t.lo[d] <= t.lo[s.n] < t.hi[d]


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
        s.idom = _idom(s.nodes, 0, s.succ, s.pred)
        s.dom = _Tree(s.idom, 0)

    def _pdom(s):
        """Post-dominators: dominators of the reversed graph from EXIT. A node that never reaches EXIT (a loop that never ends) has none;
        its successors count for nothing in another node's post-dominators, as with the set equations this replaces."""
        rpred = {n: list(s.succ[n]) for n in s.nodes}
        rsucc = {EXIT: []}
        for n in s.nodes:
            rsucc.setdefault(n, [])
        for n in s.nodes:
            for t in s.succ[n]:
                rsucc[t].append(n)
        rpred[EXIT] = []
        s.ipd = _idom([EXIT] + s.nodes, EXIT, rsucc, rpred)

    def ipdom(s, n):
        """The nearest node every path from n to the end goes through (EXIT if none before it)."""
        d = s.ipd.get(n)
        return EXIT if d is None else d

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
                firsts = s._firsts(common)
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
        firsts = s._firsts(common)
        return firsts[0] if len(firsts) == 1 else EXIT

    def _firsts(s, common):
        """The nodes of common that no other common node comes before: x such that no common y with x in reach(y) and y not in reach(x).
        On the components (strongly connected): x's component is reached from no other component holding a common node; one pass in
        topological order instead of reach for every pair (entryCharaSelExec, Virtua Tennis: 56 of 60 s of its reading)."""
        if '_scc' not in s.__dict__:
            s._components()
        scc, topo, cpred = s._scc, s._topo, s._cpred
        comm = {scc[x] for x in common}
        before = {}
        for c in topo:
            before[c] = any(p in comm or before[p] for p in cpred[c])
        return [x for x in common if not before[scc[x]]]

    def _components(s):
        """Strongly connected components (Tarjan, iterative): s._scc {node: component}, s._topo the components sources first,
        s._cpred {component: the other components with an edge into it}."""
        index, low, onst, st, scc, comps = {}, {}, set(), [], {}, []
        k = 0
        for root in s.nodes:
            if root in index:
                continue
            work = [(root, iter([t for t in s.succ[root] if t != EXIT]))]
            index[root] = low[root] = k; k += 1; st.append(root); onst.add(root)
            while work:
                v, it = work[-1]
                for w in it:
                    if w not in index:
                        index[w] = low[w] = k; k += 1; st.append(w); onst.add(w)
                        work.append((w, iter([t for t in s.succ[w] if t != EXIT])))
                        break
                    if w in onst:
                        low[v] = min(low[v], index[w])
                else:
                    work.pop()
                    if work:
                        low[work[-1][0]] = min(low[work[-1][0]], low[v])
                    if low[v] == index[v]:
                        cid = len(comps); comp = []
                        while True:
                            w = st.pop(); onst.discard(w); scc[w] = cid; comp.append(w)
                            if w == v:
                                break
                        comps.append(comp)
        cpred = {c: set() for c in range(len(comps))}
        for n in s.nodes:
            for t in s.succ[n]:
                if t != EXIT and scc[t] != scc[n]:
                    cpred[scc[t]].add(scc[n])
        s._scc, s._cpred = scc, cpred
        s._topo = list(range(len(comps)))[::-1]          # Tarjan finishes components sinks first

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
        """Every node reachable from n (n included), as a frozenset: the graph does not change once built, so each node's answer is
        kept (ijoin's search for the first common node asked for every pair: entryCharaSelExec, Virtua Tennis, 56 of 60 s reading)."""
        cache = s.__dict__.setdefault('_reach', {})
        if n in cache:
            return cache[n]
        seen = set()
        todo = [n]
        while todo:
            x = todo.pop()
            if x in seen or x == EXIT:
                continue
            seen.add(x)
            todo.extend(s.succ[x])
        cache[n] = frozenset(seen)
        return cache[n]

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
