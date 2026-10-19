import re,struct,subprocess,copy
import gen_cfg
BIN=open('1ST_READ.BIN','rb').read(); BASE=0x0C010000
def rd32(a): return struct.unpack_from('<I',BIN,a-BASE)[0]
M=0xffffffff
class Skip(Exception): pass
DIRTY=('x',)          # a register the two arms of an if left different and unreadable
FUNCS={}; SPANS={}
for _l in open('functions.txt'):
    _p=_l.split()
    if len(_p)>=4 and _p[0]=='F': FUNCS[int(_p[1],16)]=_p[3]; SPANS[_p[3]]=(int(_p[1],16),int(_p[2]))

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
        s.mem_addrs=[]; s.dirty=set()
    def gi(s,r):
        if s.R.get(r)==DIRTY: raise Skip('dirty '+r)
        if r not in s.R:
            n=int(r[1:])
            if 4<=n<=7: s.R[r]=('s','a%d'%n); s.iuse.add(n)
            else: raise Skip('read '+r)
        return s.R[r]
    def gf(s,r):
        if s.FR.get(r)==DIRTY: raise Skip('dirty '+r)
        if r not in s.FR and r=='fr0' and getattr(s,'lastcall',None):
            # fr0 right after a call is the callee's float result: that call returns a float (its line and prototype say so)
            lst,idx,t,fname=s.lastcall; s.lastcall=None
            if not lst[idx].startswith('int %s = '%t): raise Skip('read fr0')
            lst[idx]='float '+lst[idx][4:]
            s.protos[fname]=tuple(x for x in s.protos[fname] if x!='->float')+('->float',)
            if s.R.get('r0')==('e',t): del s.R['r0']
            s.FR['fr0']=('e',t); return s.FR['fr0']
        if r not in s.FR:
            n=int(r[2:])
            if 4<=n<=11: s.FR[r]=('s','f%d'%n); s.fuse.add(n)
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
_ARITY={}
_WRITE_ONLY=('mov','mov.b','mov.w','mov.l','extu.b','extu.w','exts.b','exts.w','neg','negc','not','swap.b','swap.w','sts','sts.l','float','mova',
             'fmov','fmov.s','fldi0','fldi1','fabs','fneg')
_COMPARE=('cmp','tst','fcmp')
def callee_arity(fname):
    """(integer arguments, float arguments) a function reads before it writes them, from a straight scan of its code up to its
    first return: r4-r7 and fr4-fr11. None when the code cannot be read. A guess for the prototype, not a proof: the call is
    compared on these arguments only."""
    if fname in _ARITY: return _ARITY[fname]
    res=None
    try:
        out=subprocess.run(['python3','tools/shdis.py','--func',fname],capture_output=True,text=True).stdout.splitlines()[2:]
        seen_r=set(); wrote=set(); maxi=-1; maxf=-1; after_ret=0
        for l in out:
            m=re.match(r'([0-9a-f]{8}) ([0-9a-f]{4})\s+(\S+)\s*(.*)',l)
            if not m: continue
            mn=m.group(3); ops=m.group(4).split(';')[0].strip()
            if after_ret:
                after_ret-=1
                if after_ret==0: break
            a=[x.strip() for x in re.split(r',(?![^(]*\))',ops)] if ops else []
            regs=lambda t: re.findall(r'\b(f?r\d+)\b',t)
            base=mn.split('/')[0]
            dest=None; reads=[]
            if mn in ('jsr','bsr','jmp','bra','rts','nop','rte') or mn.startswith('b'):
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
            for r in reads:
                if r in wrote: continue
                if re.fullmatch(r'r[4-7]',r): maxi=max(maxi,int(r[1:])-4)
                elif re.fullmatch(r'fr(4|5|6|7|8|9|10|11)',r): maxf=max(maxf,int(r[2:])-4)
            if dest: wrote.add(dest)
            if mn in ('jsr','bsr'):
                wrote.update(['r4','r5','r6','r7']+['fr%d'%i for i in range(4,12)])
            if mn=='rts': after_ret=2
        res=(maxi+1,maxf+1)
    except Exception:
        res=None
    _ARITY[fname]=res
    return res

