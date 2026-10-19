"""Writes Equivalent C for the functions that need no thinking, and checks each against the original.

    python3 tools/gen_equiv [--known] [max function size, default 200]      (run in the repo, like equiv.py)

For every function classify.py calls convertible and no C covers yet, it symbolically executes the SH-4 code: constants,
loads and stores, integer and single-precision float arithmetic, forward if / else blocks, and calls to named functions
(arguments are the registers r4-r7 / fr4-fr11 set before the call). Anything else (a jump table, an indirect call, stack
arguments, address of a local) is skipped. The C goes to src/gen_<letter>.c, the cases to
tests/gen_<letter>/ (up to 36 cases: candidates from a fixed set plus the constants the code compares against, calls answered
with varied results, then grown and chosen by how much of the original they run), and a function stays only if tools/equiv.py calls it Equivalent: first as a void function, then returning
r0 / fr0, then passing the caller's registers through to the first call.

The result is generated code, plain (temps t0, t1, hex stores, int prototypes) and checked on generated cases: a branch the
cases never reach can pass by luck, so equiv.py reports the instruction coverage. Report it apart from hand-written C.
`--retest [gen_x ...]` draws the cases again for functions already generated (see gen_retest.py). Needs: functions.txt, tools/shdis.py,
tools/classify.py, tools/equiv.py, 1ST_READ.BIN."""
import sys,json,os,shutil,glob,re,subprocess,collections,signal
sys.path.insert(0,os.path.dirname(os.path.abspath(__file__)))
import gen_pipe,gen_drv,gen_core
class Timeout(Exception): pass
def _alarm(sig,frm): raise Timeout()
signal.signal(signal.SIGALRM,_alarm)
def _term(sig,frm): raise SystemExit('stopped')
signal.signal(signal.SIGTERM,_term)
# equiv.py records every function it passes in tests/equivalent.txt and docs/equivalent.md, also for the scratch files of a round:
# both are put back after each round, and if the run is stopped, so nothing is left there that has no C behind it
KEEP={f:open(f).read() for f in ('tests/equivalent.txt','docs/equivalent.md') if os.path.exists(f)}
def restore_evidence():
    for f,t in KEEP.items(): open(f,'w').write(t)
READ_LIMIT=300       # seconds: a function whose reading does not finish in that time is skipped (some shapes loop for ever)
BUILD_LIMIT=60       # and the same for writing its C and cases in a round
if '--retest' in sys.argv:
    import gen_retest; gen_retest.main([a for a in sys.argv[1:] if a.startswith('gen_')]); sys.exit(0)
known='--known' in sys.argv
args=[a for a in sys.argv[1:] if a!='--known']
maxsize=int(args[0]) if args else 200
eq=set(open('tests/equivalent.txt').read().split())
defined=set()
for f in glob.glob('src/*.c'):
    t=open(f,errors='replace').read()
    defined|=set(re.findall(r'^[A-Za-z_][\w \t\*]*?\b(\w+)\s*\([^;{]*\)\s*\{',t,flags=re.M))
ver=set()
for l in open('sdk-verified.txt'):
    if not l.startswith('#'): ver.update(l.split())
cand=[]; cnt=collections.Counter()
sizes=[]
for l in open('functions.txt'):
    q=l.split()
    if len(q)>=4 and q[0]=='F' and int(q[2])<=maxsize and (q[3] in eq if known else q[3] not in eq): sizes.append(q[3])
# classify.py without names stops at 128 bytes: name the functions to look at
for l in (subprocess.run(['python3','tools/classify.py']+sizes,capture_output=True,text=True).stdout.splitlines() if sizes else []):
    p=l.split()
    if len(p)>=4 and p[-1]=='ok' and (p[2] in eq if known else p[2] not in eq and p[2] not in defined) and p[2] not in ver and not p[2].startswith('_') and int(p[1])<=maxsize:
        if os.environ.get('GEN_TRACE'): print('  read',p[2],flush=True)
        signal.alarm(READ_LIMIT)
        try: gen_core.run(p[2]); cand.append(p[2])
        except Timeout: cnt['timeout']+=1
        except gen_core.Skip as e: cnt[re.sub(r'[0-9a-f]{4,}','',str(e).split()[0] if str(e) else '?')]+=1
        except Exception as e: cnt['EXC '+type(e).__name__]+=1
        finally: signal.alarm(0)
print(len(cand),cnt.most_common(10),flush=True)
if known:
    # the check of the generator itself: it writes C for functions already proven Equivalent (by hand or by an earlier run)
    # and tests it. The evidence equiv.py writes for them is put back afterwards.
    saved={f:open(f).read() for f in ('tests/equivalent.txt','docs/equivalent.md') if os.path.exists(f)}
existing=[os.path.basename(f)[4:-2] for f in glob.glob('src/gen_*.c')]
abc='abcdefghijklmnopqrstuvwxyz'
letters=[x for x in list(abc)+[a+b for a in abc for b in abc] if x not in existing]   # gen_a .. gen_z, then gen_aa ..
remaining=list(cand); final=[]
rounds=[(0,False),(1,False),(0,True),(1,True),(2,False)]
done=set()
for ri,(vi,pt) in enumerate(rounds):
    if not remaining: break
    items=[]
    for n in remaining:
        if os.environ.get('GEN_TRACE'): print('  round',ri,n,flush=True)
        signal.alarm(BUILD_LIMIT)
        try:
            vs=gen_pipe.variants(n,pt)
            if vi>=len(vs): continue
            s,c=gen_drv.build(n,vs[vi],pt)
            if n in c.protos: continue
            t=gen_drv.tests(n,c,s)
            items.append((n,s,t,c.protos))
        except Exception as e: pass
        finally: signal.alarm(0)
    if not items: continue
    stem='gen_tmp%d'%ri
    try:
        passed,failed,deferred,dropped,err=gen_pipe.run_file_robust(stem,items)
    finally:
        restore_evidence()
    print(ri,vi,pt,'items',len(items),'passed',len(passed),'failed',len(failed),'dropped',len(dropped),err[:100],flush=True)
    keep=[it for it in items if it[0] in passed]
    done|=set(passed)
    final.append((stem,keep,vi,pt))
    remaining=[n for n in remaining if n not in passed]
    for f in glob.glob('src/gen_tmp*.c'): os.remove(f)
    for d in glob.glob('tests/gen_tmp*'): shutil.rmtree(d)
if known:
    for f,t in saved.items(): open(f,'w').write(t)
    print('known-equivalent functions written again and passing:',len(done))
    print('names:',' '.join(sorted(done)))
    sys.exit(0)
k=0
for stem,keep,vi,pt in final:
    if not keep: continue
    protos={}
    for it in keep:
        for a,b in it[3].items(): protos[a]=b
    fn='gen_%s'%letters[k]; k+=1
    head='/* Straight-line functions with calls and guards (batch %s): generated from the code and checked by tests. Calls are\n   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */\n\n'%fn+gen_drv.protos_text(protos)+'\n\n'
    open('src/%s.c'%fn,'w').write(head+'\n'.join(i[1] for i in keep))
    shutil.rmtree('tests/%s'%fn,ignore_errors=True); os.makedirs('tests/%s'%fn)
    for it in keep: json.dump(it[2],open('tests/%s/%s.json'%(fn,it[0]),'w'),indent=1)
    r=subprocess.run(['python3','tools/equiv.py','-q','src/%s.c'%fn],capture_output=True,text=True)
    print(fn,len(keep),(r.stdout+r.stderr).strip().splitlines()[-1],flush=True)
print('total',len(done),'remaining',len(remaining))
