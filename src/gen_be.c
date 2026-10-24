/* Straight-line functions with calls and guards (batch gen_be): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int mwlRnaSetSvrInt(void);
int mwRnaInitCs(void);
int mwRnaLockCs(int);
int mwlSbGetWorkTbl(void);
int SJRBF_Lock(void);
int SJRBF_Unlock(int, int);
int memset(int, int, int);
int mwRnaErrCallFunc(int, ...);
int mwRnaErrEntryFunc(int, int);
int mwRnaGetPlaySw(int);
int mwRnaUnlockCs(int);
int mwRnaInit(void);
int mwRnaSetPlaySw(int a4, int a5);
int SJRBF_UngetChunk(int a4, int a5, int a6);

int mwRnaSetPlaySw(int a4, int a5)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t20;
    int stk[6];

    *(unsigned int *)(((int)stk + 8)) = a5;
    if (a4 == 0) {
        t0 = mwRnaErrCallFunc(0xC176680);
        return t0;
    }
    mwRnaLockCs((((int)stk + 8) + 0x4));
    t2 = *(int *)(((int)stk + 8));
    if (t2 == 0) {
        t3 = mwRnaGetPlaySw(a4);
        if (t3 != 0) {
            t4 = *(int *)((a4 + 0x38));
            *(unsigned int *)(((int)stk + 8)) = t4;
            t5 = *(int *)((t4 + 0x0));
            t6 = *(int *)((t5 + 0x14));
            t7 = ((int (*)(int))(t6))(t4);
            t8 = *(signed char *)((a4 + 0x1));
            *(unsigned char *)((a4 + 0x1)) = (t8 & 0x5);
        }
    } else {
        t10 = *(int *)(((int)stk + 8));
        if (t10 == 1) {
            t11 = mwRnaGetPlaySw(a4);
            if (t11 != 1) {
                t12 = *(int *)((a4 + 0x38));
                *(unsigned int *)(((int)stk + 8)) = t12;
                t13 = *(int *)((t12 + 0x0));
                t14 = *(int *)((t13 + 0x10));
                t15 = ((int (*)(int))(t14))(t12);
                t16 = *(signed char *)((a4 + 0x1));
                *(unsigned char *)((a4 + 0x1)) = (t16 | 0x2);
            }
        }
    }
    t20 = mwRnaUnlockCs((((int)stk + 8) + 0x4));
    return t20;
}

int SJRBF_UngetChunk(int a4, int a5, int a6)
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
    int t31;
    int t32;
    int t33;
    int t34;

    t0 = SJRBF_Lock();
    if (a5 == 0) {
        t1 = *(int *)((a4 + 0x14));
        t2 = *(int *)((a4 + 0x20));
        t3 = *(int *)((a6 + 0x4));
        t4 = (int)((int)((t1 + t2) - t3) % (int)t2);
        t5 = *(int *)((a6 + 0x0));
        t6 = *(int *)((a4 + 0x1C));
        t7 = (int)((int)(t5 - t6) % (int)t2);
        if (t4 == t7) {
            *(unsigned int *)((a4 + 0x14)) = t4;
            t8 = *(int *)((a4 + 0x10));
            t9 = *(int *)((a6 + 0x4));
            *(unsigned int *)((a4 + 0x10)) = (t8 + t9);
        } else {
            t10 = *(int *)((a4 + 0x28));
            if (t10 != 0) {
                t11 = *(int *)((a4 + 0x28));
                t12 = *(int *)((a4 + 0x2C));
                t13 = ((int (*)(int, int))(t11))(t12, 0xFFFFFFFD);
            }
        }
    } else {
        if (a5 == 1) {
            t16 = *(int *)((a4 + 0x18));
            t17 = *(int *)((a4 + 0x20));
            t18 = *(int *)((a6 + 0x4));
            t19 = (int)((int)((t16 + t17) - t18) % (int)t17);
            t20 = *(int *)((a6 + 0x0));
            t21 = *(int *)((a4 + 0x1C));
            t22 = (int)((int)(t20 - t21) % (int)t17);
            if (t19 == t22) {
                *(unsigned int *)((a4 + 0x18)) = t19;
                t23 = *(int *)((a4 + 0xC));
                t24 = *(int *)((a6 + 0x4));
                *(unsigned int *)((a4 + 0xC)) = (t23 + t24);
            } else {
                t25 = *(int *)((a4 + 0x28));
                if (t25 != 0) {
                    t26 = *(int *)((a4 + 0x28));
                    t27 = *(int *)((a4 + 0x2C));
                    t28 = ((int (*)(int, int))(t26))(t27, 0xFFFFFFFD);
                }
            }
        } else {
            *(unsigned int *)((a6 + 0x4)) = 0x0;
            *(unsigned int *)((a6 + 0x0)) = 0x0;
            t31 = *(int *)((a4 + 0x28));
            if (t31 != 0) {
                t32 = *(int *)((a4 + 0x28));
                t33 = *(int *)((a4 + 0x2C));
                t34 = ((int (*)(int, int))(t32))(t33, 0xFFFFFFFD);
            }
        }
    }
    return SJRBF_Unlock(a4, t0);
}
