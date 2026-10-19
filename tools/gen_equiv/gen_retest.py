"""python3 tools/gen_equiv --retest [gen_x ...]: new cases for the functions already generated. For each tests/gen_<x>/<fn>.json the
cases are drawn again (many candidates, kept by the instructions of the original they reach, see gen_drv.pick), and equiv.py runs
the existing C on them. The old cases are kept in tests/gen_<x>/<fn>.json.old until the batch passes; a function that fails on the
new cases is listed (the C was wrong on a branch the old cases never reached) and keeps its old cases."""
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
