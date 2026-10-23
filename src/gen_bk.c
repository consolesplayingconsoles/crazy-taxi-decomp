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

int nl_objput_mv_send_p0(int a4, int a5, int a6, float f4, float f5, float f6, float f7)
{
    _builtin_prefetch((void *)a6);
    *(float *)((((a6 - 4) - 0x4) + 0x0)) = f7;
    *(float *)(((((a6 - 4) - 0x4) - 0x4) + 0x0)) = (f6 * f7);
    *(float *)((((((a6 - 4) - 0x4) - 0x4) - 0x4) + 0x0)) = (f5 * f7);
    _builtin_prefetch((void *)((((a6 - 4) - 0x4) - 0x4) - 0x4));
    return ((((a6 - 4) - 0x4) - 0x4) - 0x4);
}

void nlMvEndList(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = *(int *)0xC2B7684;
    if (t0 != 0) {
        t1 = *(int *)0xC2B7694;
        _builtin_prefetch((void *)t1);
        _builtin_prefetch((void *)(t1 + 0x20));
        t2 = *(int *)0xC2B76A4;
        *(unsigned int *)((((t1 + 0x20) - 96) + 0x0)) = t2;
        t3 = *(int *)0xC2B76A8;
        *(unsigned int *)((((t1 + 0x20) - 96) + 0x4)) = t3;
        _builtin_prefetch((void *)((t1 + 0x20) - 96));
        t4 = *(int *)0xC2B76AC;
        *(unsigned int *)(((((t1 + 0x20) - 96) + 0x20) + 0x0)) = t4;
        t5 = *(int *)0xC2B76B0;
        *(unsigned int *)(((((t1 + 0x20) - 96) + 0x20) + 0x4)) = t5;
        _builtin_prefetch((void *)(((t1 + 0x20) - 96) + 0x20));
        t6 = *(int *)0xC2B8CBC;
        t7 = *(int *)(((t6 + 0x4) + 0x0));
        *(unsigned int *)(((t6 + 0x4) + 0x0)) = ((t7 & 0xFC000000) | (((((t1 + 0x20) - 96) + 0x20) + 0x60) & 0x3FFFFFF));
    }
}

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
    *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t1 >> 16) >> 8);
    *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t1 >> 16) >> 8);
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
    *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t5 >> 16) >> 8);
    *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t5 >> 16) >> 8);
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

int nlMvSendTriangle(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16;
    float u17;
    int t8;

    t0 = *(int *)0xC2B7684;
    if (t0 == 0) {
        *(unsigned int *)0xC2B7684 = 0x1;
        t1 = *(int *)0xC2B8CBC;
        t2 = *(int *)((t1 + 0x4));
        *(unsigned int *)0xFF000038 = 0xC;
        *(unsigned int *)0xFF00003C = 0xC;
        t3 = *(int *)0xC2B76A4;
        *(unsigned int *)((((t2 & 0x3FFFFFF) | 0xE0000000) + 0x0)) = t3;
        t4 = *(int *)0xC2B76A8;
        *(unsigned int *)((((t2 & 0x3FFFFFF) | 0xE0000000) + 0x4)) = t4;
        _builtin_prefetch((void *)((t2 & 0x3FFFFFF) | 0xE0000000));
        t8 = (((t2 & 0x3FFFFFF) | 0xE0000000) + 0x20);
    } else {
        t5 = *(int *)0xC2B7694;
        t8 = t5;
    }
    u9 = *(float *)((a4 + 0xC));
    *(unsigned int *)((t8 + 0x0)) = 0xFFFFFFFF;
    u10 = *(float *)((a4 + 0x0));
    *(float *)((t8 + 0x4)) = (u10 * u9);
    u11 = *(float *)((a4 + 0x4));
    *(float *)((t8 + 0x8)) = (u11 * u9);
    *(float *)((t8 + 0xC)) = u9;
    u12 = *(float *)((a5 + 0x0));
    u13 = *(float *)((a5 + 0xC));
    *(float *)((t8 + 0x10)) = (u12 * u13);
    u14 = *(float *)((a5 + 0x4));
    *(float *)((t8 + 0x14)) = (u14 * u13);
    *(float *)((t8 + 0x18)) = u13;
    u15 = *(float *)((a6 + 0xC));
    u16 = *(float *)((a6 + 0x0));
    *(float *)((t8 + 0x1C)) = (u16 * u15);
    _builtin_prefetch((void *)t8);
    u17 = *(float *)((a6 + 0x4));
    *(float *)(((t8 + 0x20) + 0x0)) = (u17 * u15);
    *(float *)(((t8 + 0x20) + 0x4)) = u15;
    _builtin_prefetch((void *)(t8 + 0x20));
    *(unsigned int *)0xC2B7694 = ((t8 + 0x20) + 0x20);
    return 0x4;
}

