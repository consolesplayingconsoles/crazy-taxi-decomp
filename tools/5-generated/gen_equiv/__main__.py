"""Writes Equivalent C for the functions that need no thinking, and checks each against the original.

    python3 tools/5-generated/gen_equiv [--known] [--jobs N] [max function size, default 200] [function name ...]      (run in the repo, like equiv.py)

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
tools/5-generated/classify.py, tools/equiv.py, 1ST_READ.BIN."""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '../..')))
import toolpath  # noqa: E402,F401
import sys,json,os,shutil,glob,re,subprocess,collections,signal,time,multiprocessing,fcntl
sys.path.insert(0,os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0,os.path.join(os.path.dirname(os.path.abspath(__file__)),'..'))
import ledger
T0=time.time()
# --run NAME: a named run keeps its own log, report and survival file, so several runs can go at once (groups of one big list); the
# steps that touch shared files (compiling and checking, the evidence files, the batch files) take turns on state/.gen.lock
RUN='run'
if '--run' in sys.argv: RUN=sys.argv[sys.argv.index('--run')+1]
SUF='' if RUN=='run' else '-'+RUN
LOG='build/gen_run%s.log'%SUF; FAILED='build/gen_failed%s.txt'%SUF
os.makedirs('state',exist_ok=True)
_LOCKF=open('state/.gen.lock','w')
def lock(): fcntl.flock(_LOCKF,fcntl.LOCK_EX)
def unlock(): fcntl.flock(_LOCKF,fcntl.LOCK_UN)
class _Tee:                                  # everything the run prints also goes to build/gen_run.log, so a run can be followed from another terminal
    def __init__(self,f): self.f=f; self.out=sys.stdout
    def write(self,t): self.out.write(t); self.f.write(t); self.f.flush()
    def flush(self): self.out.flush(); self.f.flush()
if os.path.isdir('build') and not any(a in sys.argv for a in ('--draw','--retest')):
    ledger.rotate(LOG,'run'); sys.stdout=_Tee(open(LOG,'w'))
def note(msg): print('[%4ds] %s'%(time.time()-T0,msg),flush=True)
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
def snapshot_evidence():       # the files as they are now (call with the lock held): other runs may have added to them since this run started
    KEEP.update({f:open(f).read() for f in ('tests/equivalent.txt','docs/equivalent.md') if os.path.exists(f)})
restore_evidence.snapshot=snapshot_evidence
READ_LIMIT=300       # seconds: a function whose reading does not finish in that time is skipped (some shapes loop for ever)
BUILD_LIMIT=60       # and the same for writing its C and cases in a round
TIMEF=float(os.environ.get('GEN_TIME_FACTOR','1'))      # more time for the drawing of cases when the machine is shared by several groups
if '--draw' in sys.argv:
    import draw_cases; draw_cases.main([x for x in sys.argv[1:] if x!='--draw']); sys.exit(0)
if '--direct' in sys.argv:
    import directed; directed.main([x for x in sys.argv[1:] if x!='--direct'],gen_drv.RUNTIME,gen_core.SPANS if False else {n:v for n,v in gen_core.SPANS.items()}); sys.exit(0)
if '--lift' in sys.argv:
    import gen_retest; gen_retest.lift([x for x in sys.argv[1:] if x!='--lift']); sys.exit(0)
abc='abcdefghijklmnopqrstuvwxyz'
k=0
def write_batch(keep):
    global k
    if not keep: return
    protos={}
    for it in keep:
        for a,b in it[3].items(): protos[a]=b
    fn=next('gen_'+x for x in list(abc)+[a+b for a in abc for b in abc]+[a+b+c_ for a in abc for b in abc for c_ in abc] if not os.path.exists('src/gen_%s.c'%x))
    head='/* Straight-line functions with calls and guards (batch %s): generated from the code and checked by tests. Calls are\n   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */\n\n'%fn+gen_drv.head_protos(keep)+'\n\n'
    open('src/%s.c'%fn,'w').write(head+'\n'.join(i[1] for i in keep))
    shutil.rmtree('tests/%s'%fn,ignore_errors=True); os.makedirs('tests/%s'%fn)
    for it in keep: json.dump(it[2],open('tests/%s/%s.json'%(fn,it[0]),'w'),indent=1)
    r=subprocess.run(['python3','tools/equiv.py','-q','src/%s.c'%fn],capture_output=True,text=True)
    note('%s: %d functions written, %s'%(fn,len(keep),(r.stdout+r.stderr).strip().splitlines()[-1]))
