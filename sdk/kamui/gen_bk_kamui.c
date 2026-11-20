/* Straight-line functions with calls and guards (batch gen_bk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiMemCopy8(int, int, int);
extern void _builtin_prefetch(void *);
int kmGetCurrentVertexOffset(int);
int nl_objput_mv_send_p0(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
void nlMvEndList(void);
int kmiSetOpaqueDummy(void);
int kmStartVertexStrip(int a4);
int nlMvSendTriangle(int a4, int a5, int a6);
int kmSetUserClipping(int a4, int a5, int a6, int a7, int a8, int a9);
int nlPuts(int a4);
int nlCharacter(int a4, int a5, int a6, int a7);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o24_int { char p[0x24]; int v; };
struct o28_int { char p[0x28]; int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };


int kmiSetOpaqueDummy(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t7;

    t0 = *(int *)0xC2B8CBC;
    t1 = *(int *)((t0 + 0x0));
    (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t1 >> 16) >> 8);
    (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t1 >> 16) >> 8);
    t2 = 0x4;
    t3 = ((0x3FFFFFF & t1) | 0xE0000000);
    t4 = 0xC17827C;
    do {
        kmiMemCopy8(t3, t4, 0x20);
        _builtin_prefetch((void *)t3);
        t2 = (t2 - 0x1);
        t3 = (t3 + 0x20);
        t4 = (t4 + 0x20);
    } while (t2 != 0);
    t6 = *(int *)0xC2B8CBC;
    t7 = *(int *)((t6 + 0x0));
    *(unsigned int *)((t6 + 0x0)) = (t7 + 0x80);
    return (t7 + 0x80);
}

int kmStartVertexStrip(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t8;
    int t9;

    t0 = *(int *)((a4 + 0x8));
    t1 = *(int *)((t0 + 0x0));
    t2 = *(int *)((t0 + 0x4));
    t3 = *(int *)((a4 + 0x0));
    t4 = *(int *)((a4 + 0x4));
    t5 = *(int *)(((t1 << 2) + t3));
    (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t5 >> 16) >> 8);
    (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t5 >> 16) >> 8);
    kmiMemCopy8(((0x3FFFFFF & t5) | 0xE0000000), t4, t2);
    _builtin_prefetch((void *)((0x3FFFFFF & t5) | 0xE0000000));
    if (t2 == 64) {
        _builtin_prefetch((void *)(((0x3FFFFFF & t5) | 0xE0000000) + 0x20));
    }
    t8 = *(int *)((a4 + 0x0));
    t9 = *(int *)(((t1 << 2) + t8));
    *(unsigned int *)(((t1 << 2) + t8)) = (t9 + (((unsigned int)t2 >> 2) << 2));
    return 0x0;
}


int kmSetUserClipping(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t17;
    int t21;
    int t22;
    int t23;
    int t24;
    int t26;
    int t27;
    int stk[20] = {0};
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    R1012 = a6;
    R1008 = a7;
    t0 = kmGetCurrentVertexOffset(a5);
    if (t0 != 8) {
        t1 = *(int *)((a4 + 0x4));
        t2 = *(int *)((t1 + 0x0));
        t3 = 0xA0000000;
        if ((a5 & 0x1) != 0) {
            t3 = 0x81000040;
        }
        *(unsigned int *)0xC178444 = ((0x830000 & t2) | t3);
        t4 = *(int *)((a4 + 0x0));
        t5 = *(int *)(((a5 << 2) + t4));
        (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t5 >> 16) >> 8);
        (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t5 >> 16) >> 8);
        kmiMemCopy8(((t5 & 0x3FFFFFF) | 0xE0000000), 0xC178444, 0x20);
        _builtin_prefetch((void *)((t5 & 0x3FFFFFF) | 0xE0000000));
        t9 = *(int *)((a4 + 0x0));
        t8 = *(int *)(((a5 << 2) + t9));
        *(unsigned int *)(((a5 << 2) + t9)) = (t8 + 0x20);
        R1004 = 0x2;
        t10 = (t8 + 0x20);
        t11 = ((t5 & 0x3FFFFFF) | 0xE0000000);
        for (;;) {
            t12 = R1004;
            if (t12 == 0) break;
            t9 = *(int *)((a4 + 0x0));
            t11 = *(int *)(((a5 << 2) + t9));
            (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t11 >> 16) >> 8);
            (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t11 >> 16) >> 8);
            t10 = 0xC158860;
            t11 = (t11 & 0x3FFFFFF);
            t11 = (t11 | 0xE0000000);
            t9 = ((int (*)(int, int, int))(t10))(t11, 0xC178464, 0x40);
            _builtin_prefetch((void *)t11);
            t11 = (t11 + 0x20);
            _builtin_prefetch((void *)t11);
            t9 = *(int *)((a4 + 0x0));
            t17 = *(int *)(((a5 << 2) + t9));
            *(unsigned int *)(((a5 << 2) + t9)) = (t17 + 0x40);
            t10 = R1004;
            t10 = (t10 - 1);
            R1004 = t10;
        }
    }
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = 0x20000000;
    t21 = R1012;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x10)) = t21;
    t22 = R1008;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x14)) = t22;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x18)) = a8;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x1C)) = a9;
    t23 = *(int *)((a4 + 0x0));
    t24 = *(int *)(((a5 << 2) + t23));
    (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t24 >> 16) >> 8);
    (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t24 >> 16) >> 8);
    kmiMemCopy8(((t24 & 0x3FFFFFF) | 0xE0000000), (((int)stk + 4) + 0xC), 0x20);
    _builtin_prefetch((void *)((t24 & 0x3FFFFFF) | 0xE0000000));
    t26 = *(int *)((a4 + 0x0));
    t27 = *(int *)(((a5 << 2) + t26));
    *(unsigned int *)(((a5 << 2) + t26)) = (t27 + 0x20);
    return 0x0;
}


