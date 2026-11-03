"""frametest.py: the C against the original on REAL game state. Run in the repo; needs a RAM snapshot of the original (scripts/gdbsnap.py).

    python3 tools/6-agentic/frametest.py <root function> <snapshot prefix> [r4 r5 r6 r7 hex] [fr4..fr7]
    START=<pc hex> ... <root function> <prefix>      start in the middle of the root (the snapshot's registers all loaded)
    POISON=<word hex> ...                            fill the stack below the entry SP: a caller that does not push a word leaves it
    SHOW=<function> ...                              list the memory bytes that differ for that function

Runs the root function deep in the SH-4 simulator on the snapshot (<prefix>.ram, <prefix>.json from gdbsnap.py: the original at a
function's entry, say a screen's per-frame function), records every function it enters with its registers and stack words, then for each
one that has C compiles its file as equiv.py does and runs the original's code and the C on that same state: the final memory, the device
writes (the display lists), the result registers and the number of steps are compared. Writes to the simulator's stack are not compared.
What the cases of equiv.py cannot say, this does on the state the game was really in: a missing stack word, a wrong callee argument, a
return in the wrong register, shown as a function that DIFFERS. FR0 lines list a float result that differs where r0 is the declared one.
Virtua Tennis: found vecDistXZ, netJudgeExec, hudMatchDraw and infoPlayerDrawWrap this way; the game's frames are never committed.
"""
import os, sys, re, bisect, collections, json, time, glob
sys.path.insert(0, 'tools'); import toolpath, sh4sim, layout, equiv
root, dump = sys.argv[1], sys.argv[2]; rest = sys.argv[3:]
ints = [int(x, 16) for x in rest[:4]]; flts = [float(x) for x in rest[4:8]]
def say(m): print('%s  %s' % (m, time.strftime('%H:%M:%S')), flush=True)
F = {n: (a, s) for a, s, n in layout.functions()}
cs = sorted(((a & 0x1FFFFFFF), n) for a, s, n in layout.functions()); st = [v for v, k in cs]; entries = {v: k for v, k in cs}
defs, rtype = {}, {}
for f in glob.glob('src/*.c'):
    t = open(f, errors='replace').read()
    for m in re.finditer(r'(?m)^(int|void|float|Stk\d+)\s+(\**)(\w+)\s*\([^;{]*\)\s*\n\{', t): defs[m.group(3)] = f; rtype[m.group(3)] = 'fr0' if m.group(1) == 'float' and not m.group(2) else 'r0' if m.group(1) != 'void' else None
rec = {}
Base = sh4sim.CPU
class CPU(Base):
    def step(self, in_slot=False):
        n = entries.get(self.pc & 0x1FFFFFFF)
        if n and not in_slot and n not in rec:
            try: sw = [self.m.read((self.r[15] + 4 * k) & 0xFFFFFFFF, 4, True) & 0xFFFFFFFF for k in range(16)]
            except Exception: sw = [0] * 16
            rec[n] = (list(self.r[4:8]), list(self.fr[4:12]), self.steps, sw)
        return Base.step(self, in_slot=in_slot)