if '--recheck' in sys.argv:
    import keep as keepstore
    wanted=[x for x in sys.argv[1:] if not x.startswith('--') and x!=RUN and not (sys.argv[sys.argv.index(x)-1] in ('--run','--jobs'))]
    keepstore.recheck(wanted,'--rebuild' in sys.argv,RUN,write_batch,note,ledger,lock,unlock,restore_evidence); sys.exit(0)
if '--retest' in sys.argv:
    import gen_retest; gen_retest.main([a for a in sys.argv[1:] if a.startswith('gen_')]); sys.exit(0)
known='--known' in sys.argv
JOBS=max(1,(os.cpu_count() or 2)-2)       # worker processes: every function is read and drawn on its own
if '--jobs' in sys.argv: JOBS=max(1,int(sys.argv[sys.argv.index('--jobs')+1]))
args=[a for i,a in enumerate(sys.argv[1:],1) if a not in ('--known','--jobs','--run') and not (i>1 and sys.argv[i-1] in ('--jobs','--run'))]
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
if os.path.exists('sdk-identical.txt'):
    for l in open('sdk-identical.txt'):
        if not l.startswith('#'): ver.update(l.split()[:1])
cand=[]; cnt=collections.Counter(); tolook=[]
sizes=[]
for l in open('functions.txt'):
    q=l.split()
    if len(q)>=4 and q[0]=='F' and int(q[2])<=maxsize and (q[3] in eq if known else q[3] not in eq): sizes.append(q[3])
# classify.py without names stops at 128 bytes: name the functions to look at
for l in (subprocess.run(['python3','tools/5-generated/classify.py']+sizes,capture_output=True,text=True).stdout.splitlines() if sizes else []):
    p=l.split()
    if len(p)>=4 and p[3]=='ok' and (p[2] in eq if known else p[2] not in eq and p[2] not in defined) and (p[2] not in ver or p[2] in ONLY) and not (p[2].startswith('_') and gen_core._custom_convention(p[2])) and int(p[1])<=maxsize:
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
def stream(fn,names):
    """fn over the names in worker processes (or here with --jobs 1); each result as it finishes, in the order the workers are given the names"""
    if JOBS==1:
        for r in map(fn,names): yield r
        return
    pool=multiprocessing.get_context("fork").Pool(JOBS)
    try:
        for r in pool.imap_unordered(fn,names): yield r
    finally:
        pool.close(); pool.join()
def each(fn,names,what):
    """fn over the names, all results, with a progress line"""
    got=[]
    for r in stream(fn,names):
        got.append(r)
        if len(got)%25==0 or len(names)<=60 or len(got)==len(names): note('%s %d of %d functions'%(what,len(got),len(names)))      # a small run shows every function
    return got
note('reading %d functions with %d workers'%(len(tolook),JOBS))
for n,why in each(_read,tolook,'read'):
    if why is None: cand.append(n)
    else: cnt[why]+=1; ledger.record(RUN,n,'cannot read',why)
print(len(cand),cnt.most_common(10),flush=True)
if known:
    # the check of the generator itself: it writes C for functions already proven Equivalent (by hand or by an earlier run)
    # and tests it. The evidence equiv.py writes for them is put back afterwards.
    saved={f:open(f).read() for f in ('tests/equivalent.txt','docs/equivalent.md') if os.path.exists(f)}
