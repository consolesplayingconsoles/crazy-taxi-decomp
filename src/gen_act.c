/* Straight-line functions with calls and guards (batch gen_act): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int _rnd(int, int);
int _mult64(int, int, int, int);
int _pow10(int, int, int);
int memmove(int, int, int);
int memset(int, int, int);
int _power(int a4, int a5, int a6);

int _power(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t8;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t28;
    int t22;
    int t40;
    int t9;
    int t10;
    int t27;
    int t24;
    int stk[19] = {0};

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    t0 = 0x1;
    t1 = (-a4);
    if ((int)a4 >= 0) {
        t0 = 0x0;
        t1 = a4;
    }
    t3 = (int)((int)t1 / (int)0x1B);
    t4 = (int)((int)t1 % (int)0x1B);
    if ((t0 == 1) && (t4 != 0)) {
        *(unsigned short *)(((int)stk + 4)) = (*(short *)0xC0DAEA8);
        memmove((((int)stk + 4) + 0x1C), 0xC0DAE58, 0x8);
        *(unsigned char *)(((((int)stk + 4) + 0x1C) + 0x8)) = 0x0;
        t9 = 0x0;
        t10 = (0x1B - t4);
    } else {
        memset((((int)stk + 4) + 0x1C), 0x0, 0x9);
        t8 = *(signed char *)(((((int)stk + 4) + 0x1C) + 0x0));
        *(unsigned char *)(((((int)stk + 4) + 0x1C) + 0x0)) = (t8 | 0x80);
        *(unsigned short *)(((int)stk + 4)) = 0x0;
        t9 = (t8 | 0x80);
        t10 = t4;
    }
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x1C);
    t11 = t9;
    t12 = (((int)stk + 4) + 0x1C);
    t13 = 0xC0DAE18;
    t14 = 0x0;
    t15 = t3;
    t16 = ((((t0 << 2) << 2) << 2) + 0xC0DAE18);
    t17 = (((t0 << 2) << 2) + 0xC0DAE98);
    for (;;) {
        t28 = t13;
        if ((t15 & 0x1) != 0) {
            t11 = (_mult64(((int)stk + 4), (((int)stk + 4) + 0x1C), (*(short *)((t17 + 0x0))), t16));
            t13 = 0xB4;
            t11 = (_rnd((((int)stk + 4) + 0x1C), 0x40));
            if (t11 != 0) {
                t13 = (*(short *)(((int)stk + 4)));
                t13 = (t13 + 0x1);
                *(unsigned short *)(((int)stk + 4)) = t13;
                t22 = *(int *)(((int)stk + 8));
                t11 = (*(signed char *)((t22 + 0x0)));
                t11 = (t11 | 0x80);
                *(unsigned char *)((t22 + 0x0)) = t11;
                t24 = t13;
            }
            t28 = t24;
        } else {
            t27 = t12;
        }
        t12 = t27;
        t13 = t28;
        t14 = (t14 + 0x1);
        t15 = (t15 >> 1);
        t17 = (t17 + 0x2);
        t16 = (t16 + 0x8);
        if ((int)t14 >= (int)0x8) {
            break;
        }
    }
    if (t10 != 0) {
        _pow10(t10, (*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 16))));
        _mult64(((int)stk + 4), (((int)stk + 4) + 0x1C), (*(short *)(((*(int *)(((int)stk + 12))) + 0x0))), (*(int *)(((int)stk + 16))));
        if ((_rnd((((int)stk + 4) + 0x1C), 0x40)) == 1) {
            *(unsigned short *)(((int)stk + 4)) = ((*(short *)(((int)stk + 4))) + 0x1);
            t40 = *(int *)(((int)stk + 8));
            *(unsigned char *)((t40 + 0x0)) = ((*(signed char *)((t40 + 0x0))) | 0x80);
        }
    }
    *(unsigned short *)(((*(int *)(((int)stk + 12))) + 0x0)) = (*(short *)(((int)stk + 4)));
    return (memmove((*(int *)(((int)stk + 16))), (((int)stk + 4) + 0x1C), 0x8));
}
