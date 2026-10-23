"""python3 tools/5-generated/gen_equiv --draw src/<file>.c [name ...] [--force]: test cases for C you wrote by hand.

For each function the file defines (that functions.txt knows), the cases are drawn the way gen_equiv draws its own: many
candidates from the arguments its prototype takes (an int or pointer in r4..r7, a float in fr4..), memory behind every pointer,
and an answer for every call, then grown and chosen by how much of the ORIGINAL's code they run (gen_drv.pick), so the
check rests on cases that reach the branches. Written to tests/<file>/<function>.json; an existing file is kept unless --force.
Run equiv.py on the file afterwards: DIFFERS names the case, and `equiv.py` prints the instructions the cases ran."""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '../..')))
import toolpath  # noqa: E402,F401
import layout as _layout  # noqa: E402
_CODE=_layout.region('code') or (0,0)      # the code the cases may not write to (layout.txt)
import os as _os, sys as _sys
_sys.path.insert(0,_os.path.join(_os.path.dirname(_os.path.abspath(__file__)),'..'))
import ledger
import os,re,sys,json,random,struct,zlib
sys.path.insert(0,os.path.dirname(os.path.abspath(__file__)))
import gen_drv,gen_core as G
HEAD=re.compile(r'^(?:static\s+|extern\s+)?[A-Za-z_][\w\s\*]*?\b(\w+)\s*\(([^;{)]*)\)\s*\{',re.M)
KEYWORDS={'if','while','for','switch','return','sizeof'}
def split_params(p):
    p=p.strip()
    if not p or p=='void': return []
    return [x.strip() for x in p.split(',')]
def body_of(src,end):
    m=re.compile(r'^\}',re.M).search(src,end)
    return src[end:m.start()] if m else src[end:]
