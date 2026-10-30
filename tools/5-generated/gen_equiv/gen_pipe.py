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
    # the register the original writes last before its rts decides which result is checked first: with fr0 and r0 both available the
    # float passed by luck on seven Zombie Revenge functions whose result is in r0, and the C was declared float
    try:
        import retcheck
        reg = retcheck.returns_in(*gen_core.SPANS[name])
        if reg in out and out[0] != reg:
            out.remove(reg); out.insert(0, reg)
    except Exception:
        pass
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

def own_signature(it):
    """The item's own definition as a prototype tuple, the way callers' prototypes are kept: ('int', 'float') or ('Stk3', '->float')"""
    m=re.match(r'\s*([A-Za-z_][\w \t\*]*?)\s*\b%s\s*\(([^)]*)\)'%re.escape(it[0]),it[1])
    if not m: return None
    ps=[x.strip() for x in m.group(2).split(',') if x.strip() and x.strip()!='void']
    sig=tuple(re.sub(r'\s*\b\w+$','',p).strip() if re.search(r'[\w\*]\s+\w+$',p) else p for p in ps)
    rt=m.group(1).strip()
    return sig+(('->float',) if rt=='float' else ('->%s'%rt,) if rt.startswith('Stk') else ())
def _declares(it):
    """What one file holding the item must agree on: its callees' prototypes and its own definition (a caller in the same file that
    declares it otherwise gets the definition's head and too few arguments: Zombie Revenge FUN_0c0de230, "Scalar required")"""
    d=dict(it[3]); own=own_signature(it)
    if own is not None: d[it[0]]=own
    return d
def _agrees(protos,d):
    return all(protos.get(k,v)==v or ('()',) in (protos.get(k),v) for k,v in d.items())
def compatible_groups(items):
    """The items in groups whose prototypes agree (no callee declared two ways, nor declared unlike its definition), in order:
    what one file can hold"""
    groups=[]; rest=list(items)
    while rest:
        protos={}; g=[]; later=[]
        for it in rest:
            d=_declares(it)
            if _agrees(protos,d): protos.update(d); g.append(it)
            else: later.append(it)
        if not g: g=[later.pop(0)]
        groups.append(g); rest=later
    return groups

def _split(stem,use,deferred,dropped,out):
    """A batch that failed as a whole (a link error, a compile error no line traces): each half is checked on its own, down to the one
    function that fails, which is dropped with the error, so every other function still gets its verdict (Zombie Revenge: 456
    functions in 15 batches had none, "undefined _quick_evn_mvn")"""
    err=out.strip().splitlines()[0] if out.strip() else 'failed'
    if len(use)<=1:
        for it in use: LAST.setdefault('why',{})[it[0]]=err
        rest=run_file_robust(stem,deferred) if deferred else ([],[],[],[],'')
        return rest[0],rest[1],rest[2],dropped+[it[0] for it in use]+rest[3],rest[4]
    h=len(use)//2; res=[]; outs=[]
    for part in (use[:h],use[h:]+list(deferred)):
        res.append(run_file_robust(stem,part)); outs.append(LAST.get('out',''))
    LAST['out']='\n'.join(outs)
    return res[0][0]+res[1][0],res[0][1]+res[1][1],res[0][2]+res[1][2],dropped+res[0][3]+res[1][3],''

def failed_in(out,names):
    """The names whose line in equiv.py's report of a file is not EQUIVALENT (or that have no line): what a written file must not keep"""
    return [n for n in names if not re.search(r'^%s\s+EQUIVALENT\b'%re.escape(n),out,flags=re.M)]

def run_file_robust(stem,items):
    items=list(items); dropped=[]
    while True:
        if not items: return [],[],[],dropped,''        # every function dropped as not compiling: nothing left to check
        gs=compatible_groups(items)
        use=gs[0]; deferred=[it for g in gs[1:] for it in g]
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
            if not bad: return _split(stem,use,deferred,dropped,out)        # no line names a function: split the batch until one does
            for ln in lines:
                for a_,b_,n_ in spans:
                    if a_<=ln<b_ and n_ in bad:
                        m_=re.search(r'gen_\w+\.c\(%d\) : (.*)'%ln,out)
                        LAST.setdefault('why',{}).setdefault(n_,(m_.group(1) if m_ else '?')+' [line %d: %s]'%(ln,text.split('\n')[ln-1].strip()))
            items=[it for it in items if it[0] not in bad]; dropped+=sorted(bad); continue
        if out.startswith('[ERROR') : return _split(stem,use,deferred,dropped,out)
        passed=[];failed=[]
        for it in use:
            m=re.search(r'^%s\s+(\S+)'%re.escape(it[0]),out,flags=re.M)
            (passed if m and m.group(1)=='EQUIVALENT' else failed).append(it[0])         # only a function that differs or does not compile fails
        if deferred:        # a function declaring a callee unlike this file did is checked in a file of its own; handed back, no caller checked it
            p2,f2,d2,dr2,e2=run_file_robust(stem,deferred)       # (Virtua Tennis --regen: 13 of 92 drawn functions got no verdict)
            LAST['out']=out+'\n'+LAST.get('out','')              # the failure report reads every round's lines
            return passed+p2,failed+f2,d2,dropped+dr2,e2
        return passed,failed,deferred,dropped,''
