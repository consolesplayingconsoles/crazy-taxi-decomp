/* Straight-line functions with calls and guards (batch gen_dq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlMatrixMode(int);
int nlSetWindowSize(float, float, float, float);
int nl_set_cnv_proj_pers(void);
int _lsfts(int, int, int);
int _pow5(int, int);
int memmove(int, int, int);
int memset(int, int, int);
int _pow10(int a4, int a5, int a6);
int nlRenderTextureBegin(int a4);

int _pow10(int a4, int a5, int a6)
{
    int t1;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t13;
    int t14;
    int t15;
    int t16;
    int t3;
    int stk[10] = {0};

    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned short *)((a5 + 0x0)) = (a4 + 0x3F);
    _pow5(a4, (((int)stk + 4) + 0x8));
    t1 = *(int *)(((int)stk + 4));
    memset(t1, 0x0, 0x8);
    t4 = 0x0;
    t5 = (((int)stk + 4) + 0x8);
    for (;;) {
        t6 = *(signed char *)((t5 + 0x0));
        if (t6 != 0) {
            break;
        }
        t7 = *(short *)((a5 + 0x0));
        t3 = t7;
        t4 = (t4 + 0x1);
        t5 = (t5 + 0x1);
        t3 = (t3 - 8);
        *(unsigned short *)((a5 + 0x0)) = t3;
    }
    t8 = 0x80;
    t9 = 0x0;
    for (;;) {
        t10 = *(signed char *)((t5 + 0x0));
        if (((unsigned char)t10 & (unsigned char)t8) != 0) {
            break;
        }
        t8 = (unsigned char)t8;
        t9 = (t9 + 0x1);
        t8 = ((unsigned int)t8 >> 1);
    }
    *(unsigned int *)(((int)stk + 8)) = (0x8 - t4);
    _lsfts(t5, (0x8 - t4), t9);
    t13 = *(short *)((a5 + 0x0));
    *(unsigned short *)((a5 + 0x0)) = (t13 - t9);
    t14 = *(int *)(((int)stk + 8));
    t15 = *(int *)(((int)stk + 4));
    t16 = memmove(t15, t5, t14);
    return t16;
}

int nlRenderTextureBegin(int a4)
{
    int t0;
    int t1;
    float u2;
    float u3;
    float u4;
    float u5;
    int t6;
    int t11;
    int t12;
    int t13;
    float u14;
    float u15;
    float u16;
    float u17;
    int t18;
    int t19;
    int t21;
    int t7;

    t0 = *(int *)0xC2B31C4;
    t1 = *(int *)0xC2B31BC;
    if ((int)t0 >= 0) {
        *(unsigned int *)0xC2B31C4 = 0xFFFFFFFF;
        u2 = *(float *)0xC2B31D4;
        u3 = *(float *)0xC2B31D0;
        u4 = *(float *)0xC2B31CC;
        u5 = *(float *)0xC2B31C8;
        t6 = nlSetWindowSize(u5, u4, u3, u2);
        t7 = t6;
    }
    t11 = *(int *)0xC2B31C0;
    if ((unsigned int)a4 <= (unsigned int)t11) {
        t12 = *(int *)(((t1 + ((a4 << 2) << 2)) + 0x0));
        if ((int)t12 >= 0) {
            t13 = *(int *)(((t1 + ((a4 << 2) << 2)) + 0x4));
            if ((int)t13 >= 0) {
                *(unsigned int *)0xC2B31C4 = a4;
                u14 = *(float *)0xC2B34A0;
                *(float *)0xC2B31C8 = u14;
                u15 = *(float *)0xC2B34A4;
                *(float *)0xC2B31CC = u15;
                u16 = *(float *)0xC2B3498;
                *(float *)0xC2B31D0 = u16;
                u17 = *(float *)0xC2B349C;
                *(float *)0xC2B31D4 = u17;
                t18 = *(short *)(((t1 + ((a4 << 2) << 2)) + 0xE));
                t19 = *(short *)(((t1 + ((a4 << 2) << 2)) + 0xC));
                nlSetWindowSize(0.0f, 0.0f, (float)t19, (float)t18);
                t21 = *(signed char *)0xC2B31D8;
                nlMatrixMode(0x3);
                nl_set_cnv_proj_pers();
                return nlMatrixMode(t21);
            }
            return t7;
        }
        return t7;
    }
    return t7;
}
