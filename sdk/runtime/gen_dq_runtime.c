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