def run(name,passthru=False):
    out=subprocess.run(['python3','tools/shdis.py','--func',name],capture_output=True,text=True).stdout.splitlines()[2:]
    ins=[]
    for l in out:
        m=re.match(r'([0-9a-f]{8}) ([0-9a-f]{4})\s+(\S+)\s*(.*)',l)
        if m: ins.append((m.group(3),m.group(4),int(m.group(1),16)))
    c=Ctx(name); c.in_prologue=True; c.T=None; c.blocks=[c.stmts]; c.stack={}; c.protos={}; c.ncalls=0; c.tail=None; c.pt=passthru; c.start_pc=ins[0][2] if ins else 0
    TY={'l':('int',4),'w':('short',2),'b':('signed char',1)}
    def addr_expr(base,off):
        # base: value; off: int or value
        b=base
        if isint(b) and isint(off): return ('const',(b+off)&M)
        if isinstance(b,tuple) and b[0]=='addr': raise Skip('addr')
        return ('expr','(%s + %s)'%(ex(b),ex(off)))
    def load(sz,ad):
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
            if c.in_prologue or (n>=8 and a[0] not in c.R): return
            v=c.gi(a[0])                       # an argument pushed for the next call (or a value kept for a pop)
            if isinstance(v,tuple) and v[0]=='addr': raise Skip('addr arg')
            c.pend.append(v); return
        if mn=='fmov.s' and a[0].startswith('fr') and a[1]=='@-r15':
            n=int(a[0][2:])
            c.D+=4; c.maxD=max(c.maxD,c.D)
            if c.in_prologue or (n>=12 and a[0] not in c.FR): return
            raise Skip('fpush')
        if mn=='mov.l' and a[0]=='@r15+' and a[1].startswith('r'):
            c.D-=4
            if c.pend: c.R[a[1]]=c.pend.pop()
            return
        if mn=='fmov.s' and a[0]=='@r15+' : c.D-=4; return
        if mn in('add','sub') and a[1]=='r15':
            if a[0].startswith('#'): n=int(a[0][1:])
            else:
                v=c.R.get(a[0])
                if not isint(v): raise Skip('stack pointer step')
                n=v-(1<<32) if v&0x80000000 else v
                if mn=='sub': n=-n
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
            if ab>=0: raise Skip('store into the caller frame')
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
            if ab>=0:
                # an argument the caller passed on the stack
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
            m2=re.match(r'@\((0x[0-9a-f]+),pc\)',a[0]); c.R['r0']=('addr',int(m2.group(1),16)); return
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
            c.R[a[1]]=iop(mn,x,y); return
        if mn in('and','or','xor') and a[0].startswith('#'):
            v=c.gi(a[1]); c.R[a[1]]=iop(mn,v,int(a[0][1:])&0xff); return
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
            n={'shlr':1,'shlr2':2,'shlr8':8,'shlr16':16}[mn]; v=c.gi(a[0]); c.R[a[0]]=(v>>n) if isint(v) else ('e','((unsigned int)%s >> %d)'%(ex(v),n)); return
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
        # floats
        if mn=='fldi0': c.FR[a[0]]=0; return
        if mn=='fldi1': c.FR[a[0]]=0x3f800000; return
        if mn=='fmov' and a[0].startswith('fr'): c.FR[a[1]]=c.gf(a[0]); return
        if mn=='fmov.s':
            if a[0].startswith('fr'):   # store
                mm=parse_mem(a[1]); v=c.gf(a[0])
                if mm[0]=='pre':
                    nb=iop('sub',c.gi(mm[1]),4); c.R[mm[1]]=nb; fstore(addr_expr(nb,0),v); return
                fstore(memaddr(mm),v); return
            else:
                mm=parse_mem(a[0])
                if mm[0]=='ind' and isinstance(c.gi(mm[1]),tuple) and c.gi(mm[1])[0]=='addr':
                    c.FR[a[1]]=rd32(c.gi(mm[1])[1]); return
                if mm[0]=='post':
                    b=c.gi(mm[1]); c.FR[a[1]]=fload(addr_expr(b,0)); c.R[mm[1]]=iop('add',b,4); return
                c.FR[a[1]]=fload(memaddr(mm)); return
        if mn in('fadd','fsub','fmul','fdiv'):
            x=c.gf(a[1]); y=c.gf(a[0]); op={'fadd':'+','fsub':'-','fmul':'*','fdiv':'/'}[mn]
            c.FR[a[1]]=('e','(%s %s %s)'%(fx(x),op,fx(y))); return
        if mn=='fneg': c.FR[a[0]]=('e','(-%s)'%fx(c.gf(a[0]))); return
        if mn=='fmac' and len(a)==3 and a[0]=='fr0':       # frn += fr0 * frm
            acc=c.gf(a[2]); x=c.gf(a[0]); y=c.gf(a[1])
            c.FR[a[2]]=('e','(%s + %s * %s)'%(fx(acc),fx(x),fx(y))); return
        if mn=='fabs':
            v=fx(c.gf(a[0])); c.FR[a[0]]=('e','(%s < 0.0f ? -%s : %s)'%(v,v,v)); return
        if mn=='lds' and a[1]=='fpul': c.fpul=c.gi(a[0]); return
        if mn=='float' and a[0]=='fpul': c.FR[a[1]]=('e','(float)%s'%ex(c.fpul)); return
        if mn=='ftrc': c.fpul=('e','(int)%s'%fx(c.gf(a[0]))); return
        if mn=='sts' and a[0]=='fpul': c.R[a[1]]=c.fpul; return
        raise Skip(mn+' '+rawops)
    addr2idx={x[2]:i for i,x in enumerate(ins)}
    def do_call(fname,tail=False):
        if fname in ('_divls','_divlu','_modls','_modlu'):
            # the compiler's division helpers: dividend r1, divisor r0, result r0 (r1 is used up, the others come back unchanged)
            if tail: raise Skip('helper as a tail call')
            ty='int' if fname.endswith('s') else 'unsigned int'
            t=fresh(False); emit('int %s = (int)((%s)%s %s (%s)%s);'%(t,ty,ex(c.gi('r1')),'/' if fname.startswith('_div') else '%',ty,ex(c.gi('r0'))))
            c.R['r0']=('e',t); c.R.pop('r1',None); return
        if fname in ('_quick_odd_mvn','_quick_evn_mvn'):
            # a block copy: length r0 (bytes, a multiple of 4), destination r1, source r2, copied from the top down; r0 is left unknown
            n=c.gi('r0')
            if tail or not isint(n) or n%4 or n>256: raise Skip('block copy length')
            d=c.gi('r1'); sr=c.gi('r2')
            for off in range(n-4,-1,-4): store('l',addr_expr(d,off),load('l',addr_expr(sr,off)))
            c.R['r0']=DIRTY; return
        if fname.startswith('_'): raise Skip('compiler helper %s'%fname)
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
        ar=callee_arity(fname)
        if ar and not c.pend:                    # the registers the callee reads: leftovers set for other reasons are not arguments
                                                 # (with arguments on the stack all four registers are positional: not trimmed)
            avail=[n for n in avail if n<4+ar[0]]
            fav=[n for n in fav if n<4+ar[1]]
        ia=[]
        k=4
        while k in avail: ia.append(k); k+=1
        if any(x>=k for x in avail): raise Skip('arg gap')
        fa=[]; k=4
        while k in fav: fa.append(k); k+=1
        if any(x>=k for x in fav): raise Skip('farg gap')
        args=[]; types=[]
        for n in ia:
            v=c.gi('r%d'%n)
            if isinstance(v,tuple) and v[0]=='addr': raise Skip('addr arg')
            args.append(ex(v)); types.append('int')
            if '@@F' in args[-1]: c.frame_regs.add('r%d'%n)
        if c.pend:
            # arguments pushed on the stack: the first of them was pushed last
            if len(ia)<4: raise Skip('stack arguments without four in registers')
            for v in reversed(c.pend): args.append(ex(v)); types.append('int')
            c.pend=[]
        for n in fa: args.append(fx(c.gf('fr%d'%n))); types.append('float')
        sig=tuple(types)
        isf=fname in c.protos and c.protos[fname][-1:]==('->float',)
        if fname in c.protos and tuple(x for x in c.protos[fname] if x!='->float')!=sig: raise Skip('proto conflict %s %s -> %s'%(fname,tuple(x for x in c.protos[fname] if x!='->float'),sig))
        if not isf: c.protos[fname]=sig
        call='%s(%s)'%(fname,', '.join(args))
        if tail:
            c.tail=call; c.blocks[-1].append('@@TAIL:%s@@'%call); return
        t='t%d'%c.ntemp; c.ntemp+=1
        c.blocks[-1].append('%s %s = %s;'%('float' if isf else 'int',t,call))
        c.lastcall=(c.blocks[-1],len(c.blocks[-1])-1,t,fname)
        c.ncalls+=1
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
        if s: c.blocks[-1].append(s)

    # ---- machine state ----
    def regs_state(): return (dict(c.R),dict(c.FR),c.fpul,dict(c.stack),c.macl,c.D,list(c.pend))
    def set_regs(st): c.R,c.FR,c.fpul,c.stack,c.macl,c.D,c.pend=dict(st[0]),dict(st[1]),st[2],dict(st[3]),st[4],st[5],list(st[6])
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

    # registers that a loop changes from one pass to the next are C variables updated where the instruction runs;
    # everything else stays a symbolic expression
    def commit():
        if not c.lv: return
        pend=[]
        for r in sorted(c.lv):
            isf=r.startswith('fr'); v=(c.FR if isf else c.R).get(r); var=c.lv[r]
            if v is None or v==DIRTY or v==('e',var): continue
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
            (c.FR if pick[3] else c.R)[pick[0]]=('e',pick[1])
            left.remove(pick)

    def step(i):
        mn,ops,pc=ins[i]
        if c.in_prologue and not (mn=='sts.l' or (mn in('mov.l','fmov.s') and parse_ops(ops)[1:]==['@-r15']) or (mn=='add' and parse_ops(ops)[1:]==['r15'])):
            c.in_prologue=False
        if mn.startswith('cmp') or mn.startswith('tst') or mn.startswith('fcmp'): set_T(mn,parse_ops(ops))
        elif mn=='dt':
            r=parse_ops(ops)[0]; c.R[r]=iop('sub',c.gi(r),1); commit(); x=ex(c.R[r]); setT('(%s == 0)'%x,'(%s != 0)'%x)
        elif mn in ('braf','bsrf','rte','trapa'): raise Skip('flow '+mn)
        else:
            if exec1(mn,ops) == 'rts': raise Skip('rts in slot')
        commit()

    def merge_arms(stA,stB,A,B):
        """The state after an if / else whose arms both reach the same place. A and B are the arms' statements; a register
        the arms leave different becomes a variable assigned in each arm."""
        ea,eb=not A,not B
        if stA[5]!=stB[5] or stA[6]!=stB[6]: raise Skip('stack pointer differs')
        R={}; FR={}
        for sa,sb,out,isf in ((stA[0],stB[0],R,False),(stA[1],stB[1],FR,True)):
            for r in sorted(set(sa)|set(sb)):
                va=sa.get(r); vb=sb.get(r)
                if va==vb:
                    if va is not None: out[r]=va
                    continue
                if va is None or vb is None or DIRTY in (va,vb) or (isinstance(va,tuple) and va[0]=='addr') or (isinstance(vb,tuple) and vb[0]=='addr'):
                    out[r]=DIRTY; continue
                var=fresh(isf); ty='float' if isf else 'int'; f=fx if isf else ex
                if not ea and not eb:
                    emit('%s %s;'%(ty,var)); A.append('%s = %s;'%(var,f(va))); B.append('%s = %s;'%(var,f(vb)))
                elif eb:
                    emit('%s %s = %s;'%(ty,var,f(vb))); A.append('%s = %s;'%(var,f(va)))
                else:
                    emit('%s %s = %s;'%(ty,var,f(va))); B.append('%s = %s;'%(var,f(vb)))
                out[r]=('e',var)
        stack={k:v for k,v in stA[3].items() if stB[3].get(k)==v}
        set_regs((R,FR,stA[2] if stA[2]==stB[2] else None,stack,stA[4] if stA[4]==stB[4] else None,stA[5],list(stA[6])))

    def branch(i,j,f,cond,stops):
        """cond holds when the fall-through arm (starting at f) runs; j is where the branch goes."""
        J=G.ipdom(i)
        stops2=dict(stops)
        if J!=gen_cfg.EXIT and (J not in stops2 or stops2[J]=='cont'):
            if not c.loopstack or J in G.loops[c.loopstack[-1]]: stops2[J]='join'
        c.T=None
        pre=regs_state()
        A=[]; c.blocks.append(A); oA=exec_from(f,stops2,False); stA=regs_state(); c.blocks.pop()
        set_regs(pre); c.T=None
        B=[]; c.blocks.append(B)
        if j in FUNCS:                      # the branch goes to another function: a tail call
            do_call(FUNCS[j],tail=True); oB=('end',)
        else: oB=exec_from(j,stops2,False)
        stB=regs_state(); c.blocks.pop()
        ta=oA[0]=='end'; tb=oB[0]=='end'
        if ta and tb:
            emit(mkif(cond,A,[])); c.blocks[-1].extend(B); return ('end',)
        if ta:
            emit(mkif(cond,A,[])); c.blocks[-1].extend(B); set_regs(stB); return oB
        if tb:
            emit(mkif(negate(cond),B,[])); c.blocks[-1].extend(A); set_regs(stA); return oA
        if oA[1]!=oB[1]: raise Skip('unstructured')
        merge_arms(stA,stB,A,B)
        emit(mkif(cond,A,B))
        return oA

    def exec_loop(h):
        E,_=G.loop_exit(h)
        if E is None and _ is None: raise Skip('loop exits')
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
        for st in conts:
            if st[3]!=entS: raise Skip('stack local in a loop')
        cand=[]
        for k,(ent,isf) in enumerate(((entR,False),(entF,True))):
            for st in conts:
                for r,v in st[k].items():
                    if r in c.lv or (r,isf) in cand: continue
                    n=int(r[2:] if isf else r[1:])
                    e=ent.get(r,('s',('f%d' if isf else 'a%d')%n) if 4<=n<=(11 if isf else 7) else None)
                    if e is not None and v!=e and v!=DIRTY: cand.append((r,isf))
        cand.sort(key=lambda w:(w[1],int(w[0][2:] if w[1] else w[0][1:])))
        W=[]
        if cand:
            for r,isf in cand: c.gf(r) if isf else c.gi(r)         # an argument the loop changes is read here
            s1=snap()
            conts,exits_,lb=run_pass(cand)
            text='\n'.join(map(str,lb))+'\n'+repr([st[:2] for st in conts+exits_])
            restore(s1)
            W=[(r,isf) for r,isf in cand if '@%s@'%r in text]
            restore(s0)
        added=[]
        for r,isf in W:
            val=c.gf(r) if isf else c.gi(r)
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
        set_regs((R,FR,st[2] if all(o[2]==st[2] for o in exits_) else None,{k:v for k,v in st[3].items() if all(o[3].get(k)==v for o in exits_)},st[4] if all(o[4]==st[4] for o in exits_) else None,st[5],list(st[6])))
        c.T=None
        return E

    def exec_from(i,stops,first):
        """Runs the code from node i, following jumps, until it reaches a node in stops or the function returns. Returns
        ('reach', node) at a join, ('end',) when every path left by return, break or continue, ('ret',) at the function's
        own final return."""
        while True:
            c.steps+=1
            if c.steps>3000: raise Skip('too long')
            if i not in G.succ: raise Skip('runs off the code')
            if i in stops and not first:
                k=stops[i]
                if k=='join': return ('reach',i)
                if k=='break':
                    c.exits.append(regs_state()); c.nbreak[-1]+=1; emit('break;')
                else:
                    c.conts.append(regs_state()); c.ncont[-1]+=1; emit('continue;')
                return ('end',)
            if i in G.loops and i not in c.active:
                i=exec_loop(i)
                if i is None: return ('end',)
                continue
            first=False
            mn,ops,pc=ins[i]
            if mn in ('jsr','bsr'):
                if mn=='bsr': tgt=target_of(ops)
                else:
                    v=c.gi(parse_ops(ops)[0].strip('@'))
                    if not isinstance(v,int): raise Skip('indirect call')
                    tgt=v
                if tgt not in FUNCS: raise Skip('callee unknown %x'%tgt)
                step(i+1)
                do_call(FUNCS[tgt]); commit(); i+=2; continue
            if mn=='bra' or mn=='jmp':
                if mn=='bra':
                    tgt=target_of(ops)
                    if tgt in addr2idx: step(i+1); i=addr2idx[tgt]; continue
                else:
                    v=c.gi(parse_ops(ops)[0].strip('@'))
                    if not isinstance(v,int): raise Skip('indirect jmp')
                    tgt=v
                    if tgt in addr2idx: raise Skip('jmp inner')
                if tgt not in FUNCS: raise Skip('tail unknown')
                step(i+1)
                do_call(FUNCS[tgt],tail=True)
                return ('end',)
            if mn=='rts':
                step(i+1) if i+1<len(ins) else None
                r0=c.R.get('r0'); f0=c.FR.get('fr0')
                rs='None' if r0 is None or r0==DIRTY or (isinstance(r0,tuple) and r0[0]=='addr') else ex(r0)
                fs='None' if f0 is None or f0==DIRTY else fx(f0)
                c.rets.append((rs,fs))
                if len(c.blocks)==1: return ('ret',)
                emit('@@RET:%s@|@%s@@'%(rs,fs))
                return ('end',)
            if mn in ('bt','bf','bt/s','bf/s'):
                tgt=target_of(ops)
                if tgt not in addr2idx and tgt not in FUNCS: raise Skip('branch out')
                delay=mn.endswith('/s')
                if delay: step(i+1)
                if c.T is None: raise Skip('no T')
                cond=c.T if mn.startswith('bf') else negate(c.T)
                r=branch(i,addr2idx.get(tgt,tgt),i+(2 if delay else 1),cond,stops)
                if r[0]=='end': return r
                i=r[1]; continue
            step(i); i+=1

    c.D=0; c.maxD=0; c.pend=[]; c.frame_regs=set(); c.frame=any(x[0]=='mov' and x[1].startswith('r15,') for x in ins)
    c.rets=[]; c.lv={}; c.exits=[]; c.conts=[]; c.nbreak=[]; c.ncont=[]; c.active=[]; c.loopstack=[]; c.steps=0; c.macl=None; c.direct=False; c.has_loop=False
    G=gen_cfg.Graph(ins,addr2idx) if ins else None
    if G is None: raise Skip('empty')
    out=exec_from(0,{},False)
    c.terminated=out[0]=='end'
    return c
