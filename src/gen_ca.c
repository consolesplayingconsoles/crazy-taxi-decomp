/* Straight-line functions with calls and guards (batch gen_ca): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void nlSetBackColor(int, int, int);
extern int nlLineCalcFogA();
int nlLineCalcFogB(int, int, int, float);
int nlLineCalcFogC(int, int, int, float);
extern int syIntAdrChk_prints();
int syIntAdrChk_printh(int);
int nlLocate(int, int);
extern int nlPrintf();
int nlSetFontSize(int, int);
int syIntAdrChk_dumpline(int a4, int a5, int a6);
int Warning(void);
int nlLineCalcColor(int a4, int a5);

int syIntAdrChk_dumpline(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t10;

    t0 = ((int (*)(void))(syIntAdrChk_prints))();
    if ((int)a5 < (int)(a5 + a6)) {
        t1 = a5;
        t2 = (a5 << 2);
        do {
            t3 = *(int *)0xC2FB794;
            t4 = *(int *)((t2 + t3));
            syIntAdrChk_printh(t4);
            t6 = ((int (*)(int))(syIntAdrChk_prints))(0xC176F70);
            t1 = (t1 + 0x1);
            t2 = (t2 + 0x4);
        } while ((int)t1 < (int)(a5 + a6));
    }
    t10 = ((int (*)(int))(syIntAdrChk_prints))(0xC176F68);
    return t10;
}


int nlLineCalcColor(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    float u4;
    float u6;
    float u8;
    float u10;
    int t16;
    int t17;
    float u18;
    float u20;
    float u22;
    float u24;

    for (;;) {
        t0 = ((int (*)(int, int))(nlLineCalcFogA))(a4, a5);
        t1 = ((int (*)(int))(nlLineCalcFogA))(a5);
        if ((t0 & t1) != 0) break;
        if (t0 == 0) {
            if (t1 != 0) {
                t2 = t1;
                if (t0 != 0) {
                    t2 = t0;
                }
                t3 = a4;
                if (t0 == 0) {
                    t3 = a5;
                }
                if ((t2 & 0x1) != 0) {
                    u4 = *(float *)0xC2B762C;
                    nlLineCalcFogB(a4, a5, t3, u4);
                } else {
                    if ((t2 & 0x2) != 0) {
                        u6 = *(float *)0xC2B7624;
                        nlLineCalcFogB(a4, a5, t3, u6);
                    } else {
                        if ((t2 & 0x4) != 0) {
                            u8 = *(float *)0xC2B7630;
                            nlLineCalcFogC(a4, a5, t3, u8);
                        } else {
                            if ((t2 & 0x8) != 0) {
                                u10 = *(float *)0xC2B7628;
                                nlLineCalcFogC(a4, a5, t3, u10);
                            }
                        }
                    }
                }
                continue;
            }
            return 0x1;
        }
        t16 = t1;
        if (t0 != 0) {
            t16 = t0;
        }
        t17 = a4;
        if (t0 == 0) {
            t17 = a5;
        }
        if ((t16 & 0x1) != 0) {
            u18 = *(float *)0xC2B762C;
            nlLineCalcFogB(a4, a5, t17, u18);
        } else {
            if ((t16 & 0x2) != 0) {
                u20 = *(float *)0xC2B7624;
                nlLineCalcFogB(a4, a5, t17, u20);
            } else {
                if ((t16 & 0x4) != 0) {
                    u22 = *(float *)0xC2B7630;
                    nlLineCalcFogC(a4, a5, t17, u22);
                } else {
                    if ((t16 & 0x8) != 0) {
                        u24 = *(float *)0xC2B7628;
                        nlLineCalcFogC(a4, a5, t17, u24);
                    }
                }
            }
        }
    }
    return 0x0;
}
