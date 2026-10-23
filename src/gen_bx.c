/* Straight-line functions with calls and guards (batch gen_bx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int bootSendData(int, int, int);
int bootRecvData(int, int, int);
int bootEndTransfer(int);
int SetScreen(int);
int SetWindow(int);
int callLoadData(int);
int callSaveData(int);
int nlsndSeqRequest(void);
int PutStringFixPfont(int, int, float, float, float, float);
int buIsReady(void);
int kmGarbageCollectTexture(void);
int menuCursor(int, int, int);
int menuEnterStep(void);
int menuOpenStep(void);
int menuPutFrame(void);
int menuPutHelpBar(int, float, float);
int menuPutSprites(int, int, int, int);
int nlCreateTextureParamA(int);
int putLevelCTFontAssist(int, int, int, int);
int putRecordUnit(int, int, int, int, float, float);
int putString(int, int, float, float, float);
int camGetOnScript(void);
int nlCommonTextureGarbageCollection(void);
int bootSendFromBuffer(int a4, int a5, int a6, int a7);
int bootRecvToBuffer(int a4, int a5, int a6, int a7);
int bootCopyBuffer(int a4, int a5, int a6, int a7);
int menuSaveLoadHandler(void);


int nlCommonTextureGarbageCollection(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = kmGarbageCollectTexture();
    t1 = *(int *)0xC2B29C0;
    t2 = t0;
    t3 = 0x0;
    t4 = t1;
    for (;;) {
        t5 = *(int *)0xC2B29C4;
        if ((int)t3 >= (int)t5) break;
        t6 = *(int *)((t4 + 0x28));
        if (t6 == 0) {
            t7 = nlCreateTextureParamA(t4);
            t2 = t7;
        }
        t4 = (t4 + 0x3C);
        t3 = (t3 + 0x1);
    }
    return t2;
}

int bootSendFromBuffer(int a4, int a5, int a6, int a7)
{
    int t1;
    int t20;
    int t2;
    int t3;
    int t4;
    int t8;
    int t9;
    int t10;
    int t14;
    int t15;
    int t16;

    bootRecvData(a4, 0xAC007800, a5);
    t1 = bootEndTransfer(a4);
    t20 = t1;
    if (a7 != 0) {
        if (a5 != 1) {
            if (a5 != 2) {
                if (a5 == 4) {
                    t2 = *(int *)0xAC007800;
                    if ((int)a7 > 0) {
                        t3 = 0x0;
                        t4 = a6;
                        do {
                            t3 = (t3 + 0x1);
                            *(unsigned int *)((t4 + 0x0)) = t2;
                            t4 = (t4 + 0x4);
                        } while ((int)t3 < (int)a7);
                    }
                }
            } else {
                t8 = *(short *)0xAC007800;
                if ((int)a7 > 0) {
                    t9 = 0x0;
                    t10 = a6;
                    do {
                        t9 = (t9 + 0x1);
                        *(unsigned short *)((t10 + 0x0)) = t8;
                        t10 = (t10 + 0x2);
                    } while ((int)t9 < (int)a7);
                }
            }
        } else {
            t14 = *(signed char *)0xAC007800;
            if ((int)a7 > 0) {
                t15 = 0x0;
                t16 = a6;
                do {
                    t15 = (t15 + 0x1);
                    *(unsigned char *)((t16 + 0x0)) = t14;
                    t16 = (t16 + 0x1);
                } while ((int)t15 < (int)a7);
            }
        }
        t20 = a5;
    }
    return t20;
}

int bootRecvToBuffer(int a4, int a5, int a6, int a7)
{
    int t1;
    int t26;
    int t2;
    int t3;
    int t4;
    int t5;
    int t10;
    int t11;
    int t12;
    int t13;
    int t18;
    int t19;
    int t20;
    int t21;

    bootRecvData(a4, 0xAC007800, (a5 * a7));
    t1 = bootEndTransfer(a4);
    t26 = t1;
    if (a7 != 0) {
        if (a5 != 1) {
            if (a5 != 2) {
                if (a5 == 4) {
                    if ((int)a7 > 0) {
                        t2 = 0x0;
                        t3 = a6;
                        t4 = 0xAC007800;
                        do {
                            t5 = *(int *)((t4 + 0x0));
                            t4 = (t4 + 0x4);
                            t2 = (t2 + 0x1);
                            *(unsigned int *)((t3 + 0x0)) = t5;
                            t3 = (t3 + 0x4);
                        } while ((int)t2 < (int)a7);
                    }
                }
            } else {
                if ((int)a7 > 0) {
                    t10 = 0x0;
                    t11 = a6;
                    t12 = 0xAC007800;
                    do {
                        t13 = *(short *)((t12 + 0x0));
                        t12 = (t12 + 0x2);
                        t10 = (t10 + 0x1);
                        *(unsigned short *)((t11 + 0x0)) = t13;
                        t11 = (t11 + 0x2);
                    } while ((int)t10 < (int)a7);
                }
            }
        } else {
            if ((int)a7 > 0) {
                t18 = 0x0;
                t19 = 0xAC007800;
                t20 = a6;
                do {
                    t21 = *(signed char *)((t19 + 0x0));
                    t19 = (t19 + 0x1);
                    t18 = (t18 + 0x1);
                    *(unsigned char *)((t20 + 0x0)) = t21;
                    t20 = (t20 + 0x1);
                } while ((int)t18 < (int)a7);
            }
        }
        t26 = a5;
    }
    return t26;
}

int bootCopyBuffer(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t10;
    int t11;
    int t12;
    int t13;
    int t20;
    int t21;
    int t22;
    int t23;

    if (a5 != 1) {
        if (a5 != 2) {
            if (a5 == 4) {
                if ((int)a7 > 0) {
                    t0 = a6;
                    t1 = 0x0;
                    t2 = 0xAC007800;
                    do {
                        t3 = *(int *)((t0 + 0x0));
                        t0 = (t0 + 0x4);
                        t1 = (t1 + 0x1);
                        *(unsigned int *)((t2 + 0x0)) = t3;
                        t2 = (t2 + 0x4);
                    } while ((int)t1 < (int)a7);
                }
            }
        } else {
            if ((int)a7 > 0) {
                t10 = a6;
                t11 = 0x0;
                t12 = 0xAC007800;
                do {
                    t13 = *(short *)((t10 + 0x0));
                    t10 = (t10 + 0x2);
                    t11 = (t11 + 0x1);
                    *(unsigned short *)((t12 + 0x0)) = t13;
                    t12 = (t12 + 0x2);
                } while ((int)t11 < (int)a7);
            }
        }
    } else {
        if ((int)a7 > 0) {
            t20 = 0xAC007800;
            t21 = 0x0;
            t22 = a6;
            do {
                t23 = *(signed char *)((t22 + 0x0));
                t22 = (t22 + 0x1);
                t21 = (t21 + 0x1);
                *(unsigned char *)((t20 + 0x0)) = t23;
                t20 = (t20 + 0x1);
            } while ((int)t21 < (int)a7);
        }
    }
    bootSendData(a4, 0xAC007800, (a5 * a7));
    return bootEndTransfer(a4);
}