existing=[os.path.basename(f)[4:-2] for f in glob.glob('src/gen_*.c')]
letters=[x for x in list(abc)+[a+b for a in abc for b in abc] if x not in existing]   # gen_a .. gen_z, then gen_aa ..
remaining=sorted(cand,key=lambda n:-gen_core.SPANS[n][1]); final=[]            # the biggest first: the slow ones start early and never hold the others back
BATCH=int(os.environ.get('GEN_BATCH','8000'))      # bytes of original code per batch: results are checked and written each time this many bytes have been drawn
k=0
ROUND=[0,False]
def _draw(n):
    vi,pt=ROUND
    t0=time.time()
    signal.alarm(int(max(BUILD_LIMIT,gen_core.SPANS[n][1]//8)*TIMEF))      # a larger function gets more time: size/8 seconds, at least 60, times GEN_TIME_FACTOR
    try:
        try: vs=gen_pipe.variants(n,pt)
        except gen_core.Skip as e:
            if 'arg gap' not in str(e) or pt: raise
            pt=True                          # a stub that passes its own arguments on: the registers it never set are its arguments
            vs=gen_pipe.variants(n,pt)
        if vi>=len(vs): return None
        s,c=gen_drv.build(n,vs[vi],pt)
        c.protos.pop(n,None)               # a function that calls itself: its own definition declares it
        t=gen_drv.tests(n,c,s)
        return (n,s,t,c.protos,dict(gen_drv.LAST,pool=None,secs=round(time.time()-t0,1)))
    except Exception as e: return ('skip',n,'%s %s'%(type(e).__name__,str(e)[:90]),round(time.time()-t0,1))
    finally: signal.alarm(0)
rounds=[(0,False)]      # one round: on Crazy Taxi the retry rounds (other code shapes) added nothing and cost as much time again
done=set()
ledger.rotate(FAILED,'report')
if os.path.exists(FAILED): os.remove(FAILED)
import keep as keepstore
def flush(items,notdrawn,ri,vi,pt,order,bn):
    """check and write one batch of drawn functions"""
    with open('state/case-survival%s.txt'%SUF,'a') as fh:       # per function: cases drawn, cases the original survived, and whether the holdout is independent
        for it in items:
            st=it[4] if len(it)>4 else {}
            fh.write('%s %s %s %s\n'%(it[0],st.get('drawn','?'),st.get('survived','?'),st.get('holdout_independent','?')))
    with open(FAILED,'a') as fh:        # the functions that got no C or no cases, and why
        for _,n_,why in notdrawn: fh.write('%s  not drawn: %s\n'%(n_,why)); ledger.record(RUN,n_,'not drawn',why)
    items.sort(key=lambda it:order[it[0]])
    if not items: return
    stem='gen_tmp%d'%ri
    lock()
    try:
        KEEP.update({f:open(f).read() for f in ('tests/equivalent.txt','docs/equivalent.md') if os.path.exists(f)})      # the files as they are now: other runs may have added to them
        if not known:       # another run may have proved a function since this one drew it: writing it again would define it twice
            proved=set(KEEP.get('tests/equivalent.txt','').split())
            items[:]=[it for it in items if it[0] not in proved]
            if not items: return
        note('round %d batch %d: compiling and checking %d functions'%(ri,bn,len(items)))
        try:
            passed,failed,deferred,dropped,err=gen_pipe.run_file_robust(stem,items)
            # differs only in the return value: often a leftover r0/fr0 of a function that returns nothing. Checked again as void on the same cases
            out_only=[it for it in items if it[0] in failed and re.search(r'^%s\s+DIFFERS\s+case \d+: out:'%re.escape(it[0]),gen_pipe.LAST.get('out',''),re.M)]
            again=[]
            for it in out_only:
                try:
                    if 'void' not in gen_pipe.variants(it[0],pt) or vi==len(gen_pipe.variants(it[0],pt))-1: continue
                    s_,c_=gen_drv.build(it[0],'void',pt); c_.protos.pop(it[0],None)
                    again.append((it[0],s_,it[2],c_.protos)+tuple(it[4:]))
                except Exception: pass
            if again:
                first_out=gen_pipe.LAST.get('out','')
                p2,f2,d2,dr2,_=gen_pipe.run_file_robust(stem+'v',again)
                gen_pipe.LAST['out']=first_out
                for it in again:
                    if it[0] in p2:
                        failed.remove(it[0]); passed.append(it[0]); items[[i[0] for i in items].index(it[0])]=it
                note('round %d batch %d: %d differed only in the return value, %d pass as void'%(ri,bn,len(again),len(p2)))
        finally:
            restore_evidence()
        print(ri,vi,pt,'batch',bn,'items',len(items),'passed',len(passed),'failed',len(failed),'dropped',len(dropped),err[:100],flush=True)
        os.makedirs('state/failed-cases',exist_ok=True)      # the cases of every function that failed, to replay by hand
        for it in items:
            if it[0] in failed:
                ledger.archive_cases(it[0],'state/failed-cases/%s.json'%it[0],'failed-before')
                json.dump(it[2],open('state/failed-cases/%s.json'%it[0],'w'))
        for it in items:       # the work of what did not pass is kept (state/kept, local): a later fix re-checks it instead of drawing again
            try:
                if it[0] in failed:
                    ln=next((l for l in gen_pipe.LAST.get('out','').splitlines() if l.split()[:1]==[it[0]]),'')
                    keepstore.save(it,'DIFFERS',' '.join(ln.split()[2:]),RUN,vi,pt)
                elif it[0] in dropped: keepstore.save(it,'did not compile',gen_pipe.LAST.get('why',{}).get(it[0],''),RUN,vi,pt)
                elif it[0] in passed: keepstore.drop(it[0])
            except Exception as e: note('could not keep %s: %s'%(it[0],str(e)[:60]))
        keep=[it for it in items if it[0] in passed]
        with open(FAILED,'a') as fh:        # what failed and the first difference, for whoever improves the generator
            for l in gen_pipe.LAST.get('out','').splitlines():
                q=l.split()
                if len(q)>1 and q[0] in failed: fh.write(l+'\n'); ledger.record(RUN,q[0],q[1],' '.join(q[2:]))
            for n in dropped: fh.write('%s  did not compile: %s\n'%(n,gen_pipe.LAST.get('why',{}).get(n,''))); ledger.record(RUN,n,'did not compile',gen_pipe.LAST.get('why',{}).get(n,''))
        for n in passed: ledger.record(RUN,n,'EQUIVALENT','')
        done.update(passed)
        final.append((stem,keep,vi,pt))
        if not known: write_batch(keep)
        for f in ([] if os.environ.get('GEN_KEEP') else glob.glob('src/gen_tmp*.c')): os.remove(f)      # GEN_KEEP=1 leaves the scratch C to look at
        for d in glob.glob('tests/gen_tmp*'): shutil.rmtree(d)
    finally:
        unlock()
for ri,(vi,pt) in enumerate(rounds):
    if not remaining: break
    size=lambda n:gen_core.SPANS[n][1]
    total=sum(size(n) for n in remaining)
    note('round %d: drawing cases for %d functions, %d bytes; checked and written every %d bytes (the biggest are drawn first)'%(ri,len(remaining),total,BATCH))
    ROUND[:]=[vi,pt]
    order={n:k for k,n in enumerate(remaining)}
    open('state/case-survival%s.txt'%SUF,'w').write('function drawn survived holdout_independent\n')
    items=[]; notdrawn=[]; got=0; gotb=0; batchb=0; bn=0
    for r in stream(_draw,remaining):
        got+=1
        if r and r[0]=='skip':
            notdrawn.append(r[:3]); b=size(r[1]); secs=r[3]; print('  drawn %-28s %6d B %7.1f s  not drawn: %s'%(r[1],b,secs,r[2]),flush=True)
        elif r:
            b=size(r[0]); print('  drawn %-28s %6d B %7.1f s'%(r[0],b,r[4].get('secs',0)),flush=True); items.append(r)
        else: b=0
        gotb+=b; batchb+=b
        if got%25==0 or len(remaining)<=60 or got==len(remaining):
            el=time.time()-T0; note('  round %d: %d of %d functions drawn, %d of %d bytes (about %d s left at this rate)'%(ri,got,len(remaining),gotb,total,el*(total-gotb)/max(gotb,1)))
        if batchb>=BATCH:
            bn+=1; flush(items,notdrawn,ri,vi,pt,order,bn); items=[]; notdrawn=[]; batchb=0
    if items or notdrawn: bn+=1; flush(items,notdrawn,ri,vi,pt,order,bn)
    remaining=[n for n in remaining if n not in done]
if known:
    print('known-equivalent functions written again and passing:',len(done))
    print('names:',' '.join(sorted(done)))
    sys.exit(0)
print('total',len(done),'remaining',len(remaining))
