"""python3 tools/5-generated/gen_equiv --retest [gen_x ...]: new cases for the functions already generated. For each tests/gen_<x>/<fn>.json the
cases are drawn again (many candidates, kept by the instructions of the original they reach, see gen_drv.pick), and equiv.py runs
the existing C on them. The old cases are kept in tests/gen_<x>/<fn>.json.old until the batch passes; a function that fails on the
new cases is listed (the C was wrong on a branch the old cases never reached) and keeps its old cases."""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '../..')))
import toolpath  # noqa: E402,F401
import os as _os, sys as _sys
_sys.path.insert(0,_os.path.join(_os.path.dirname(_os.path.abspath(__file__)),'..'))
import ledger
import os,sys,json,glob,subprocess,shutil,signal
sys.path.insert(0,os.path.dirname(os.path.abspath(__file__)))
import gen_pipe,gen_drv,gen_core
class Timeout(Exception): pass
def _alarm(sig,frm): raise Timeout()
signal.signal(signal.SIGALRM,_alarm)
KEEP={f:open(f).read() for f in ('tests/equivalent.txt','docs/equivalent.md') if os.path.exists(f)}
def restore():
    for f,t in KEEP.items(): open(f,'w').write(t)
def main(batches):
    batches=batches or sorted(os.path.basename(d) for d in glob.glob('tests/gen_*') if not os.path.basename(d).startswith('gen_tmp'))
    for b in batches:
        fns=sorted(os.path.basename(p)[:-5] for p in glob.glob('tests/%s/*.json'%b))
        new={}
        for fn in fns:
            old=json.load(open('tests/%s/%s.json'%(b,fn)))
            if len(old.get('dev',[]))+len(old.get('holdout',[]))>=30: continue      # drawn by an earlier run: skip it
            signal.alarm(120)
            try:
                gen_core.run(fn)
                vs=gen_pipe.variants(fn,False)
                s,c=gen_drv.build(fn,vs[0],False)
                new[fn]=gen_drv.tests(fn,c,s)
            except Exception as e:
                print('  keep old cases',fn,type(e).__name__,str(e)[:60],flush=True)
            finally: signal.alarm(0)
        for fn,t in new.items():
            ledger.archive_cases(fn,'tests/%s/%s.json'%(b,fn),'redrawn')
            shutil.copy('tests/%s/%s.json'%(b,fn),'tests/%s/%s.json.old'%(b,fn))
            json.dump(t,open('tests/%s/%s.json'%(b,fn),'w'),indent=1)
        if not new:
            print(b,'already drawn',flush=True); continue
        r=subprocess.run(['python3','tools/equiv.py','-q','src/%s.c'%b],capture_output=True,text=True)
        restore()
        bad=[l for l in r.stdout.splitlines() if l.split() and 'EQUIVALENT' not in l.split()[1:2] and not l.startswith('[')]
        failed=set(l.split()[0] for l in r.stdout.splitlines() if len(l.split())>1 and l.split()[1] in ('DIFFERS','-'))
        for fn in new:
            old='tests/%s/%s.json.old'%(b,fn)
            if fn in failed:
                shutil.move(old,'tests/%s/%s.json'%(b,fn))
                why=[l for l in r.stdout.splitlines() if l.startswith(fn+' ')]
                print('  FAILS on the new cases:',fn,(why[0][:200] if why else ''),flush=True)
            else: os.remove(old)
        print(b,len(new),'re-drawn,',len(failed),'fail',flush=True)


def lift(names):
    """python3 tools/5-generated/gen_equiv --lift [name ...]: more cases for the named functions (the ones whose cases ran least of the original: docs/equivalent.md says how much each ran).
    Many more growth tries per function (GEN_BUDGET, GEN_STALE raised), the cases written to tests/<file>/<function>.json (the old
    ones kept as .json.old), then equiv.py runs the file: the function stays Equivalent and its coverage is updated."""
    import re
    os.environ.setdefault('GEN_BUDGET','6000'); os.environ.setdefault('GEN_STALE','1200')
    if not names:
        sys.exit('name the functions to give more cases (python3 tools/5-generated/gen_equiv --lift NAME ...)')
    byfile={}
    for f in sorted(glob.glob('src/*.c')):
        t=open(f,errors='replace').read()
        for n in names:
            if re.search(r'^[A-Za-z_][\w \t\*]*\b%s\s*\([^;{]*\)\s*\{'%re.escape(n),t,flags=re.M): byfile.setdefault(os.path.basename(f)[:-2],[]).append(n)
    for stem,fns in sorted(byfile.items()):
        if not os.path.isdir('tests/'+stem): continue
        n_new=0
        for fn in fns:
            p='tests/%s/%s.json'%(stem,fn)
            if not os.path.exists(p): continue
            signal.alarm(max(300,gen_core.SPANS[fn][1]//2))
            try:
                gen_core.run(fn); vs=gen_pipe.variants(fn,False)
                s,c=gen_drv.build(fn,vs[0],False)
                t=gen_drv.tests(fn,c,s)
                ledger.archive_cases(fn,p,'lifted'); shutil.copy(p,p+'.old'); json.dump(t,open(p,'w'),indent=1); n_new+=1
            except Exception as e:
                print('  keep old cases',fn,type(e).__name__,str(e)[:60],flush=True)
            finally: signal.alarm(0)
        if n_new:
            r=subprocess.run(['python3','tools/equiv.py','-q','src/%s.c'%stem],capture_output=True,text=True)
            print(stem,'redrawn',n_new,'|',(r.stdout.strip().splitlines() or ['?'])[-1][:110],flush=True)
