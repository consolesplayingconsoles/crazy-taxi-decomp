import sys,re,json,os,subprocess,struct,random
sys.path.insert(0,os.path.dirname(__file__))
import gen_core as G
Skip=G.Skip
def build(name,ret,passthru=False):
    c=G.run(name,passthru)
    if not c.stmts: raise Skip('empty')
    ip=sorted(c.iuse); fp=sorted(c.fuse)
    params=[]
    if ip:
        for n in range(4,max(ip)+1): params.append('int a%d'%n)
    if fp:
        for n in range(4,max(fp)+1): params.append('float f%d'%n)
    text='\n'.join(c.stmts)
    decls=[]
    def hoist(m):
        decls.append('%s %s;'%(m.group(1),m.group(2))); return '%s = '%m.group(2)
    text=re.sub(r'\b(int|float) ([tu]\d+) = ',hoist,text)
    def hoist2(m):
        decls.append('%s %s;'%(m.group(1),m.group(2))); return ''
    text=re.sub(r'^\s*(int|float) ([tu]\d+);$',hoist2,text,flags=re.M)
    text=re.sub(r'\n[ \t]*(?=\n)','',text)
    frame_decl=None
    if c.frame:
        W=(c.maxD+3)//4+1
        frame_decl='int stk[%d];'%W
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
        changed=True
        while changed:
            changed=False
            for dcl in list(decls):
                nm=dcl.split()[1].rstrip(';')
                occ=len(re.findall(r'\b%s\b'%nm,text))
                lhs=re.findall(r'^\s*%s = ([^\n]*);$'%nm,text,flags=re.M)
                if occ==len(lhs) and all(('*(' not in r and not re.search(r'[A-Za-z_]\w*\s*\(',r)) for r in lhs):
                    text=re.sub(r'^\s*%s = [^\n]*;\n?'%nm,'',text,flags=re.M); decls.remove(dcl); changed=True
            t2=re.sub(r'if \([^\n]*\) \{\s*\}','',text)
            t2=re.sub(r' else \{\s*\}','',t2)
            if t2!=text: text=t2; changed=True
        return text
    text=prune(text,decls)
    # unused call results: drop the temp
    for d in list(decls):
        nm=d.split()[1].rstrip(';')
        if len(re.findall(r'\b%s\b'%nm,text))==1 and re.search(r'\b%s = [A-Za-z_]\w*\('%nm,text):
            text=re.sub(r'\b%s = '%nm,'',text); decls.remove(d)
    body=text.strip('\n').split('\n')
    src='%s %s(%s)\n{\n%s\n}\n'%(rt,name,', '.join(params) if params else 'void','\n'.join(['    '+d for d in decls+([frame_decl] if frame_decl else [])]+(['']if decls or frame_decl else [])+['    '+s for s in body]))
    return src,c
def addr_vals(c,basemap):
    """The addresses the code touches that follow from the argument values alone (None for one that depends on a loaded
    value or a loop variable)."""
    res=[]
    for kind,e in c.mem_addrs:
        if kind=='c': res.append(e); continue
        if re.search(r'\b[tu]\d+\b|\bstk\b',e): res.append(None); continue
        ex=e
        for k,v in basemap.items(): ex=re.sub(r'\b%s\b'%k,str(v),ex)
        if not re.match(r'^[\(\)\s\w\+\-]*$',ex): raise Skip('addr expr '+e)
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
    r=sh4sim.run(dict(case,exe='1ST_READ.BIN',base='%08X'%base,entry='%08X'%start,end='%08X'%(start+size),steps=100000),'.',deep=lambda t:False)
    LAST_READS[:]=r.get('reads',[])
    if r['error']: return None,set()
    return r['steps'],set(r.get('covered',[]))
