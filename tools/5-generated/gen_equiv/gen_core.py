import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '../..')))
import toolpath  # noqa: E402,F401
import glob,json,os,re,struct,subprocess,copy
import gen_cfg
BIN=open('1ST_READ.BIN','rb').read(); BASE=int(open('BASE').read().strip(),16)
def in_ram(a):
    """An address in main RAM, in any of its mirrors (0x0C, 0x8C, 0xAC...)."""
    return isinstance(a,int) and 0x0C000000<=(a&0x1FFFFFFF)<0x0D000000
def canon(a):
    """The address as functions.txt writes it: the same function seen through another mirror maps to the listed one."""
    if a in FUNCS or not isinstance(a,int): return a
    b=(a&0x1FFFFFFF)|(BASE&0xE0000000)
    return b if b in FUNCS else a
def rd32(a): return struct.unpack_from('<I',BIN,a-BASE)[0]
M=0xffffffff
class Skip(Exception): pass
class Restart(Exception): pass     # something learned mid-reading (a callee returns a float) that earlier call sites need: read again
_FLOATRET=set()
class Conflict(Exception):         # two call sites give one callee different argument types: it is called through a cast at every site
    def __init__(self,fname): Exception.__init__(self,fname); self.fname=fname
_CONFLICTS=set()
_IJOIN=[False]       # the nearest common node as the join when no node is on every path: tried when the plain post-dominator join takes too many steps
DIRTY=('x',)          # a register the two arms of an if left different and unreadable
FUNCS={}; SPANS={}
_CUSTOM={}
def _custom_convention(name):
    """True for a function that takes registers C does not pass (tools/5-generated/classify.py no_c_form), or that is not in functions.txt."""
    if name not in _CUSTOM:
        sp=SPANS.get(name)
        if not sp: _CUSTOM[name]=True
        else:
            import classify
            _CUSTOM[name]=bool(classify.no_c_form(BIN,BASE,sp[0],sp[1]))
    return _CUSTOM[name]
for _l in open('functions.txt'):
    _p=_l.split()
    if len(_p)>=4 and _p[0]=='F': FUNCS[int(_p[1],16)]=_p[3]; SPANS[_p[3]]=(int(_p[1],16),int(_p[2]))
_STARTS=sorted(FUNCS)
ENDS={}          # where the code and literal pool of a function end: the next function's start (the pool after its last rts is in the gap, outside its listed size)
for _i,_a in enumerate(_STARTS):
    ENDS[FUNCS[_a]]=max(_STARTS[_i+1] if _i+1<len(_STARTS) else _a+SPANS[FUNCS[_a]][1],_a+SPANS[FUNCS[_a]][1])

def fbits(f): return struct.unpack('<I',struct.pack('<f',f))[0]
def ffmt(bits):
    f=struct.unpack('<f',struct.pack('<I',bits))[0]
    if f!=f or abs(f)==float('inf'): return '(*(float*)&(unsigned int){0x%X})'%bits
    s='%.9g'%f
    if '.' not in s and 'e' not in s and 'n' not in s: s+='.0'
    return s+'f'
class Ctx:
    def __init__(s,name):
        s.name=name; s.R={}; s.FR={}; s.stmts=[]; s.ntemp=0; s.iuse=set(); s.fuse=set(); s.addrs=[]; s.fpul=None
        s.mem_addrs=[]; s.dirty=set(); s.dwhy={}
    def gi(s,r):
        if s.R.get(r)==DIRTY: raise Skip('dirty '+r+' ['+s.dwhy.get(r,'')+']')
        if r=='r15':                         # the stack pointer as a value: the address of the current frame position
            if not s.frame: raise Skip('addr of local')
            return ('e','((int)stk + @@F:%d@@)'%(-s.D))
        if r not in s.R:
            n=int(r[1:])
            if 4<=n<=7: s.R[r]=('s','a%d'%n); s.iuse.add(n)
            elif 8<=n<=14 and getattr(s,'uninit',None) and getattr(s,'wrote_somewhere',set()) & {r}:
                s.uninit(r)                  # a callee-saved register this path never wrote, written on another: an uninitialised local in the original C
            else: raise Skip('read '+r)
        return s.R[r]
    def gf(s,r):
        if s.FR.get(r)==DIRTY: raise Skip('dirty '+r+' ['+s.dwhy.get(r,'')+']')
        if r not in s.FR and r=='fr0' and getattr(s,'lastcall',None):
            # fr0 right after a call is the callee's float result: that call returns a float (its line and prototype say so)
            lst,idx,t,fname=s.lastcall; s.lastcall=None
            if not lst[idx].startswith('int %s = '%t): raise Skip('read fr0')
            lst[idx]='float '+lst[idx][4:]
            s.protos[fname]=tuple(x for x in s.protos[fname] if x!='->float')+('->float',)
            if fname not in _FLOATRET and s.ncalls_to.get(fname,0)>1:
                _FLOATRET.add(fname); raise Restart()         # it was called before as returning an int: every site must take the float
            _FLOATRET.add(fname)
            if s.R.get('r0')==('e',t): del s.R['r0']
            s.FR['fr0']=('e',t); return s.FR['fr0']
        if r not in s.FR and s.swapped:
            if not getattr(s,'xf_snapshot',None): raise Skip('xf bank unset')
            s.xf_snapshot(s.FR)          # the back bank as the caller left it: read it with st_ext
        if r not in s.FR:
            n=int(r[2:])
            if 4<=n<=11: s.FR[r]=('s','f%d'%n); s.fuse.add(n)
            elif getattr(s,'uninit',None) and getattr(s,'wrote_somewhere',set()) & {r}:
                s.uninit(r)                  # the same for a float register: set on another path (uiPanelPut's fr15, kept from one round for the next)
            else: raise Skip('read '+r)
        return s.FR[r]
def ex(v):
    # int-valued expression string
    if v is None: raise Skip('undefined')
    if isinstance(v,int): return '0x%X'%v if v>=0 else str(v)
    if v[0]=='s': return v[1]
    if v[0]=='e': return v[1]
    raise Skip('ex '+str(v))
def fx(v):
    if isinstance(v,int): return ffmt(v)
    return v[1]
def isint(v): return isinstance(v,int)
def iop(op,a,b=None):
    if (isinstance(a,tuple) and a[0]=='srx') or (isinstance(b,tuple) and b[0]=='srx'): return srop(op,a,b)
    if isint(a) and (b is None or isint(b)):
        if op=='add': return (a+b)&M
        if op=='sub': return (a-b)&M
        if op=='and': return a&b
        if op=='or': return a|b
        if op=='xor': return a^b
        if op=='not': return (~a)&M
        if op=='neg': return (-a)&M
    if op=='add' and isint(b) and b>=0xFFFF0000: return ('e','(%s - %d)'%(ex(a),(-b)&M))
    if op=='add': return ('e','(%s + %s)'%(ex(a),ex(b)))
    if op=='sub': return ('e','(%s - %s)'%(ex(a),ex(b)))
    if op=='and': return ('e','(%s & %s)'%(ex(a),ex(b)))
    if op=='or': return ('e','(%s | %s)'%(ex(a),ex(b)))
    if op=='xor': return ('e','(%s ^ %s)'%(ex(a),ex(b)))
    if op=='not': return ('e','(~%s)'%ex(a))
    if op=='neg': return ('e','(-%s)'%ex(a))
    raise Skip(op)
def srop(op,a,b):
    """SR as a value: ('srx', s, m, V) = ((SR >> s) & m) | V. Only what get_imask / set_imask are made of: stc sr, shifts right,
    and with a constant, or with a value."""
    if isinstance(b,tuple) and b[0]=='srx': a,b=b,a
    if not isinstance(b,tuple) or b[0]!='srx':
        _,sh,m,V=a
        if op=='and' and isint(b) and V is None: return ('srx',sh,m&b,None)
        if op=='or' and sh==0: return ('srx',sh,m,b if V is None else iop('or',V,b))
    raise Skip('sr op '+op)
def sr_get_fin(c,reg):
    """(SR >> 4) & 15 is get_imask(): read now, while SR still holds what stc read."""
    v=c.R.get(reg)
    if isinstance(v,tuple) and v[0]=='srx' and v[1]==4 and v[2]==15 and v[3] is None:
        t='t%d'%c.ntemp; c.ntemp+=1
        c.protos['_builtin_get_imask']=()
        c.blocks[-1].append('int %s = _builtin_get_imask();'%t); c.R[reg]=('e',t)
_NOWRITE=('cmp','tst','mul','dmul','mac','jsr','jmp','bsrf','braf','lds','ldc','ocb','pref','movca','bra','bsr','bt','bf','rts','rte','nop','clrt','sett','clrmac','div0u','fcmp','ftst')
def call_constants(ins,addr2idx):
    """{index of a jsr: the address its register holds on every path to it}, from a forward scan of the code (reaching definitions of
    integer registers: a pool constant, a small constant or a copy of one; anything else is unknown; a call leaves r0-r7 unknown).
    The flat form keeps registers in variables, so a callee loaded in another block would otherwise be called as a pointer."""
    n=len(ins); TOP='?'
    def succ(i):
        mn,ops,pc=ins[i]; t=gen_cfg.target_of(ops) if ops else None; ti=addr2idx.get(t) if t is not None else None
        if mn in ('bra','jmp','braf','rts','rte'): return [i+1]
        if mn in ('bt/s','bf/s'): return [i+1]
        if mn in ('bt','bf'): return [i+1]+([ti] if ti is not None else [])
        return [i+1]
    slot_next={}                                                      # the instruction after a delay slot
    for i,(mn,ops,pc) in enumerate(ins):
        t=gen_cfg.target_of(ops) if ops else None; ti=addr2idx.get(t) if t is not None else None
        if mn=='bra': slot_next[i+1]=[ti] if ti is not None else []
        elif mn in ('jmp','braf','rts','rte'): slot_next[i+1]=[]
        elif mn in ('bt/s','bf/s'): slot_next[i+1]=[i+2]+([ti] if ti is not None else [])
        elif mn in ('jsr','bsr','bsrf'): slot_next[i+1]=[('call',i+2)]
    def transfer(i,st):
        mn,ops,pc=ins[i]; st=dict(st)
        raw=(ops or '').split(';')[0].strip(); a=[x.strip() for x in re.split(r',(?![^(]*\))',raw)] if raw else []
        for x in a:
            m=re.fullmatch(r'@(?:-)?(r\d+)\+?',x)
            if m and (x.endswith('+') or x.startswith('@-')): st[m.group(1)]=TOP
        if not a or mn.split('/')[0].startswith(_NOWRITE): return st
        d=a[-1]
        if not re.fullmatch(r'r\d+',d): return st
        if mn=='mov.l' and a[0].endswith(',pc)') and ';' in (ops or ''):
            m=re.search(r'=\s*([0-9a-fA-F]{8})',ops); st[d]=int(m.group(1),16) if m else TOP
        elif mn=='mov' and a[0].startswith('#'): st[d]=int(a[0][1:],0)&M
        elif mn=='mov' and re.fullmatch(r'r\d+',a[0]): st[d]=st.get(a[0],TOP)
        else: st[d]=TOP
        return st
    IN={0:{}}; work=[0]; seen=0
    def meet(old,new):
        if old is None: return dict(new),True
        out={k:v for k,v in old.items() if new.get(k,TOP)==v}
        return out,out!=old
    while work and seen<200000:
        i=work.pop(); seen+=1
        if i>=n: continue
        out=transfer(i,IN[i])
        nxt=slot_next[i] if i in slot_next else succ(i)
        for s in nxt:
            st=out
            if isinstance(s,tuple): s=s[1]; st={k:v for k,v in out.items() if not re.fullmatch(r'r[0-7]',k)}
            if s is None or s>=n: continue
            new,ch=meet(IN.get(s),st)
            if ch or s not in IN: IN[s]=new; work.append(s)
    res={}
    for i,(mn,ops,pc) in enumerate(ins):
        if mn=='jsr' and i in IN:
            r=(ops or '').split(';')[0].strip().strip('@'); v=IN[i].get(r)
            if isinstance(v,int): res[i]=v
    return res

_ALLREGS=frozenset(['r%d'%i for i in range(15)]+['fr%d'%i for i in range(16)])
_RW_ALU=('add','addc','addv','sub','subc','subv','and','or','xor','shad','shld','div1','fadd','fsub','fmul','fdiv','xtrct','rotcl','rotcr',
         'shll','shlr','shal','shar','shll2','shll8','shll16','shlr2','shlr8','shlr16','rotl','rotr','dt','fneg','fabs','fsqrt','fmac')
_READ_ONLY=('cmp','tst','fcmp','mul','mulu','muls','dmuls','dmulu','mac','lds','ldc','jmp','jsr','braf','bsrf','pref','ocbi','ocbp','ocbwb','ftrc','flds','div0s','fipr','ftrv')
def reg_liveness(ins,addr2idx):
    """{instruction index: registers live on entry} over the function's own code: a register a later instruction reads before
    anything writes it. A call reads the argument registers and writes r0-r7 / fr0-fr11; a return reads r0, fr0 and r8-r14.
    Anything not understood reads every register (conservative)."""
    n=len(ins)
    def expand(t):
        out=set()
        for r_ in re.findall(r'\b(f?r\d+|dr\d+)\b',t):
            if r_.startswith('dr'): k=int(r_[2:]); out|={'fr%d'%k,'fr%d'%(k+1)}
            else: out.add(r_)
        return out
    UD=[]
    def call_args(i):
        # the argument registers a call really reads: the block copy and division helpers their own registers, a named callee its
        # known arity (callee_arity: its code or its proven definition), anything else all of r4-r7 and fr4-fr11
        mn,ops,pc=ins[i]
        nm=None
        m_=re.search(r';\s*(?:=\s*[0-9a-fA-F]+\s+)?([A-Za-z_]\w*)\s*$',ops or '')
        if m_ and mn in ('bsr',): nm=m_.group(1)
        if mn=='jsr':
            rr=re.search(r'@(r\d+)',ops or '')
            for j in range(i-1,max(-1,i-8),-1):
                mj,oj,_=ins[j]
                if rr and re.search(r',\s*%s\s*(?:;|$)'%rr.group(1),(oj or '')):
                    m2=re.search(r';\s*=\s*[0-9a-fA-F]+\s+([A-Za-z_]\w*)',oj or '')
                    nm=m2.group(1) if (m2 and mj.startswith('mov')) else None
                    break
        if nm in ('_quick_mvn','_quick_odd_mvn','_quick_evn_mvn','_slow_mvn'): return {'r0','r1','r2'}
        if nm in ('_divls','_divlu','_modls','_modlu','_divws'): return {'r0','r1'}
        ar=None
        if nm and not nm.startswith('_'):
            try: ar=callee_arity(nm)
            except Exception: ar=None
        if ar: return {'r%d'%k for k in range(4,4+min(ar[0],4))}|{'fr%d'%k for k in range(4,4+min(ar[1],8))}
        return {'r4','r5','r6','r7'}|{'fr%d'%k for k in range(4,12)}
    for i_ud,(mn,ops,pc) in enumerate(ins):
        raw=(ops or '').split(';')[0].strip(); a=[x.strip() for x in re.split(r',(?![^(]*\))',raw)] if raw else []
        base=mn.split('/')[0].split('.')[0]
        use=set(); dfn=set()
        for x in a:
            if '@' in x:
                use|=expand(x)
                if x.endswith('+') or x.startswith('@-'): dfn|=expand(x)
        if mn in ('jsr','bsr','bsrf'):
            use|=expand(raw)|call_args(i_ud); dfn|={'r%d'%k for k in range(8)}|{'fr%d'%k for k in range(12)}
        elif mn in ('rts','rte'):
            use|={'r0','fr0','fr1'}|{'r%d'%k for k in range(8,15)}
        elif mn in ('nop','bra','bt','bf','bt/s','bf/s','clrt','sett','clrmac','fschg','frchg'):
            pass
        elif base in _READ_ONLY or mn.startswith(_READ_ONLY):
            for x in a: use|=expand(x)
        elif a and re.fullmatch(r'f?r\d+|dr\d+',a[-1]):
            d=expand(a[-1]); dfn|=d
            for x in a[:-1]: use|=expand(x)
            if base in _RW_ALU or mn in _RW_ALU: use|=d
            if mn=='fmac': use.add('fr0')
        elif a and '@' in a[-1]:
            for x in a: use|=expand(x)
        elif mn in ('fldi0','fldi1') or (mn in ('movt','sts','stc','mova','float') and a):
            if a: dfn|=expand(a[-1])
            for x in a[:-1]: use|=expand(x)
        else:
            use=set(_ALLREGS)
        # the T flag as one more register
        if mn in ('bt','bf','bt/s','bf/s','movt') or base in ('addc','subc','negc','rotcl','rotcr','div1'): use.add('T')
        if (base in ('cmp','tst','fcmp','dt','shll','shlr','shal','shar','rotl','rotr','rotcl','rotcr','addc','subc','negc',
                     'addv','subv','div0s','div0u','div1','sett','clrt','tas') or mn.startswith(('cmp/','fcmp/'))
                or mn in ('jsr','bsr','bsrf')): dfn.add('T')
        if mn in ('rts','rte'): use.discard('T')
        if use is _ALLREGS or use==set(_ALLREGS): use=set(_ALLREGS)|{'T'}
        UD.append((use,dfn))
    # a call's delay slot runs before the call transfers: what the slot reads (an argument moved into r4 there) is read by the
    # call, ahead of the clobbering of r0-r7 that the call node stands for
    for i_,(mn_,_o,_p) in enumerate(ins):
        if mn_ in ('jsr','bsr','bsrf') and i_+1<n:
            UD[i_]=(UD[i_][0]|UD[i_+1][0],UD[i_][1])
    succ={}
    for i,(mn,ops,pc) in enumerate(ins):
        t=gen_cfg.target_of(ops) if ops else None; ti=addr2idx.get(t) if t is not None else None
        if mn in ('bra',): succ[i]=[i+1]; succ[i+1]=[ti] if ti is not None else []
        elif mn in ('jmp','braf','rts','rte'): succ[i]=[i+1]; succ[i+1]=[] if mn!='braf' else list(range(n))
        elif mn in ('bt/s','bf/s'): succ[i]=[i+1]; succ[i+1]=[i+2]+([ti] if ti is not None else [])
        elif mn in ('bt','bf'): succ.setdefault(i,[i+1]+([ti] if ti is not None else []))
        else: succ.setdefault(i,[i+1])
    LIN=[set() for _ in range(n+1)]
    changed=True
    while changed:
        changed=False
        for i in range(n-1,-1,-1):
            out=set()
            for s_ in succ.get(i,[i+1]):
                if s_ is not None and s_<=n: out|=LIN[s_] if s_<n else set()
            use,dfn=UD[i]; new=use|(out-dfn)
            if new!=LIN[i]: LIN[i]=new; changed=True
    return {i:LIN[i] for i in range(n)}
_ARITY={}
_WRITE_ONLY=('mov','mov.b','mov.w','mov.l','extu.b','extu.w','exts.b','exts.w','neg','negc','not','swap.b','swap.w','sts','sts.l','float','mova',
             'fmov','fmov.s','fldi0','fldi1','fabs','fneg')
