/* Straight-line functions with calls and guards (batch gen_oj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSetDummyTextureParameter(int);
int nlSetTextureParameter(int, int);
int nlObjPutSetGarbagedTexture_Sub(int a4, int a5, int a6);

int nlObjPutSetGarbagedTexture_Sub(int a4, int a5, int a6)
{
    int t0;
    int t35;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t25;
    int t17;
    int t1;
    int t4;
    int t14;
    int t15;
    int t23;
    int stk[12] = {0};

    *(unsigned int *)(((int)stk + 4)) = a6;
    t0 = *(int *)((a4 + 0x0));
    t35 = 0x0;
    if (((int)t0 >= 0) && (t1 = *(int *)((a4 + 0x18)), t1 != 0)) {
        *(unsigned int *)(((int)stk + 8)) = ((((a5 == 0)) ? 1 : 0) ^ 0x1);
        t2 = ((((a5 == 0)) ? 1 : 0) ^ 0x1);
        t3 = t1;
        t5 = t0;
        t6 = a4;
        t7 = 0x0;
        t8 = (a4 + 0x18);
        for (;;) {
            t9 = *(int *)((t8 + 0x20));
            t10 = t8;
            t8 = (t8 + 0x50);
            t25 = t9;
            if ((int)t9 >= 0) {
                t5 = (*(int *)(((int)stk + 4)));
                t17 = t9;
                if ((t5 != 0) && (t14 = *(int *)(((int)stk + 8)), t15 = (t5 == 0), t5 = t14, t5 != 0)) {
                    t5 = t9;
                    t5 = (t5 << 2);
                    t5 = (t5 << 2);
                    t5 = (t5 + a5);
                    t17 = (*(int *)((t5 + 0xC)));
                }
                t3 = 0xC2B3184;
                t2 = 0xC2AEC84;
                t4 = (*(int *)((t3 + 0x0)));
                t5 = (*(int *)((t2 + 0x0)));
                t6 = (t17 + t4);
                t6 = (t6 << 2);
                t6 = (t6 << 1);
                t6 = (t6 + t5);
                t4 = (*(int *)((t6 + 0x0)));
                if (t4 == 0) {
                    t7 = 0x1;
                    t23 = 0xFFFFFFFF;
                } else {
                    t23 = (*(int *)((t6 + 0x4)));
                }
                t25 = t23;
            }
            t4 = (*(int *)((t10 + 0xC)));
            t4 = (t4 & 0x7E00000);
            *(unsigned int *)(((int)stk + 12)) = t4;
            if ((int)t25 >= 0) {
                t4 = 0xC073E00;
                t6 = t10;
                t2 = (nlSetTextureParameter(t6, t25));
            } else {
                t4 = 0xC073FD0;
                t6 = t10;
                t2 = (nlSetDummyTextureParameter(t6));
            }
            t2 = 0x4C;
            t5 = (*(int *)(((int)stk + 12)));
            t4 = (*(int *)((t10 + 0xC)));
            t4 = (t4 | t5);
            *(unsigned int *)((t10 + 0xC)) = t4;
            t3 = (*(int *)((t10 + t2)));
            t8 = (t8 + t3);
            t6 = (*(int *)((t8 + 0x0)));
            if (t6 == 0) {
                break;
            }
        }
        t35 = t7;
    }
    return t35;
}
