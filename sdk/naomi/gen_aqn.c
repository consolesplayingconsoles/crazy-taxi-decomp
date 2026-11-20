/* Straight-line functions with calls and guards (batch gen_aqn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern void _builtin_prefetch(void *);
int kmiMemCopy8(int, int, int);
int nlCalcPoint(int, int);
int nldispstripSub(int a4, int a5, int a6);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };


int nldispstripSub(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t7;
    int t9;
    int t8;
    int t11;
    int t12;
    int t42;
    int t14;
    int t15;
    int t16;
    int t34;
    int t36;
    int t38;
    int t39;
    int t26;
    float u28;
    int stk[20];
    int R1004;
    int R1008;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    t0 = (((struct o8_int *)0xC2AF368)->v);
    t1 = *(int *)((t0 + 0x0));
    R1008 = (t1 << 2);
    t3 = *(int *)((t0 + 0x4));
    t4 = *(int *)(((t1 << 2) + ((((struct o0_int *)0xC2AF368)->v))));
    (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    R1004 = ((t4 & 0x3FFFFFF) | 0xE0000000);
    kmiMemCopy8(((t4 & 0x3FFFFFF) | 0xE0000000), ((((struct o4_int *)0xC2AF368)->v)), t3);
    t7 = R1004;
    _builtin_prefetch((void *)t7);
    t9 = t7;
    if (t3 == 64) {
        t8 = R1004;
        _builtin_prefetch((void *)(t8 + 0x20));
        t9 = (t8 + 0x20);
    }
    t11 = (((struct o0_int *)0xC2AF368)->v);
    t12 = R1008;
    *(unsigned int *)((t12 + t11)) = ((*(int *)((t12 + t11))) + (((unsigned int)t3 >> 2) << 2));
    *(unsigned int *)(((int)stk + 12)) = 0xE0000000;
    R1008 = ((((a5 << 2) << 1) + 0xC0D6954) + 0x4);
    t42 = t11;
    if ((int)a4 > 0) {
        t14 = t9;
        t15 = a4;
        t16 = a6;
        for (;;) {
            if (t15 == 1) {
                t14 = 0xF0000000;
                *(unsigned int *)(((int)stk + 12)) = t14;
            }
            if ((*(int *)0xC2B7944) != 0) {
                nlCalcPoint(t16, (((int)stk + 4) + 0xC));
                u28 = (*(float *)(((int)stk + 24)));
            } else {
                *(float *)(((int)stk + 16)) = (*(float *)((t16 + 0x0)));
                *(float *)(((int)stk + 20)) = (*(float *)((t16 + 0x4)));
                t26 = t14;
                u28 = (*(float *)((t16 + 0x8)));
            }
            t14 = t26;
            t14 = 0xFF000038;
            *(float *)(((int)stk + 24)) = (1.0f / u28);
            *(unsigned int *)(((int)stk + 28)) = (*(int *)((t16 + ((*(int *)(((R1008) + 0x0))) << 2))));
            t34 = *(int *)((((((struct o8_int *)0xC2AF368)->v)) + 0x0));
            R1004 = (t34 << 2);
            t36 = *(int *)(((t34 << 2) + ((((struct o0_int *)0xC2AF368)->v))));
            *(unsigned int *)((t14 + 0x0)) = ((unsigned int)((unsigned int)t36 >> 16) >> 8);
            (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t36 >> 16) >> 8);
            kmiMemCopy8(((t36 & 0x3FFFFFF) | 0xE0000000), (((int)stk + 4) + 0x8), 0x20);
            _builtin_prefetch((void *)((t36 & 0x3FFFFFF) | 0xE0000000));
            t38 = (((struct o0_int *)0xC2AF368)->v);
            t15 = (t15 - 1);
            t39 = R1004;
            t14 = (*(int *)((t39 + t38)));
            t14 = (t14 + 0x20);
            *(unsigned int *)((t39 + t38)) = t14;
            t16 = (t16 + ((*(int *)(((((a5 << 2) << 1) + 0xC0D6954) + 0x0))) << 2));
            if ((int)t15 <= 0) {
                break;
            }
        }
        t42 = t38;
    }
    return t42;
}
