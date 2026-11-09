/* Straight-line functions with calls and guards (batch gen_abm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlsndStreamGetBufInfo(int, int, int);
int nlsndStreamOpen(int);
int nlsndStreamClose(int);
int mwlSbAllocWork(int);
int mwRnaErrCallFunc(int, ...);
int mwlSbAlloc(void);
int nlsndG2DmaHandleClose(int);
int nlsndG2DmaHandleOpen(void);
int nlsndStreamGenerateHdInfo(int);
int mwSbOpenPort(int a4);
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_ushort { char p[0x58]; unsigned short v; };
struct o5A_ushort { char p[0x5A]; unsigned short v; };
struct o60_uchar { char p[0x60]; unsigned char v; };
struct o61_uchar { char p[0x61]; unsigned char v; };
struct o62_ushort { char p[0x62]; unsigned short v; };


int mwSbOpenPort(int a4)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t19;
    int t20;
    int t22;
    int t23;
    int t29;
    int t30;
    int t31;
    int t33;
    int t34;
    int t40;
    int stk[12] = {0};
    int R1008;

    R1008 = *(int *)((int)stk + 8);

    if (((int)a4 >= (int)0x1) && ((int)a4 <= (int)0x2)) {
        t0 = mwlSbAlloc();
        if (t0 == 0) {
            mwRnaErrCallFunc(0xC176ADC);
        } else {
            *(unsigned int *)((t0 + 0x0)) = 0xC178744;
            t2 = 0x0;
            for (;;) {
                if ((int)t2 >= (int)a4) {
                    t2 = 0x0;
                    for (;;) {
                        if ((int)t2 >= (int)a4) {
                            *(unsigned short *)((t0 + 0x6)) = (nlsndStreamOpen(a4));
                            t4 = *(short *)((t0 + 0x6));
                            if (((int)t4 >= 0) && ((int)t4 <= (int)0x7)) {
                                t6 = mwlSbAllocWork((*(short *)((t0 + 0x6))));
                                *(unsigned int *)((t0 + 0x1C)) = t6;
                                if (t6 == 0) {
                                    mwRnaErrCallFunc(0xC176BB4);
                                    nlsndStreamClose((*(short *)((t0 + 0x6))));
                                    return 0x0;
                                }
                                nlsndStreamGenerateHdInfo((*(int *)(((*(int *)((t0 + 0x1C))) + 0x4))));
                                (((struct o60_uchar *)(t0))->v) = 0x0;
                                *(unsigned char *)((t0 + 0x5)) = 0x0;
                                *(unsigned int *)((t0 + 0x18)) = 0x0;
                                *(unsigned int *)((t0 + 0xC)) = a4;
                                *(unsigned int *)((t0 + 0x8)) = a4;
                                *(unsigned int *)((t0 + 0x20)) = (nlsndStreamGetBufInfo((*(short *)((t0 + 0x6))), 0x0, (((int)stk + 8) + 0x4)));
                                *(unsigned int *)((t0 + 0x24)) = (nlsndStreamGetBufInfo((*(short *)((t0 + 0x6))), 0x1, (((int)stk + 8) + 0x4)));
                                *(unsigned int *)((t0 + 0x28)) = (*(int *)(((int)stk + 12)));
                                (((struct o48_uint *)(t0))->v) = 0xFFFFFFFF;
                                (((struct o4C_uint *)(t0))->v) = 0x0;
                                (((struct o50_uint *)(t0))->v) = 0x0;
                                (((struct o54_uint *)(t0))->v) = 0x0;
                                (((struct o58_ushort *)(t0))->v) = 0x0;
                                (((struct o5A_ushort *)(t0))->v) = 0x0;
                                (((struct o61_uchar *)(t0))->v) = 0xFFFFFFFF;
                                (((struct o62_ushort *)(t0))->v) = 0xFFFFFFFF;
                                *(unsigned char *)((t0 + 0x4)) = 0x1;
                                return t0;
                            }
                            mwRnaErrCallFunc(0xC176B78);
                            return 0x0;
                        }
                        t19 = nlsndG2DmaHandleOpen();
                        if (t19 == 0) {
                            break;
                        }
                        t20 = ((t2 << 2) + (t0 + 0x34));
                        t2 = (t2 + 0x1);
                        *(unsigned int *)((t20 + 0x0)) = t19;
                    }
                    mwRnaErrCallFunc(0xC176B10);
                    R1008 = 0x0;
                    if ((int)t2 > 0) {
                        t22 = (t0 + 0x2C);
                        t23 = (t0 + 0x34);
                        for (;;) {
                            if ((int)(nlsndG2DmaHandleClose((*(int *)((t23 + 0x0))))) < 0) {
                                mwRnaErrCallFunc(0xC176B44);
                            }
                            *(unsigned int *)((t22 + 0x0)) = 0x0;
                            t22 = (t22 + 0x4);
                            t29 = R1008;
                            R1008 = (t29 + 0x1);
                            t23 = (t23 + 0x4);
                            if ((int)(t29 + 0x1) >= (int)t2) {
                                break;
                            }
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                t30 = nlsndG2DmaHandleOpen();
                if (t30 == 0) {
                    break;
                }
                t31 = ((t2 << 2) + (t0 + 0x2C));
                t2 = (t2 + 0x1);
                *(unsigned int *)((t31 + 0x0)) = t30;
            }
            mwRnaErrCallFunc(0xC176B10);
            R1008 = 0x0;
            if ((int)t2 > 0) {
                t33 = (t0 + 0x2C);
                t34 = (t0 + 0x2C);
                for (;;) {
                    if ((int)(nlsndG2DmaHandleClose((*(int *)((t33 + 0x0))))) < 0) {
                        mwRnaErrCallFunc(0xC176B44);
                    }
                    *(unsigned int *)((t34 + 0x0)) = 0x0;
                    t34 = (t34 + 0x4);
                    t40 = R1008;
                    R1008 = (t40 + 0x1);
                    t33 = (t33 + 0x4);
                    if ((int)(t40 + 0x1) >= (int)t2) {
                        break;
                    }
                }
            }
        }
    } else {
        mwRnaErrCallFunc(0xC176AAC);
    }
    return 0x0;
}
