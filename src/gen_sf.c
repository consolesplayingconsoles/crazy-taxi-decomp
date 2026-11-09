/* Straight-line functions with calls and guards (batch gen_sf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiMemCopy8(int, int, int);
extern void _builtin_prefetch(void *);
int nlCalcPoint(int, int);
int nldispstripTexSub(int a4, int a5);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };


int nldispstripTexSub(int a4, int a5)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t41;
    int t14;
    int t15;
    int t16;
    int t34;
    int t36;
    int t38;
    int t27;
    float u28;
    int stk[20] = {0};
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
    _builtin_prefetch((void *)(R1004));
    if (t3 == 64) {
        _builtin_prefetch((void *)((R1004) + 0x20));
    }
    t41 = (((struct o0_int *)0xC2AF368)->v);
    t14 = R1008;
    *(unsigned int *)((t14 + t41)) = ((*(int *)((t14 + t41))) + (((unsigned int)t3 >> 2) << 2));
    *(unsigned int *)(((int)stk + 12)) = 0xE0000000;
    if ((int)a4 > 0) {
        t15 = a4;
        t16 = a5;
        for (;;) {
            if (t15 == 1) {
                t14 = 0xF0000000;
                *(unsigned int *)(((int)stk + 12)) = t14;
            }
            if ((*(int *)0xC2B7944) != 0) {
                t14 = 0xC0771B0;
                nlCalcPoint(t16, (((int)stk + 4) + 0xC));
                u28 = (*(float *)(((int)stk + 24)));
            } else {
                *(float *)(((int)stk + 16)) = (*(float *)((t16 + 0x0)));
                *(float *)(((int)stk + 20)) = (*(float *)((t16 + 0x4)));
                t27 = t14;
                u28 = (*(float *)((t16 + 0x8)));
            }
            t14 = t27;
            *(float *)(((int)stk + 24)) = (1.0f / u28);
            *(float *)(((int)stk + 28)) = (*(float *)((t16 + 0xC)));
            *(float *)(((int)stk + 32)) = (*(float *)((t16 + 0x10)));
            t14 = (*(int *)((t16 + 0x14)));
            *(unsigned int *)(((int)stk + 36)) = t14;
            t34 = *(int *)((((((struct o8_int *)0xC2AF368)->v)) + 0x0));
            R1004 = (t34 << 2);
            t36 = *(int *)(((t34 << 2) + ((((struct o0_int *)0xC2AF368)->v))));
            (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t36 >> 16) >> 8);
            (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t36 >> 16) >> 8);
            t14 = 0xC158860;
            kmiMemCopy8(((t36 & 0x3FFFFFF) | 0xE0000000), (((int)stk + 4) + 0x8), 0x20);
            _builtin_prefetch((void *)((t36 & 0x3FFFFFF) | 0xE0000000));
            t38 = (((struct o0_int *)0xC2AF368)->v);
            t15 = (t15 - 1);
            t14 = (R1004);
            *(unsigned int *)((t14 + t38)) = ((*(int *)((t14 + t38))) + 0x20);
            t16 = (t16 + 0x1C);
            if ((int)t15 <= 0) {
                break;
            }
        }
        t41 = t38;
    }
    return t41;
}