int kmSetUserClipping(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t21;
    int t22;
    int t23;
    int t24;
    int t26;
    int t27;
    int stk[20] = {0};

    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
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
        *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t5 >> 16) >> 8);
        *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t5 >> 16) >> 8);
        kmiMemCopy8(((t5 & 0x3FFFFFF) | 0xE0000000), 0xC178444, 0x20);
        _builtin_prefetch((void *)((t5 & 0x3FFFFFF) | 0xE0000000));
        t7 = *(int *)((a4 + 0x0));
        t8 = *(int *)(((a5 << 2) + t7));
        *(unsigned int *)(((a5 << 2) + t7)) = (t8 + 0x20);
        *(unsigned int *)(((int)stk + 4)) = 0x2;
        t9 = t7;
        t10 = (t8 + 0x20);
        t11 = ((t5 & 0x3FFFFFF) | 0xE0000000);
        for (;;) {
            t12 = *(int *)(((int)stk + 4));
            if (t12 == 0) break;
            t13 = *(int *)((a4 + 0x0));
            t9 = t13;
            t14 = *(int *)(((a5 << 2) + t9));
            *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t14 >> 16) >> 8);
            *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t14 >> 16) >> 8);
            t11 = t14;
            t10 = 0xC158860;
            t11 = (t11 & 0x3FFFFFF);
            t11 = (t11 | 0xE0000000);
            t15 = ((int (*)(int, int, int))(t10))(t11, 0xC178464, 0x40);
            t9 = t15;
            _builtin_prefetch((void *)t11);
            t11 = (t11 + 0x20);
            _builtin_prefetch((void *)t11);
            t16 = *(int *)((a4 + 0x0));
            t9 = t16;
            t17 = *(int *)(((a5 << 2) + t9));
            *(unsigned int *)(((a5 << 2) + t9)) = (t17 + 0x40);
            t18 = *(int *)(((int)stk + 4));
            t10 = t18;
            t10 = (t10 - 1);
            *(unsigned int *)(((int)stk + 4)) = t10;
        }
    }
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = 0x20000000;
    t21 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x10)) = t21;
    t22 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x14)) = t22;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x18)) = a8;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x1C)) = a9;
    t23 = *(int *)((a4 + 0x0));
    t24 = *(int *)(((a5 << 2) + t23));
    *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t24 >> 16) >> 8);
    *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t24 >> 16) >> 8);
    kmiMemCopy8(((t24 & 0x3FFFFFF) | 0xE0000000), (((int)stk + 4) + 0xC), 0x20);
    _builtin_prefetch((void *)((t24 & 0x3FFFFFF) | 0xE0000000));
    t26 = *(int *)((a4 + 0x0));
    t27 = *(int *)(((a5 << 2) + t26));
    *(unsigned int *)(((a5 << 2) + t26)) = (t27 + 0x20);
    return 0x0;
}

int nlPuts(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;

    t0 = *(int *)0xC2AF12C;
    t1 = 0x2;
    if (t0 != 0) {
        t1 = 0x0;
    }
    t2 = *(int *)0xC2B8CBC;
    t3 = *(int *)(((t1 << 2) + t2));
    t4 = *(int *)0xC2AF0BC;
    t5 = *(int *)0xC2AF0C0;
    t6 = *(int *)0xC2AF0C4;
    *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t3 >> 16) >> 8);
    *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t3 >> 16) >> 8);
    t7 = *(int *)0xC2AF118;
    *(unsigned int *)((((0x3FFFFFF & t3) | 0xE0000000) + 0x0)) = t7;
    t8 = *(int *)0xC2AF11C;
    *(unsigned int *)((((0x3FFFFFF & t3) | 0xE0000000) + 0x4)) = t8;
    t9 = *(int *)0xC2AF120;
    *(unsigned int *)((((0x3FFFFFF & t3) | 0xE0000000) + 0x8)) = t9;
    t10 = *(int *)0xC2AF124;
    *(unsigned int *)((((0x3FFFFFF & t3) | 0xE0000000) + 0xC)) = t10;
    t11 = *(int *)0xC2AF128;
    *(unsigned int *)((((0x3FFFFFF & t3) | 0xE0000000) + 0x10)) = t11;
    _builtin_prefetch((void *)((0x3FFFFFF & t3) | 0xE0000000));
    t12 = 0xFF000038;
    t13 = 0xE0000000;
    t14 = 0xC2AF118;
    t15 = t6;
    t16 = a4;
    t17 = (((0x3FFFFFF & t3) | 0xE0000000) + 0x20);
    t18 = t5;
    for (;;) {
        t19 = *(signed char *)((t16 + 0x0));
        if (t19 == 0) break;
        t20 = *(signed char *)((t16 + 0x0));
        t12 = t20;
        if (t12 != 32) {
            t21 = *(signed char *)((t16 + 0x0));
            t12 = t21;
            t14 = 0x0;
            t22 = *(int *)0xC2AF0D0;
            if (t12 == 10) {
                t18 = t14;
                if ((t4 & 0x1) != 0) {
                    t18 = t22;
                }
                t14 = 0xC2AF0CC;
                t23 = *(int *)((t14 + 0x0));
                t15 = (t15 + t23);
            } else if (t12 == 13) {
                t18 = t14;
                if ((t4 & 0x1) != 0) {
                    t18 = t22;
                }
            } else {
                t24 = *(signed char *)((t16 + 0x0));
                t14 = t18;
                t25 = nlCharacter(t14, t15, t24, t17);
                t12 = t25;
                t17 = t12;
                t14 = 0xC2AF0C8;
                t26 = *(int *)((t14 + 0x0));
                t13 = t26;
                t18 = (t18 + t13);
            }
        } else {
            t14 = 0xC2AF0C8;
            t27 = *(int *)((t14 + 0x0));
            t13 = t27;
            t18 = (t18 + t13);
        }
        t16 = (t16 + 0x1);
    }
    *(unsigned int *)0xC2AF0C0 = t18;
    *(unsigned int *)0xC2AF0C4 = t15;
    t28 = *(int *)0xC2B8CBC;
    t29 = *(int *)((((t1 << 2) + t28) + 0x0));
    *(unsigned int *)((((t1 << 2) + t28) + 0x0)) = ((t29 & 0xFC000000) | (t17 & 0x3FFFFFF));
    return ((t29 & 0xFC000000) | (t17 & 0x3FFFFFF));
}