def draw_one(name,params,body,rng,pw=None):
    ints=[];floats=[];ptrs=[]
    ir,fr=4,4
    for p in params:
        if '*' in p: ptrs.append('r%d'%ir); ir+=1
        elif re.search(r'\b(float)\b',p): floats.append('fr%d'%fr); fr+=1
        elif re.search(r'\bdouble\b',p): raise ValueError('double argument')
        else: ints.append('r%d'%ir); ir+=1
    consts=set()
    for m in re.findall(r'(?<![\w.])(0x[0-9A-Fa-f]+|\d+)(?![\w.])',body):
        try:
            v=int(m,0); consts|={v&0xffffffff,(v+1)&0xffffffff,(v-1)&0xffffffff}
        except ValueError: pass
    base=[0,1,2,3,4,5,8,16,0x100,0xFFFFFFFF,0x7FFFFFFF,0x80000000,0xFFFFFFFE,0x40000000]
    FL=[0.0,1.0,2.5,-3.0,100.0,0.001,-0.5,10.0]
    for m in re.findall(r'(?<![\w.])(\d+\.\d*(?:[eE][+-]?\d+)?|\.\d+)f?',body):       # the float constants the code compares with
        try:
            f=float(m)
            FL+= [f,-f,f*2.0,f*0.5,f*1.0000001,f*0.9999999]
        except (ValueError,OverflowError): pass
    lits=[]
    for m in re.findall(r'(?<![\w.])(\d+\.\d*(?:[eE][+-]?\d+)?|\.\d+)f?',body):
        try: lits.append(float(m))
        except (ValueError, OverflowError): pass
    lits=sorted(set(lits))[:14]
    for x in lits:                                           # an input that makes one constant meet another
        for y in lits:
            if y != 0.0:
                for v in (x/y, x*y, -x/y):
                    if abs(v)<3e38: FL.append(v)
    FL=[f for f in FL if abs(f)<3e38]
    fbits=[struct.unpack('<I',struct.pack('<f',f))[0] for f in FL]
    ptrs_ok=[0x0C800000,0x0C810000,0x0C900000,0x0C910000]            # addresses that have memory behind them
    V=sorted(set(base)|{c for c in consts if c<=0x100000 or c>=0xFFFF0000}|set(fbits)|set(ptrs_ok))
    small=[v for v in V if v<=0x100 or v>=0xFFFFFF00]
    arrays=re.search(r'\w\s+\w+\[\d+\]\s*;',body)                            # a local array handed to a call
    outslots=bool(re.search(r'&\s*\w',body)) or bool(arrays)                         # an address passed to a call: the callee may fill it
    if pw is None: pw=4 if arrays else 1                                          # words a call writes through each argument register
    ncalls=len([m for m in re.findall(r'\b(\w+)\s*\(',body) if m not in KEYWORDS])+4
    if re.search(r'\b(for|while|do)\b',body): ncalls=max(ncalls,24)           # a loop may call as often as it goes round
    pool=small+fbits+[0x0C900000,0x0C910000]
    cases=[]
    for i in range(120):
        regs={};poke={}
        for r in ints: regs[r]='%08X'%(rng.choice(small) if rng.random()<0.8 else rng.choice(V))
        for r in floats: regs[r]='%08X'%struct.unpack('>I',struct.pack('>f',rng.choice(FL)))[0]
        for k,r in enumerate(ptrs):
            a=0x0C800000+k*0x10000
            regs[r]='%08X'%a
            poke['%08X'%a]=struct.pack('<1024I',*[rng.choice(pool) if rng.random()<0.3 else rng.choice(small) for _ in range(1024)]).hex()
        for pa in (0x0C900000,0x0C910000):                      # what a call's result may point at
            poke['%08X'%pa]=struct.pack('<256I',*[rng.choice(small) for _ in range(256)]).hex()
        for k_ in [k_ for k_ in poke if _CODE[0]<=(0x0C000000|(int(k_,16)&0x1FFFFFFF))<_CODE[1]]: del poke[k_]       # the code is read-only on the console
        d={'about':'case %d'%i,'poke':poke}
        if regs: d['regs']=regs
        if ncalls>4: d['calls']=[dict({'r0':'%08X'%(rng.choice([0x0C900000,0x0C910000]) if rng.random()<0.4 else rng.choice(pool))},**({'poke_arg':{r:struct.pack('<%dI'%pw,*[rng.choice(small+fbits) for _ in range(pw)]).hex() for r in ('r4','r5','r6','r7')}} if outslots else {})) for _ in range(ncalls)]
        cases.append(d)
    return cases,V,sorted(set(consts)|{0,1,2,0xFFFFFFFF}|set(ptrs_ok))
def main(args):
    force='--force' in args
    args=[a for a in args if a!='--force']
    cfile=args[0]; names=set(args[1:])
    src=open(cfile).read()
    stem=os.path.splitext(os.path.basename(cfile))[0]
    os.makedirs('tests/%s'%stem,exist_ok=True)
    for m in HEAD.finditer(src):
        name=m.group(1)
        if name in KEYWORDS or (names and name not in names) or name not in G.SPANS: continue
        path='tests/%s/%s.json'%(stem,name)
        if os.path.exists(path) and not force: continue
        try:
            for pw in (None,1):       # a call answering through a pointer into the frame may overwrite the saved registers: fewer words then
                rng=random.Random(zlib.crc32(name.encode())&0xffff)
                cases,V,hot=draw_one(name,split_params(m.group(2)),body_of(src,m.end()),rng,pw)
                chosen=gen_drv.pick(name,cases,36,V,rng,hot)
                if len(chosen)>=4: break
        except ValueError as e:
            print('%-28s skipped: %s'%(name,e)); continue
        if len(chosen)<4:
            print('%-28s skipped: the original does not finish on the cases'%name); continue
        ledger.archive_cases(_os.path.basename(path)[:-5],path,'drawn-before')
        json.dump({'dev':chosen[0::2],'holdout':chosen[1::2]},open(path,'w'),indent=1)
        print('%-28s %d cases'%(name,len(chosen)))
