"""Writes Equivalent C for the functions that need no thinking, and checks each against the original.

    python3 tools/gen_equiv [--known] [--jobs N] [max function size, default 200] [function name ...]      (run in the repo, like equiv.py)

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
import sys,json,os,shutil,glob,re,subprocess,collections,signal,time,multiprocessing
T0=time.time()
class _Tee:                                  # everything the run prints also goes to build/gen_run.log, so a run can be followed from another terminal
    def __init__(self,f): self.f=f; self.out=sys.stdout
    def write(self,t): self.out.write(t); self.f.write(t); self.f.flush()
    def flush(self): self.out.flush(); self.f.flush()
if os.path.isdir('build') and not any(a in sys.argv for a in ('--draw','--retest')):
    sys.stdout=_Tee(open('build/gen_run.log','w'))
def note(msg): print('[%4ds] %s'%(time.time()-T0,msg),flush=True)
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
if '--draw' in sys.argv:
    import draw_cases; draw_cases.main([x for x in sys.argv[1:] if x!='--draw']); sys.exit(0)
if '--lift' in sys.argv:
    import gen_retest; gen_retest.lift([x for x in sys.argv[1:] if x!='--lift']); sys.exit(0)
if '--retest' in sys.argv:
    import gen_retest; gen_retest.main([a for a in sys.argv[1:] if a.startswith('gen_')]); sys.exit(0)
known='--known' in sys.argv
JOBS=max(1,(os.cpu_count() or 2)-2)       # worker processes: every function is read and drawn on its own
if '--jobs' in sys.argv: JOBS=max(1,int(sys.argv[sys.argv.index('--jobs')+1]))
args=[a for i,a in enumerate(sys.argv[1:],1) if a not in ('--known','--jobs') and not (i>1 and sys.argv[i-1]=='--jobs')]
ONLY=[x for x in args if not x.isdigit()]            # function names: run only these (a quick look at a few, a debug run)
args=[x for x in args if x.isdigit()]
maxsize=int(args[0]) if args else (100000 if ONLY else 200)
eq=set(open('tests/equivalent.txt').read().split())
defined=set()
for f in glob.glob('src/*.c'):
    t=open(f,errors='replace').read()
    defined|=set(re.findall(r'^[A-Za-z_][\w \t\*]*?\b(\w+)\s*\([^;{]*\)\s*\{',t,flags=re.M))
ver=set()
for l in open('sdk-verified.txt'):
    if not l.startswith('#'): ver.update(l.split())
cand=[]; cnt=collections.Counter(); tolook=[]
sizes=[]
for l in open('functions.txt'):
    q=l.split()
    if len(q)>=4 and q[0]=='F' and int(q[2])<=maxsize and (q[3] in eq if known else q[3] not in eq): sizes.append(q[3])
# classify.py without names stops at 128 bytes: name the functions to look at
for l in (subprocess.run(['python3','tools/classify.py']+sizes,capture_output=True,text=True).stdout.splitlines() if sizes else []):
    p=l.split()
    if len(p)>=4 and p[-1]=='ok' and (p[2] in eq if known else p[2] not in eq and p[2] not in defined) and p[2] not in ver and not p[2].startswith('_') and int(p[1])<=maxsize:
        if not ONLY or p[2] in ONLY: tolook.append(p[2])
def _read(n):
    signal.alarm(max(READ_LIMIT,gen_core.SPANS[n][1]//4))      # a larger function gets more time: size/4 seconds, at least 300
    try:
        try: gen_core.run(n); return (n,None)
        except gen_core.Skip as e:
            if 'arg gap' not in str(e): raise
            gen_core.run(n,True); return (n,None)       # a stub that passes its own arguments on
    except Timeout: return (n,'timeout')
    except gen_core.Skip as e: return (n,re.sub(r'[0-9a-f]{4,}','',str(e).split()[0] if str(e) else '?'))
    except Exception as e: return (n,'EXC '+type(e).__name__)
    finally: signal.alarm(0)
def each(fn,names,what):
    """fn over the names in worker processes (or here with --jobs 1); results as they finish, with a progress line"""
    got=[]
    if JOBS==1: it=map(fn,names); pool=None
    else:
        pool=multiprocessing.get_context("fork").Pool(JOBS); it=pool.imap_unordered(fn,names)
    for r in it:
        got.append(r)
        if len(got)%25==0: note('%s %d of %d functions'%(what,len(got),len(names)))
    if pool: pool.close(); pool.join()
    return got
note('reading %d functions with %d workers'%(len(tolook),JOBS))
for n,why in each(_read,tolook,'read'):
    if why is None: cand.append(n)
    else: cnt[why]+=1
print(len(cand),cnt.most_common(10),flush=True)
if known:
    # the check of the generator itself: it writes C for functions already proven Equivalent (by hand or by an earlier run)
    # and tests it. The evidence equiv.py writes for them is put back afterwards.
    saved={f:open(f).read() for f in ('tests/equivalent.txt','docs/equivalent.md') if os.path.exists(f)}
existing=[os.path.basename(f)[4:-2] for f in glob.glob('src/gen_*.c')]
abc='abcdefghijklmnopqrstuvwxyz'
letters=[x for x in list(abc)+[a+b for a in abc for b in abc] if x not in existing]   # gen_a .. gen_z, then gen_aa ..
remaining=sorted(cand,key=lambda n:gen_core.SPANS[n][1]); final=[]            # the smallest first: results arrive early
k=0
def write_batch(keep):
    global k
    if not keep: return
    protos={}
    for it in keep:
        for a,b in it[3].items(): protos[a]=b
    fn='gen_%s'%letters[k]; k+=1
    head='/* Straight-line functions with calls and guards (batch %s): generated from the code and checked by tests. Calls are\n   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */\n\n'%fn+gen_drv.head_protos(keep)+'\n\n'
    open('src/%s.c'%fn,'w').write(head+'\n'.join(i[1] for i in keep))
    shutil.rmtree('tests/%s'%fn,ignore_errors=True); os.makedirs('tests/%s'%fn)
    for it in keep: json.dump(it[2],open('tests/%s/%s.json'%(fn,it[0]),'w'),indent=1)
    r=subprocess.run(['python3','tools/equiv.py','-q','src/%s.c'%fn],capture_output=True,text=True)
    note('%s: %d functions written, %s'%(fn,len(keep),(r.stdout+r.stderr).strip().splitlines()[-1]))
ROUND=[0,False]
def _draw(n):
    vi,pt=ROUND
    signal.alarm(max(BUILD_LIMIT,gen_core.SPANS[n][1]//8))      # a larger function gets more time: size/8 seconds, at least 60
    try:
        try: vs=gen_pipe.variants(n,pt)
        except gen_core.Skip as e:
            if 'arg gap' not in str(e) or pt: raise
            pt=True                          # a stub that passes its own arguments on: the registers it never set are its arguments
            vs=gen_pipe.variants(n,pt)
        if vi>=len(vs): return None
        s,c=gen_drv.build(n,vs[vi],pt)
        if n in c.protos: return None
        t=gen_drv.tests(n,c,s)
        return (n,s,t,c.protos,dict(gen_drv.LAST,pool=None))
    except Exception as e: return ('skip',n,'%s %s'%(type(e).__name__,str(e)[:90]))
    finally: signal.alarm(0)
rounds=[(0,False)]      # one round: on Crazy Taxi the retry rounds (other code shapes) added nothing and cost as much time again
done=set()
if os.path.exists('build/gen_failed.txt'): os.remove('build/gen_failed.txt')
for ri,(vi,pt) in enumerate(rounds):
    if not remaining: break
    items=[]
    note('round %d: drawing cases for %d functions (the slow part; results are written after each round)'%(ri,len(remaining)))
    ROUND[:]=[vi,pt]
    notdrawn=[]
    for r in each(_draw,remaining,'  round %d: cases drawn for'%ri):
        if r and r[0]=='skip': notdrawn.append(r)
        elif r: items.append(r)
    with open('state/case-survival.txt','w') as fh:       # per function: cases drawn, cases the original survived, and whether the holdout is independent
        fh.write('function drawn survived holdout_independent\n')
        for it in items:
            st=it[4] if len(it)>4 else {}
            fh.write('%s %s %s %s\n'%(it[0],st.get('drawn','?'),st.get('survived','?'),st.get('holdout_independent','?')))
    with open('build/gen_failed.txt','a') as fh:        # the functions that got no C or no cases, and why
        for _,n_,why in notdrawn: fh.write('%s  not drawn: %s\n'%(n_,why))
    order={n:k for k,n in enumerate(remaining)}
    items.sort(key=lambda it:order[it[0]])
    if not items: continue
    stem='gen_tmp%d'%ri
    note('round %d: compiling and checking %d functions'%(ri,len(items)))
    try:
        passed,failed,deferred,dropped,err=gen_pipe.run_file_robust(stem,items)
    finally:
        restore_evidence()
    print(ri,vi,pt,'items',len(items),'passed',len(passed),'failed',len(failed),'dropped',len(dropped),err[:100],flush=True)
    os.makedirs('state/failed-cases',exist_ok=True)      # the cases of every function that failed, to replay by hand
    for it in items:
        if it[0] in failed: json.dump(it[2],open('state/failed-cases/%s.json'%it[0],'w'))
    keep=[it for it in items if it[0] in passed]
    with open('build/gen_failed.txt','a') as fh:        # what failed and the first difference, for whoever improves the generator
        for l in gen_pipe.LAST.get('out','').splitlines():
            q=l.split()
            if len(q)>1 and q[0] in failed: fh.write(l+'\n')
        for n in dropped: fh.write('%s  did not compile: %s\n'%(n,gen_pipe.LAST.get('why',{}).get(n,'')))
    done|=set(passed)
    final.append((stem,keep,vi,pt))
    if not known: write_batch(keep)
    remaining=[n for n in remaining if n not in passed]
    for f in glob.glob('src/gen_tmp*.c'): os.remove(f)
    for d in glob.glob('tests/gen_tmp*'): shutil.rmtree(d)
if known:
    for f,t in saved.items(): open(f,'w').write(t)
    print('known-equivalent functions written again and passing:',len(done))
    print('names:',' '.join(sorted(done)))
    sys.exit(0)
print('total',len(done),'remaining',len(remaining))
