import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '../..')))
import toolpath  # noqa: E402,F401
import layout as _layout  # noqa: E402
_CODE=_layout.region('code') or (0,0)      # the code the cases may not write to (layout.txt)
import sys,re,json,os,subprocess,struct,random,zlib,time
sys.path.insert(0,os.path.dirname(__file__))
import gen_core as G
Skip=G.Skip
def build(name,ret,passthru=False):
    c=G.run(name,passthru)
    ip=sorted(c.iuse); fp=sorted(c.fuse)
    params=[]
    stkonly=bool(ip) and not [n for n in ip if n<8]      # only words the caller left on the stack are read: one structure passed by value, not r4-r7 as parameters (every caller would be compared on them)
    if stkonly:
        params.append('Stk%d s'%max(max(ip)-8+1,4))
    elif ip:
        for n in range(4,max(ip)+1): params.append('int a%d'%n)
    if fp:
        for n in range(4,max(fp)+1): params.append('float f%d'%n)
    text='\n'.join(c.stmts)
    if stkonly: text=re.sub(r'\ba(\d+)\b',lambda m:'s.w[%d]'%(int(m.group(1))-8) if int(m.group(1))>=8 else m.group(0),text)
    decls=[]
    def hoist(m):
        decls.append('%s %s;'%(m.group(1),m.group(2))); return '%s = '%m.group(2)
    text=re.sub(r'\b(int|float) ([tu]\d+) = ',hoist,text)
    def hoist2(m):
        decls.append('%s %s;'%(m.group(1),m.group(2))); return ''
    text=re.sub(r'^\s*(int|float) ([tu]\d+(?:\[\d+\])?);$',hoist2,text,flags=re.M)
    text=re.sub(r'\n[ \t]*(?=\n)','',text)
    frame_decl=None
    stkstruct=0
    if c.frame:
        up=0
        AT=r'\(int\)stk \+ @@F:(-?\d+)@@\)((?: [+-] (?:0x[0-9A-Fa-f]+|\d+)\))*)'
        def at(m): return int(m.group(1))+sum(int(x,0)*(-1 if sg=='-' else 1) for sg,x in re.findall(r' ([+-]) (0x[0-9A-Fa-f]+|\d+)\)',m.group(2)))
        for m in re.finditer(AT,text):
            off=at(m)
            if off>=0: up=max(up,off//4+1)      # an address above the function's own frame: words the caller left on the stack (arguments, a structure passed by value)
        for e,n in getattr(c,'spans',[]):       # a block copy covers n bytes from its address
            m=re.search(AT,e)
            if m and at(m)>=0: up=max(up,(at(m)+n-1)//4+1)
        if up:
            up=min(up,64)        # up to 64 words: a structure passed by value can be large; only the words the code reads (padded to four, a callee that
                                 # read three declared a phantom fourth parameter and its callers were compared on the caller's own local there: sprPutAtAlpha)
            if not [n for n in c.iuse if n<8]:      # only the stack is read: no register argument at all, so the words are one structure passed by value (r4-r7 as parameters would be compared at every caller)
                stkstruct=up
                params=['Stk%d s'%up]
            else:
                for n in range(8,8+up): c.iuse.add(n)       # they come in as the stack parameters a8..: copied to the top of the frame array
                ip=sorted(c.iuse); params=['int a%d'%n for n in range(4,max(ip)+1)]
                if up>16: params=['int a%d'%n for n in range(4,9)]      # more than the compiler takes as parameters (a structure by value): the first one's address reaches the rest
            if fp: params+=['float f%d'%n for n in range(4,max(fp)+1)]
        W=(c.maxD+3)//4+1
        frame_decl=('int stk[%d] = {0};' if os.environ.get('GEN_ZERO_STK')=='1' else 'int stk[%d];')%(W+up+(8 if up else 0))         # the simulator's stack starts zeroed, so the proof does not need an initialiser (which costs a copy from a constant)
        text=re.sub(r'@@F:(-?\d+)@@',lambda m:str(4*W+int(m.group(1))),text)
    rt='void'
    if '@@TAIL:' in text:
        if ret=='void': text=re.sub(r'@@TAIL:(.*?)@@',lambda m:m.group(1)+';\nreturn;',text)
        else: text=re.sub(r'@@TAIL:(.*?)@@',lambda m:'return %s;'%m.group(1),text); rt='int'
    if not c.terminated:
        if ret=='r0':
            v=c.R.get('r0')
            if v is None or v==G.DIRTY or (isinstance(v,tuple) and v[0]=='addr'): raise Skip('no r0')
            rt='int'; text+='\nreturn %s;'%G.ex(v)
        elif ret=='fr0':
            v=c.FR.get('fr0')
            if v is None or v==G.DIRTY: raise Skip('no fr0')
            rt='float'; text+='\nreturn %s;'%G.fx(v)
    elif ret=='r0': rt='int'
    elif ret=='fr0': rt='float'
    def retfix(m):
        e,f=m.group(1),m.group(2)
        if ret=='void': return 'return;'
        if ret=='fr0':
            if f=='None': raise Skip('no fr0')
            return 'return %s;'%f
        return 'return 0;' if e=='None' else 'return %s;'%e
    text=re.sub(r'@@RET:(.*?)@\|@(.*?)@@',retfix,text)
    if ret=='void': text=re.sub(r'\n?return;\Z','',text)
    # prune dead assignments of pure values (phi leftovers)
    def prune(text,decls):
        import collections
        changed=True
        while changed:
            changed=False
            occ=collections.Counter(re.findall(r'\b[A-Za-z_]\w*\b',text))     # every name's uses and assignments, in one scan per round
            lhs=collections.defaultdict(list)
            for m_ in re.finditer(r'(?:^[ \t]*|(?<=; ))([A-Za-z_]\w*) = ([^;\n]*);',text,flags=re.M):      # one statement: a line can hold `t6 = t5; break;`
                lhs[m_.group(1)].append(m_.group(2))
            dead=set()
            for dcl in list(decls):
                nm=re.sub(r'\[.*','',dcl.split()[1].rstrip(';'))      # an array's name without its size
                rs=lhs.get(nm,[])
                if occ[nm]==len(rs) and all(('*(' not in r and not re.search(r'[A-Za-z_]\w*\s*\(',r)) for r in rs):
                    dead.add(nm); decls.remove(dcl)
            if dead:
                text=re.sub(r'(?:^[ \t]*|(?<=; ))(%s) = [^;\n]*; ?'%'|'.join(map(re.escape,sorted(dead))),lambda m_:re.match(r'[ \t]*',m_.group(0)).group(0),text,flags=re.M)
                text=re.sub(r'^[ \t]*\n','',text,flags=re.M); changed=True
            t2=re.sub(r'if \([^\n]*\) \{\s*\}(?!\s*else)','',text)      # an empty if that has an else stays: dropping it would leave the else standing alone
            t2=re.sub(r' else \{\s*\}','',t2)
            if t2!=text: text=t2; changed=True
        return text
    text=prune(text,decls)
    # unused call results: drop the temp
    import collections
    occ=collections.Counter(re.findall(r'\b[A-Za-z_]\w*\b',text))
    calls_=set(re.findall(r'\b([A-Za-z_]\w*) = [A-Za-z_]\w*\(',text))
    drop_=set()
    for d in list(decls):
        nm=re.sub(r'\[.*','',d.split()[1].rstrip(';'))
        if occ[nm]==1 and nm in calls_:
            drop_.add(nm); decls.remove(d)
    if drop_: text=re.sub(r'\b(%s) = '%'|'.join(map(re.escape,sorted(drop_))),'',text)
    body=text.strip('\n').split('\n')
    occ=collections.Counter(re.findall(r'\b[A-Za-z_]\w*\b','\n'.join(body)))
    # a load whose value nothing uses: the original made the read anyway (the compiler keeps a read only when it is volatile, a device
    # register or a dummy read), so it is written as a volatile read the compiler cannot drop
    for i_,l_ in enumerate(body):
        m_=re.match(r'^(\s*)([tu]\d+) = \*\(((?:unsigned |signed )?(?:char|short|int)|float) \*\)(.*);$',l_)
        if m_ and occ[m_.group(2)]==1:
            body[i_]='%s*(volatile %s *)%s;'%(m_.group(1),m_.group(3),m_.group(4))
            decls[:]=[d for d in decls if not re.match(r'^(int|float) %s;$'%m_.group(2),d)]
    if os.environ.get('GEN_INLINE','1')!='0': body=inline_single(body,decls)
    # the caller-frame copies are statements: after the body's own leading declarations (the flat form declares its register
    # variables there), or a C89 compiler rejects every declaration that follows them
    k_=0
    while k_<len(body) and (not body[k_].strip() or re.match(r'^\s*(?:int|float|double|unsigned int|struct \w+)\s+[\w\[\]\s,*]+;$',body[k_])): k_+=1
    if frame_decl and stkstruct: body=body[:k_]+['stk[%d] = s.w[%d];'%(W+i,i) for i in range(up)]+body[k_:]
    elif frame_decl and up>16: body=body[:k_]+['{ int *ap = &a8; int k; for (k = 0; k < %d; k++) stk[%d + k] = ap[k]; }'%(up,W)]+body[k_:]
    elif frame_decl and up: body=body[:k_]+['stk[%d] = a%d;'%(W+i,8+i) for i in range(up)]+body[k_:]
    # a structure returned by value (vecMake, Virtua Tennis): the only stack word read is SHC's hidden return pointer, the destination of
    # the block copy that ends the function. Written as the source had it, a function returning the structure, not a structure argument
    # whose first word is the destination (its callers pushed one word and were compared on four, and on phantom r4-r7)
    if params and re.match(r'Stk\d+ s$',params[0]) and ret=='void' and sorted(c.iuse)==[8]:
        j=max([i for i,l in enumerate(body) if l.strip()] or [0])
        m=re.match(r'^(\s*)\{ struct (mv|mvb)(\d+) \{ (?:int w|char b)\[\3\]; \}; \*\(struct \2\3 \*\)\(s\.w\[0\]\) = \*\(struct \2\3 \*\)\((.*)\); \}$',body[j] if body else '')
        if m and 's.w[' not in '\n'.join(body[:j]) and (m.group(2)=='mv' or int(m.group(3))%4==0):
            k=int(m.group(3))//(1 if m.group(2)=='mv' else 4)
            body[j]='%sreturn *(Stk%d *)(%s);'%(m.group(1),k,m.group(4)); params=params[1:]; rt='Stk%d'%k
    nlines=len(body)+len(decls)
    if nlines>max(400,25*(G.SPANS.get(name,(0,0))[1]//2)): raise Skip('C too large: %d lines for %d bytes'%(nlines,G.SPANS.get(name,(0,0))[1]))      # duplicated arms made a 298-byte function 30,000 lines; the compiler then runs for an hour
    src='%s %s(%s)\n{\n%s\n}\n'%(rt,name,', '.join(params) if params else 'void','\n'.join(['    '+d for d in decls+([frame_decl] if frame_decl else [])]+(['']if decls or frame_decl else [])+['    '+s for s in body]))
    return src,c
_ASSIGN=re.compile(r'^\s*([tu]\d+) = (.+);$')
_IDENT=re.compile(r'\b[A-Za-z_]\w*\b')
_CAST=re.compile(r'\((?:unsigned |signed )?(?:int|float|char|short)\s*\**\)')
_CALL=re.compile(r'\b(?!_builtin_)[A-Za-z_]\w*\s*\((?!\s*(?:int|float|unsigned|signed|char|short)\b)')      # a call (not a compiler intrinsic)
def inline_single(body,decls):
    """A temporary set once and read once, further down the same straight run of statements, with nothing in between that
    changes what it reads, is written into its one use: `t9 = R4 != 0; ... if (t9) goto L;` becomes `if (R4 != 0) goto L;`.
    The flat form's write-back copies and held conditions cost the compiler registers, copies and spills; the original's
    source had the expression where it is used. Nothing crosses a label, a brace or a goto; a value that reads memory or
    calls does not cross a store or a call."""
    import collections
    for _round in range(6):
        occ=collections.Counter(_IDENT.findall('\n'.join(body)))
        changed=False
        i=0
        while i<len(body):
            m=_ASSIGN.match(body[i])
            if not m or occ[m.group(1)]!=2:
                i+=1; continue
            v,e=m.group(1),m.group(2)
            if re.search(r'\b%s\b'%v,e) or 'volatile' in e:
                i+=1; continue
            reads_mem='*(' in e or re.search(r'\b[A-Za-z_]\w*\s*\(',e.replace('(int)','').replace('(float)','')) or 'stk' in e
            names=set(_IDENT.findall(e))
            j=i+1; ok=False
            while j<len(body):
                l=body[j]
                if re.search(r'\b%s\b'%v,l):
                    ok=len(re.findall(r'\b%s\b'%v,l))==1 and not re.match(r'^\s*(?:L_\w+:|\}|case |default:)',l)
                    # two calls in one statement run in an order C leaves open (SHC: right to left): a value that calls or reads memory
                    # stays a statement of its own when its use would then hold two calls
                    if ok and reads_mem and len(_CALL.findall(_CAST.sub('',l)))+len(_CALL.findall(_CAST.sub('',e)))>=2: ok=False
                    break
                if re.search(r'[{}]|^\s*L_\w+:|\bgoto\b|\breturn\b|\bbreak\b|\bcontinue\b',l): break
                a=re.match(r'^\s*([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*[-+*/&|^]?=',l)
                if a and a.group(1) in names: break
                if reads_mem and (re.match(r'^\s*\*\(',l) or re.search(r'\b[A-Za-z_]\w*\s*\((?!\s*(?:int|float|unsigned|signed|char|short)\b)',re.sub(r'\((?:unsigned |signed )?(?:int|float|char|short)\s*\**\)','',l))): break
                j+=1
            if not ok:
                i+=1; continue
            body[j]=re.sub(r'\b%s\b'%v,lambda _:'(%s)'%e,body[j],count=1)
            del body[i]
            decls[:]=[d for d in decls if not re.match(r'^(int|float) %s;$'%v,d)]
            changed=True
        if not changed: break
    return body
_CPOOL={}
def const_pool(name):
    """The 4-byte words of the function's literal pool that it loads as constants (mov.l / mov.w @(pc)): the pool may lie past the next function."""
    if name not in _CPOOL:
        import shdis
        st,sz=G.SPANS.get(name,(0,0)); words=set()
        for pc in range(st,st+sz,2):
            t,pool,psize,_=shdis.decode(struct.unpack_from('<H',G.BIN,pc-G.BASE)[0],pc)
            if pool is not None and t.startswith(('mov.l','mov.w')):
                words.add(pool&~3)
                if psize>2: words.add((pool&~3)+4)
        _CPOOL[name]=words
    return _CPOOL[name]
def addr_vals(c,basemap):
    """The addresses the code touches that follow from the argument values alone (None for one that depends on a loaded
    value or a loop variable)."""
    res=[]
    for kind,e in c.mem_addrs:
        if kind=='c': res.append(e); continue
        if re.search(r'\b[tu]\d+\b|\bstk\b|\b[RF]\d+\b|\bT_\b|_builtin_get_gbr',e): res.append(None); continue      # a temp, the frame, or a register variable of the flat form
        ex=e
        for k,v in basemap.items(): ex=re.sub(r'\b%s\b'%k,str(v),ex)
        ex=re.sub(r'\(\s*(?:unsigned\s+|signed\s+)?(?:short|char|int|long)\s*\)','',ex)           # a cast only narrows the seed address
        if not re.match(r'^[\(\)\s\w\+\-\*<>|&~]*$',ex): raise Skip('addr expr '+e)
        try: res.append(eval(ex)&0xffffffff)
        except Exception: raise Skip('eval')
    return res
def stack_top():
    """Where the simulator's stack pointer starts: the first stack argument of a function is there."""
    try:
        sys.path.insert(0,os.path.join(os.path.dirname(os.path.abspath(__file__)),'..'))
        import sh4sim
        return sh4sim.STACK_TOP-0x100
    except Exception: raise Skip('no simulator for stack arguments')
LAST_READS=[]
RUNTIME={a for a,n in G.FUNCS.items() if n.startswith('_')}       # the compiler's runtime helpers run for real, as equiv.py runs them
ERRS={}             # why the original did not finish on the cases drawn, counted (for the failure report)
HW=[True]           # whether the function names a hardware address: only then are its device accesses part of a case
def _names_hardware(src):
    for m in re.findall(r'0x([0-9A-Fa-f]{5,8})',src):
        v=int(m,16)
        ram=0x0C000000<=v<0x0D000000 or 0x8C000000<=v<0x8D000000 or 0xAC000000<=v<0xAD000000
        if v>=0x00200000 and not ram: return True
    return False
_SAVED={}
NOSTACK=[True]     # the function being drawn takes no stack arguments
def _saved_words(name):
    """The prologue's pushes before the frame is made: (words pushed, the slots holding an argument register, which the body may read
    back). Slot i is the i-th push, at 4*(i+1) below the entry stack pointer."""
    if name not in _SAVED:
        import shdis
        st,sz=G.SPANS.get(name,(0,0)); k=0; spill=set()
        for pc in range(st,min(st+sz,st+48),2):
            t=shdis.decode(struct.unpack_from('<H',G.BIN,pc-G.BASE)[0],pc)[0]
            m=re.match(r'(mov\.l r(\d+)|sts\.l (pr|macl|mach)|fmov\.s fr(\d+)),@-r15$',t)
            if m:
                if m.group(2) and int(m.group(2))<4: break                 # r0-r3 pushed: an argument for a call, the prologue is over
                if (m.group(2) and 4<=int(m.group(2))<=7) or m.group(4): spill.add(k)      # an argument register, or a float register (its pops may be paired): not checked
                k+=1
            elif re.search(r',r15$',t) or t.startswith(('rts','bra','jmp','jsr','bsr','b')): break      # the frame is made (any change to r15), or the code branches
        _SAVED[name]=(k,spill)
    return _SAVED[name]
def _argc(t):
    n=G.FUNCS.get(G.canon(t)) if hasattr(G,'canon') else G.FUNCS.get(t)
    a=G.callee_arity(n) if n else None
    return a[0] if a else None
def original_runs(name,case):
    """What the original does on a case: (instructions it takes, the instruction addresses it ran), or (None, set()) when it does not
    finish. Lets the generator keep only the cases a loop actually ends on, and pick the cases that reach the most code. Needs
    tools/sh4sim.py next to this directory; without it every case is kept."""
    try:
        sys.path.insert(0,os.path.join(os.path.dirname(os.path.abspath(__file__)),'..'))
        import sh4sim
    except Exception: return 0,None
    start,size=G.SPANS[name]
    base=int(open('BASE').read().strip(),16)
    r=sh4sim.run(dict(case,exe='1ST_READ.BIN',base='%08X'%base,entry='%08X'%start,end='%08X'%(start+size),steps=max(100000,size*60)),'.',deep=lambda t:t in RUNTIME,argc=_argc)
    LAST_READS[:]=r.get('reads',[])
    k,spill=_saved_words(name)
    if k and not r['error']:
        top=int(case.get('regs',{}).get('r15','%X'%(sh4sim.STACK_TOP-0x100)),16)
        hi=top+(0x40 if NOSTACK[0] else 0)        # above the saved words is the caller's frame: only a function that takes stack arguments reads there
        spilled={top-4*(i+1) for i in spill}            # an argument register the prologue pushed: the body may read it back
        seen=[a&~3 for a in r.get('reads',[]) if top-4*k<=a<hi and (a&~3) not in spilled]
        above=NOSTACK[0] and any(hi<=a<sh4sim.STACK_TOP for a in r.get('reads',[]))      # past the caller's frame: an index far beyond a local table
        if above or (seen and seen!=sorted(top-4*(i+1) for i in range(k) if i not in spill)):      # the only other reads there are the epilogue's pops, in order     # it read its own saved registers or return address beyond the epilogue's pops: an index past the end of a local table, which the game never makes
            ERRS['reads its own saved registers']=ERRS.get('reads its own saved registers',0)+1
            return None,set()
    if r['error']:
        ERRS[str(r['error'])[:70]]=ERRS.get(str(r['error'])[:70],0)+1
        return None,set()
    if r.get('devices') and not HW[0]: return None,set()      # a wild pointer reached memory the function never names (a null pointer, a random word): not a case
    return r['steps'],set(r.get('covered',[]))
def grow(name,runs,V,rng,HOT,budget=int(os.environ.get('GEN_BUDGET','1200'))):
    """Coverage-guided growth: take one of the cases that reach the most code, change one input (a word in memory, a register, the
    result of a call) to a value from V, and keep the new case when it runs an instruction no case has run yet. A chain of guards
    (a flag that must be 1, then the next one) is reached one step at a time this way, where random inputs never get through."""
    seen=set()
    t0=time.time()
    for d,n,c in runs:
        if c: seen|=c
    pool=[(d,c) for d,n,c in runs if n is not None and c]
    stale=0                                     # tries in a row that reached nothing new: past ~250 the function is done
    for _ in range(budget):
        if not pool or stale>=int(os.environ.get('GEN_STALE','250')): break
        if time.time()>(DEADLINE[0] or t0+draw_seconds(name)): break         # a function whose runs mostly hit the step cap: keep what was found (the coverage is reported), not nothing
        top=sorted(pool,key=lambda dc:-len(dc[1]))[:6]
        d,c=top[0] if rng.random()<0.7 else rng.choice(top)
        e=json.loads(json.dumps(d))
        n0,c0=original_runs(name,e)
        start,size=G.SPANS[name]
        ph=lambda x:x&0x1FFFFFFF      # the simulator reports reads at 0C..., functions.txt may say 8C...: the same bytes, compared as physical addresses
        late=[a&~3 for a in LAST_READS if 0x0C000000<=(a&0x1FFFFFFF)<0x0D000000 and not ph(start)-0x1000<=ph(a)<ph(start)+size+0x1000][-10:]
        v=rng.choice(HOT) if rng.random()<0.7 else rng.choice(V)
        if late and rng.random()<0.8:
            # the words the original read last are the ones its final guard looked at: set one of them
            a=late[-1] if rng.random()<0.6 else rng.choice(late); k='%08X'%a
            h=e['poke'].get(k,'00000000'*2)
            e['poke'][k]=struct.pack('<I',v).hex()+h[8:]
            prev='%08X'%((a-4)&0xffffffff)          # the neighbour's second word lies on this word: set it to the same value
            if prev in e['poke']: e['poke'][prev]=e['poke'][prev][:8]+struct.pack('<I',v).hex()+e['poke'][prev][16:]
        else:
            slots=[('regs',k) for k in e.get('regs',{}) if not k.startswith('fr')]+[('call',i) for i in range(len(e.get('calls',[])))]
            if not slots: continue
            kind,k=rng.choice(slots)
            if kind=='regs': e['regs'][k]='%08X'%v
            else: e['calls'][k]['r0']='%08X'%v
        n,cov=original_runs(name,e)
        if n is None or cov is None: continue
        if cov-seen:
            seen|=cov; runs.append((e,n,cov)); pool.append((e,cov)); stale=0
        else:
            stale+=1
    return runs
def draw_seconds(name):
    """How long a function's whole drawing (every attempt, its candidates and its growth) may take: two thirds of the time the run gives
    the function (gen_equiv/__main__.py: max(60, size/8) seconds times GEN_TIME_FACTOR), the last third left to directed.rescue and the
    rest. GEN_DRAW_SECONDS sets it outright."""
    if os.environ.get('GEN_DRAW_SECONDS'): return float(os.environ['GEN_DRAW_SECONDS'])
    return max(60,G.SPANS.get(name,(0,0))[1]//8)*float(os.environ.get('GEN_TIME_FACTOR','1'))*2/3
DEADLINE=[None]      # set when a function's drawing starts (tests); pick and grow stop at it
LAST={}              # the last pick's numbers: cases drawn, cases the original survived (the rest crashed it or never ended)
def pick(name,cases,want,V=None,rng=None,HOT=None):
    """Of many candidate cases, the ones the original finishes on, chosen greedily by the new instructions each reaches (the
    instruction coverage the equivalence check then rests on), padded with the rest up to want."""
    runs=[]; t0=time.time()
    for d in cases:
        runs.append((d,)+original_runs(name,d))
        if time.time()>(DEADLINE[0] or t0+draw_seconds(name)): break      # at the deadline, however few ended: a loop that random cases rarely end (a wait on a word a callee sets) would run every candidate to the step cap and time out with nothing
    if V and rng and all(c is not None for d,n,c in runs): runs=grow(name,runs,V,rng,HOT or V)
    ok=[(d,c) for d,n,c in runs if n is not None]
    LAST['drawn']=len(runs); LAST['survived']=len(ok); LAST['pool']=[d for d,c in ok]      # how many cases the original survived, and which
    if any(c is None for d,c in ok): return [d for d,c in ok][:want]
    chosen=[];seen=set();left=list(ok)
    while left and len(chosen)<want:
        best=max(left,key=lambda dc:len(dc[1]-seen))
        if not best[1]-seen: break
        chosen.append(best[0]);seen|=best[1];left.remove(best)
    for d,c in left:
        if len(chosen)>=want: break
        chosen.append(d)
    return chosen
def tests(name,c,src):
    DEADLINE[0]=time.time()+draw_seconds(name)
    NOSTACK[0]=not any(n>=8 for n in c.iuse)
    HW[0]=_names_hardware(src)
    ip=sorted(c.iuse); fp=sorted(c.fuse)
    loopy=c.has_loop
    addr_params=set()
    for kind,e in c.mem_addrs:
        if kind=='e':
            for m in re.findall(r'\ba(\d)\b',e): addr_params.add(int(m))
    basemap={}
    for n in ip:
        if n in addr_params: basemap['a%d'%n]=0x0C800000+(n-4)*0x10000
    consts=set()
    for m in re.findall(r'(?:==|!=|&|>=|>|<=|<|\+|-)\s*\(?(0x[0-9A-Fa-f]+|\d+)',src):
        try:
            v=int(m,0); consts|={v&0xffffffff,(v+1)&0xffffffff,(v-1)&0xffffffff,(v<<1)&0xffffffff}
        except Exception: pass
    base=[0,1,2,3,4,5,8,16,0x100,0xFFFFFFFF,0x7FFFFFFF,0x80000000,0xFFFFFFFE,0x40000000]
    floats=(0.0,1.0,2.5,-3.0,100.0,1e9)
    if loopy:
        # a loop runs as often as its bound says: keep the values small so that the original ends
        base=[0,1,2,3,4,5,8,16,0x40,0xFFFFFFFF,0xFFFFFFFE]
        consts={x for x in consts if x<=0x100 or x>=0xFFFFFF00}
        floats=(0.0,1.0,2.5,-3.0,0.1)
    for f in floats: base.append(struct.unpack('<I',struct.pack('<f',f))[0])
    V=sorted(set(base)|consts)
    small=[v for v in V if v<=0x100 or v>=0xFFFFFF00]
    ncalls=len(re.findall(r'\b(?:t\d+ = |return )?[A-Za-z_]\w*\([^()]*\);',src))+4
    if loopy: ncalls=max(ncalls,48)
    for attempt in (0,1,2):               # more candidates and mostly pointers when few survive: the original must finish on them
        if attempt and time.time()>DEADLINE[0]: break      # past the deadline: what is left goes to directed.rescue (a wait loop), not to more random candidates
        mult=(1,3,8)[attempt]; ncand=(1,1.6,2.6)[attempt]
        pw=(8,4,1)[attempt]                  # words a callee writes through a pointer to the frame: fewer when it would overwrite the saved registers
        cases=[]
        rng=random.Random((zlib.crc32(name.encode())&0xffff)+attempt)
        chained=any(k=='e' and re.search(r'\b[tu]\d+\b|\bstk\b|\b[RF]\d+\b',e) for k,e in c.mem_addrs)
        for i in range(int((160 if (loopy or chained) else 120)*ncand)):
            bm=dict(basemap)
            for n in ip:
                if n not in addr_params: bm['a%d'%n]=rng.choice(V)
            addrs=addr_vals(c,bm)
            poke={}
            forced=V[i] if i<12 and i<len(V) else None
            POINTERS=[0x0C900000,0x0C910000,0x0C920040,0x0C930100]
            pool=(small if loopy else V)+(POINTERS*max(1,len(V)//4)*mult if chained else [])      # about half of the loaded words are pointers
            if loopy or chained:
                # addresses that follow loop variables or loaded values cannot be worked out: fill the memory the pointers point at
                for n in sorted(addr_params):
                    b=bm['a%d'%n]&~3
                    words=[forced if forced is not None and rng.random()<0.85 else rng.choice(pool) for _ in range(64)]
                    poke['%08X'%((b-0x20)&0xffffffff)]=struct.pack('<16I',*[rng.choice(pool) for _ in range(16)]).hex()
                    poke['%08X'%b]=struct.pack('<64I',*words).hex()
            if chained:
                for pb in POINTERS: poke['%08X'%(pb&~3)]=struct.pack('<64I',*[rng.choice(pool) for _ in range(64)]).hex()   # memory behind those pointers
                own_=G.SPANS.get(name,(0,0)); oend_=G.ENDS.get(name,own_[0]+own_[1])
                for k_,e_ in c.mem_addrs:       # a table indexed by a loaded value: its entries (pointers) lie in a window after the constant base
                    if k_!='e': continue
                    for hx in re.findall(r'0x([0-9A-Fa-f]{7,8})\b',e_):
                        tb=int(hx,16)&~3
                        if 0x0C000000<=tb<0x0D000000 and not own_[0]-0x1000<=tb<oend_+0x1000 and '%08X'%tb not in poke:
                            poke['%08X'%tb]=struct.pack('<16I',*[rng.choice(pool) for _ in range(16)]).hex()
            own=G.SPANS.get(name,(0,0)); own_end=G.ENDS.get(name,own[0]+own[1])      # the code and its pool up to the next function
            cpool=const_pool(name)
            for a in addrs:
                if a is None or own[0]<=a<own_end or own[0]<=a+7<own_end: continue      # the function's own bytes (its pool, its tables) are not state to poke
                w=forced if forced is not None else rng.choice(pool)
                for k_,wd_ in enumerate((w,rng.choice(pool))):
                    a4_=((a&~3)+4*k_)&0xffffffff
                    if a4_ in cpool: continue                  # a pool word the function loads as a constant (the C has it baked in): not state, wherever the pool lies
                    poke['%08X'%a4_]=struct.pack('<I',wd_).hex()
            regs={}
            for n in ip:
                if n<8: regs['r%d'%n]='%08X'%(bm['a%d'%n]&0xffffffff)
                else: poke['%08X'%(stack_top()+4*(n-8))]=struct.pack('<I',bm['a%d'%n]&0xffffffff).hex()
            for n in fp: regs['fr%d'%n]=rng.choice(floats)
            if getattr(c,'xf_entry',False):
                for i in range(16): regs['xf%d'%i]=rng.choice(floats)
            for k_ in [k_ for k_ in poke if _CODE[0]<=(0x0C000000|(int(k_,16)&0x1FFFFFFF))<_CODE[1]]: del poke[k_]       # the code is read-only on the console: a case may not change a literal pool
            d={'about':'case %d'%i,'poke':poke}
            if regs: d['regs']=regs
            if c.ncalls or c.tail:
                d['calls']=[dict({'r0':'%08X'%rng.choice(pool),'fr0':'%08X'%struct.unpack('<I',struct.pack('<f',rng.choice((0.5,1.0,2.5,-3.0,100.0,0.1))))[0]},      # fr0 too: a callee that returns a float answers there
                                 **({'poke_arg':{r:struct.pack('<%dI'%pw,*[rng.choice(pool) for _ in range(pw)]).hex() for r in sorted(c.frame_regs)}} if c.frame_regs else {})) for _ in range(ncalls)]
                if getattr(c,'frame_stack_call',False):          # a call that returns a structure: the callee fills the buffer its stack argument names
                    for e_ in d['calls']: e_['poke_stack']=struct.pack('<4I',*[rng.choice(pool) for _ in range(4)]).hex()
            cases.append(d)
        cases=pick(name,cases,36,V,rng,sorted(consts|{0,1,2,0xFFFFFFFF}))
        if len(cases)>=(12 if (loopy or chained) else 6):
            # the development cases are the ones the coverage pick chose; the holdout cases are other survivors it did not choose
            rest=[d for d in LAST.get('pool',[]) if d not in cases]
            rng.shuffle(rest)
            indep=len(rest)>=6
            hold=rest[:18] if indep else cases[1::2][:18]
            dev=cases[:18] if indep else cases[0::2][:18]
            LAST['holdout_independent']=indep
            return {'dev':dev,'holdout':hold}
    # no case ends: a wait loop on a word nothing changes. Search for cases that end (directed.py): a changed poke, or a word that
    # changes between two reads
    try:
        import directed
        st,sz=G.SPANS[name]
        found=directed.rescue(name,st,sz,int(open('BASE').read().strip(),16),lambda t:t in RUNTIME)
    except Exception: found=[]
    if found:
        LAST['holdout_independent']=False
        return {'dev':found[0::2] or found,'holdout':found[1::2] or found}
    raise Skip('the original does not finish on the cases')
ASMW={      # instructions with no intrinsic, as SHC inline assembly functions (#pragma inline_asm): name -> (return type, parameters, assembly lines)
 'iaFscaS':('float','int a',["LDS R4,FPUL",".DATA.W H'F0FD"]),                       # fsca fpul,dr0: the sine, in fr0
 'iaFscaC':('float','int a',["LDS R4,FPUL",".DATA.W H'F0FD","FMOV FR1,FR0"]),         # and the cosine, from fr1
 'iaFsrra':('float','float x',["FMOV FR4,FR0",".DATA.W H'F07D"]),                      # fsrra fr0
 'iaOcbi':('void','void *p',[".DATA.W H'0493"]),                                       # ocbi @r4
 'iaOcbp':('void','void *p',[".DATA.W H'04A3"]),                                       # ocbp @r4
 'iaOcbwb':('void','void *p',[".DATA.W H'04B3"]),                                      # ocbwb @r4
 'iaMovca':('void','int v, void *p',["MOV R4,R0",".DATA.W H'05C3"]),                   # movca.l r0,@r5
}
INTRIN={    # the compiler's own intrinsics (private.h: fsca, fsrra), as plain C: no assembly text
 'iaFscaS':'static float iaFscaS(int a)\n{\n    float s;\n    float c;\n\n    _builtin_fsca(a, &s, &c);\n    return s;\n}',
 'iaFscaC':'static float iaFscaC(int a)\n{\n    float s;\n    float c;\n\n    _builtin_fsca(a, &s, &c);\n    return c;\n}',
 'iaFsrra':'static float iaFsrra(float x)\n{\n    return _builtin_fsrra(x);\n}',
}
def asm_text(n):
    if n in INTRIN: return INTRIN[n]
    ret,params,lines=ASMW[n]
    return '#pragma inline_asm(%s)\nstatic %s %s(%s)\n{\n%s\n}'%(n,ret,n,params,'\n'.join('    '+l for l in lines))
def protos_text(protos):
    out=[]
    for n,sig in sorted(protos.items()):
        if n in ASMW: out.append(asm_text(n)); continue
        ret='int'
        if sig and sig[-1]=='->float': ret='float'; sig=sig[:-1]
        elif sig and sig[-1].startswith('->Stk'): ret=sig[-1][2:]; sig=sig[:-1]      # a structure returned by value
        if n=='_builtin_set_imask': out.append('extern void _builtin_set_imask(int);'); continue
        if n in ('_builtin_trapa','_builtin_get_vbr','_builtin_set_vbr','_builtin_get_gbr','_builtin_set_gbr','_builtin_get_cr','_builtin_set_cr',
                 '_builtin_get_fpscr','_builtin_set_fpscr'): continue          # SHC knows these; a declaration of its own does not compile
        if n=='_builtin_prefetch': out.append('extern void _builtin_prefetch(void *);'); continue
        if n=='_builtin_ld_ext': out.append('extern void _builtin_ld_ext(float (*)[4]);'); continue
        if n=='_builtin_st_ext': out.append('extern void _builtin_st_ext(float (*)[4]);'); continue
        if n=='_builtin_ftrv': out.append('extern void _builtin_ftrv(float *, float *);'); continue      # the compiler's own, its prototype is fixed
        out.append('%s%s %s(%s);'%('extern ' if n.startswith('_builtin_') or sig==('()',) else '',ret,n,'' if sig==('()',) else ', '.join(sig) if sig else 'void'))
    return '\n'.join(out)

def head_protos(items):
    """The prototypes for a file that defines the items: the callees it declares, except the ones it defines itself (a definition
    that differs from the type the caller assumed would be a second, conflicting declaration), then the definitions' own."""
    protos={}
    for it in items:
        for k,v in it[3].items(): protos[k]=v
    mine=[it[1].split('\n')[0].strip() for it in items]
    names={it[0] for it in items}
    out=protos_text({k:v for k,v in protos.items() if k not in names})
    # a structure passed by value is typed StkN (N words): the typedef goes first, for the prototypes and the definitions below it
    words=sorted({int(w) for w in re.findall(r'\bStk(\d+)\b',out+' '.join(it[1] for it in items))})
    tds=''.join('typedef struct { int w[%d]; } Stk%d;\n'%(w,w) for w in words)
    return tds+(out+'\n' if out else '')+'\n'.join(l+';' for l in mine if l.endswith(')'))