def grow(name,runs,V,rng,HOT,budget=1200):
    """Coverage-guided growth: take one of the cases that reach the most code, change one input (a word in memory, a register, the
    result of a call) to a value from V, and keep the new case when it runs an instruction no case has run yet. A chain of guards
    (a flag that must be 1, then the next one) is reached one step at a time this way, where random inputs never get through."""
    seen=set()
    for d,n,c in runs:
        if c: seen|=c
    pool=[(d,c) for d,n,c in runs if n is not None and c]
    for _ in range(budget):
        if not pool: break
        top=sorted(pool,key=lambda dc:-len(dc[1]))[:6]
        d,c=top[0] if rng.random()<0.7 else rng.choice(top)
        e=json.loads(json.dumps(d))
        n0,c0=original_runs(name,e)
        start,size=G.SPANS[name]
        late=[a&~3 for a in LAST_READS if 0x0C000000<=a<0x0D000000 and not start-0x1000<=a<start+size+0x1000][-10:]
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
            seen|=cov; runs.append((e,n,cov)); pool.append((e,cov))
    return runs
def pick(name,cases,want,V=None,rng=None,HOT=None):
    """Of many candidate cases, the ones the original finishes on, chosen greedily by the new instructions each reaches (the
    instruction coverage the equivalence check then rests on), padded with the rest up to want."""
    runs=[(d,)+original_runs(name,d) for d in cases]
    if V and rng and all(c is not None for d,n,c in runs): runs=grow(name,runs,V,rng,HOT or V)
    ok=[(d,c) for d,n,c in runs if n is not None]
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
    cases=[]
    rng=random.Random(hash(name)&0xffff)
    chained=any(k=='e' and re.search(r'\b[tu]\d+\b|\bstk\b',e) for k,e in c.mem_addrs)
    for i in range(160 if (loopy or chained) else 120):
        bm=dict(basemap)
        for n in ip:
            if n not in addr_params: bm['a%d'%n]=rng.choice(V)
        addrs=addr_vals(c,bm)
        poke={}
        forced=V[i] if i<12 and i<len(V) else None
        pool=(small if loopy else V)+([0x0C900000,0x0C910000,0x0C920040] if chained else [])      # some loaded words are pointers
        if loopy or chained:
            # addresses that follow loop variables or loaded values cannot be worked out: fill the memory the pointers point at
            for n in sorted(addr_params):
                b=bm['a%d'%n]&~3
                words=[forced if forced is not None and rng.random()<0.85 else rng.choice(pool) for _ in range(64)]
                poke['%08X'%((b-0x20)&0xffffffff)]=struct.pack('<16I',*[rng.choice(pool) for _ in range(16)]).hex()
                poke['%08X'%b]=struct.pack('<64I',*words).hex()
        for a in addrs:
            if a is None: continue
            w=forced if forced is not None else rng.choice(pool)
            poke['%08X'%((a&~3)&0xffffffff)]=struct.pack('<II',w,rng.choice(pool)).hex()
        regs={}
        for n in ip:
            if n<8: regs['r%d'%n]='%08X'%(bm['a%d'%n]&0xffffffff)
            else: poke['%08X'%(stack_top()+4*(n-8))]=struct.pack('<I',bm['a%d'%n]&0xffffffff).hex()
        for n in fp: regs['fr%d'%n]=rng.choice(floats)
        d={'about':'case %d'%i,'poke':poke}
        if regs: d['regs']=regs
        if c.ncalls or c.tail:
            d['calls']=[dict({'r0':'%08X'%rng.choice(pool)},**({'poke_arg':{r:struct.pack('<8I',*[rng.choice(pool) for _ in range(8)]).hex() for r in sorted(c.frame_regs)}} if c.frame_regs else {})) for _ in range(ncalls)]
        cases.append(d)
    cases=pick(name,cases,36,V,rng,sorted(consts|{0,1,2,0xFFFFFFFF}))
    if len(cases)<(12 if (loopy or chained) else 6): raise Skip('the original does not finish on the cases')
    return {'dev':cases[0::2][:18],'holdout':cases[1::2][:18]}
def protos_text(protos):
    out=[]
    for n,sig in sorted(protos.items()):
        ret='int'
        if sig and sig[-1]=='->float': ret='float'; sig=sig[:-1]
        out.append('%s %s(%s);'%(ret,n,', '.join(sig) if sig else 'void'))
    return '\n'.join(out)
