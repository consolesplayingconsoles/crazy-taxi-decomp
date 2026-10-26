import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '../..')))
import toolpath  # noqa: E402,F401
import sys,re,json,os,subprocess,shutil
sys.path.insert(0,os.path.dirname(__file__))
import gen_drv,gen_core
Skip=gen_core.Skip
def variants(name,passthru):
    c=gen_core.run(name,passthru)
    if c.tail: return ['void'] if any(r=='None' for r,f in c.rets) else ['r0','void']      # a return that leaves r0 to a helper (unknown) cannot be written as a value
    lit=lambda x:re.match(r'^(-?\d+|0x[0-9A-F]+|-?[\d.e+-]+f)$',x)
    out=[]
    if c.rets and all(f!='None' for r,f in c.rets) and not all(lit(f) for r,f in c.rets): out.append('fr0')
    if c.rets and all(r!='None' for r,f in c.rets): out.append('r0')      # a literal return counts too: the check must compare r0 when the function sets it
    out.append('void')
    return out
LAST={}                          # the text of the last check, for the report of what failed


def run_file(stem,items):
    """items: list of (name,src,tests,protos). returns passed names, failed names, compile_error"""
    protos={}
    use=[]; deferred=[]
    for it in items:
        ok=True
        for k,v in it[3].items():
            if k in protos and protos[k]!=v: ok=False
        if ok:
            protos.update(it[3]); use.append(it)
        else: deferred.append(it)
    head='/* scratch */\n'+gen_drv.protos_text(protos)+'\n\n'
    open('src/%s.c'%stem,'w').write(head+'\n'.join(i[1] for i in use))
    shutil.rmtree('tests/%s'%stem,ignore_errors=True); os.makedirs('tests/%s'%stem)
    for it in use: json.dump(it[2],open('tests/%s/%s.json'%(stem,it[0]),'w'),indent=1)
    r=subprocess.run(['python3','tools/equiv.py','src/%s.c'%stem],capture_output=True,text=True); out=r.stdout+r.stderr
    passed=[];failed=[]
    if 'compile failed' in out or 'ERROR' in out[:200]:
        return [],[i[0] for i in use],deferred,out[:400]
    for it in use:
        m=re.search(r'^%s\s+(\S+)'%re.escape(it[0]),out,flags=re.M)
        (passed if m and m.group(1)=='EQUIVALENT' else failed).append(it[0])
    return passed,failed,deferred,''

def run_file_robust(stem,items):
    items=list(items); dropped=[]
    while True:
        protos={}
        use=[]; deferred=[]
        for it in items:
            ok=True
            for k,v in it[3].items():
                if k in protos and protos[k]!=v: ok=False
            if ok: protos.update(it[3]); use.append(it)
            else: deferred.append(it)
        head='/* scratch */\n'+gen_drv.head_protos(use)+'\n\n'
        text=head
        spans=[]
        line=head.count('\n')+1
        for it in use:
            n=it[1].count('\n')+1
            spans.append((line,line+n,it[0])); text+=it[1]+'\n'; line+=n
        open('src/%s.c'%stem,'w').write(text)
        shutil.rmtree('tests/%s'%stem,ignore_errors=True); os.makedirs('tests/%s'%stem)
        for it in use: json.dump(it[2],open('tests/%s/%s.json'%(stem,it[0]),'w'),indent=1)
        r=subprocess.run(['python3','tools/equiv.py','--full','src/%s.c'%stem],capture_output=True,text=True); out=r.stdout+r.stderr
        LAST['out']=out
        if 'compile failed' in out:
            lines=[int(x) for x in re.findall(r'gen_\w+\.c\((\d+)\)',out)]
            bad=set()
            for ln in lines:
                for a,b,n in spans:
                    if a<=ln<b: bad.add(n)
            if not bad: return [],[],deferred,dropped,out[:500]
            for ln in lines:
                for a_,b_,n_ in spans:
                    if a_<=ln<b_ and n_ in bad:
                        m_=re.search(r'gen_\w+\.c\(%d\) : (.*)'%ln,out)
                        LAST.setdefault('why',{}).setdefault(n_,(m_.group(1) if m_ else '?')[:100]+' [line %d: %s]'%(ln,text.split('\n')[ln-1].strip()[:80]))
            items=[it for it in items if it[0] not in bad]; dropped+=sorted(bad); continue
        if out.startswith('[ERROR') : return [],[],deferred,dropped,out[:500]
        passed=[];failed=[]
        for it in use:
            m=re.search(r'^%s\s+(\S+)'%re.escape(it[0]),out,flags=re.M)
            (passed if m and m.group(1)=='EQUIVALENT' else failed).append(it[0])         # only a function that differs or does not compile fails
        if deferred:        # a function declaring a callee unlike this file did is checked in a file of its own; handed back, no caller checked it
            p2,f2,d2,dr2,e2=run_file_robust(stem,deferred)       # (Virtua Tennis --regen: 13 of 92 drawn functions got no verdict)
            LAST['out']=out+'\n'+LAST.get('out','')              # the failure report reads every round's lines
            return passed+p2,failed+f2,d2,dropped+dr2,e2
        return passed,failed,deferred,dropped,''