j = json.load(open(dump + '.json'))
def case(entry, end, r4, fr4, sw=None):
    regs = {'r%d' % (4 + i): '%08X' % v for i, v in enumerate(r4)}; regs.update({'fr%d' % (4 + i): '%08X' % v for i, v in enumerate(fr4)})
    regs.update({'gbr': '%08X' % j['gbr'], 'vbr': '%08X' % j['vbr']})
    c = {'dump': dump + '.ram', 'entry': '%08X' % entry, 'end': '%08X' % end, 'steps': 6000000, 'hw_model': True, 'regs': regs}
    c['poke'] = {}
    if os.environ.get('POISON'):                      # the stack below the entry SP: what a caller that does not push a word leaves for the callee to read
        pat = int(os.environ['POISON'], 16).to_bytes(4, 'little')
        c['poke']['0DFFF000'] = (pat * (0xF00 // 4)).hex()
    if sw: c['poke']['0DFFFF00'] = b''.join(w.to_bytes(4, 'little') for w in sw).hex()      # the stack words the function found at its entry: arguments past the fourth, a struct by value
    return c
a, s = F[root]
sh4sim.CPU = CPU
fr = [sh4sim.f_bits(x) for x in flts] + [0] * (8 - len(flts))
if os.environ.get('START'):
    import struct as _st
    g = _st.unpack('<%dI' % (len(bytes.fromhex(j['g'])) // 4), bytes.fromhex(j['g']))
    c0 = case(int(os.environ['START'], 16), (a | 0x8C000000) + s, [0] * 4, [0] * 8)
    c0['regs'] = {'r%d' % i: '%08X' % g[i] for i in range(16)}
    c0['regs'].update({'fr%d' % i: '%08X' % g[25 + i] for i in range(16)}); c0['regs'].update({'gbr': '%08X' % j['gbr'], 'vbr': '%08X' % j['vbr']})
    c0['steps'] = int(os.environ.get('STEPS', '1500000'))
    r0 = sh4sim.run(c0, '.', deep=True)
else:
    r0 = sh4sim.run(case(a | 0x8C000000, (a | 0x8C000000) + s, ints + [0] * (4 - len(ints)), fr), '.', deep=True)
sh4sim.CPU = Base
say('root %s: %s after %d steps, %d writes, %d device ops; %d functions entered, %d with C' % (root, r0['error'], r0['steps'], len(r0['writes']), len(r0['devices']), len(rec), sum(1 for n in rec if n in defs)))
byfile = collections.defaultdict(list)
for n in rec:
    if n in defs: byfile[defs[n]].append(n)
table = equiv.names(); results = []
for f in sorted(byfile, key=lambda x: -len(byfile[x])):
    try:
        defines, defined = equiv.outside_names(f, table)
        defines.update({'_' + n: a_ for n, a_ in table.items() if n.startswith('_') and n not in defined})
        code, syms = equiv.compile_link(f, defines)
    except Exception as e:
        say('%s: compile failed: %s' % (f, str(e)[:120])); continue
    for n in byfile[f]:
        if '_' + n not in syms: say('  %s: not in the compiled file' % n); continue
        c_at = syms['_' + n]; c_end = min([x for x in syms.values() if x > c_at] + [equiv.SCRATCH + len(code)])
        r4, fr4, _, sw = rec[n]; a_, s_ = F[n]
        ro = sh4sim.run(case(a_ | 0x8C000000, (a_ | 0x8C000000) + s_, r4, fr4, sw), '.', deep=True)
        rc = sh4sim.run(case(c_at, c_end, r4, fr4, sw), '.', code=(equiv.SCRATCH, code), entry=c_at, end=c_end, deep=True)
        fo, fc = equiv.final(ro['writes']), equiv.final(rc['writes'])
        isstk = lambda v: 0x0DFF0000 <= (int(v, 16) if isinstance(v, str) else v) < 0x0E000000
        bad = sorted((int(x, 16) if isinstance(x, str) else x) for x in set(fo) | set(fc) if fo.get(x) != fc.get(x) and not isstk(x))
        dev = next((i for i, (x, y) in enumerate(zip(ro['devices'], rc['devices'])) if x != y and not (x[1] == y[1] == '00000000') and not (isstk(x[3]) and isstk(y[3]))), None)   # a write to address 0 is a hidden return pointer the simulator's stack does not carry: its value is noise on both sides
        if os.environ.get('SHOW') == n:
            for x in bad: print('   MEM %08X orig=%s C=%s' % (x, fo.get(x) if x in fo else fo.get('%08X' % x), fc.get(x) if x in fc else fc.get('%08X' % x)))
        rk = rtype.get(n); same = not bad and dev is None and len(ro['devices']) == len(rc['devices']) and (rk is None or ro['out'][rk] == rc['out'][rk]) and ro['error'] == rc['error']
        if ro['out'].get('fr0') != rc['out'].get('fr0') and not ro['error'] and not rc['error']:
            say('FR0 %s (%s): orig fr0=%s | C fr0=%s | r0 orig=%s C=%s same=%s' % (n, f, ro['out'].get('fr0'), rc['out'].get('fr0'), ro['out']['r0'], rc['out']['r0'], same))
        results.append((n, f, same))
        if not same:
            say('DIFFERS %s (%s) args %s: orig %s %d steps %d writes %d dev r0=%s | C %s %d steps %d writes %d dev r0=%s | %d memory bytes differ%s%s' % (
                n, f, ' '.join('%08X' % v for v in r4), ro['error'], ro['steps'], len(ro['writes']), len(ro['devices']), ro['out']['r0'],
                rc['error'], rc['steps'], len(rc['writes']), len(rc['devices']), rc['out']['r0'], len(bad),
                (' first %08X' % (bad[0] & ~3)) if bad else '', (' device op #%d: %s vs %s' % (dev, ro['devices'][dev], rc['devices'][dev])) if dev is not None else ''))
    say('%s: %d functions checked, %d differ so far' % (f, len(byfile[f]), sum(1 for x in results if not x[2])))
say('done: %d checked, %d differ: %s' % (len(results), sum(1 for x in results if not x[2]), ' '.join(n for n, f, ok in results if not ok)))
json.dump({'rec': {n: ([hex(v) for v in r], [hex(v) for v in fr_], s_, [hex(v) for v in sw]) for n, (r, fr_, s_, sw) in rec.items()}, 'results': results}, open('build/frametest-%s.json' % root, 'w'))
