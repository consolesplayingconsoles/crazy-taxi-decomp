/* Straight-line functions with calls and guards (batch gen_arg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, int, int, int, int);
int ADXSTM_OpenRange(int, int, int);
int ADXSTM_Start(int);
int adxf_read_sj32(int a4, int a5, int a6, int a7);

int adxf_read_sj32(int a4, int a5, int a6, int a7)
{
    int t38;
    int t19;
    int t20;
    int t21;
    int t26;
    int t31;
    int t59;
    int t52;
    int t45;
    int t35;
    int stk[6];

    *(unsigned int *)(((int)stk + 4)) = a6;
    if (a4 == 0) {
        ADXERR_CallErrFunc(0xC1757E8, a5, a6, a7, *(int *)((int)stk + 4));
        t59 = 0xFFFFFFFD;
    } else {
        if ((int)a5 < 0) {
            ADXERR_CallErrFunc(0xC175814, a5, a6, a7, *(int *)((int)stk + 4));
            t52 = 0xFFFFFFFD;
        } else {
            if ((*(int *)(((int)stk + 4))) == 0) {
                ADXERR_CallErrFunc(0xC175844, a5, a6, a7, *(int *)((int)stk + 4));
                t45 = 0xFFFFFFFD;
            } else {
                t38 = 0x0;
                if ((*(signed char *)((a4 + 0x1))) == 2) {
                } else {
                    if ((*(int *)((a4 + 0x4))) != 0) {
                        ADXERR_CallErrFunc(0xC17586C, a5, a6, a7, *(int *)((int)stk + 4));
                        t35 = 0xFFFFFFFF;
                    } else {
                        ADXCRS_Lock();
                        *(unsigned int *)((a4 + 0x1C)) = ((*(int *)((a4 + 0xC))) + (*(int *)((a4 + 0x18))));
                        t19 = *(int *)((a4 + 0x10));
                        t20 = *(int *)((a4 + 0x18));
                        t21 = (t19 - t20);
                        if ((int)a5 < (int)(t19 - t20)) {
                            t21 = a5;
                        }
                        *(unsigned int *)((a4 + 0x20)) = t21;
                        *(unsigned int *)((a4 + 0x24)) = 0x0;
                        t26 = ADXSTM_OpenRange((*(int *)((a4 + 0x1C))), (*(int *)((a4 + 0x20))), (*(int *)(((int)stk + 4))));
                        t31 = 0xFFFFFFFF;
                        if (t26 == 0) {
                        } else {
                            *(unsigned int *)((a4 + 0x4)) = t26;
                            *(unsigned char *)((a4 + 0x1)) = 0x2;
                            ADXSTM_Start((*(int *)((a4 + 0x4))));
                            t31 = (*(int *)((a4 + 0x20)));
                        }
                        ADXCRS_Unlock();
                        t35 = t31;
                    }
                    t38 = t35;
                }
                t45 = t38;
            }
            t52 = t45;
        }
        t59 = t52;
    }
    return t59;
}
