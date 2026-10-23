/* Straight-line functions with calls and guards (batch gen_iu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int _div64(int, int, int, int);
int _rnd(int, int);
int _setsbit(int, int, int);
int _mult64(int, int, int, int);
int _power(int, int, int);
int _rsfts(int, int, int);
int memmove(int, int, int);
int _calcnpw(int a4, int a5, int a6, int a7);

int _calcnpw(int a4, int a5, int a6, int a7)
{
    int t1;
    int t2;
    int t5;
    int t6;
    int t10;
    int t11;
    int t12;
    int t16;
    int t14;
    int t15;
    int t19;
    int t20;
    int t26;
    int t27;
    int stk[14] = {0};

    *(unsigned short *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a7;
    *(unsigned short *)(((int)stk + 20)) = 0x8;
    if ((int)a6 > 0) {
        _power(a6, ((int)stk + 4), (((int)stk + 4) + 0x14));
        t1 = *(short *)(((int)stk + 8));
        t2 = *(int *)(((int)stk + 12));
        _div64(((int)stk + 4), (((int)stk + 4) + 0x14), t1, t2);
    } else {
        _power((-a6), ((int)stk + 4), (((int)stk + 4) + 0x14));
        t5 = *(short *)(((int)stk + 8));
        t6 = *(int *)(((int)stk + 12));
        _mult64(((int)stk + 4), (((int)stk + 4) + 0x14), t5, t6);
    }
    t10 = *(short *)(((int)stk + 4));
    t11 = *(short *)(((int)stk + 20));
    t12 = (int)(short)((short)(0x3F - t10) / (short)t11);
    _setsbit((((int)stk + 4) + 0x14), 0x9, (0x42 - (short)(0x3F - t10)));
    t16 = 0x8;
    if ((int)0x8 >= (int)(short)t12) {
        t14 = 0x8;
        for (;;) {
            t14 = (short)t14;
            t15 = *(signed char *)(((((short)t14 - (short)t12) + (((int)stk + 4) + 0x14)) + 0x0));
            *(unsigned char *)(((((int)stk + 4) + 0x14) + t14)) = t15;
            t14 = (t14 - 1);
            if ((int)(short)t14 < (int)(short)t12) {
                break;
            }
        }
        t16 = t14;
    }
    if ((int)(short)t16 >= 0) {
        t19 = t16;
        t20 = (((short)t16 + (((int)stk + 4) + 0x14)) + 0x1);
        for (;;) {
            t19 = (t19 - 1);
            *(unsigned char *)(((t20 - 0x1) + 0x0)) = 0x0;
            t20 = (t20 - 0x1);
            if ((int)(short)t19 < 0) {
                break;
            }
        }
    }
    _rsfts((((int)stk + 4) + 0x14), 0x9, ((0x3F - t10) - ((t12 << 2) << 1)));
    *(unsigned short *)(((int)stk + 4)) = 0x3F;
    _rnd((((int)stk + 4) + 0x14), 0x40);
    t26 = *(int *)(((int)stk + 16));
    t27 = memmove(t26, (((int)stk + 4) + 0x14), 0x8);
    return t27;
}