_COMPARE=('cmp','tst','fcmp')
class _PassThrough(Exception): pass
_SCAN_FILE=os.path.join('state','arity_scan.json')
try: _SCAN=json.load(open(_SCAN_FILE))
except Exception: _SCAN={}
_STACKW={}
def callee_stack_words(fname):
    """Words a function reads from the stack above its own frame, its stack arguments: loads at @r15 / @(k,r15) that, once the pushes and
    the frame it has made so far are counted, lie at or above the stack pointer it was called with. From a straight scan of its code
    up to its first return; 0 when it reads none or the code cannot be read. The compiler defers the stack adjustment of a call to a
    later one, so which of the words still on the stack are a call's own is told by what its callee reads."""
    if fname in _STACKW: return _STACKW[fname]
    n=0
    try:
        out=subprocess.run(['python3','tools/shdis.py','--func',fname],capture_output=True,text=True).stdout.splitlines()[2:]
        delta=0; seen=set()
        for l in out:
            m=re.match(r'([0-9a-f]{8}) ([0-9a-f]{4})\s+(\S+)\s*(.*)',l)
            if not m: continue
            mn=m.group(3); ops=m.group(4).split(';')[0].strip()
            if mn in ('rts','rte'): break
            a=[x.strip() for x in re.split(r',(?![^(]*\))',ops)] if ops else []
            if len(a)==2 and a[1]=='@-r15' and mn in ('mov.l','sts.l','fmov.s','stc.l'): delta+=4; continue
            if mn=='add' and len(a)==2 and a[1]=='r15' and a[0].startswith('#'): delta-=int(a[0][1:],0); continue
            if len(a)==2 and a[0]=='@r15+' and mn in ('mov.l','lds.l','ldc.l','fmov.s'):
                if -delta>=0 and mn in ('mov.l','fmov.s'): seen.add(-delta//4)
                delta-=4; continue
            if len(a)==2 and mn in ('mov.l','fmov.s'):
                mm=re.fullmatch(r'@\((\d+),r15\)',a[0]); k=int(mm.group(1)) if mm else (0 if a[0]=='@r15' else None)
                if k is not None and k-delta>=0 and (k-delta)%4==0: seen.add((k-delta)//4)
        n=min(8,max(seen)+1) if seen else 0
    except Exception:
        n=0
    _STACKW[fname]=n
    return n

def callee_arity(fname):
    """(integer arguments, float arguments) a function reads before it writes them, from a straight scan of its code up to its
    first return: r4-r7 and fr4-fr11. None when the code cannot be read. A guess for the prototype, not a proof: the call is
    compared on these arguments only."""
    if fname in _ARITY: return _ARITY[fname]
    res=None
    if fname in _SCAN:                   # the scan of the code (the original never changes), cached across runs
        res=tuple(_SCAN[fname]) if _SCAN[fname] is not None else None
        return _combine_def(fname,res)
    try:
        out=subprocess.run(['python3','tools/shdis.py','--func',fname],capture_output=True,text=True).stdout.splitlines()[2:]
        seen_r=set(); wrote=set(); maxi=-1; maxf=-1; after_ret=0; banked=False
        targets=set(); skipping=False        # branch targets seen: code after a return that a branch reaches is read too (an early return)
        for l in out:
            m=re.match(r'([0-9a-f]{8}) ([0-9a-f]{4})\s+(\S+)\s*(.*)',l)
            if not m: continue
            mn=m.group(3); ops=m.group(4).split(';')[0].strip()
            pc_=int(m.group(1),16)
            if skipping:
                if pc_ not in targets:
                    if pc_>max(targets): break
                    continue
                skipping=False
            if after_ret:
                after_ret-=1
                if after_ret==0:
                    if targets and max(targets)>pc_-2:
                        if pc_ not in targets: skipping=True; continue
                    else: break
            if mn in ('bra','bt','bf','bt/s','bf/s'):
                tg=re.match(r'0x([0-9a-f]+)',ops)
                if tg: targets.add(int(tg.group(1),16))
            a=[x.strip() for x in re.split(r',(?![^(]*\))',ops)] if ops else []
            regs=lambda t: re.findall(r'\b(f?r\d+)\b',t)
            base=mn.split('/')[0]
            dest=None; reads=[]
            if mn in ('fldi0','fldi1') and len(a)==1: dest=a[0]      # a constant load writes its register, reads nothing
            elif mn in ('jsr','bsr','jmp','bra','rts','nop','rte') or mn.startswith('b'):
                for t in a: reads+=regs(t)
                if mn in ('jsr','bsr'):
                    pass
            elif base in _COMPARE:
                for t in a: reads+=regs(t)
            elif mn in _WRITE_ONLY and len(a)>=2:
                last=a[-1]
                if re.fullmatch(r'f?r\d+',last): dest=last
                else: reads+=regs(last)
                for t in a[:-1]: reads+=regs(t)
                if len(a)>=2 and dest and ('@' in a[0]): pass
            elif len(a)>=2 and re.fullmatch(r'f?r\d+',a[-1]):
                dest=a[-1]; reads+=regs(a[-1])
                for t in a[:-1]: reads+=regs(t)
            else:
                for t in a: reads+=regs(t)
            if mn=='fmac': reads.append('fr0')
            if mn=='frchg': banked=not banked      # the other float bank: its registers are the saved matrix, not arguments
            for r in reads:
                if r in wrote or (banked and r.startswith('fr')): continue
                if re.fullmatch(r'r[4-7]',r): maxi=max(maxi,int(r[1:])-4)
                elif re.fullmatch(r'fr(4|5|6|7|8|9|10|11)',r): maxf=max(maxf,int(r[2:])-4)
            if dest: wrote.add(dest)
            slot=next((re.match(r'([0-9a-f]{8}) ([0-9a-f]{4})\s+(\S+)\s*(.*)',x) for x in out[out.index(l)+1:] if re.match(r'[0-9a-f]{8} ',x)),None)
            slot_w=set(re.findall(r',\s*(r[4-7])\s*$',slot.group(4).split(';')[0])) if slot else set()      # the delay slot runs before the call: an argument it sets is the wrapper's own
            if mn in ('jsr','bsr','bsrf','jmp','braf') and maxi<0 and maxf<0 and not ({'r4','r5','r6','r7'}&(wrote|slot_w)) and SPANS.get(fname,(0,99))[1]<=32:
                tgt_=None                # a call before it has read or written any argument register: a wrapper passing its arguments on
                cm=l.split(';',1)[1].strip() if ';' in l else ''
                if mn in ('bsr','bra') and re.fullmatch(r'\w+',cm): tgt_=cm
                elif mn in ('jsr','jmp') and a:
                    rg=a[0].strip('@')
                    for x in reversed(out[:out.index(l)]):
                        mm=re.match(r'[0-9a-f]{8} [0-9a-f]{4}\s+mov\.l\s+@\([^)]*,pc\),%s\s*;\s*=[0-9a-f]{8}\s+(\w+)'%rg,x)
                        if mm: tgt_=mm.group(1); break
                        if re.search(r',\s*%s\s*(;|$)'%rg,x.split(';')[0]+';'): break
                raise _PassThrough(tgt_)  # its arity is the arity of what it calls (unknown when that is unknown)
            if mn in ('jsr','bsr','jmp'):
                # an argument register this function has not written goes on to the callee as it came in: an argument here
                # too when the callee reads it (when the callee is unknown, a register this function never touches at all)
                tgt_=None
                cm=l.split(';',1)[1].strip() if ';' in l else ''
                if mn=='bsr' and re.fullmatch(r'\w+',cm): tgt_=cm
                elif a:
                    rg=a[0].strip('@')
                    for x in reversed(out[:out.index(l)]):
                        mm=re.match(r'[0-9a-f]{8} [0-9a-f]{4}\s+mov\.l\s+@\([^)]*,pc\),%s\s*;\s*=[0-9a-f]{8}\s+(\w+)'%rg,x)
                        if mm: tgt_=mm.group(1); break
                        if re.search(r',\s*%s\s*(;|$)'%rg,x.split(';')[0]+';'): break
                sub=callee_arity(tgt_) if tgt_ and tgt_!=fname else None
                if tgt_ and sub:
                    for i in range(min(sub[0],4)):        # r4-r7 only: further arguments are on the stack
                        if 'r%d'%(4+i) not in wrote|slot_w: maxi=max(maxi,i)
                    for i in range(min(sub[1],8)):
                        if 'fr%d'%(4+i) not in wrote|slot_w: maxf=max(maxf,i)
                elif not tgt_:
                    touched=set(re.findall(r'\b(r[4-7])\b',' '.join(x.split(';')[0] for x in out)))
                    for i in range(4):
                        if 'r%d'%(4+i) not in wrote|slot_w and 'r%d'%(4+i) not in touched: maxi=max(maxi,i)
            if mn in ('jsr','bsr'):
                wrote.update(['r4','r5','r6','r7']+['fr%d'%i for i in range(4,12)])
            if mn=='rts': after_ret=2
        res=(maxi+1,maxf+1)
    except _PassThrough as e:
        res=None
        if e.args and e.args[0] and e.args[0]!=fname:
            _ARITY[fname]=None           # a cycle reads as unknown
            res=callee_arity(e.args[0])
    except Exception:
        res=None
    _SCAN[fname]=res
    try:
        os.makedirs('state',exist_ok=True)
        json.dump(_SCAN,open(_SCAN_FILE+'.tmp','w')); os.replace(_SCAN_FILE+'.tmp',_SCAN_FILE)
    except Exception: pass
    return _combine_def(fname,res)

def _combine_def(fname,res):
    d=def_arity(fname)                      # the function's own proven definition: what it reads on every path
    if d and res:
        res=(max(res[0],d[0]),max(res[1],d[1]))
    elif d:
        res=d
    _ARITY[fname]=res
    return res

_DEFS=None
def def_arity(fname):
    """(integer, float) parameters of the function's definition in src/, or None."""
    global _DEFS
    if _DEFS is None:
        _DEFS={}
        for f in glob.glob('src/*.c'):
            txt=open(f,errors='replace').read()
            structs=set(re.findall(r'typedef\s+struct\s*\w*\s*\{[^{}]*\}\s*(\w+)\s*;',txt))|{'Stk%d'%k for k in range(1,65)}
            for m in re.finditer(r'^[A-Za-z_][\w \*]*?\b(\w+)\s*\(([^;{)]*)\)\s*\n\{',txt,re.M):
                ps=[x.strip() for x in m.group(2).split(',') if x.strip() and x.strip()!='void' and not (x.split()[0] in structs and '*' not in x)]      # a structure by value goes on the stack
                _DEFS.setdefault(m.group(1),(sum(1 for x in ps if not (x.startswith('float') and '*' not in x)),sum(1 for x in ps if x.startswith('float') and '*' not in x)))      # a float pointer is an integer argument
    return _DEFS.get(fname)

_DEFSR=None
def def_struct_ret(fname):
    """Words of the structure a function's definition in src/ returns by value (`Stk3 vecMake(...)` is 3), or 0."""
    global _DEFSR
    if _DEFSR is None:
        _DEFSR={}
        for f in glob.glob('src/*.c'):
            for m in re.finditer(r'^Stk(\d+)\s+(\w+)\s*\([^;{)]*\)\s*\n\{',open(f,errors='replace').read(),re.M):
                _DEFSR.setdefault(m.group(2),int(m.group(1)))
    return _DEFSR.get(fname,0)

_DEFSW=None
def def_stack_words(fname):
    """Words a function's definition in src/ takes from the stack as a leading structure by value (`Stk4 s` is 4), or 0."""
    global _DEFSW
    if _DEFSW is None:
        _DEFSW={}
        for f in glob.glob('src/*.c'):
            txt=open(f,errors='replace').read()
            for m in re.finditer(r'^[A-Za-z_][\w \*]*?\b(\w+)\s*\(([^;{)]*)\)\s*\n\{',txt,re.M):
                w=[int(k.group(1)) for x in m.group(2).split(',') for k in [re.match(r'\s*Stk(\d+)\s+\w+\s*$',x)] if k]
                if w: _DEFSW.setdefault(m.group(1),w[0])
    return _DEFSW.get(fname,0)

_DEFTOT=None
def def_stack_total(fname):
    """Every word a function's definition in src/ takes from the stack: its structures by value and its integers past r4-r7 (floats
    past fr11 too), in any order (winPartsPut: four ints, Stk3, int is 4). 0 when it has no definition."""
    global _DEFTOT
    if _DEFTOT is None:
        _DEFTOT={}
        for f in glob.glob('src/*.c'):
            txt=open(f,errors='replace').read()
            for m in re.finditer(r'^[A-Za-z_][\w \*]*?\b(\w+)\s*\(([^;{)]*)\)\s*\n\{',txt,re.M):
                ni=nf=w=0
                for x in m.group(2).split(','):
                    x=x.strip(); k=re.match(r'Stk(\d+)\s+\w+$',x)
                    if not x or x=='void': continue
                    if k: w+=int(k.group(1))
                    elif re.match(r'(float|double)\b',x) and '*' not in x:
                        nf+=1; w+=1 if nf>8 else 0
                    else:
                        ni+=1; w+=1 if ni>4 else 0
                _DEFTOT.setdefault(m.group(1),w)
    return _DEFTOT.get(fname,0)


def int_stack_words(fname):
    """Plain int words a callee takes past r4-r7: what its code reads above its frame (callee_stack_words), else what its definition in
    src/ declares past the fourth integer parameter (`int a4, ..., int a7, int a8` is 1). 0 for a definition taking a `Stk` structure
    (def_stack_words covers it)."""
    if def_stack_words(fname): return 0
    d=def_arity(fname)
    return callee_stack_words(fname) or (max(0,d[0]-4) if d else 0)


def variadic_seen(types): return '...' in types
def isfp(v): return isinstance(v,tuple) and v[0]=='fpend'      # a float kept on the pending stack
STACKY=('stack','read r15','addr of local','fpush','addr loop variable','ex (\'addr\'')
FLATTY=('flow braf','bloat','unstructured','too long','stack pointer differs','loop exits','recursion','stack local in a loop')
def run(name,passthru=False):
    """The first reading keeps the stack as symbolic values; when that fails on the stack, the whole frame becomes a C array
    (narrow accesses, locals changed in loops, addresses of locals and reads of unwritten slots are then plain memory). When the
    control flow has no if / while form (arms meeting at different joins, loops entered from a jump table, paths that multiply), the
    function is written flat: a label per block, every register a variable, goto between blocks."""
    _FLOATRET.clear()
    form=os.environ.get('GEN_FORM','')      # 'flat' or 'structured' forces one form (tools/7-reduction/shrink.py compiles both and keeps the smaller)
    if form=='flat':
        for _ in range(10):
            try: return _run(name,passthru,True,True)
            except Conflict as e: _CONFLICTS.add(e.fname)
            except Restart: continue
        raise Skip('proto conflict: %s'%', '.join(sorted(_CONFLICTS)))
    for _ in range(4):
        try:
            c_=_run_structured(name,passthru)
            if form=='structured': return c_
            # arms that meet at different joins are written once per path: when that makes the text much longer than the
            # flat form (each block once), the flat form compiles far smaller (pedSpawn: 26,328 bytes structured, 676 flat)
            try:
                f_=_run(name,passthru,True,True)
                if len('\n'.join(map(str,c_.stmts)))>2*len('\n'.join(map(str,f_.stmts))): return f_
            except Exception: pass
            return c_
        except Restart: continue
        except RecursionError: break
        except Skip as e:
            if not any(k in str(e) for k in FLATTY): raise
            break
    for _ in range(10):
        try: return _run(name,passthru,True,True)
        except Conflict as e: _CONFLICTS.add(e.fname)
        except Restart: continue        # two sites give one callee different arguments: a cast at every site
    raise Skip('proto conflict: %s'%', '.join(sorted(_CONFLICTS)))
def _run_structured(name,passthru=False):
    _CONFLICTS.clear(); _IJOIN[0]=False
    for _ in range(10):
        try:
            try: return _run(name,passthru,False)
            except Skip as e:
                if not any(k in str(e) for k in STACKY): raise
            return _run(name,passthru,True)
        except Conflict as e: _CONFLICTS.add(e.fname)
        except Skip as e:
            if 'too long' in str(e) and not _IJOIN[0]: _IJOIN[0]=True; continue
            raise
    raise Skip('proto conflict: %s'%', '.join(sorted(_CONFLICTS)))
def _run(name,passthru=False,frame=False,flat=False):
    out=subprocess.run(['python3','tools/shdis.py','--func',name],capture_output=True,text=True).stdout.splitlines()[2:]
    ins=[]
    for l in out:
        m=re.match(r'([0-9a-f]{8}) ([0-9a-f]{4})\s+(\S+)\s*(.*)',l)
        if m: ins.append((m.group(3),m.group(4),int(m.group(1),16)))
    if ins and ins[-1][0] in ('bra','bsr','jsr','jmp','rts','braf','bsrf','bt/s','bf/s'):      # a function whose size stops at its last branch: the delay slot is the next instruction in the binary
        nxt=ins[-1][2]+2
        for l in subprocess.run(['python3','tools/shdis.py','%x'%nxt,'%x'%(nxt+2)],capture_output=True,text=True).stdout.splitlines():
            m=re.match(r'([0-9a-f]{8}) ([0-9a-f]{4})\s+(\S+)\s*(.*)',l)
            if m and int(m.group(1),16)==nxt: ins.append((m.group(3),m.group(4),nxt)); break
    c=Ctx(name); c.nemit=0; c.emit_limit=10**9 if flat else 6*(SPANS.get(name,(0,0))[1]//2)+300; c.sz=False; c.XF={}; c.swapped=False; c.in_prologue=True; c.T=None; c.blocks=[c.stmts]; c.stack={}; c.protos={}; c.ncalls=0; c.ncalls_to={}; c.pcalls=0; c.argvars={}; c.tail=None; c.pt=passthru; c.start_pc=ins[0][2] if ins else 0
    TY={'l':('int',4),'w':('short',2),'b':('signed char',1)}
    def addr_expr(base,off):
        # base: value; off: int or value
        b=base
        if isint(b) and isint(off): return ('const',(b+off)&M)
        if isinstance(b,tuple) and b[0]=='addr': raise Skip('addr')
        return ('expr','(%s + %s)'%(ex(b),ex(off)))
    def pool(ad,n):
        # a read at a constant address inside this function's own code is a literal pool or table (a `mova` result): fold it
        sp=SPANS.get(c.name)
        if ad[0]=='const' and sp and sp[0]<=ad[1] and ad[1]+n<=ENDS.get(c.name,sp[0]+sp[1]): return ad[1]
    def load(sz,ad):
        pa=pool(ad,TY[sz][1])
        if pa is not None:
            if sz=='l': return rd32(pa)
            v=int.from_bytes(BIN[pa-BASE:pa-BASE+TY[sz][1]],'little'); h=1<<(8*TY[sz][1]-1)
            return ((v^h)-h)&M
        t='t%d'%c.ntemp; c.ntemp+=1
        ty=TY[sz][0]
        if ad[0]=='const': c.blocks[-1].append('%s %s = *(%s *)0x%X;'%('int',t,ty,ad[1])); c.mem_addrs.append(('c',ad[1]))
        else: c.blocks[-1].append('int %s = *(%s *)(%s);'%(t,ty,ad[1])); c.mem_addrs.append(('e',ad[1]))
        return ('e',t)
    def store(sz,ad,val):
        T={'l':'unsigned int','w':'unsigned short','b':'unsigned char'}[sz]
        v=ex(val)
        if ad[0]=='const': c.blocks[-1].append('*(%s *)0x%X = %s;'%(T,ad[1],v)); c.mem_addrs.append(('c',ad[1]))
        else: c.blocks[-1].append('*(%s *)(%s) = %s;'%(T,ad[1],v)); c.mem_addrs.append(('e',ad[1]))
    def fload(ad):
        pa=pool(ad,4)
        if pa is not None: return rd32(pa)
        t='u%d'%c.ntemp; c.ntemp+=1
        if ad[0]=='const': c.blocks[-1].append('float %s = *(float *)0x%X;'%(t,ad[1])); c.mem_addrs.append(('c',ad[1]))
        else: c.blocks[-1].append('float %s = *(float *)(%s);'%(t,ad[1])); c.mem_addrs.append(('e',ad[1]))
        return ('e',t)
    def fstore(ad,val):
        if ad[0]=='const': c.blocks[-1].append('*(float *)0x%X = %s;'%(ad[1],fx(val))); c.mem_addrs.append(('c',ad[1]))
        else: c.blocks[-1].append('*(float *)(%s) = %s;'%(ad[1],fx(val))); c.mem_addrs.append(('e',ad[1]))
    def parse_mem(s):
        s=s.strip()
        m=re.match(r'@\(0x[0-9a-f]+,pc\)',s)
        if m: return ('pc',)
        m=re.match(r'@\((\d+),(r\d+)\)$',s)
        if m: return ('disp',int(m.group(1)),m.group(2))
        m=re.match(r'@\((\d+),gbr\)$',s)
        if m: return ('gbr',int(m.group(1)))
        m=re.match(r'@\(r0,(r\d+)\)$',s)
        if m: return ('r0',m.group(1))
        m=re.match(r'@(r\d+)$',s)
        if m: return ('ind',m.group(1))
        m=re.match(r'@(r\d+)\+$',s)
        if m: return ('post',m.group(1))
        m=re.match(r'@-(r\d+)$',s)
        if m: return ('pre',m.group(1))
        raise Skip('mem '+s)
    def memaddr(mm):
        k=mm[0]
        if k=='disp': return addr_expr(c.gi(mm[2]),mm[1])
        if k=='r0': return addr_expr(c.gi(mm[1]),c.gi('r0'))
        if k=='ind': return addr_expr(c.gi(mm[1]),0)
        if k=='gbr':                                     # GBR-relative: the base register through the SDK's own intrinsic
            c.protos['_builtin_get_gbr']=()
            return ('expr','((int)_builtin_get_gbr() + %d)'%mm[1])
        raise Skip('memaddr')
    def exec1(mn,rawops):
        ops=rawops; com=''
        if ';' in rawops: ops,com=rawops.split(';',1); ops=ops.strip(); com=com.strip()
        a=[x.strip() for x in re.split(r',(?![^(]*\))',ops)] if ops else []
        for _i,_x in enumerate(a):
            if _x=='@(r0,r15)' and isinstance(c.R.get('r0'),int): a[_i]='@(%d,r15)'%c.R['r0']   # a stack slot by a constant in r0
        if mn=='nop': return
        if mn=='rts': return 'rts'
        base=mn.split('.')[0]
        # stack frame handling. c.D is how far r15 is below its value at entry; a slot is named by its distance from the
        # entry value (negative inside the frame, from 0 up the arguments the caller left)
        if mn=='sts.l' and a[0] in ('pr','macl','mach') and a[1]=='@-r15': c.D+=4; c.maxD=max(c.maxD,c.D); return
        if mn=='lds.l' and a[0]=='@r15+' and a[1] in ('pr','macl','mach'): c.D-=4; return
        if mn in('mov.l',) and a[0].startswith('r') and a[1]=='@-r15':
            n=int(a[0][1:])
            c.D+=4; c.maxD=max(c.maxD,c.D)
            if n==15 and not c.in_prologue:
                # the stack pointer itself pushed: the address of the frame, the hidden pointer a function returning a structure by value takes
                if not c.frame: raise Skip('stack address of the frame pushed')      # the first reading keeps the stack symbolic: read again with the frame as an array
                c.pend.append(('e','((int)stk + @@F:%d@@)'%(-(c.D-4)))); return
            if (c.in_prologue and n>=8) or (n>=8 and a[0] not in c.R): return      # a callee-saved register saved in the prologue; r4-r7 pushed there are arguments
            v=c.gi(a[0])                       # an argument pushed for the next call (or a value kept for a pop)
            if isinstance(v,tuple) and v[0]=='addr': raise Skip('addr arg')
            if isinstance(v,tuple) and v[0]=='e' and re.fullmatch(r'[tR]\d+',v[1]):
                # a variable the code may assign again before the pop (a loop's register variable): the word holds its value now
                t=fresh(False); emit('int %s = %s;'%(t,v[1])); v=('e',t)
            if c.frame: emit('*(int *)((int)stk + @@F:%d@@) = %s;'%(-c.D,ex(v)))      # in the frame too, as a float push is: a call that reads its
                                                 # structure from the frame at SP reads the word there (hudFadeNearPlayers -> camWorldToView)
            c.pend.append(v); return
        if mn=='fmov.s' and a[0].startswith('fr') and a[1]=='@-r15':
            n=int(a[0][2:])
            c.D+=4; c.maxD=max(c.maxD,c.D)
            if c.in_prologue or (n>=12 and a[0] not in c.FR): return
            val=c.gf(a[0]); c.pend.append(('fpend',val))      # a float kept for a pop or passed on the stack
            if c.frame: fstore(('expr','((int)stk + @@F:%d@@)'%(-c.D)),val)     # still readable in place (fmov.s @r15,frN)
            else: c.stack[(-c.D,'f')]=val
            return
        if mn=='mov.l' and a[1].startswith('r') and c.pend and (a[0]=='@r15' or re.match(r'^@\((\d+),r15\)$',a[0])):      # a reload of a word pushed before a call that took none of it: the pending push, not memory
            dsp=0 if a[0]=='@r15' else int(re.match(r'^@\((\d+),r15\)$',a[0]).group(1))
            if dsp%4==0 and dsp//4<len(c.pend) and not isfp(c.pend[-1-dsp//4]):
                c.R[a[1]]=c.pend[-1-dsp//4]; return
        if mn=='mov.l' and a[0]=='@r15+' and a[1].startswith('r'):
            ab=-c.D
            c.D-=4
            if c.pend:
                if isfp(c.pend[-1]): raise Skip('float popped into integer register')
                c.R[a[1]]=c.pend.pop()
            elif a[1] in ('r0','r1','r2','r3','r4','r5','r6','r7') and ab<0:      # a word stored to the frame with a plain store and read back by a pop (an argument for a tail call): a load from that slot
                key=(ab,'i')
                if key in c.stack: c.R[a[1]]=c.stack[key]
                elif c.frame: c.R[a[1]]=load('l',('expr','((int)stk + @@F:%d@@)'%ab))
            return
        if mn=='fmov.s' and a[0]=='@r15+' :
            ab=-c.D
            c.D-=4
            if c.pend and isfp(c.pend[-1]): c.FR[a[1]]=c.pend.pop()[1]
            elif int(a[1][2:])<12 and ab<0:          # a float kept across calls that took the pending pushes (cpuDblReceivePos): the push
                if (ab,'f') in c.stack: c.FR[a[1]]=c.stack[(ab,'f')]      # stored it in the frame, read it back there; fr12-fr15 popped
                elif c.frame: c.FR[a[1]]=fload(('expr','((int)stk + @@F:%d@@)'%ab))      # are the epilogue's restores
            return
        if mn in('add','sub') and a[1]=='r15':
            if a[0].startswith('#'): n=int(a[0][1:])
            else:
                v=c.R.get(a[0])
                if isinstance(v,tuple) and v[0]=='e' and v[1] in c.lvconst: v=c.lvconst[v[1]]      # a loop variable the code just set to a constant
                if not isint(v): raise Skip('stack pointer step')
                n=v-(1<<32) if v&0x80000000 else v
                if mn=='sub': n=-n
            if n>0 and n%4==0 and c.pend: del c.pend[len(c.pend)-min(n//4,len(c.pend)):]      # arguments dropped after the call that read them
            c.D-=n; c.maxD=max(c.maxD,c.D); return
        if mn=='mov' and a[0]=='r15':
            if not c.frame: raise Skip('addr of local')
            c.R[a[1]]=('e','((int)stk + @@F:%d@@)'%(-c.D)); return
        if mn=='mov' and a[1]=='r15': raise Skip('stack pointer set')
        m15=re.match(r'@\((\d+),r15\)$',a[1]) if len(a)>1 else None
        m15b=(a[1]=='@r15') if len(a)>1 else False
        if mn in('mov.l','mov.w','mov.b','fmov.s') and (m15 or m15b) and (a[0].startswith('r') or a[0].startswith('fr')):
            off=int(m15.group(1)) if m15 else 0
            ab=off-c.D; isf=a[0].startswith('fr')
            if ab>=0:
                # the callee owns the argument area the caller left: a store there is a write to its own copy of a stack argument
                if mn in ('mov.w','mov.b') and not isf:
                    # part of its own stack argument (a short or a byte; cameraExec, Virtua Tennis): a narrow read back sees the part, a
                    # whole-word read or a copy of the area the word with the part merged in (little-endian)
                    w_=ab&~3; sh_=8*(ab&3); mk_=0xFFFF if mn=='mov.w' else 0xFF
                    if mn=='mov.w' and ab%2: raise Skip('store into the caller frame')
                    pv_=fresh(False); emit('int %s;'%pv_); emit('%s = %s;'%(pv_,ex(c.gi(a[0]))))
                    old_=c.stack.get((w_,'i'))
                    if old_ is None:
                        c.iuse.add(8+w_//4); old_=('s','a%d'%(8+w_//4))
                    wv_=fresh(False); emit('int %s;'%wv_)
                    emit('%s = (%s & ~0x%X) | ((%s & 0x%X) << %d);'%(wv_,ex(old_),mk_<<sh_,pv_,mk_,sh_))
                    c.stack[(w_,'i')]=('e',wv_); c.argvars[(w_,'i')]=wv_
                    c.stack[(ab,'i')]=('e','((%s)%s)'%('short' if mn=='mov.w' else 'signed char',pv_))
                    if c.frame: store(mn[-1],('expr','((int)stk + @@F:%d@@)'%ab),('e',pv_))
                    return
                if ab%4 or mn not in ('mov.l','fmov.s'): raise Skip('store into the caller frame')
                key_=(ab,'f' if isf else 'i'); val_=c.gf(a[0]) if isf else c.gi(a[0])
                var_=c.argvars.get(key_)
                if var_ is None:
                    var_=fresh(isf); c.argvars[key_]=var_; emit('%s %s;'%('float' if isf else 'int',var_))
                emit('%s = %s;'%(var_,fx(val_) if isf else ex(val_)))
                if c.frame:         # the frame array mirrors the caller's words: a copy or a pointer into it reads the new value too (hudSignFirstPut)
                    ad_=('expr','((int)stk + @@F:%d@@)'%ab)
                    if isf: fstore(ad_,('e',var_))
                    else: store('l',ad_,('e',var_))
                c.stack[key_]=('e',var_); return
            val=c.gf(a[0]) if isf else c.gi(a[0])
            if c.frame:
                ad=('expr','((int)stk + @@F:%d@@)'%ab)
                if isf: fstore(ad,val)
                else: store(mn[-1],ad,val)
            else:
                if mn!='mov.l' and mn!='fmov.s': raise Skip('stack narrow')
                c.stack[(ab,'f' if isf else 'i')]=val
            return
        m15=re.match(r'@\((\d+),r15\)$',a[0]) if len(a)>1 else None
        m15b=(a[0]=='@r15') if len(a)>1 else False
        if mn in('mov.l','mov.w','mov.b','fmov.s') and (m15 or m15b) and (a[1].startswith('r') or a[1].startswith('fr')):
            off=int(m15.group(1)) if m15 else 0
            ab=off-c.D; isf=a[1].startswith('fr')
            key=(ab,'f' if isf else 'i')
            if ab>=0 and key in c.stack:                  # a stack argument slot this function wrote earlier
                if isf: c.FR[a[1]]=c.stack[key]
                else: c.R[a[1]]=c.stack[key]
                return
            if ab>=0:
                # an argument the caller passed on the stack
                if not isf and mn in ('mov.w','mov.b'):         # part of a stack argument: the low half or byte of the word the caller left (little-endian)
                    n=8+ab//4; part=ab%4
                    if (mn=='mov.w' and part%2) : raise Skip('stack argument read')
                    c.iuse.add(n)
                    c.R[a[1]]=('e','((%s)(a%d >> %d))'%('short' if mn=='mov.w' else 'signed char',n,8*part)); return
                if isf and mn=='fmov.s' and ab%4==0:        # a float the caller left on the stack: the stack parameter's bits, read as a float
                    n=8+ab//4; c.iuse.add(n); c.FR[a[1]]=('e','*(float *)&a%d'%n); return
                if isf or mn!='mov.l' or ab%4: raise Skip('stack argument read')
                n=8+ab//4
                c.iuse.add(n); c.R[a[1]]=('s','a%d'%n); return
            if c.frame:
                ad=('expr','((int)stk + @@F:%d@@)'%ab)
                if isf: c.FR[a[1]]=fload(ad)
                else: c.R[a[1]]=load(mn[-1],ad)
                return
            if key not in c.stack: raise Skip('stack read')
            if mn=='mov.l' or mn=='fmov.s':
                if isf: c.FR[a[1]]=c.stack[key]
                else: c.R[a[1]]=c.stack[key]
                return
            raise Skip('stack narrow')
        # constant loads
        if mn in('mov.l','mov.w') and re.match(r'@\(0x[0-9a-f]+,pc\)',a[0]):
            if mn=='mov.w':
                m2=re.match(r'=(-?\d+)',com); c.R[a[1]]=int(m2.group(1))&M
            else:
                mm=re.match(r'=([0-9a-fA-F]+)',com); c.R[a[1]]=int(mm.group(1),16)
            return
        if mn=='mova':
            m2=re.match(r'@\((0x[0-9a-f]+),pc\)',a[0]); c.R['r0']=int(m2.group(1),16); return   # the numeric address; reads of it fold in pool()
        if mn=='tas.b':                    # test and set: T = the byte was 0 (SHC's _builtin_tas returns that), and bit 7 is set
            e='_builtin_tas((char *)%s)'%ex(c.gi(a[0].strip('@')))
            c.protos['_builtin_tas']=('char *',)
            setT('(%s != 0)'%e,'(%s == 0)'%e); return
        if mn=='pref':                        # prefetch a cache line: SHC's prefetch(); no effect the check can see
            c.protos['_builtin_prefetch']=('void *',); c.blocks[-1].append('_builtin_prefetch((void *)%s);'%ex(c.gi(a[0].strip('@')))); return
        if mn=='stc' and a[0]=='sr': c.R[a[1]]=('srx',0,M,None); return
        # control registers through the SDK's own intrinsics (smachine.h / umachine.h: get_vbr, set_vbr, get_gbr, set_gbr, get_fpscr, set_fpscr)
        if mn=='stc' and a[0] in ('vbr','gbr'):
            nm='_builtin_get_%s'%a[0]; c.protos[nm]=(); t='t%d'%c.ntemp; c.ntemp+=1
            emit('int %s = (int)%s();'%(t,nm)); c.R[a[1]]=('e',t); return      # SHC's own: it returns a pointer
        if mn=='ldc' and a[1] in ('vbr','gbr'):
            nm='_builtin_set_%s'%a[1]; c.protos[nm]=('int',)
            emit('%s((void *)(%s));'%(nm,ex(c.gi(a[0])))); return              # SHC's own: it takes a pointer
        if mn=='sts' and a[0]=='fpscr':
            c.protos['_builtin_get_fpscr']=(); t='t%d'%c.ntemp; c.ntemp+=1
            emit('int %s = _builtin_get_fpscr();'%t); c.R[a[1]]=('e',t); c.fpscr_saved=getattr(c,'fpscr_saved',set())|{t}; return
        if mn=='lds' and a[1]=='fpscr':
            v=c.gi(a[0])
            # only a restore of a value read earlier: the FPU mode the generator tracks (fschg, frchg) is then unchanged at the end
            if isinstance(v,tuple) and v[0]=='e' and v[1] in getattr(c,'fpscr_saved',set()):
                c.protos['_builtin_set_fpscr']=('int',); emit('_builtin_set_fpscr(%s);'%v[1]); return
            # a changed value: fine while the bits the generator tracks (SZ, FR) stay as they are
            mode=(1 if c.sz else 0)|(2 if c.swapped else 0)
            keep=False
            if isint(v): keep=((v>>20)&3)==mode
            elif isinstance(v,tuple) and v[0]=='e':
                mm=re.match(r'^\((t\d+) ([&|]) (0x[0-9A-Fa-f]+)\)$',v[1])
                if mm and mm.group(1) in getattr(c,'fpscr_saved',set()):
                    k=int(mm.group(3),16)
                    kb=(k>>20)&3
                    newmode=(mode&kb) if mm.group(2)=='&' else (mode|kb)
                    keep=(newmode&2)==(mode&2)                         # FR (the bank) must stay; SZ (the move size) follows the write
                    if keep: c.sz=bool(newmode&1)
            if not keep and not (isinstance(v,tuple) and v[0]=='e' and re.match(r'^[tu]\d+$',v[1])): raise Skip('lds fpscr not a restore')
            # a value carried in a variable (through a join or a loop): written as it is; the check catches a mode the generator did not follow
            c.protos['_builtin_set_fpscr']=('int',); emit('_builtin_set_fpscr(%s);'%(ex(v))); return
        if mn=='ldc' and a[1]=='sr':
            v=c.gi(a[0])
            if isinstance(v,tuple) and v[0]=='srx' and v[1]==0 and v[2]!=0xFFFFFF0F:
                # SR changed beyond the interrupt mask (the BL bit, the register bank...): the whole word through the SDK's set_cr / get_cr
                # (the bits or-ed in are a constant, or a value the function computed)
                c.protos['_builtin_set_cr']=('int',); c.protos['_builtin_get_cr']=()
                val='(_builtin_get_cr() & 0x%X)'%v[2] + ((' | 0x%X'%v[3] if isint(v[3]) else ' | (%s)'%ex(v[3])) if v[3] else '')
                c.blocks[-1].append('_builtin_set_cr(%s);'%val); return
            if not(isinstance(v,tuple) and v[0]=='srx' and v[1]==0 and v[2]==0xFFFFFF0F): raise Skip('ldc sr not set_imask')
            V=0 if v[3] is None else v[3]
            arg='0x%X'%((V&0xF0)>>4) if isint(V) else '((unsigned int)%s >> 4)'%ex(V)
            if isint(V) and V&~0xF0: raise Skip('ldc sr not set_imask')
            c.protos['_builtin_set_imask']=('int',)
            c.blocks[-1].append('_builtin_set_imask(%s);'%arg); return
        if mn=='mov' and a[0].startswith('#'): c.R[a[1]]=int(a[0][1:])&M; return
        if mn=='mov' and a[0].startswith('r'): c.R[a[1]]=c.gi(a[0]); return
        if mn=='add' and a[0].startswith('#'):
            v=c.gi(a[1])
            if isinstance(v,tuple) and v[0]=='addr': raise Skip('addr')
            c.R[a[1]]=iop('add',v,int(a[0][1:])&M if int(a[0][1:])>=0 else int(a[0][1:])&M); return
        if mn in('add','sub','and','or','xor') and a[0].startswith('r'):
            x=c.gi(a[1]); y=c.gi(a[0])
            for v in (x,y):
                if isinstance(v,tuple) and v[0]=='addr': raise Skip('addr')
            c.R[a[1]]=iop(mn,x,y); sr_get_fin(c,a[1]); return
        if mn in('and','or','xor') and a[0].startswith('#'):
            v=c.gi(a[1]); c.R[a[1]]=iop(mn,v,int(a[0][1:])&0xff); sr_get_fin(c,a[1]); return
        if mn in ('not','neg'): c.R[a[1]]=iop(mn,c.gi(a[0])); return
        if mn in ('mul.l','muls.w','mulu.w'):
            x=c.gi(a[0]); y=c.gi(a[1])
            cast={'mul.l':'int','muls.w':'short','mulu.w':'unsigned short'}[mn]
            c.macl=('e','((%s)%s * (%s)%s)'%(cast,ex(y),cast,ex(x))) if mn!='mul.l' else ('e','(%s * %s)'%(ex(y),ex(x))); return
        if mn=='sts' and a[0]=='macl':
            if getattr(c,'macl',None) is None: raise Skip('macl')
            c.R[a[1]]=c.macl; return
        if mn=='shll': v=c.gi(a[0]); c.R[a[0]]=(v<<1)&M if isint(v) else ('e','(%s << 1)'%ex(v)); return
        if mn in('shll2','shll8','shll16'):
            n={'shll2':2,'shll8':8,'shll16':16}[mn]; v=c.gi(a[0]); c.R[a[0]]=(v<<n)&M if isint(v) else ('e','(%s << %d)'%(ex(v),n)); return
        if mn in('shlr','shlr2','shlr8','shlr16'):
            n={'shlr':1,'shlr2':2,'shlr8':8,'shlr16':16}[mn]; v=c.gi(a[0])
            if isinstance(v,tuple) and v[0]=='srx':
                if v[3] is not None: raise Skip('sr shift')
                c.R[a[0]]=('srx',v[1]+n,v[2]>>n,None); sr_get_fin(c,a[0]); return
            c.R[a[0]]=(v>>n) if isint(v) else ('e','((unsigned int)%s >> %d)'%(ex(v),n)); return
        if mn in ('shad','shld'):
            m=c.gi(a[0]); v=c.gi(a[1]); sg=mn=='shad'
            if isint(m):
                n=m-(1<<32) if m&0x80000000 else m
                if n>=0: c.R[a[1]]=(v<<(n&31))&M if isint(v) else ('e','(%s << %d)'%(ex(v),n&31))
                elif (-n)&31:
                    k=(-n)&31
                    c.R[a[1]]=('e','((%s)%s >> %d)'%('int' if sg else 'unsigned int',ex(v),k))
                    if isint(v): c.R[a[1]]=((((v^0x80000000)-0x80000000)>>k)&M) if sg else (v>>k)
                else: c.R[a[1]]=('e','((int)%s >> 31)'%ex(v)) if sg else 0
            else:
                ty='int' if sg else 'unsigned int'
                x=ex(m); y=ex(v)
                c.R[a[1]]=('e','(((int)%s >= 0) ? (%s << (%s & 31)) : ((-(int)%s & 31) ? ((%s)%s >> (-(int)%s & 31)) : %s))'%(x,y,x,x,ty,y,x,'((int)%s >> 31)'%y if sg else '0'))
            return
        if mn=='shar': v=c.gi(a[0]); c.R[a[0]]=('e','(%s >> 1)'%ex(v)) if not isint(v) else ((v>>1)|(v&0x80000000)); return
        if mn=='swap.w':
            v=c.gi(a[0]); c.R[a[1]]=((((v&0xffff)<<16)|((v>>16)&0xffff))&M) if isint(v) else ('e','((((unsigned int)%s) << 16) | (((unsigned int)%s) >> 16))'%(ex(v),ex(v))); return
        if mn=='swap.b':
            v=c.gi(a[0]); c.R[a[1]]=(((v&0xffff0000)|((v&0xff)<<8)|((v>>8)&0xff))&M) if isint(v) else ('e','((((unsigned int)%s) & 0xFFFF0000) | ((((unsigned int)%s) & 0xFF) << 8) | ((((unsigned int)%s) >> 8) & 0xFF))'%(ex(v),ex(v),ex(v))); return
        if mn=='extu.b': v=c.gi(a[0]); c.R[a[1]]=(v&0xff) if isint(v) else ('e','(unsigned char)%s'%ex(v)); return
        if mn=='extu.w': v=c.gi(a[0]); c.R[a[1]]=(v&0xffff) if isint(v) else ('e','(unsigned short)%s'%ex(v)); return
        if mn=='exts.b': v=c.gi(a[0]); c.R[a[1]]=('e','(signed char)%s'%ex(v)) if not isint(v) else (((v&0xff)^0x80)-0x80)&M; return
        if mn=='exts.w': v=c.gi(a[0]); c.R[a[1]]=('e','(short)%s'%ex(v)) if not isint(v) else (((v&0xffff)^0x8000)-0x8000)&M; return
        if mn in('mov.l','mov.w','mov.b'):
            sz=mn[-1]
            if a[0].startswith('r'):   # store
                mm=parse_mem(a[1]); v=c.gi(a[0])
                if isinstance(v,tuple) and v[0]=='addr': raise Skip('addr val')
                if mm[0]=='pre':
                    nb=c.gi(mm[1]); step={'l':4,'w':2,'b':1}[sz]; nb=iop('sub',nb,step); c.R[mm[1]]=nb; store(sz,addr_expr(nb,0),v); return
                store(sz,memaddr(mm),v); return
            else:   # load
                mm=parse_mem(a[0])
                if mm[0]=='post':
                    b=c.gi(mm[1]); t=load(sz,addr_expr(b,0)); step={'l':4,'w':2,'b':1}[sz]; c.R[mm[1]]=iop('add',b,step); c.R[a[1]]=t; return
                c.R[a[1]]=load(sz,memaddr(mm)); return
        if mn=='sett': setT('1','0'); return
        if mn=='clrt': setT('0','1'); return
        if mn in ('addc','subc','rotcl','rotcr','rotr','rotl','cmp/str'):
            U=lambda e:'(unsigned int)%s'%e
            if mn in ('addc','subc','rotcl','rotcr'):
                if c.T is None: raise Skip('no T')
                tbit='((%s) ? 1u : 0u)'%c.T
            if mn=='addc':
                x=ex(c.gi(a[1])); y=ex(c.gi(a[0])); s_=fresh(False); r_=fresh(False); f_=fresh(False)
                emit('int %s = (int)(%s + %s);'%(s_,U(x),U(y))); emit('int %s = (int)(%s + %s);'%(r_,U(s_),tbit))
                emit('int %s = ((%s < %s) | (%s < %s)) ? 1 : 0;'%(f_,U(s_),U(x),U(r_),U(s_)))
                c.R[a[1]]=('e',r_); setT('(%s != 0)'%f_,'(%s == 0)'%f_); return
            if mn=='subc':
                x=ex(c.gi(a[1])); y=ex(c.gi(a[0])); s_=fresh(False); r_=fresh(False); f_=fresh(False)
                emit('int %s = (int)(%s - %s);'%(s_,U(x),U(y))); emit('int %s = (int)(%s - %s);'%(r_,U(s_),tbit))
                emit('int %s = ((%s < %s) | (%s < %s)) ? 1 : 0;'%(f_,U(x),U(s_),U(s_),U(r_)))
                c.R[a[1]]=('e',r_); setT('(%s != 0)'%f_,'(%s == 0)'%f_); return
            if mn=='cmp/str':
                x='(%s ^ %s)'%(U(ex(c.gi(a[1]))),U(ex(c.gi(a[0]))))
                cond='(((%s & 0xFFu) == 0) || ((%s & 0xFF00u) == 0) || ((%s & 0xFF0000u) == 0) || ((%s & 0xFF000000u) == 0))'%(x,x,x,x)
                setT(cond,'(!%s)'%cond); return
            x=ex(c.gi(a[0])); r_=fresh(False); f_=fresh(False)
            xs=fresh(False); emit('int %s = %s;'%(xs,x))
            if mn=='rotcl': emit('int %s = (int)((%s << 1) | %s);'%(r_,U(xs),tbit)); emit('int %s = (int)(%s >> 31);'%(f_,U(xs)))
            elif mn=='rotcr': emit('int %s = (int)((%s >> 1) | (%s << 31));'%(r_,U(xs),tbit)); emit('int %s = %s & 1;'%(f_,xs))
            elif mn=='rotr': emit('int %s = (int)((%s >> 1) | (%s << 31));'%(r_,U(xs),U(xs))); emit('int %s = %s & 1;'%(f_,xs))
            else: emit('int %s = (int)((%s << 1) | (%s >> 31));'%(r_,U(xs),U(xs))); emit('int %s = (int)(%s >> 31);'%(f_,U(xs)))
            c.R[a[0]]=('e',r_); setT('(%s != 0)'%f_,'(%s == 0)'%f_); return
        if mn=='movt':                                           # the last comparison, as 1 or 0
            if c.T is None: raise Skip('no T')
            c.R[a[0]]=('e','((%s) ? 1 : 0)'%c.T); return
        # floats
        if mn=='fldi0': c.FR[a[0]]=0; return
        if mn=='fldi1': c.FR[a[0]]=0x3f800000; return
        if mn=='fsca' and a[0]=='fpul':
            if c.fpul is None: raise Skip('fpul unset')
            n_=int(a[1][2:]); ang=ex(c.fpul); sn=fresh(True); cs=fresh(True)
            emit('float %s = iaFscaS(%s);'%(sn,ang)); emit('float %s = iaFscaC(%s);'%(cs,ang))
            c.protos['iaFscaS']=('int',); c.protos['iaFscaC']=('int',)
            c.FR['fr%d'%n_]=('e',sn); c.FR['fr%d'%(n_+1)]=('e',cs); return
        if mn=='fsrra':
            t_=fresh(True); emit('float %s = iaFsrra(%s);'%(t_,fx(c.gf(a[0])))); c.protos['iaFsrra']=('float',); c.FR[a[0]]=('e',t_); return
        if mn in ('ocbi','ocbp','ocbwb'):
            nm={'ocbi':'iaOcbi','ocbp':'iaOcbp','ocbwb':'iaOcbwb'}[mn]; c.protos[nm]=('void *',)
            emit('%s((void *)%s);'%(nm,ex(c.gi(a[0].strip('@'))))); return
        if mn=='movca.l':
            c.protos['iaMovca']=('int','void *'); emit('iaMovca(%s, (void *)%s);'%(ex(c.gi('r0')),ex(c.gi(a[1].strip('@'))))); return
        if mn=='fschg': c.sz=not c.sz; return
        if mn=='frchg':
            if c.swapped and c.FR and not c.sz:      # leaving the back bank after writing registers into it: the matrix keeps them
                regs_=sorted(int(k[2:]) for k in c.FR if k.startswith('fr'))
                if any(c.FR[k]==DIRTY for k in c.FR): raise Skip('xf bank dirty')
                m_=fresh(True); emit('float %s[16];'%m_)
                c.protos['_builtin_st_ext']=('float (*)[4]',); c.protos['_builtin_ld_ext']=('float (*)[4]',)
                emit('_builtin_st_ext((float (*)[4])%s);'%m_)
                for i in regs_: emit('%s[%d] = %s;'%(m_,i,fx(c.FR['fr%d'%i])))
                emit('_builtin_ld_ext((float (*)[4])%s);'%m_)
                c.FR,c.XF=c.XF,{}; c.swapped=False; c.xf_entry=True; return
            c.FR,c.XF=c.XF,c.FR; c.swapped=not c.swapped; return
        if c.sz and mn in ('fmov','fmov.s'):       # size mode 1: a move takes a register pair; an odd register number names the other bank
            def pair_get(k):
                bank=c.XF if k&1 else c.FR
                names=('fr%d'%(k&14),'fr%d'%((k&14)+1))
                if bank is c.FR: return c.gf(names[0]),c.gf(names[1])
                if names[0] not in bank or names[1] not in bank:
                    if bank is c.XF and not c.swapped: c.xf_snapshot(bank)
                    else: raise Skip('xf bank unset')
                return bank[names[0]],bank[names[1]]
            def pair_put(k,hi,lo):
                bank=c.XF if k&1 else c.FR
                bank['fr%d'%(k&14)]=hi; bank['fr%d'%((k&14)+1)]=lo
                if bank is c.XF and not c.swapped:            # a write to the back bank (XD register): the matrix keeps it
                    if hi==DIRTY or lo==DIRTY: raise Skip('xf bank dirty')
                    m_=fresh(True); emit('float %s[16];'%m_)
                    c.protos['_builtin_st_ext']=('float (*)[4]',); c.protos['_builtin_ld_ext']=('float (*)[4]',)
                    emit('_builtin_st_ext((float (*)[4])%s);'%m_)
                    emit('%s[%d] = %s;'%(m_,k&14,fx(hi))); emit('%s[%d] = %s;'%(m_,(k&14)+1,fx(lo)))
                    emit('_builtin_ld_ext((float (*)[4])%s);'%m_)
                    c.xf_entry=True
            def plus4(ad): return ('const',(ad[1]+4)&M) if ad[0]=='const' else ('expr','(%s + 4)'%ad[1])
            num=lambda r:int(r[2:])
            if mn=='fmov':
                pair_put(num(a[1]),*pair_get(num(a[0]))); return
            if a[0].startswith('fr'):                # store the pair: the odd register at the address, the even one 4 above
                hi,lo=pair_get(num(a[0])); mm=parse_mem(a[1])
                if mm[0]=='pre':
                    nb=iop('sub',c.gi(mm[1]),8); c.R[mm[1]]=nb; ad=addr_expr(nb,0)
                else: ad=memaddr(mm)
                fstore(ad,lo); fstore(plus4(ad),hi); return
            mm=parse_mem(a[0])
            if mm[0]=='post':
                b=c.gi(mm[1]); ad=addr_expr(b,0); c.R[mm[1]]=iop('add',b,8)
            else: ad=memaddr(mm)
            lo=fload(ad); hi=fload(plus4(ad)); pair_put(num(a[1]),hi,lo); return
        if mn=='ftrv' and a[0]=='xmtrx':
            vn=int(a[1][2:]); names=['fr%d'%i for i in range(16)]
            if c.sz: raise Skip('ftrv in size mode 1')
            if (not c.XF or getattr(c,'xf_entry',False)) and not c.swapped:           # the matrix is whatever the caller left in the back bank: use it as it is
                c.xf_entry=True; v_=fresh(True); emit('float %s[4];'%v_)
                for i in range(4): emit('%s[%d] = %s;'%(v_,i,fx(c.gf('fr%d'%(vn+i)))))
                c.protos['_builtin_ftrv']=('float *','float *'); emit('_builtin_ftrv(%s, %s);'%(v_,v_))
                for i in range(4): c.FR['fr%d'%(vn+i)]=('e','%s[%d]'%(v_,i))
                return
            if any(r not in c.XF for r in names): raise Skip('xmtrx unset')
            m_=fresh(True); v_=fresh(True)
            emit('float %s[16];'%m_); emit('float %s[4];'%v_)
            for i in range(16): emit('%s[%d] = %s;'%(m_,i,fx(c.XF['fr%d'%i])))
            for i in range(4): emit('%s[%d] = %s;'%(v_,i,fx(c.gf('fr%d'%(vn+i)))))
            c.protos['_builtin_ld_ext']=('float (*)[4]',); c.protos['_builtin_ftrv']=('float *','float *')
            emit('_builtin_ld_ext((float (*)[4])%s);'%m_); emit('_builtin_ftrv(%s, %s);'%(v_,v_))
            for i in range(4): c.FR['fr%d'%(vn+i)]=('e','%s[%d]'%(v_,i))
            return
        if mn=='fipr':
            vm=int(a[0][2:]); vn=int(a[1][2:])
            if c.sz: raise Skip('fipr in size mode 1')
            x_=fresh(True); y_=fresh(True); r_=fresh(True)
            emit('float %s[4];'%x_); emit('float %s[4];'%y_)
            for i in range(4): emit('%s[%d] = %s;'%(x_,i,fx(c.gf('fr%d'%(vm+i)))))
            for i in range(4): emit('%s[%d] = %s;'%(y_,i,fx(c.gf('fr%d'%(vn+i)))))
            c.protos['_builtin_fipr']=('float *','float *','->float')
            emit('float %s = _builtin_fipr(%s, %s);'%(r_,x_,y_))
            c.FR['fr%d'%(vn+3)]=('e',r_); return
        if mn=='fmov' and a[0].startswith('fr'): c.FR[a[1]]=c.gf(a[0]); return
        if mn=='fmov.s':
            if a[0].startswith('fr'):   # store
                mm=parse_mem(a[1]); v=c.gf(a[0])
                if mm[0]=='pre':
                    nb=iop('sub',c.gi(mm[1]),4); c.R[mm[1]]=nb; fstore(addr_expr(nb,0),v); return
                fstore(memaddr(mm),v); return
            else:
                mm=parse_mem(a[0])
                if mm[0]=='post':
                    b=c.gi(mm[1]); c.FR[a[1]]=fload(addr_expr(b,0)); c.R[mm[1]]=iop('add',b,4); return
                c.FR[a[1]]=fload(memaddr(mm)); return
        if mn in('fadd','fsub','fmul','fdiv'):
            x=c.gf(a[1]); y=c.gf(a[0]); op={'fadd':'+','fsub':'-','fmul':'*','fdiv':'/'}[mn]
            neg=lambda v: isint(v) and v&0x80000000 and (v&0x7F800000)!=0x7F800000
            if mn=='fmul' and (neg(x) or neg(y)) and not (isint(x) and isint(y)):
                # times a negative constant: SHC writes x * -k as -(x * k) (fmul then fneg, which flips the sign of a NaN); as
                # a compound assignment it keeps the negative constant, as the original's fmul does
                v,k=(x,y) if neg(y) else (y,x)
                t=fresh(True); emit('float %s = %s;'%(t,fx(v))); emit('%s *= %s;'%(t,fx(k)))
                c.FR[a[1]]=('e',t); return
            if mn=='fmul':
                # a product of a product: SHC reorders a chain of multiplies (rounding differs); a statement of its own keeps the order
                if not isint(x) and ' * ' in fx(x): t=fresh(True); emit('float %s = %s;'%(t,fx(x))); x=('e',t)
                if not isint(y) and ' * ' in fx(y): t=fresh(True); emit('float %s = %s;'%(t,fx(y))); y=('e',t)
            c.FR[a[1]]=('e','(%s %s %s)'%(fx(x),op,fx(y))); return
        if mn=='fsqrt':
            c.protos['_builtin_sqrtf']=('float','->float'); c.FR[a[0]]=('e','_builtin_sqrtf(%s)'%fx(c.gf(a[0]))); return
        if mn=='fsts' and a[0]=='fpul':     # the bits of fpul as a float
            v=c.fpul
            if v is None: raise Skip('fpul unset')
            if isint(v): c.FR[a[1]]=v; return
            t=fresh(False); emit('int %s = %s;'%(t,ex(v))); c.FR[a[1]]=('e','(*(float *)&%s)'%t); return
        if mn=='flds' and a[1]=='fpul':     # the bits of a float in fpul
            v=c.gf(a[0])
            if isint(v): c.fpul=v; return
            t=fresh(True); emit('float %s = %s;'%(t,fx(v))); c.fpul=('e','(*(int *)&%s)'%t); return
        if mn=='fneg': c.FR[a[0]]=('e','(-%s)'%fx(c.gf(a[0]))); return
        if mn=='fmac' and len(a)==3 and a[0]=='fr0':       # frn += fr0 * frm
            acc=c.gf(a[2]); x=c.gf(a[0]); y=c.gf(a[1])
            t=fresh(True); emit('float %s = %s;'%(t,fx(acc))); emit('%s = %s + %s * %s;'%(t,t,fx(x),fx(y)))      # a statement of its own, as the source has it: the compiler then selects fmac (one rounding)
            c.FR[a[2]]=('e',t); return
        if mn=='fabs':
            c.FR[a[0]]=('e','_builtin_fabsf(%s)'%fx(c.gf(a[0]))); return      # the compiler's own fabs (it clears the sign bit: fabs(-0.0) is +0.0); built in, not declared
        if mn=='lds' and a[1]=='fpul': c.fpul=c.gi(a[0]); return
        if mn=='float' and a[0]=='fpul': c.FR[a[1]]=('e','(float)%s'%ex(c.fpul)); return
        if mn=='ftrc': c.fpul=('e','(int)%s'%fx(c.gf(a[0]))); return
        if mn=='sts' and a[0]=='fpul': c.R[a[1]]=c.fpul; return
        raise Skip(mn+' '+rawops)
    addr2idx={x[2]:i for i,x in enumerate(ins)}
    try: CALLC=call_constants(ins,addr2idx)        # a callee loaded into a register in another block
    except Exception: CALLC={}
    def ind_variadic_hint(fname):
        return fname in ('nlPrintf','printf','sprintf','nlSprintf')
    def note_span(n,d,sr):
        # a block copy reads n bytes from its source and writes n to its destination, but only their first addresses appear in the C:
        # the stack words counted from the C would stop at the first (hudFontNumPut, Virtua Tennis: a 12-byte point copied from the caller's area)
        c.spans=getattr(c,'spans',[])+[(ex(d),n),(ex(sr),n)]
    def note_sarg(n,d,sr):
        # a block copy whose destination is the stack pointer itself: a structure passed by value (SHC builds the outgoing arguments
        # there), taken by the next call at the same stack depth as its argument after the register ones
        try:
            # the argument is the copy at SP, the bytes the callee receives: not the source, whose register (a C variable in the flat and
            # loop forms) can be reused before the call (hudFontNumPut, Virtua Tennis: r2 held the point, then the callee's address)
            if 1<=n<=256 and ex(d)=='((int)stk + @@F:%d@@)'%(-c.D):        # a size short of whole words fills its last one (three
                c.sarg=((n+3)//4,ex(d),c.D)                                  # shorts: miniTargetInit -> bodyCreate, Virtua Tennis)
                c.sargs=[s_ for s_ in getattr(c,'sargs',[]) if s_[2]!=c.D]+[c.sarg]      # every structure copied to SP: two by value (cpuLineXAtZ)
        except Exception: pass
    def do_call(fname,tail=False,ind=None,after=None,after2=None):
        if c.sz or c.swapped: raise Skip('call with the FPU mode changed')
        if fname in ('_divls','_divlu','_modls','_modlu'):
            # the compiler's division helpers: dividend r1, divisor r0, result r0 (r1 is used up, the others come back unchanged)
            if tail: raise Skip('helper as a tail call')
            ty='int' if fname.endswith('s') else 'unsigned int'
            t=fresh(False); emit('int %s = (int)((%s)%s %s (%s)%s);'%(t,ty,ex(c.gi('r1')),'/' if fname.startswith('_div') else '%',ty,ex(c.gi('r0'))))
            c.R['r0']=('e',t); c.R.pop('r1',None); return
        if fname=='_divws':
            # the 16-bit signed division helper: dividend r1, divisor r0 (both as shorts), result r0 as a short; r1 is used up
            if tail: raise Skip('helper as a tail call')
            t=fresh(False); emit('int %s = (int)(short)((short)%s / (short)%s);'%(t,ex(c.gi('r1')),ex(c.gi('r0'))))
            c.R['r0']=('e',t); c.R.pop('r1',None); return
        if fname=='_slow_strcpy':
            # the compiler's string copy: destination r0, source r1; the registers it uses come back unknown
            if tail: raise Skip('helper as a tail call')
            d_=ex(c.gi('r0')); s_=ex(c.gi('r1')); k=fresh(False)
            emit('int %s;'%k)
            emit('for (%s = 0; ; %s++) { *(unsigned char *)(%s + %s) = *(unsigned char *)(%s + %s); if (*(unsigned char *)(%s + %s) == 0) break; }'%(k,k,d_,k,s_,k,s_,k))
            for n_r in range(0,8): c.R.pop('r%d'%n_r,None)
            return
        if fname=='_allzero':
            # the compiler's test that n bytes at p are all zero: p r4, n r5, result r0 (1 when all zero); r1-r7 are used up
            if tail: raise Skip('helper as a tail call')
            p_=ex(c.gi('r4')); n_=ex(c.gi('r5')); t=fresh(False); k=fresh(False)
            emit('int %s = 1;'%t); emit('int %s;'%k)
            emit('for (%s = 0; %s < (int)%s; %s++) { if (*(unsigned char *)(%s + %s) != 0) { %s = 0; break; } }'%(k,k,n_,k,p_,k,t))
            for n_r in range(1,8): c.R.pop('r%d'%n_r,None)
            c.R['r0']=('e',t); return
        if fname in ('_quick_odd_mvn','_quick_evn_mvn','_quick_mvn','_slow_mvn'):
            # a block copy: length r0 (bytes), destination r1, source r2; r0 is left unknown (and r1 for the byte copy), r2-r7 are kept
            n=c.gi('r0')
            if isinstance(n,tuple) and n[0]=='e' and n[1] in c.lvconst: n=c.lvconst[n[1]]      # a loop variable the code just set to the length
            if tail: raise Skip('block copy tail')
            d=c.gi('r1'); sr=c.gi('r2')
            if fname=='_quick_mvn' and isint(n) and n>64:
                # its path for more than 64 bytes: whole words while the source pointer stays at or below source + size (unsigned, so a
                # source near the top of the address space copies nothing), as the helper's loop does
                p_=fresh(False); e_=fresh(False); d_=fresh(False); w_=fresh(False)
                emit('int %s = %s;'%(p_,ex(sr))); emit('int %s = (%s + %s);'%(e_,ex(sr),n)); emit('int %s = %s;'%(d_,ex(d))); emit('int %s;'%w_)
                emit('for (;;) { %s = *(int *)%s; %s = (%s + 4); if ((unsigned int)%s < (unsigned int)%s) break; *(unsigned int *)%s = %s; %s = (%s + 4); }'%(w_,p_,p_,p_,e_,p_,d_,w_,d_,d_))
            elif isint(n) and n%4==0 and 8<=n<=256 and fname in ('_quick_odd_mvn','_quick_evn_mvn','_quick_mvn') and os.environ.get('GEN_STRUCT_COPY','1')=='1':
                # a block of whole words: a struct assignment of that size, which the compiler turns back into the same helper call
                # (what the source wrote: a vector or table copied as a struct), instead of one load and store per word
                k_=n//4
                emit('{ struct mv%d { int w[%d]; }; *(struct mv%d *)(%s) = *(struct mv%d *)(%s); }'%(k_,k_,k_,ex(d),k_,ex(sr)))
                note_sarg(n,d,sr); note_span(n,d,sr)
            elif isint(n) and n%4==0 and n<=256 and fname in ('_quick_odd_mvn','_quick_evn_mvn'):
                # these two read one word ahead of the store (the last word is read before the jump into the copy)
                w=load('l',addr_expr(sr,n-4))
                for off in range(n-8,-1,-4):
                    nw=load('l',addr_expr(sr,off)); store('l',addr_expr(d,off+4),w); w=nw
                store('l',addr_expr(d,0),w)
            elif isint(n) and n%4==0 and n<=256 and fname!='_slow_mvn':
                for off in range(n-4,-1,-4): store('l',addr_expr(d,off),load('l',addr_expr(sr,off)))
            elif isint(n) and fname=='_slow_mvn' and 8<=n<=256 and os.environ.get('GEN_STRUCT_COPY','1')=='1':
                # the byte mover: a struct of chars assigned, which the compiler turns back into the same call (one call, not a load and a store per byte)
                emit('{ struct mvb%d { char b[%d]; }; *(struct mvb%d *)(%s) = *(struct mvb%d *)(%s); }'%(n,n,n,ex(d),n,ex(sr)))
                note_sarg(n,d,sr); note_span(n,d,sr)
            elif isint(n) and n<=64:
                for off in range(n): store('b',addr_expr(d,off),load('b',addr_expr(sr,off)))
                if fname=='_slow_mvn': note_sarg(n,d,sr)      # a small structure copied to SP byte by byte is passed by value too
            else:                                   # any other length: a byte loop
                k=fresh(False)
                emit('int %s = 0;'%k)
                emit('for (; %s < (int)%s; %s++) *(unsigned char *)(%s + %s) = *(unsigned char *)(%s + %s);'%(k,ex(n),k,ex(d),k,ex(sr),k))
            c.R['r0']=DIRTY
            if fname=='_slow_mvn': c.R['r1']=DIRTY
            return
        if fname in ('_bfxlu','_bfslu'):
            # bit fields, unsigned: r1 = (offset << 8) | width-end, r2 = the address of the word; _bfxlu returns the field in r0,
            # _bfslu stores r0 into the field (and leaves the value masked to the field in r0). r1 and r2 are kept
            desc=c.gi('r1'); p=c.gi('r2')
            if tail or not isint(desc): raise Skip('bit field descriptor')
            a=(desc>>8)&0xff; w=desc&0xff
            if w<1 or w>32: raise Skip('bit field descriptor')
            sh=32-w-a
            if sh<0: raise Skip('bit field descriptor')
            wmask=(1<<w)-1
            old=load('l',addr_expr(p,0))
            if fname=='_bfxlu':
                t=fresh(False); emit('int %s = (int)(((unsigned int)%s >> %d) & 0x%X);'%(t,ex(old),sh,wmask)); c.R['r0']=('e',t); return
            v=c.gi('r0')
            t=fresh(False); emit('int %s = (int)((unsigned int)%s & 0x%X);'%(t,ex(v),wmask))
            store('l',addr_expr(p,0),('e','((%s & 0x%X) | ((unsigned int)%s << %d))'%(ex(old),(~(wmask<<sh))&M,t,sh)))
            c.R['r0']=('e',t); return
        if fname.startswith('_') and _custom_convention(fname): raise Skip('compiler helper %s'%fname)      # a helper with its own register convention; one with the normal one is an ordinary call
        iargs=[]; 
        avail=[]
        for n in range(4,8):
            r='r%d'%n
            if r in c.R and c.R[r]!=DIRTY: avail.append(n)
            elif r not in c.R and c.pt and c.ncalls==0: avail.append(n)
        fav=[]
        for n in range(4,12):
            r='fr%d'%n
            if r in c.FR and c.FR[r]!=DIRTY: fav.append(n)
        ar=None if ind else callee_arity(fname)
        def isadd(x):                  # an add to r15 that drops exactly the words pushed for this call (a bigger one is the frame's teardown)
            if not (x and x[0]=='add' and parse_ops(x[1])[-1]=='r15'): return False
            o_=parse_ops(x[1])[0]
            if o_.startswith('#') and c.pend:
                try: return int(o_[1:],0)==4*len(c.pend)
                except ValueError: return True
            return True
        def teardown(x):                 # an instruction of the epilogue: the add before it frees the frame, not the call's arguments
            return bool(x) and (x[0]=='rts' or (x[0] in ('lds.l','mov.l','fmov.s') and '@r15+' in (x[1] or '')))
        nsw=0 if ind else max(callee_stack_words(fname),def_stack_words(fname))      # what its code reads, or its definition takes when more:
                                                 # a variadic print reads only its format directly (ADXERR_CallErrFunc's Stk3: three words pushed)
        own_stack=bool(nsw) and len(c.pend)>=nsw
        if own_stack: c.pend=c.pend[-nsw:]      # the words below this callee's own are earlier calls': their stack adjustment was deferred to this one
        # a callee whose definition returns a structure by value, called with one word pushed: the word is SHC's hidden return pointer,
        # whatever holds it (a local's address, the caller's own pointer, a register variable in the flat form: cameraExec), and the call
        # is an assignment of the structure (vecMake's callers, Virtua Tennis)
        sret=0 if ind else def_struct_ret(fname)
        if sret and not (len(c.pend)==1 and not isfp(c.pend[0])): sret=0
        # words pushed before a structure copied to SP for this call sit above it on the stack: arguments after the structure, when the
        # callee takes more stack words than the structures hold (winDrawA -> winPartsPut, Virtua Tennis: an int pushed, then a point
        # copied below it). Not a spill, and not before the structure in the argument list
        # words pushed after a structure was copied to SP sit below it: the leading words of one structure by value, when the callee's
        # definition takes a structure that holds both (hudFadeNearPlayers -> camWorldToView(Stk4), footMarkCheck -> vecSub(Stk5), Virtua
        # Tennis: the result pointer pushed in the call's delay slot was taken for a spill, and word 0 of the structure was never set)
        sa0=getattr(c,'sarg',None)
        dsw=0 if ind else def_stack_words(fname)
        if (c.pend and sa0 and not ind and not sret and sa0[2]==c.D-4*len(c.pend) and not any(isfp(v) for v in c.pend)
                and dsw>=len(c.pend)+sa0[0]):
            if not c.frame: raise Skip('stack words of the callee read from the frame')      # the first reading keeps the stack symbolic: read again with the frame as an array
            for k_,v in enumerate(reversed(c.pend)):
                c.blocks[-1].append('*(int *)((int)stk + @@F:%d@@) = %s;'%(-(c.D-4*k_),ex(v)))
            c.sarg=(len(c.pend)+sa0[0],'((int)stk + @@F:%d@@)'%(-c.D),c.D)
            c.sargs=[s_ for s_ in getattr(c,'sargs',[]) if s_[2]!=sa0[2]]+[c.sarg]
            c.pend=[]
        # the same when the definition takes those words as plain ints past a7: the words pushed and the structures copied to SP, all in
        # the frame (a push is stored there too), are its stack arguments, read from the frame (miniTargetInit -> bodyCreate, Virtua
        # Tennis: a pointer pushed in the delay slot below a point and three shorts; the C passed the pointer alone)
        fromframe=False
        isw=0 if (ind or dsw) else max(int_stack_words(fname),def_stack_total(fname))      # every word the definition takes, not
                                                 # only those its code reads directly (bodyCreate reads two of its five)
        if isw and not sret and c.pend and not any(isfp(v) for v in c.pend):
            byD1={s_[2]:s_ for s_ in getattr(c,'sargs',[])}; d1=c.D-4*len(c.pend); cw1=0
            while d1 in byD1: cw1+=byD1[d1][0]; d1-=4*byD1[d1][0]
            if cw1 and len(c.pend)+cw1>=isw:
                if not c.frame: raise Skip('stack words of the callee read from the frame')
                c.pend=[]; c.sarg=None; c.sargs=[]; fromframe=True
        post=[]
        sa0=getattr(c,'sarg',None)
        if c.pend and sa0 and sa0[2]==c.D and not ind and not sret:
            byD0={s_[2]:s_ for s_ in getattr(c,'sargs',[])}; d0=c.D; cw=0
            while d0 in byD0: cw+=byD0[d0][0]; d0-=4*byD0[d0][0]
            if max(nsw,def_stack_total(fname))>cw:
                k0=min(len(c.pend),max(nsw,def_stack_total(fname))-cw); post=list(reversed(c.pend))[:k0]; c.pend=c.pend[:len(c.pend)-k0]
        cleanup=(isadd(after) and (not teardown(after2) or (bool(c.pend) and c.D-4*len(c.pend)>=getattr(c,'pro_D',0)))) or (bool(after) and (after[0] in ('bra','bsr') or after[0].startswith(('bt','bf'))) and isadd(after2))   # arguments are dropped right after the call, or in the delay slot of the branch after it
        spill=bool(c.pend) and not cleanup and not own_stack and not sret and not ind_variadic_hint(fname) and ((bool(ar) and ar[0]<=4) or (ar is None and not ind_variadic_hint(fname)))    # a callee taking at most four integer arguments (or one whose arity is unknown, a pointer or an unnamed prototype) and no cleanup: what is on the stack was saved, not passed
        positional=not c.pend and not ind and int_stack_words(fname)      # stack words written through the frame, none pushed: r4-r7 come
                                                 # before them and are the first arguments as set (courtDrawStageModels' callers)
        if ar and not positional and (not c.pend or spill or sret or (ar[0]==0 and not ar[1])):      # (a callee reading no register argument: everything it takes is on the stack)                    # the registers the callee reads: leftovers set for other reasons are not arguments
                                                 # (with arguments on the stack all four registers are positional: not trimmed)
            avail=[n for n in avail if n<4+ar[0]]
            fav=[n for n in fav if n<4+ar[1]]
        if ar and not c.pend and c.pcalls==0 and not c.pt:
            # the callee reads more argument registers than this function set: one it has not touched (and no call has
            # changed) is its own incoming argument, passed on as it came (a wrapper, a thunk, a dispatcher)
            for n in range(4,4+min(ar[0],4)):
                if n not in avail and 'r%d'%n not in c.R: avail.append(n)
            for n in range(4,4+min(ar[1],8)):
                if n not in fav and 'fr%d'%n not in c.FR: fav.append(n)
            avail.sort(); fav.sort()
        if avail and c.pcalls==0 and not c.pt:           # a register below the highest one set that the function never touched is its own incoming argument, passed straight on
            hole=[n for n in range(4,max(avail)) if n not in avail and 'r%d'%n not in c.R]
            if hole and all(n in (4,5,6,7) for n in hole): avail=sorted(set(avail)|set(hole))
        elif avail and not c.pt and ar is None:
            # a call of unknown arity (an address, a function pointer): the check compares only the argument registers the function changed,
            # so a register it never set (clobbered by earlier calls) goes as 0
            hole=[n for n in range(4,max(avail)) if n not in avail and 'r%d'%n not in c.R]
            if hole and all(n in (4,5,6,7) for n in hole):
                for n in hole: c.R['r%d'%n]=0
                avail=sorted(set(avail)|set(hole))
        five=bool(ar) and ar[0]>4          # a callee whose definition takes five or more integers: the pushed word is its fifth, not a hidden pointer or a variadic argument
        if (c.pend and not spill and not sret and (avail or five) and len(avail)<4 and not c.pt
                and (five or not (len(c.pend)==1 and not isfp(c.pend[0]) and '@@F' in ex(c.pend[0])))):
            # a word pushed for this call is an argument past the fourth, so r4-r7 are all positional: one this function never touched
            # is its own incoming argument, passed on as it came (mwlRnaStartCopy, serveGetPos in playerInit); one an earlier call has changed
            # is a leftover and goes as 0.
            # The hidden pointer of a returned structure is the one pushed word that is not
            for n in range(4,8):
                if n not in avail and 'r%d'%n not in c.R:
                    if c.pcalls: c.R['r%d'%n]=0         # an earlier call has changed it: a leftover, passed as 0 (the check compares only registers the function set)
                    avail.append(n)
            avail.sort()
        ia=[]
        k=4
        while k in avail: ia.append(k); k+=1
        if any(x>=k for x in avail): raise Skip('arg gap')
        if fav and not c.pt and (c.pcalls==0 or ar is None):      # a float argument register below the highest one set: the function's own incoming argument passed on, or 0 for an unknown-arity call
            fhole=[n for n in range(4,max(fav)) if n not in fav and 'fr%d'%n not in c.FR]
            if fhole:
                if c.pcalls!=0:
                    for n in fhole: c.FR['fr%d'%n]=('e','0.0f')
                fav=sorted(set(fav)|set(fhole))
        fa=[]; k=4
        while k in fav: fa.append(k); k+=1
        if any(x>=k for x in fav): raise Skip('farg gap')
        args=[]; types=[]
        for n in ia:
            v=c.gi('r%d'%n)
            if isinstance(v,tuple) and v[0]=='addr': raise Skip('addr arg')
            args.append(ex(v)); types.append('int')
            if '@@F' in args[-1]: c.frame_regs.add('r%d'%n)
        hidden=None
        pushed=bool(c.pend) and not spill
        if c.pend and not spill:
            # arguments pushed on the stack: the first of them was pushed last
            variadic=False
            if sret:
                hidden=ex(c.pend[0]); c.frame_stack_call=True
            elif len(ia)==0 and not fa and not ind:    # every argument on the stack: a call to a function declared with `...`
                variadic=True
            elif len(ia)<4 and len(c.pend)==1 and not isfp(c.pend[0]) and (ia or fa) and '@@F' in ex(c.pend[0]):
                # the address of a local pushed alone, with the other arguments in registers: SHC passes the hidden return pointer of a
                # function that returns a structure by value on the stack. Declared variadic after its real arguments, the compiler puts
                # the pointer on the stack too, whatever the structure's size is.
                hidden=ex(c.pend[0]); c.frame_stack_call=True
            elif len(ia)<4: raise Skip('stack arguments without four in registers [%s: %d in registers%s, %d on the stack; %d float registers, stack %s]'%(fname,len(ia),' + floats' if fa else '',len(c.pend),len(fa),''.join('f' if isfp(v) else 'i' for v in c.pend)))
            for v in ([] if hidden else reversed(c.pend)):
                if isfp(v): args.append(fx(v[1])); types.append('float')
                else: args.append(ex(v)); types.append('int')
            if variadic: types=['int','...']
            c.pend=[]
        sa=getattr(c,'sarg',None); c.sarg=None
        chain=[]                       # the structures by value: the one at SP, then each one copied right above the one before it
        if sa and sa[2]==c.D:
            byD={s_[2]:s_ for s_ in getattr(c,'sargs',[])}; d_=c.D
            while d_ in byD:
                chain.append(byD[d_]); d_-=4*byD[d_][0]
        c.sargs=[]
        if chain and not ind and not hidden and not variadic_seen(types):
            for s_ in chain: args.append('*(Stk%d *)(%s)'%(s_[0],s_[1])); types.append('Stk%d'%s_[0])       # by value, after the integer arguments
            for v in post:
                if isfp(v): args.append(fx(v[1])); types.append('float')
                else: args.append(ex(v)); types.append('int')
        elif not sa and not pushed and not ind and not hidden and not variadic_seen(types) and not tail and def_stack_words(fname):
            # nothing pushed and nothing copied to SP, but the callee's definition takes words from the stack: it reads the caller's own frame
            # at SP (a debug print called without its pushed arguments). The frame the C keeps holds the same words
            if not c.frame: raise Skip('stack words of the callee read from the frame')      # the first reading keeps the stack symbolic: read again with the frame as an array
            n_=def_stack_words(fname); args.append('*(Stk%d *)((int)stk + @@F:%d@@)'%(n_,-c.D)); types.append('Stk%d'%n_)
        elif (not sa and not pushed and not ind and not hidden and not variadic_seen(types) and not tail and ia==list(range(4,4+len(ia)))
              and (len(ia)==4 or c.pcalls or fromframe) and (not fa or fromframe) and int_stack_words(fname)):
            # the same with a definition that takes its stack words as plain ints past a7 (adxf_read_sj32 -> ADXERR_CallErrFunc, Crazy Taxi).
            # r4-r7 are then positional: after an earlier call one not set here is a leftover and goes as 0, as for pushed words (stackclobberfn)
            if not c.frame: raise Skip('stack words of the callee read from the frame')
            for n in range(4+len(ia),8):
                args.append('0x0'); types.append('int')
            for k_ in range(isw if fromframe else int_stack_words(fname)):
                args.append('*(int *)((int)stk + @@F:%d@@%s)'%(-c.D,' + %d'%(4*k_) if k_ else '')); types.append('int')
        for n in fa: args.append(fx(c.gf('fr%d'%n))); types.append('float')
        if hidden and not sret: args.append(hidden); types.append('...')
        sig=tuple(types)
        isf=(not ind) and ((fname in c.protos and c.protos[fname][-1:]==('->float',)) or fname in _FLOATRET)
        if not ind: c.ncalls_to[fname]=c.ncalls_to.get(fname,0)+1
        if not ind:
            if fname not in _CONFLICTS and fname in c.protos and tuple(x for x in c.protos[fname] if not x.startswith('->'))!=sig: raise Conflict(fname)
            if fname in _CONFLICTS: c.protos[fname]=('()',)+(('->float',) if isf else ())
            elif sret: c.protos[fname]=sig+('->Stk%d'%sret,)
            elif not isf: c.protos[fname]=sig
            elif fname not in c.protos: c.protos[fname]=sig+('->float',)
        if ind: call='((int (*)(%s))(%s))(%s)'%(', '.join(sig) or 'void',ind,', '.join(args))
        elif fname in _CONFLICTS or fname==c.name:      # a call to itself: its own definition, being written, is the prototype in this file and
            # may take more than the call sets (the rest are an earlier call's leftovers): sklDrawNodeTrnsl, playerSolveArmReach, Virtua Tennis
            call='((%s (*)(%s))(%s))(%s)'%('float' if isf else 'int',', '.join(sig) or 'void',fname,', '.join(args))
        else: call='%s(%s)'%(fname,', '.join(args))
        if sret:
            if tail: raise Skip('structure returned by a tail call')
            c.blocks[-1].append('*(Stk%d *)(%s) = %s;'%(sret,hidden,call))
            c.lastcall=None; c.ncalls+=1; c.pcalls+=1
            for n in range(1,8): c.R.pop('r%d'%n,None)
            for n in range(0,12): c.FR.pop('fr%d'%n,None)
            c.R['r0']=DIRTY; c.fpul=None
            return
        if tail:
            c.tail=call; c.blocks[-1].append('@@TAIL:%s@@'%call); return
        t='t%d'%c.ntemp; c.ntemp+=1
        c.blocks[-1].append('%s %s = %s;'%('float' if isf else 'int',t,call))
        c.lastcall=None if ind else (c.blocks[-1],len(c.blocks[-1])-1,t,fname)
        c.ncalls+=1; c.pcalls+=1
        for n in range(1,8):
            c.R.pop('r%d'%n,None)
        for n in range(0,12): c.FR.pop('fr%d'%n,None)
        if isf: c.R.pop('r0',None); c.FR['fr0']=('e',t); c.lastcall=None
        else: c.R['r0']=('e',t)
        c.fpul=None

    # ---- conditions: every T comes with its negation, so `if` and `while` read the way the source would ----
    c.neg={}
    def setT(pos,neg):
        c.T=pos; c.neg[pos]=neg; c.neg[neg]=pos
    def negate(s):
        if s in c.neg: return c.neg[s]
        if '(%s)'%s in c.neg: return c.neg['(%s)'%s]
        if re.match(r'^\w+$',s): return '!'+s
        return '!(%s)'%s
    def uw(s):
        # drop one pair of outer parentheses when they enclose the whole text
        if s.startswith('(') and s.endswith(')'):
            d=0
            for k,ch in enumerate(s):
                d+=(ch=='(')-(ch==')')
                if d==0 and k<len(s)-1: return s
            return s[1:-1]
        return s
    def set_T(mn,a):
        def v(x):
            if x.startswith('#'): return str(int(x[1:]))
            return ex(c.gi(x))
        if mn=='tst':
            if a[0].startswith('#'): x=ex(c.gi('r0')); setT('((%s & %d) == 0)'%(x,int(a[0][1:])&0xff),'((%s & %d) != 0)'%(x,int(a[0][1:])&0xff))
            elif a[0]==a[1]: x=ex(c.gi(a[0])); setT('(%s == 0)'%x,'(%s != 0)'%x)
            else: x=ex(c.gi(a[1])); y=ex(c.gi(a[0])); setT('((%s & %s) == 0)'%(x,y),'((%s & %s) != 0)'%(x,y))
            return
        if mn.startswith('cmp/'):
            op=mn[4:]
            if op=='eq':
                x=ex(c.gi(a[1])); y=str(int(a[0][1:])) if a[0].startswith('#') else ex(c.gi(a[0]))
                setT('(%s == %s)'%(x,y),'(%s != %s)'%(x,y))
            elif op=='pl': x=ex(c.gi(a[0])); setT('((int)%s > 0)'%x,'((int)%s <= 0)'%x)
            elif op=='pz': x=ex(c.gi(a[0])); setT('((int)%s >= 0)'%x,'((int)%s < 0)'%x)
            else:
                x=ex(c.gi(a[1])); y=ex(c.gi(a[0]))
                if op=='ge': setT('((int)%s >= (int)%s)'%(x,y),'((int)%s < (int)%s)'%(x,y))
                elif op=='gt': setT('((int)%s > (int)%s)'%(x,y),'((int)%s <= (int)%s)'%(x,y))
                elif op=='hi': setT('((unsigned int)%s > (unsigned int)%s)'%(x,y),'((unsigned int)%s <= (unsigned int)%s)'%(x,y))
                elif op=='hs': setT('((unsigned int)%s >= (unsigned int)%s)'%(x,y),'((unsigned int)%s < (unsigned int)%s)'%(x,y))
                else: raise Skip(mn)
            return
        if mn=='fcmp/gt': p='(%s > %s)'%(fx(c.gf(a[1])),fx(c.gf(a[0]))); setT(p,'!'+p); return
        if mn=='fcmp/eq': p='(%s == %s)'%(fx(c.gf(a[1])),fx(c.gf(a[0]))); setT(p,'(%s != %s)'%(fx(c.gf(a[1])),fx(c.gf(a[0])))); return
        raise Skip(mn)
    def parse_ops(raw):
        ops=raw
        if ';' in raw: ops=raw.split(';',1)[0].strip()
        return [x.strip() for x in re.split(r',(?![^(]*\))',ops)] if ops else []
    def target_of(raw):
        t=gen_cfg.target_of(raw)
        if t is None: raise Skip('target')
        return t

    # ---- text of nested statements ----
    def ind(lst): return '\n'.join('    '+l for x in lst for l in x.split('\n'))
    def blk(lst):
        if len(lst)==1 and lst[0] in ('break;','continue;'): return lst[0]
        return '{\n%s\n}'%ind(lst)
    def mkif(cond,A,B):
        if not A and not B: return None
        if not A: cond,A,B=negate(cond),B,[]
        s='if (%s) %s'%(uw(cond),blk(A))
        if B:
            if len(B)==1 and B[0].startswith('if ('): s+=' else '+B[0]
            else: s+=' else '+blk(B)
        return s
    def emit(s):
        if s:
            c.blocks[-1].append(s)
            c.nemit+=1
            if c.nemit>c.emit_limit: raise Skip('bloat: arms that meet at different joins were written out once per path (%d statements)'%c.nemit)      # the flat form is linear in the function's size

    # ---- machine state ----
    def regs_state(): return (dict(c.R),dict(c.FR),c.fpul,dict(c.stack),c.macl,c.D,list(c.pend),(c.sz,c.swapped,dict(c.XF)),c.pcalls)
    def set_regs(st):
        c.R,c.FR,c.fpul,c.stack,c.macl,c.D,c.pend=dict(st[0]),dict(st[1]),st[2],dict(st[3]),st[4],st[5],list(st[6])
        if len(st)>7: c.sz,c.swapped,c.XF=st[7][0],st[7][1],dict(st[7][2])
        if len(st)>8: c.pcalls=st[8]
    # a snapshot keeps the statement lists themselves (their callers hold them) and restores their contents
    def snap():
        d={k:v for k,v in c.__dict__.items() if k not in ('blocks','stmts')}
        return copy.deepcopy(d),[(b,list(b)) for b in c.blocks]
    def restore(s):
        d,bl=s
        c.__dict__.clear(); c.__dict__.update(copy.deepcopy(d))
        for b,saved in bl: b[:]=saved
        c.blocks=[b for b,_ in bl]; c.stmts=c.blocks[0]
    def fresh(isf):
        t=('u%d' if isf else 't%d')%c.ntemp; c.ntemp+=1; return t
    def xf_snapshot(bank):
        """Fill the unset registers of bank (the matrix bank as the caller left it) with the values st_ext reads from the hardware."""
        m_=fresh(True); emit('float %s[16];'%m_)
        c.protos['_builtin_st_ext']=('float (*)[4]',)
        emit('_builtin_st_ext((float (*)[4])%s);'%m_)
        for i in range(16):
            if 'fr%d'%i not in bank: bank['fr%d'%i]=('e','%s[%d]'%(m_,i))
        c.xf_entry=True
    c.xf_snapshot=xf_snapshot
    def uninit(r):
        isf=r.startswith('fr')
        v=fresh(isf); emit('%s %s;'%('float' if isf else 'int',v)); (c.FR if isf else c.R)[r]=('e',v)
    c.uninit=uninit
    c.wrote_somewhere={'r%d'%int(m_.group(1)) for x_ in ins for m_ in [re.search(r',r(\d+)\s*(;|$)',x_[1].split(';')[0])] if m_ and x_[0] not in ('cmp/eq','cmp/ge','cmp/gt','cmp/hi','cmp/hs','tst') and 8<=int(m_.group(1))<=14}
    c.wrote_somewhere|={'fr%d'%int(m_.group(1)) for x_ in ins for m_ in [re.search(r'(?:^|,)\s*fr(\d+)\s*$',x_[1].split(';')[0].strip())]      # float registers too, but
                        if m_ and x_[0].startswith('f') and not x_[0].startswith('fcmp') and not 4<=int(m_.group(1))<=11}   # not the arguments fr4-fr11

    # registers that a loop changes from one pass to the next are C variables updated where the instruction runs;
    # everything else stays a symbolic expression
    def commit():
        if not c.lv: return
        pend=[]
        for r in sorted(c.lv):
            isf=r.startswith('fr'); v=(c.FR if isf else c.R).get(r); var=c.lv[r]
            if v is None or v==DIRTY or v==('e',var): continue
            if isinstance(v,int) and c.lvk.get(r)==v: continue                       # a function's address already stored in the variable and kept as the constant
            if isinstance(v,tuple) and v[0]=='addr': raise Skip('addr loop variable')
            pend.append([r,var,v,isf])
        if not pend: return
        pat=re.compile(r'\b(%s)\b'%'|'.join(p[1] for p in pend))
        def old(v): return isinstance(v,tuple) and v[0]=='e' and pat.search(v[1])
        pr={p[0] for p in pend}
        def keep(expr,isf):
            t=fresh(isf); emit('%s %s = %s;'%('float' if isf else 'int',t,expr)); return ('e',t)
        for m,isf in ((c.R,False),(c.FR,True)):
            for r,v in list(m.items()):
                if r not in pr and old(v): m[r]=keep(v[1],isf)
        for k,v in list(c.stack.items()):
            if old(v): c.stack[k]=keep(v[1],k[1]=='f')
        if c.T is not None and pat.search(c.T):
            t=keep(c.T,False)[1]; c.neg[t]='!'+t; c.T=t
        if c.fpul is not None and old(c.fpul): c.fpul=keep(c.fpul[1],False)
        if c.macl is not None and old(c.macl): c.macl=keep(c.macl[1],False)
        left=list(pend)
        while left:
            pick=None
            for p in left:
                if not any(q is not p and isinstance(q[2],tuple) and re.search(r'\b%s\b'%p[1],q[2][1]) for q in left): pick=p; break
            if pick is None:
                # a cycle (a swap): copy one new value out first
                q=[q for q in left if isinstance(q[2],tuple) and any(o is not q and re.search(r'\b%s\b'%o[1],q[2][1]) for o in left)][0]
                q[2]=keep(q[2][1],q[3]); continue
            emit('%s = %s;'%(pick[1],fx(pick[2]) if pick[3] else ex(pick[2])))
            if isinstance(pick[2],int) and not pick[3]: c.lvconst[pick[1]]=pick[2]      # the variable holds this constant until it is assigned again
            else: c.lvconst.pop(pick[1],None)
            if isinstance(pick[2],int) and not pick[3] and canon(pick[2]) in FUNCS:
                c.lvk[pick[0]]=pick[2]           # a call target: the call must still see the constant, so the register keeps it (the variable has it too)
            else:
                (c.FR if pick[3] else c.R)[pick[0]]=('e',pick[1])
            left.remove(pick)

    def step(i):
        c.nstep=getattr(c,'nstep',0)+1
        if c.nstep>40*c.emit_limit: raise Skip('bloat: the reading walked %d instructions (paths that multiply)'%c.nstep)      # the flat form is linear in the function's size
        mn,ops,pc=ins[i]
        if c.in_prologue and not (mn=='sts.l' or (mn in('mov.l','fmov.s') and parse_ops(ops)[1:]==['@-r15']) or (mn=='add' and parse_ops(ops)[1:]==['r15'])):
            c.in_prologue=False; c.pro_D=c.D      # the depth the prologue left: an add that stays at or above it frees pushed words, not the frame
        if mn in ('tst.b','and.b','or.b','xor.b') and parse_ops(ops)[1:]==['@(r0,gbr)']:
            # a byte at GBR + r0 read, combined with an immediate and written back (tst.b only sets T)
            imm=int(parse_ops(ops)[0].lstrip('#'),0)&0xff
            c.protos['_builtin_get_gbr']=()
            ad=('expr','(%s + (int)_builtin_get_gbr())'%ex(c.gi('r0')))
            v=load('b',ad)
            if mn=='tst.b':
                x='((unsigned char)%s & %d)'%(ex(v),imm); setT('(%s == 0)'%x,'(%s != 0)'%x)
            else:
                op={'and.b':'&','or.b':'|','xor.b':'^'}[mn]
                store('b',ad,('e','((unsigned char)%s %s %d)'%(ex(v),op,imm)))
        elif mn.startswith('cmp') or mn.startswith('tst') or mn.startswith('fcmp'): set_T(mn,parse_ops(ops))
        elif mn=='dt':
            r=parse_ops(ops)[0]; c.R[r]=iop('sub',c.gi(r),1); commit(); x=ex(c.R[r]); setT('(%s == 0)'%x,'(%s != 0)'%x)
        elif mn=='trapa':                               # a trap (an assertion, a system call): the SDK's own intrinsic
            c.protos['_builtin_trapa']=('int',)
            emit('_builtin_trapa(%d);'%(int(parse_ops(ops)[0].lstrip('#'),0)&0xff))
        elif mn in ('braf','bsrf','rte'): raise Skip('flow '+mn)
        else:
            try:
                if exec1(mn,ops) == 'rts': raise Skip('rts in slot')
            except Skip as e:
                if '@@' not in str(e) and not str(e).endswith(')'): e.args=(str(e)+' @%x'%pc,)
                raise
        commit()

    def merge_arms(stA,stB,A,B):
        """The state after an if / else whose arms both reach the same place. A and B are the arms' statements; a register
        the arms leave different becomes a variable assigned in each arm."""
        ea,eb=not A,not B
        pendM=list(stA[6])
        if stA[5]==stB[5] and len(stA[6])!=len(stB[6]):      # the same depth, but one arm's call took the pushed words as its arguments and the other's did not: nothing stays pending
            pendM=[]; stA=stA[:6]+([],)+stA[7:]; stB=stB[:6]+([],)+stB[7:]
        if stA[5]!=stB[5] or len(stA[6])!=len(stB[6]): raise Skip('stack pointer differs (%s vs %s, pending %d vs %d) at %x join %s'%(stA[5],stB[5],len(stA[6]),len(stB[6]),ins[getattr(c,'_bi',0)][2],('%x'%ins[c._bj][2]) if getattr(c,'_bj',-1)>=0 else 'none'))
        for k_,(pa_,pb_) in enumerate(zip(stA[6],stB[6])):
            if pa_==pb_: continue
            # a pushed value (an argument for a call after the join) that the arms set differently: a variable assigned in each arm
            fa_=isfp(pa_); fb_=isfp(pb_)
            if fa_!=fb_ or (not fa_ and (isinstance(pa_,tuple) and pa_[0]=='addr' or isinstance(pb_,tuple) and pb_[0]=='addr')): raise Skip('stack pointer differs (pushed values differ in kind)')
            xa_=pa_[1] if fa_ else pa_; xb_=pb_[1] if fb_ else pb_
            f_=fx if fa_ else ex
            var_=fresh(fa_); emit('%s %s;'%('float' if fa_ else 'int',var_))
            A.append('%s = %s;'%(var_,f_(xa_))); B.append('%s = %s;'%(var_,f_(xb_)))
            pendM[k_]=('fpend',('e',var_)) if fa_ else ('e',var_)
        if stA[7]!=stB[7]: raise Skip('FPU bank or size mode differs')
        R={}; FR={}
        for sa,sb,out,isf in ((stA[0],stB[0],R,False),(stA[1],stB[1],FR,True)):
            for r in sorted(set(sa)|set(sb)):
                va=sa.get(r); vb=sb.get(r)
                if va==vb:
                    if va is not None: out[r]=va
                    continue
                bad=lambda v: v is not None and (v==DIRTY or (isinstance(v,tuple) and v[0] in ('addr','srx')))
                if bad(va) or bad(vb) or (va is None and vb is None):
                    out[r]=DIRTY; c.dwhy[r]='%s | %s'%(str(va)[:40],str(vb)[:40]); continue
                own=('s','a%d'%int(r[1:])) if not isf and r[1:].isdigit() and 4<=int(r[1:])<=7 else ('s','f%d'%int(r[2:])) if isf and r[2:].isdigit() and 4<=int(r[2:])<=11 else None
                if own:         # an argument register an arm never touched, with no call made yet, still holds the function's own argument
                    if va is None and stA[8]==0: va=own
                    if vb is None and stB[8]==0: vb=own
                    if own in (va,vb): (c.fuse if isf else c.iuse).add(int(own[1][1:]))      # the argument is now read: it is a parameter
                    if va==vb:
                        out[r]=va; continue
                if isf and r=='fr0' and ((va is None and stA[8]) or (vb is None and stB[8])):
                    out[r]=DIRTY; c.dwhy[r]='fr0 left by a call on one arm'; continue      # the arm that called holds its callee's float result, which C cannot name (a void callee)
                if va is None or vb is None:
                    # one arm never sets the register: the code after the join reads it only where it was set (the compiler keeps the two
                    # in step), so it becomes a variable assigned on the arm that sets it
                    var=fresh(isf); ty='float' if isf else 'int'; f=fx if isf else ex
                    emit('%s %s;'%(ty,var))
                    (A if va is not None else B).append('%s = %s;'%(var,f(va if va is not None else vb)))
                    out[r]=('e',var); continue
                var=fresh(isf); ty='float' if isf else 'int'; f=fx if isf else ex
                late=c.cond_tmps and re.search(r'\b(%s)\b'%'|'.join(sorted(c.cond_tmps)),f(va)+' '+f(vb))     # a value the folded condition computes
                if (not ea and not eb) or late:
                    emit('%s %s;'%(ty,var)); A.append('%s = %s;'%(var,f(va))); B.append('%s = %s;'%(var,f(vb)))
                elif eb:
                    emit('%s %s = %s;'%(ty,var,f(vb))); A.append('%s = %s;'%(var,f(va)))
                else:
                    emit('%s %s = %s;'%(ty,var,f(va))); B.append('%s = %s;'%(var,f(vb)))
                out[r]=('e',var)
        argslots={}
        for k in sorted(set(stA[3])|set(stB[3])):
            if k[0]>=0 and stA[3].get(k)!=stB[3].get(k):          # a stack argument slot the arms left different: a variable carries it
                nslot=8+k[0]//4
                if k[1]=='f':           # the float form: the arm that did not write it leaves the parameter's bits, read as a float (sprPutCropH)
                    tv=fresh(True); emit('float %s;'%tv)
                    for blk_,st_ in ((A,stA),(B,stB)):
                        v_=st_[3].get(k)
                        if v_ is None: c.iuse.add(nslot); v_=('e','*(float *)&a%d'%nslot)
                        blk_.append('%s = %s;'%(tv,fx(v_)))
                    argslots[k]=('e',tv); continue
                tv=fresh(False); emit('int %s = 0;'%tv)
                for blk_,st_ in ((A,stA),(B,stB)):
                    v_=st_[3].get(k)
                    if v_ is None: c.iuse.add(nslot); v_=('s','a%d'%nslot)
                    blk_.append('%s = %s;'%(tv,ex(v_)))
                argslots[k]=('e',tv)
        stack={k:v for k,v in stA[3].items() if stB[3].get(k)==v}
        stack.update(argslots)
        def special(a_,b_):
            # fpul / macl: equal, or set on both arms to different values (a variable assigned in each arm)
            if a_==b_: return a_
            if a_ is None or b_ is None or a_==DIRTY or b_==DIRTY or isinstance(a_,tuple) and a_[0] in ('addr','srx') or isinstance(b_,tuple) and b_[0] in ('addr','srx'): return None
            v_=fresh(False); emit('int %s;'%v_); A.append('%s = %s;'%(v_,ex(a_))); B.append('%s = %s;'%(v_,ex(b_)))
            return ('e',v_)
        set_regs((R,FR,special(stA[2],stB[2]),stack,special(stA[4],stB[4]),stA[5],pendM)); c.pcalls=max(stA[8],stB[8])

    def outer_join(J):
        """A join inside a loop that is not running (one arm entered the cycle partway) is where that loop leaves."""
        for _ in range(8):
            if J==gen_cfg.EXIT: return J
            hl=G.innermost(J)
            if hl is None or hl in c.active: return J
            E,_o=G.loop_exit(hl)
            if E is None: return J
            J=E
        return J
    # ---- compound conditions: a block that only tests (loads, moves, compares) and branches to where the branch before it goes
    # is the second half of `a && b` / `a || b`; folded into one condition, the code both reach is written once, not once per test ----
    _PURE=re.compile(r'^(mov|mov\.[bwl]|cmp/\w+|tst|fcmp/\w+|exts\.[bw]|extu\.[bw]|and|or|xor|add|sub|neg|not|shll\d*|shlr\d*|shal|shar|'
                     r'fmov|fmov\.s|fldi[01]|mova|nop)$')
    def pure_ins(k):
        mn,ops,pc=ins[k]; a=parse_ops(ops)
        if not _PURE.match(mn): return False
        if a and '@' in a[-1]: return False                 # a store
        return not any(x.startswith('@-') for x in a)
    def cond_block(x):
        """Nodes x..k entered only from the one before, all pure, ending in bt/bf (a delayed one with a pure slot): k, or None."""
        k=x
        for _ in range(12):
            if k not in G.succ: return None
            mn=ins[k][0]
            if mn in ('bt','bf','bt/s','bf/s'):
                return k if not mn.endswith('/s') or (k+1<len(ins) and pure_ins(k+1)) else None
            if not pure_ins(k) or G.succ[k]!=[k+1] or len(G.pred.get(k+1,[]))!=1: return None
            k+=1
        return None
    def written(a_,b_):
        w={'T'}
        for k in range(a_,b_+1):
            mn,ops,pc=ins[k]; a=parse_ops(ops)
            if mn.startswith(('cmp','tst','fcmp')): continue
            for x in a:
                if x.startswith('@') and x.endswith('+'): w|=set(re.findall(r'\b(f?r\d+)\b',x))
            if a and not a[-1].startswith('@'):
                for r_ in re.findall(r'\b(f?r\d+|dr\d+)\b',a[-1]):
                    w|={'fr%d'%int(r_[2:]),'fr%d'%(int(r_[2:])+1)} if r_.startswith('dr') else {r_}
        return w
    def logic(op,a,b):
        p='(%s %s %s)'%(a,op,b); n='(%s %s %s)'%(negate(a),'||' if op=='&&' else '&&',negate(b))
        c.neg[p]=n; c.neg[n]=p; return p
    def test_at(x,st,depth,inside,keep=frozenset()):
        """The test chain starting at node x, run from state st: (taken, fall, cond that holds when it falls, state on the taken
        side, state on the falling side, registers it writes, its nodes), or None when x does not start one. Every way into x
        must come from inside the condition being built (the nodes in inside)."""
        if depth>30 or not isinstance(x,int) or x in keep or x not in G.succ or not G.pred.get(x) or not set(G.pred[x])<=inside: return None
        k=cond_block(x)
        if k is None: return None
        mn,ops,pc=ins[k]
        t2=addr2idx.get(gen_cfg.target_of(ops)); f2=k+(2 if mn.endswith('/s') else 1)
        if t2 is None or t2==f2: return None
        before=regs_state(); T0=c.T
        set_regs(st)
        lines=[]; c.blocks.append(lines)
        try:
            for k_ in range(x,k): step(k_)
            if mn.endswith('/s'): step(k+1)
            ok=c.T is not None
        except Skip: ok=False
        c.blocks.pop()
        pref=[]; decl=[]
        for l_ in lines:
            m_=re.match(r'^(?:(int|float) )?([tu]\d+)(?: = (.*))?;$',l_)
            if not m_: ok=False; break
            if m_.group(1): decl.append('%s %s;'%(m_.group(1),m_.group(2)))
            if m_.group(3) is not None: pref.append('%s = %s'%(m_.group(2),m_.group(3)))
        if not ok:
            set_regs(before); c.T=T0; return None
        for d_ in decl: emit(d_)
        c2=c.T if mn.startswith('bf') else negate(c.T)        # holds when the block falls through
        if pref:
            c.cond_tmps|={p_.split(' = ',1)[0] for p_ in pref}       # assigned inside the condition: not known before the if
            P=', '.join(pref); n2=negate(c2)
            q='(%s, %s)'%(P,uw(c2)); nq='(%s, %s)'%(P,uw(n2)); c.neg[q]=nq; c.neg[nq]=q; c2=q
        after=regs_state(); set_regs(before); c.T=T0
        w=written(x,k+1 if mn.endswith('/s') else k-1)
        mine=set(range(x,k+1))
        j_,f_,c_,sf,sj,w2,_,n2=fold(t2,f2,c2,after,depth+1,inside|mine,keep)
        return j_,f_,c_,sj or after,sf or after,w|w2,mine|n2
    def fold(j,f,cond,pre=None,depth=0,inside=frozenset(),keep=frozenset()):
        """Folds the test chains at the head of either arm into cond. Returns (j, f, cond, state for A, state for B, registers the
        folded tests write, folded, the folded nodes)."""
        if getattr(c,'flat',False) or getattr(c,'live',None) is None: return j,f,cond,None,None,set(),False,set()
        if pre is None: pre=regs_state()
        sA=sB=None; folded=False; W=set(); N=set(inside)
        for _ in range(8):
            moved=False
            for side in ('A','B'):
                x=f if side=='A' else j
                r=test_at(x,(sA if side=='A' else sB) or pre,depth,N,keep|{j if side=='A' else f})      # a nested chain must not swallow the other arm
                if r is None: continue
                tj,tf,tc,sa,sb,w,nodes=r
                if side=='A':           # A is the chain: it ends at j (the shared place) or goes on
                    if w & c.live.get(j,_ALLREGS|{'T'}): continue
                    if tj==j: f,cond,sA=tf,logic('&&',cond,tc),sb
                    elif tf==j: f,cond,sA=tj,logic('&&',cond,negate(tc)),sa
                    else: continue
                else:                   # B is the chain: it ends at f or goes on
                    if w & c.live.get(f,_ALLREGS|{'T'}): continue
                    if tf==f: j,cond,sB=tj,logic('||',cond,tc),sa
                    elif tj==f: j,cond,sB=tf,logic('||',cond,negate(tc)),sb
                    else: continue
                W|=w; N|=nodes; moved=folded=True
            if not moved: break
        return j,f,cond,sA,sB,W,folded,N-set(inside)

    def branch(i,j,f,cond,stops,tA=None):
        T0=c.T
        c._tends=[]; c._tvar=None
        j,f,cond,sA,sB,_w,folded,_n=fold(j,f,cond,None,0,frozenset([i]))
        if folded: tA=None
        c._fold=(sA,sB)
        r=branch0(i,j,f,cond,stops,tA)
        ends=c._tends
        # after the join the flag is what it was before the branch if neither arm changed it (the compiler reuses it: movt after the
        # join), what the one arm that goes on left it, and unknown otherwise
        if tA is not None and len(ends)==2 and ends[0]==('1' if tA else '0') and ends[1]==('0' if tA else '1'): c.T=T0
        elif tA is not None and len(ends)==1: c.T=ends[0]
        elif c._tvar: c.T=c._tvar
        else: c.T=None
        return r
    def branch0(i,j,f,cond,stops,tA=None):
        """cond holds when the fall-through arm (starting at f) runs; j is where the branch goes. tA: the T flag on the fall-through
        arm (True for a bf that fell through, False for a bt), the opposite on the taken arm: a second branch there may use it."""
        c._bi=i
        sA0,sB0=getattr(c,'_fold',(None,None)); c._fold=(None,None)       # the arms' start states when fold() ran their tests
        J=outer_join(G.ijoin(i) if _IJOIN[0] else G.ipdom(i))
        if c.loopstack and J!=gen_cfg.EXIT and J not in G.loops[c.loopstack[-1]]:
            J2=G.ijoin_in(i,G.loops[c.loopstack[-1]])           # the real join is outside the loop (the arms leave it): meet inside it instead
            if J2!=gen_cfg.EXIT: J=J2
        c._bj=J
        stops2=dict(stops)
        if J!=gen_cfg.EXIT and (J not in stops2 or stops2[J]=='cont'):
            if not c.loopstack or J in G.loops[c.loopstack[-1]]: stops2[J]='join'
        c.T=None
        pre=regs_state()
        if sA0: set_regs(sA0)
        if tA is not None: setT('1','0') if tA else setT('0','1')
        A=[]; c.blocks.append(A); oA=exec_from(f,stops2,False); stA=regs_state(); c.blocks.pop()
        endA=c.T
        set_regs(sB0 or pre); c.T=None
        if tA is not None: setT('0','1') if tA else setT('1','0')
        B=[]; c.blocks.append(B)
        if j in FUNCS:                      # the branch goes to another function: a tail call
            do_call(FUNCS[j],tail=True); oB=('end',)
        elif isinstance(j,int) and in_ram(j) and j not in G.succ:      # to a code address that is no function's entry: a tail call by address
            do_call('@indirect',tail=True,ind='0x%X'%j); oB=('end',)
        else: oB=exec_from(j,stops2,False)
        stB=regs_state(); c.blocks.pop()
        endB=c.T
        ta=oA[0]=='end'; tb=oB[0]=='end'
        c._tends=([endA] if not ta else [])+([endB] if not tb else [])
        if not ta and not tb: c._tends=[endA,endB]
        if ta and tb:
            emit(mkif(cond,A,[])); c.blocks[-1].extend(B); return ('end',)
        if ta:
            emit(mkif(cond,A,[])); c.blocks[-1].extend(B); set_regs(stB); return oB
        if tb:
            emit(mkif(negate(cond),B,[])); c.blocks[-1].extend(A); set_regs(stA); return oA
        oA0,oB0=oA,oB
        for _ext in range(4):
            if oA[0]=='end' or oB[0]=='end' or oA[1]==oB[1]: break
            # one arm stopped at a join that leads on to the other arm's: that arm goes on to it (its code stays inside its arm)
            X,Y=oA[1],oB[1]
            if X in G.reach(Y) and Y!=X and Y not in G.reach(X):          # B stopped first: B goes on to X
                set_regs(stB); c.T=None
                stops3=dict(stops2); stops3.pop(Y,None)
                c.blocks.append(B); oB=exec_from(Y,stops3,False); stB=regs_state(); c.blocks.pop()
            elif Y in G.reach(X) and X!=Y and X not in G.reach(Y):        # A stopped first: A goes on to Y
                set_regs(stA); c.T=None
                stops3=dict(stops2); stops3.pop(X,None)
                c.blocks.append(A); oA=exec_from(X,stops3,False); stA=regs_state(); c.blocks.pop()
            else: break
        if oA[0]!='end' and oB[0]!='end' and oA[1]!=oB[1]:
            if True: raise Skip('unstructured %x %s %s'%(ins[i][2],oA[1] if len(oA)>1 else '-',oB[1] if len(oB)>1 else '-'))
        merge_arms(stA,stB,A,B)
        if oA is oA0 and oB is oB0 and endA is not None and endB is not None and endA!=endB:
            # the two arms leave T as different things (1 here, a compare there): the code after the join may read it (rotcr, movt, a branch);
            # a variable carries it
            tv=fresh(False); emit('int %s = 0;'%tv)
            A.append('%s = (%s);'%(tv,endA)); B.append('%s = (%s);'%(tv,endB))
            c._tvar=tv; c.neg[tv]='!'+tv; c.neg['!'+tv]=tv
        emit(mkif(cond,A,B))
        return oA

    def switch_at(b,rx,tg,stops):
        """A jump table at node b: a C switch on the index register (twice the index), one case group per distinct target, the last
        one the default; the arms that reach the same place merge their states like the two arms of a branch."""
        J=G.ipdom(b)
        stops2=dict(stops)
        if J!=gen_cfg.EXIT and (J not in stops2 or stops2[J]=='cont'):
            if not c.loopstack or J in G.loops[c.loopstack[-1]]: stops2[J]='join'
        idx=ex(c.gi(rx))
        groups={}
        for k,t in enumerate(tg): groups.setdefault(t,[]).append(2*k)
        order=sorted(groups.items(),key=lambda kv:kv[1][0])
        c.R['r0']=DIRTY; c.T=None
        pre=regs_state(); arms=[]
        for t,ks in order:
            set_regs(pre); c.T=None
            A=[]; c.blocks.append(A); o=exec_from(t,stops2,False); st=regs_state(); c.blocks.pop()
            arms.append((ks,A,st,o))
        live=[(st,A,o) for ks,A,st,o in arms if o[0]!='end']
        if live:
            if any(o[1]!=live[0][2][1] for st,A,o in live): raise Skip('unstructured')
            if any(st[5]!=live[0][0][5] or st[6]!=live[0][0][6] for st,A,o in live): raise Skip('stack pointer differs')
            if any(st[7]!=live[0][0][7] for st,A,o in live): raise Skip('FPU bank or size mode differs')
        if len(live)>1:
            R={}; FR={}
            for k,isf,out in ((0,False,R),(1,True,FR)):
                for r in sorted(set().union(*[set(st[k]) for st,A,o in live])):
                    vs=[st[k].get(r) for st,A,o in live]
                    if all(v==vs[0] for v in vs):
                        if vs[0] is not None: out[r]=vs[0]
                        continue
                    if any(v is not None and (v==DIRTY or (isinstance(v,tuple) and v[0] in ('addr','srx'))) for v in vs) or all(v is None for v in vs):
                        out[r]=DIRTY; c.dwhy[r]='switch arms differ'; continue
                    var=fresh(isf); ty='float' if isf else 'int'; f=fx if isf else ex
                    emit('%s %s;'%(ty,var))
                    for (st,A,o),v in zip(live,vs):
                        if v is not None: A.append('%s = %s;'%(var,f(v)))
                    out[r]=('e',var)
            st0=live[0][0]
            stack={k2:v for k2,v in st0[3].items() if all(st[3].get(k2)==v for st,A,o in live)}
            set_regs((R,FR,st0[2] if all(st[2]==st0[2] for st,A,o in live) else None,stack,st0[4] if all(st[4]==st0[4] for st,A,o in live) else None,st0[5],list(st0[6]))); c.pcalls=max(st[8] for st,A,o in live)
            cur=regs_state()
        elif live: cur=live[0][0]
        if any('@@BRK' in x for ks,A,st,o in arms for x in A if isinstance(x,str)) or any('@@BRK' in blk(A) for ks,A,st,o in arms):
            raise Skip('unstructured: a loop exit inside a switch arm (a C break would only leave the switch)')
        txt='switch (%s) {\n'%idx
        for n,(ks,A,st,o) in enumerate(arms):
            last=n==len(arms)-1
            labels=['default:'] if last else ['case %d:'%v for v in ks]
            txt+='\n'.join('    '+l for l in labels)+'\n'+ind([blk(A)])+'\n'+('' if o[0]=='end' else '        break;\n')
        txt+='}'
        emit(txt)
        if not live: return ('end',)
        set_regs(cur); return live[0][2]

    def exec_loop(h):
        c.nloops=getattr(c,'nloops',0)+1
        if c.nloops>400: raise Skip('bloat: nested loops read %d times (each pass re-reads the loops inside it)'%c.nloops)      # the flat form reads each block once
        E,_=G.loop_exit(h)
        if E is None and _ is None and not G.never_leaves(h): raise Skip('loop exits')
        stl={h:'cont'}
        if E is not None: stl[E]='break'
        s0=snap(); entR=dict(c.R); entF=dict(c.FR); entS=dict(c.stack)
        def run_pass(marked):
            """One symbolic pass over the loop body. marked: registers whose entry value is replaced by a marker, to see
            which of them the next pass needs. Returns (states at the end of each pass, text produced)."""
            for r,isf in marked: (c.FR if isf else c.R)[r]=('e','@%s@'%r)
            c.conts=[]; c.exits=[]; c.loopstack.append(h); c.nbreak.append(0); c.ncont.append(0); c.active.append(h)
            lb=[]; c.blocks.append(lb)
            exec_from(h,stl,True)
            return c.conts,c.exits,lb
        conts,_,_=run_pass([])
        restore(s0)
        pre=sorted({k for st in conts for k in st[3] if k[0]>=0 and k not in entS and k[1]=='i'})
        if pre:
            for k in pre:
                var_=c.argvars.get(k)
                if var_ is None:
                    var_=fresh(False); c.argvars[k]=var_; emit('int %s;'%var_)
                n_=8+k[0]//4; c.iuse.add(n_); emit('%s = a%d;'%(var_,n_)); c.stack[k]=('e',var_)
            s0=snap(); entR=dict(c.R); entF=dict(c.FR); entS=dict(c.stack)
            conts,_,_=run_pass([])
            restore(s0)
        for st in conts:
            if st[3]!=entS: raise Skip('stack local in a loop')
        cand=[]; undef=set()
        def find_cand(conts):
          for k,(ent,isf) in enumerate(((entR,False),(entF,True))):
            for st in conts:
                for r,v in st[k].items():
                    if r in c.lv or (r,isf) in cand: continue
                    n=int(r[2:] if isf else r[1:])
                    e=ent.get(r,('s',('f%d' if isf else 'a%d')%n) if 4<=n<=(11 if isf else 7) else None)
                    if e==DIRTY and v is not None and v!=DIRTY and not (isinstance(v,tuple) and v[0] in ('addr','srx')):
                        cand.append((r,isf)); undef.add((r,isf))       # unreadable on entry (a helper clobbered it) and the first pass read nothing of it: like undefined
                    elif e is not None and v!=e and v!=DIRTY: cand.append((r,isf))
                    elif e is None and r not in ent and v is not None and v!=DIRTY and not (isinstance(v,tuple) and v[0] in ('addr','srx')):
                        cand.append((r,isf)); undef.add((r,isf))       # undefined on entry, set by the loop and read on the next pass: a variable with no initial value
        find_cand(conts)
        W=[]
        for _round in range(6):
            if not cand: break
            cand.sort(key=lambda w:(w[1],int(w[0][2:] if w[1] else w[0][1:])))
            for r,isf in cand:
                if (r,isf) not in undef: c.gf(r) if isf else c.gi(r)         # an argument the loop changes is read here
            s1=snap()
            conts2,exits_,lb=run_pass(cand)
            text='\n'.join(map(str,lb))+'\n'+repr([st[:2] for st in conts2+exits_])
            restore(s1)
            W=[(r,isf) for r,isf in cand if '@%s@'%r in text]
            restore(s0)
            n0=len(cand); find_cand(conts2)          # a register that copies a loop variable (r5 = r4 each pass) changes too: found on the marked pass
            if len(cand)==n0: break
        added=[]
        for r,isf in W:
            if (r,isf) in undef:
                var=fresh(isf); emit('%s %s;'%('float' if isf else 'int',var))
                (c.FR if isf else c.R)[r]=('e',var); c.lv[r]=var; added.append(r); continue
            val=c.gf(r) if isf else c.gi(r)
            if isinstance(val,tuple) and val[0]=='srx':         # an SR value (set_imask arithmetic) the loop overwrites: no C value to start from, like a register undefined on entry
                var=fresh(isf); emit('%s %s;'%('float' if isf else 'int',var))
                (c.FR if isf else c.R)[r]=('e',var); c.lv[r]=var; added.append(r); continue
            if isinstance(val,tuple) and val[0]=='addr': raise Skip('addr loop variable')
            var=fresh(isf)
            emit('%s %s = %s;'%('float' if isf else 'int',var,fx(val) if isf else ex(val)))
            (c.FR if isf else c.R)[r]=('e',var); c.lv[r]=var; added.append(r)
        c.has_loop=True
        outer=(c.exits,c.conts)
        c.exits=[]; c.conts=[]
        lb=[]; c.loopstack.append(h); c.nbreak.append(0); c.ncont.append(0); c.active.append(h); c.blocks.append(lb)
        exec_from(h,stl,True)
        c.blocks.pop(); c.active.pop(); c.loopstack.pop(); nb=c.nbreak.pop(); nc=c.ncont.pop()
        exits_=c.exits; c.exits,c.conts=outer
        for r in added: c.lv.pop(r,None)
        # registers the exits leave different: a variable assigned before each break, so the code after the loop can read it
        repl={}; newreg={}
        if exits_ and len(exits_)>1:
            for k,isf in ((0,False),(1,True)):
                for r in sorted(set().union(*[set(o[k]) for o in exits_])):
                    vs=[o[k].get(r) for o in exits_]
                    if all(v==vs[0] for v in vs): continue
                    if any(v is not None and (v==DIRTY or (isinstance(v,tuple) and v[0] in ('addr','srx'))) for v in vs) or all(v is None for v in vs): continue
                    if any(isinstance(v,tuple) and v[0]=='e' and re.search(r'@\w+@',v[1]) for v in vs if v is not None): continue
                    var=fresh(isf); newreg[(k,r)]=(var,isf)
                    for xi,v in enumerate(vs):
                        if v is not None: repl.setdefault(xi,[]).append('%s = %s;'%(var,(fx if isf else ex)(v)))
        lb=[re.sub(r'@@BRK(\d+)@@break;',lambda m_:(' '.join(repl.get(int(m_.group(1)),[]))+' ' if repl.get(int(m_.group(1))) else '')+'break;',x) if isinstance(x,str) else x for x in lb]
        for (k,r),(var,isf) in sorted(newreg.items()): emit('%s %s;'%('float' if isf else 'int',var))
        if lb and lb[-1]=='continue;': lb.pop(); nc-=1
        pat=re.compile(r'^if \((.*)\) break;$',re.S)
        m1=pat.match(lb[0]) if lb else None; m2=pat.match(lb[-1]) if lb else None
        if nb==1 and m1:
            emit('while (%s) {\n%s\n}'%(uw(negate(m1.group(1))),ind(lb[1:])))
        elif nb==1 and nc==0 and m2:
            emit('do {\n%s\n} while (%s);'%(ind(lb[:-1]),uw(negate(m2.group(1)))))
        else:
            emit('for (;;) {\n%s\n}'%ind(lb))
        if not exits_: return None
        # state after the loop: what every exit agrees on
        st=exits_[0]; R=dict(st[0]); FR=dict(st[1])
        for o in exits_[1:]:
            for mm,k in ((R,0),(FR,1)):
                for r in set(mm)|set(o[k]):
                    if mm.get(r)!=o[k].get(r): mm[r]=DIRTY
        for (k,r),(var,isf) in newreg.items(): (FR if isf else R)[r]=('e',var)
        set_regs((R,FR,st[2] if all(o[2]==st[2] for o in exits_) else None,{k:v for k,v in st[3].items() if all(o[3].get(k)==v for o in exits_)},st[4] if all(o[4]==st[4] for o in exits_) else None,st[5],list(st[6]))); c.pcalls=max(o[8] for o in exits_)
        c.T=None
        return E

    def exec_from(i,stops,first):
        """Runs the code from node i, following jumps, until it reaches a node in stops or the function returns. Returns
        ('reach', node) at a join, ('end',) when every path left by return, break or continue, ('ret',) at the function's
        own final return."""
        while True:
            c.steps+=1
            if c.steps>1500000: raise Skip('too long')      # some shapes need far more than 30,000 symbolic steps; the time limit per function guards against a runaway
            if i not in G.succ:
                if ins and i==len(ins):
                    # no return at the end: the code runs on into the next function, which is a tail call to the address after the last
                    # instruction (its registers are set up above)
                    tgt=ins[-1][2]+2
                    if tgt in FUNCS: do_call(FUNCS[tgt],tail=True)
                    elif in_ram(tgt): do_call('@indirect',tail=True,ind='0x%X'%tgt)
                    else: raise Skip('runs off the code')
                    return ('end',)
                raise Skip('runs off the code')
            if i in stops and not first:
                k=stops[i]
                if k=='join': return ('reach',i)
                if k=='break':
                    c.exits.append(regs_state()); c.nbreak[-1]+=1; emit('@@BRK%d@@break;'%(len(c.exits)-1))
                else:
                    c.conts.append(regs_state()); c.ncont[-1]+=1; emit('continue;')
                return ('end',)
            if i in G.loops and i not in c.active:
                i=exec_loop(i)
                if i is None: return ('end',)
                continue
            first=False
            if i in SW0:
                b=SW0[i]; r=switch_at(b,SWV[b][1],SWV[b][2],stops)
                if r[0]=='end': return r
                i=r[1]; continue
            mn,ops,pc=ins[i]
            if mn in ('jsr','bsr','bsrf'):
                if mn=='bsr': tgt=target_of(ops)
                elif mn=='bsrf':                               # pc-relative call through a register: the target is the address of the next instruction after the delay slot plus the register
                    rg=parse_ops(ops)[0]
                    v=c.gi(rg)
                    if not isint(v):                              # a register the generator holds as a variable (a loop carries it): the code loaded it from a pool just before
                        for k_ in range(i-1,max(i-9,-1),-1):
                            m_=ins[k_]
                            mm_=re.match(r'^@\(0x[0-9a-f]+,pc\),%s\s*;\s*=([0-9a-fA-F]+)'%rg,m_[1]) if m_[0]=='mov.l' else None
                            if mm_: v=int(mm_.group(1),16); break
                            if re.search(r',\s*%s\s*(;|$)'%rg,m_[1]) or m_[0] in ('bra','jsr','bsr','bsrf','rts','jmp','bt','bf','bt/s','bf/s'): break
                    if not isint(v): raise Skip('flow bsrf')
                    tgt=(pc+4+v)&0xFFFFFFFF
                else:
                    v=c.gi(parse_ops(ops)[0].strip('@'))
                    if not isinstance(v,int) and CALLC.get(i) is not None and canon(CALLC[i]) in FUNCS: v=CALLC[i]
                    if not isinstance(v,int):
                        # a call through an address worked out or loaded: the register holds it before the delay slot runs
                        if isinstance(v,tuple) and v[0]=='addr': raise Skip('indirect call')
                        texpr=ex(v)
                        step(i+1)
                        do_call('@indirect',ind=texpr,after=ins[i+2] if i+2<len(ins) else None,after2=ins[i+3] if i+3<len(ins) else None); commit(); i+=2; continue
                    tgt=v
                tgt=canon(tgt)   # the cached/uncached mirror of a function
                if tgt not in FUNCS:
                    if not (in_ram(tgt)): raise Skip('callee unknown %x'%tgt)
                    # a code address that is not a function entry (a shared tail, an entry into the middle of another function): called
                    # through a cast of its address, checked by address like any call through a pointer
                    step(i+1)
                    do_call('@indirect',ind='0x%X'%tgt,after=ins[i+2] if i+2<len(ins) else None,after2=ins[i+3] if i+3<len(ins) else None); commit(); i+=2; continue
                step(i+1)
                do_call(FUNCS[tgt],after=ins[i+2] if i+2<len(ins) else None,after2=ins[i+3] if i+3<len(ins) else None); commit(); i+=2; continue
            if mn=='braf' and isint(c.R.get(parse_ops(ops)[0])):
                # braf through a constant (not a jump table): a goto, or a tail call to a fixed address
                tgt=(pc+4+c.R[parse_ops(ops)[0]])&0xFFFFFFFF
                if tgt in addr2idx: step(i+1); i=addr2idx[tgt]; continue
                tgt=canon(tgt)
                step(i+1)
                if tgt in FUNCS: do_call(FUNCS[tgt],tail=True)
                elif in_ram(tgt): do_call('@indirect',tail=True,ind='0x%X'%tgt)
                else: raise Skip('tail unknown')
                return ('end',)
            if mn=='bra' or mn=='jmp':
                if mn=='bra':
                    tgt=target_of(ops)
                    if tgt in addr2idx: step(i+1); i=addr2idx[tgt]; continue
                else:
                    v=c.gi(parse_ops(ops)[0].strip('@'))
                    if not isinstance(v,int) and CALLC.get(i) is not None and canon(CALLC[i]) in FUNCS: v=CALLC[i]
                    if not isinstance(v,int):
                        # a tail call through a pointer (a callback, a method table): the delay slot restores the frame
                        if isinstance(v,tuple) and v[0]=='addr': raise Skip('indirect jmp')
                        texpr=ex(v); step(i+1)
                        do_call('@indirect',tail=True,ind=texpr)
                        return ('end',)
                    tgt=v
                    if tgt in addr2idx: step(i+1); i=addr2idx[tgt]; continue      # the compiler's long-range goto: a constant address inside the function, like a bra
                tgt=canon(tgt)
                if tgt not in FUNCS:
                    if not (in_ram(tgt)): raise Skip('tail unknown')
                    step(i+1)
                    do_call('@indirect',tail=True,ind='0x%X'%tgt)
                    return ('end',)
                step(i+1)
                do_call(FUNCS[tgt],tail=True)
                return ('end',)
            if mn=='rts':
                step(i+1) if i+1<len(ins) else None
                r0=c.R.get('r0'); f0=c.FR.get('fr0')
                if c.sz or c.swapped: raise Skip('FPU mode not restored')
                rs='None' if r0 is None or r0==DIRTY or (isinstance(r0,tuple) and r0[0] in ('addr','srx')) else ex(r0)
                fs='None' if f0 is None or f0==DIRTY else fx(f0)
                c.rets.append((rs,fs))
                if len(c.blocks)==1: return ('ret',)
                emit('@@RET:%s@|@%s@@'%(rs,fs))
                return ('end',)
            if mn in ('bt','bf','bt/s','bf/s'):
                tgt=target_of(ops)
                if tgt not in addr2idx and tgt not in FUNCS and not (in_ram(tgt)): raise Skip('branch out')
                delay=mn.endswith('/s')
                if delay: step(i+1)
                if c.T is None: raise Skip('no T')
                cond=c.T if mn.startswith('bf') else negate(c.T)
                r=branch(i,addr2idx.get(tgt,tgt),i+(2 if delay else 1),cond,stops,mn.startswith('bf'))
                if r[0]=='end': return r
                i=r[1]; continue
            step(i); i+=1

    c.D=0; c.maxD=0; c.spans=[]; c.pend=[]; c.frame_regs=set(); c.frame=bool(frame) or any(x[0]=='mov' and x[1].startswith('r15,') for x in ins)
    c.rets=[]; c.lvk={}; c.lvconst={}; c.lv={}; c.exits=[]; c.conts=[]; c.nbreak=[]; c.ncont=[]; c.active=[]; c.loopstack=[]; c.steps=0; c.macl=None; c.direct=False; c.has_loop=False
    # jump tables: `mova table,r0; mov.w @(r0,rX),r0; braf r0` and a table of 16-bit offsets from the braf + 4; rX holds twice the index
    def find_switches():
        sw={}
        for i in range(len(ins)-2):
            if ins[i][0]!='mova' or ins[i+1][0]!='mov.w' or ins[i+2][0]!='braf': continue
            m=re.match(r'@\((0x[0-9a-f]+),pc\),r0$',(ins[i][1] or '').strip()); m2=re.match(r'@\(r0,(r\d+)\),r0$',(ins[i+1][1] or '').strip())
            if not m or not m2 or (ins[i+2][1] or '').strip()!='r0': continue
            tbl=int(m.group(1),16); base=ins[i+2][2]+4
            limit=None                                                       # the count from the bounds check before the jump: cmp/hs rLimit,rIndex
            for j in range(i-1,max(i-14,-1),-1):
                if ins[j][0]=='cmp/hs':
                    lr=(ins[j][1] or '').split(',')[0].strip()
                    for k in range(j-1,max(j-14,-1),-1):
                        mm=re.match(r'#(-?\d+),%s$'%lr,(ins[k][1] or '').strip()) if ins[k][0]=='mov' else None
                        if mm: limit=int(mm.group(1)); break
                        mw=re.search(r'=(-?\d+)',ins[k][1] or '') if ins[k][0]=='mov.w' and (ins[k][1] or '').strip().endswith(','+lr) else None
                        if mw: limit=int(mw.group(1)); break
                    break
            tg=[]
            for k in range(256 if limit is None else limit):
                off=int.from_bytes(BIN[tbl+2*k-BASE:tbl+2*k-BASE+2],'little',signed=True)
                if base+off not in addr2idx: break
                tg.append(addr2idx[base+off])
            if not tg or (limit is not None and len(tg)!=limit): continue
            sw[i+2]=(i,m2.group(1),tg)
        return sw
    SWV=find_switches()
    SW0={v[0]:b for b,v in SWV.items()}                  # the mova node -> its braf node
    # long-range gotos: `mov.l @(pc),rN ; jmp @rN` with the pool constant an address inside this function: an edge in the graph
    GOTO={}
    for i_,x_ in enumerate(ins):
        if x_[0]=='jmp' and re.match(r'@r\d+$',(x_[1] or '').strip()):
            reg_=(x_[1] or '').strip()[1:]
            for j_ in range(i_-1,max(i_-5,-1),-1):
                m_=re.match(r'@\(0x[0-9a-f]+,pc\),%s\s*;\s*=([0-9a-f]{8})'%reg_,(ins[j_][1] or '').strip()) if ins[j_][0]=='mov.l' else None
                if m_:
                    t_=int(m_.group(1),16)
                    if t_ in addr2idx: GOTO[i_]=[addr2idx[t_]]
                    break
    swg={b:sorted(set(v[2])) for b,v in SWV.items()}
    swg.update(GOTO)
    G=gen_cfg.Graph(ins,addr2idx,swg) if ins else None
    if G is None: raise Skip('empty')
    c.live=None; c.cond_tmps=set()
    if os.environ.get('GEN_FOLD','1')!='0':
        try: c.live=reg_liveness(ins,addr2idx)
        except Exception: c.live=None

    def exec_flat():
        """The function as labelled blocks: every register a C variable (R0-R14, F0-F15, T_ for the T flag) written back at the end of each
        block, branches as `if (...) goto`, jump tables as a switch of gotos, the stack frame as memory."""
        if any(x[0] in ('frchg','fschg') for x in ins): raise Skip('flat: FPU mode changes')
        ints=sorted({int(n) for x in ins for n in re.findall(r'\br(\d+)\b',(x[1] or '').split(';')[0]) if int(n)<=14}|{0})
        flts=sorted({int(n) for x in ins for n in re.findall(r'\bfr(\d+)\b',(x[1] or '').split(';')[0])}|{2*int(n)+k for x in ins for n in re.findall(r'\bdr(\d+)\b',(x[1] or '').split(';')[0]) for k in (0,1)})
        V=lambda r:'R%s'%r[1:]
        FV=lambda f:'F%s'%f[2:]
        for n in ints: emit('int R%d;'%n)
        for n in flts: emit('float F%d;'%n)
        emit('int T_;')
        live0=c.live.get(0) if c.live else None      # the registers live at entry: only those are parameters (one written before it is read is not)
        for n in ints:
            if 4<=n<=7 and (live0 is None or 'r%d'%n in live0): c.iuse.add(n); emit('R%d = a%d;'%(n,n))
        for n in flts:
            if 4<=n<=11 and (live0 is None or 'fr%d'%n in live0): c.fuse.add(n); emit('F%d = f%d;'%(n,n))
        lead={0}
        for i_,(mn_,ops_,pc_) in enumerate(ins):
            if mn_ in ('bt','bf','bt/s','bf/s','bra'):
                t_=target_of(ops_)
                if t_ in addr2idx: lead.add(addr2idx[t_])
                lead.add(i_+(2 if mn_ in ('bt/s','bf/s','bra') else 1))
            if mn_ in ('rts','jmp','braf','rte'): lead.add(i_+2)
        for b_,v_ in SWV.items(): lead.update(v_[2])
        for v_ in GOTO.values(): lead.update(v_)
        lead={x for x in lead if x<len(ins)}
        CARRY={}                 # stack depth -> the words pushed for a call that a later block makes: (depth, float?)
        try: LIVE=reg_liveness(ins,addr2idx)
        except Exception: LIVE=None
        def fresh_state(D):
            c.R={'r%d'%n:('e','R%d'%n) for n in ints}; c.FR={'fr%d'%n:('e','F%d'%n) for n in flts}
            c.D=D; c.fpul=None; c.macl=None; c.stack={}; c.lastcall=None
            c.pend=[(('fpend',('e','*(float *)((int)stk + @@F:%d@@)'%(-d))) if f else ('e','*(int *)((int)stk + @@F:%d@@)'%(-d))) for d,f in CARRY.get(D,[])]
            setT('T_','!T_')
        def spill(succ=None):
            live=None
            if LIVE is not None and succ: live=set().union(*[LIVE.get(x,_ALLREGS) for x in succ])
            if c.pend:
                # words pushed for a call a later block makes: they are in the frame (it is memory here); the next block reads them back
                if not c.frame: raise Skip('flat: a pushed word crosses a block')
                n_=len(c.pend); slots=[]
                for k_,v_ in enumerate(c.pend):
                    d_=c.D-4*(n_-1-k_); ad_=('expr','((int)stk + @@F:%d@@)'%(-d_))
                    if isfp(v_): fstore(ad_,v_[1])
                    else: store('l',ad_,v_)
                    slots.append((d_,isfp(v_)))
                if CARRY.get(c.D,slots)!=slots: raise Skip('flat: blocks push different words at one depth')
                CARRY[c.D]=slots; c.pend=[]
            if c.sz or c.swapped: raise Skip('flat: FPU mode across a block')
            pairs=[]
            for r,v in sorted(c.R.items()):
                if r=='r15' or r[1:]=='' or not r[1:].isdigit() or int(r[1:])>14 or v is None or v==DIRTY or v==('e',V(r)): continue
                if live is not None and r not in live: continue      # nothing reads it on any path from here: no write-back
                if isinstance(v,tuple) and v[0] in ('addr','srx'): raise Skip('flat: an address or SR value crosses a block')
                pairs.append((V(r),ex(v),False))
            for f,v in sorted(c.FR.items()):
                if v is None or v==DIRTY or v==('e',FV(f)): continue
                if live is not None and f not in live: continue
                pairs.append((FV(f),fx(v),True))
            if c.T is not None and c.T!='T_' and (live is None or 'T' in live): pairs.append(('T_','(%s)'%c.T,False))
            tmp=[]
            for var,e,isf in pairs:
                t=fresh(isf); emit('%s %s = %s;'%('float' if isf else 'int',t,e)); tmp.append((var,t))
            for var,t in tmp: emit('%s = %s;'%(var,t))
        def label(i): return 'L_%X'%ins[i][2]
        def block(i,D):
            fresh_state(D)
            emit('%s:;'%label(i))
            start=i
            while True:
                if i>=len(ins): raise Skip('runs off the code')
                if i!=start and i in lead:
                    spill([i]); emit('goto %s;'%label(i)); return [(i,c.D)]
                if i in SW0:
                    b=SW0[i]; mv,rx,tg=SWV[b]
                    idx=c.gi(rx)
                    step(b+1)                                    # the delay slot of the braf runs before the jump
                    sw_=fresh(False); emit('int %s = %s;'%(sw_,ex(idx)))      # taken before the registers are written back: idx is in terms of their values at the block's start
                    spill(list(tg))
                    emit('switch (%s) { %s }'%(sw_,' '.join('case %d: goto %s;'%(2*k,label(t)) for k,t in enumerate(tg))))
                    return [(t,c.D) for t in sorted(set(tg))]
                mn,ops,pc=ins[i]
                if mn in ('jsr','bsr','bsrf'):
                    if mn=='bsr': tgt=target_of(ops)
                    elif mn=='bsrf':
                        v=c.gi(parse_ops(ops)[0])
                        if not isint(v): raise Skip('flow bsrf')
                        tgt=(pc+4+v)&0xFFFFFFFF
                    else:
                        v=c.gi(parse_ops(ops)[0].strip('@'))
                        if not isinstance(v,int) and CALLC.get(i) is not None and canon(CALLC[i]) in FUNCS: v=CALLC[i]
                        if not isinstance(v,int):
                            if isinstance(v,tuple) and v[0]=='addr': raise Skip('indirect call')
                            texpr=ex(v); step(i+1)
                            do_call('@indirect',ind=texpr,after=ins[i+2] if i+2<len(ins) else None,after2=ins[i+3] if i+3<len(ins) else None); i+=2; continue
                        tgt=v
                    tgt=canon(tgt)
                    step(i+1)
                    if tgt in FUNCS: do_call(FUNCS[tgt],after=ins[i+2] if i+2<len(ins) else None,after2=ins[i+3] if i+3<len(ins) else None)
                    elif in_ram(tgt): do_call('@indirect',ind='0x%X'%tgt,after=ins[i+2] if i+2<len(ins) else None,after2=ins[i+3] if i+3<len(ins) else None)
                    else: raise Skip('callee unknown %x'%tgt)
                    i+=2; continue
                if mn in ('bra','jmp','braf'):
                    if mn=='bra': tgt=target_of(ops)
                    else:
                        v=c.gi(parse_ops(ops)[0].strip('@'))
                        if not isinstance(v,int) and CALLC.get(i) is not None and canon(CALLC[i]) in FUNCS: v=CALLC[i]
                        if not isint(v):
                            if mn=='braf' or (isinstance(v,tuple) and v[0]=='addr'): raise Skip('flat: '+mn)
                            texpr=ex(v); step(i+1); do_call('@indirect',tail=True,ind=texpr); return []
                        tgt=v if mn=='jmp' else (pc+4+v)&0xFFFFFFFF
                    step(i+1)
                    if tgt in addr2idx:
                        spill([addr2idx[tgt]]); emit('goto %s;'%label(addr2idx[tgt])); return [(addr2idx[tgt],c.D)]
                    tgt=canon(tgt)
                    if tgt in FUNCS: do_call(FUNCS[tgt],tail=True)
                    elif in_ram(tgt): do_call('@indirect',tail=True,ind='0x%X'%tgt)
                    else: raise Skip('tail unknown')
                    return []
                if mn=='rts':
                    if i+1<len(ins): step(i+1)
                    r0=c.R.get('r0'); f0=c.FR.get('fr0')
                    if c.sz or c.swapped: raise Skip('FPU mode not restored')
                    rs='None' if r0 is None or r0==DIRTY or (isinstance(r0,tuple) and r0[0] in ('addr','srx')) else ex(r0)
                    fs='None' if f0 is None or f0==DIRTY else fx(f0)
                    c.rets.append((rs,fs)); emit('@@RET:%s@|@%s@@'%(rs,fs))
                    return []
                if mn in ('bt','bf','bt/s','bf/s'):
                    tgt=target_of(ops)
                    if tgt not in addr2idx: raise Skip('flat: branch out')
                    if c.T is None: raise Skip('no T')
                    cond=negate(c.T) if mn.startswith('bf') else c.T
                    k=fresh(False); emit('int %s = %s;'%(k,uw(cond)))
                    delay=mn.endswith('/s')
                    if delay: step(i+1)
                    nxt=i+(2 if delay else 1)
                    spill([addr2idx[tgt],nxt])
                    emit('if (%s) goto %s;'%(k,label(addr2idx[tgt])))
                    emit('goto %s;'%label(nxt))
                    return [(addr2idx[tgt],c.D),(nxt,c.D)]
                if mn in ('rte',): raise Skip('flow rte')
                step(i); i+=1
        seen={}
        work=[(0,0)]
        while work:
            i,D=work.pop()
            if i in seen:
                if seen[i]!=D: raise Skip('flat: stack depth differs at %x'%ins[i][2])
                continue
            seen[i]=D
            work.extend(block(i,D))
        c.flat=True
        return ('end',)
    out=exec_flat() if flat else exec_from(0,{},False)
    c.terminated=out[0]=='end'
    return c
