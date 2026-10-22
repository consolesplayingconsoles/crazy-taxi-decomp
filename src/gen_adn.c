/* Straight-line functions with calls and guards (batch gen_adn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c15e85c(int, int, int);
int kmiCopyToPVRMemory(int);
int kmiCreateDummyRegionforAvoidCacheBug(void);
int kmiCreateDummyTranslucentObject(int, int);
int kmiCreateRegionArray(int a4, int a5, int a6, int a7, int a8, int a9);

int kmiCreateRegionArray(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t1;
    int t14;
    int t15;
    int t26;
    int t70;
    int t71;
    int t72;
    int t76;
    int t77;
    int t78;
    int t201;
    int t80;
    int t81;
    int t92;
    int t107;
    int t109;
    int t110;
    int t112;
    int t115;
    int t158;
    int t163;
    int t19;
    int t24;
    int t100;
    int t101;
    int t102;
    int t103;
    int t198;
    int t194;
    int stk[57] = {0};

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 88)) = 0x0;
    t1 = 0x0;
    if ((*(int *)0xC2EA844) == 1) {
        t1 = 0x1;
    }
    if ((*(int *)0xC2EA88C) == 0) {
        FUN_0c15e85c((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))), a8);
    }
    t14 = *(int *)(((int)stk + 8));
    t15 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = (t14 * t15);
    *(unsigned int *)(((int)stk + 12)) = (((*(int *)(((int)stk + 16))) * (((((t14 * t15) << 1) + (t14 * t15)) << 2) << 1)) + (*(int *)(((((a8 << 2) << 2) << 1) + 0xC2EAAF0))));
    if ((((*(int *)0xC2EA684) & 32) != 0) && (t19 = *(int *)0xC2EAAE4, t19 != 0)) {
        *(unsigned int *)(((int)stk + 24)) = (kmiCreateDummyTranslucentObject(((*(int *)(((0xC2EAAEC + (((a8 << 2) << 2) << 1)) + 0x4))) + ((((((t14 * t15) << 1) + (t14 * t15)) << 2) << 1) << 2)), (*(int *)(((((a8 << 2) << 2) << 1) + 0xC2EAAEC)))));
        t26 = 0x0;
        if (((*(int *)0xC2EAB30) == 0) && ((t24 = *(int *)0xC2EAB38, t24 != 0) && (t1 != 0))) {
            t26 = 0x1;
        }
        *(unsigned int *)(((int)stk + 88)) = t26;
    }
    if (((*(int *)0xC2EA684) & 128) != 0) {
        *(volatile int *)(((int)stk + 12));
        kmiCreateDummyRegionforAvoidCacheBug();
        *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x18);
    }
    if ((*(int *)0xC2EAB30) == 0) {
        *(unsigned int *)(((int)stk + 76)) = 0x80000000;
    } else {
        *(unsigned int *)(((int)stk + 76)) = 0x0;
    }
    if ((*(int *)0xC2EAB34) == 0) {
        *(unsigned int *)(((int)stk + 80)) = 0x80000000;
    } else {
        *(unsigned int *)(((int)stk + 80)) = 0x0;
    }
    if ((*(int *)0xC2EAB38) == 0) {
        *(unsigned int *)(((int)stk + 84)) = 0x80000000;
    } else {
        *(unsigned int *)(((int)stk + 84)) = 0x0;
    }
    if ((*(int *)0xC2EAB3C) == 0) {
        *(unsigned int *)(((int)stk + 96)) = 0x80000000;
    } else {
        *(unsigned int *)(((int)stk + 96)) = 0x0;
    }
    if ((*(int *)0xC2EAB40) == 0) {
        *(unsigned int *)(((int)stk + 92)) = 0x80000000;
    } else {
        *(unsigned int *)(((int)stk + 92)) = 0x0;
    }
    *(unsigned int *)(((int)stk + 56)) = ((*(int *)((0xC1784A4 + ((*(int *)0xC2EAB30) << 2)))) << 2);
    *(unsigned int *)(((int)stk + 68)) = ((*(int *)((0xC1784A4 + ((*(int *)0xC2EAB34) << 2)))) << 2);
    *(unsigned int *)(((int)stk + 64)) = ((*(int *)((0xC1784A4 + ((*(int *)0xC2EAB38) << 2)))) << 2);
    *(unsigned int *)(((int)stk + 60)) = ((*(int *)((0xC1784A4 + ((*(int *)0xC2EAB3C) << 2)))) << 2);
    *(unsigned int *)(((int)stk + 72)) = ((*(int *)((0xC1784A4 + ((*(int *)0xC2EAB40) << 2)))) << 2);
    *(unsigned int *)(((int)stk + 28)) = (*(int *)(((((a8 << 2) << 2) << 1) + 0xC2EAAF8)));
    t70 = *(int *)(((int)stk + 8));
    t71 = *(int *)((0xC1784A4 + ((*(int *)0xC2EAB30) << 2)));
    t72 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 36)) = (((t71 * t70) << 2) + t72);
    *(unsigned int *)(((int)stk + 32)) = ((((t71 * t70) << 2) + t72) + (((*(int *)((0xC1784A4 + ((*(int *)0xC2EAB34) << 2)))) * t70) << 2));
    t76 = *(int *)((0xC1784A4 + ((*(int *)0xC2EAB38) << 2)));
    t77 = *(int *)(((int)stk + 32));
    *(unsigned int *)(((int)stk + 40)) = (((t76 * t70) << 2) + t77);
    t78 = *(int *)0xC2EAB3C;
    *(unsigned int *)(((int)stk + 48)) = ((((t76 * t70) << 2) + t77) + (((*(int *)((0xC1784A4 + (t78 << 2)))) * t70) << 2));
    *(unsigned int *)(((int)stk + 52)) = (t70 - 1);
    *(unsigned int *)(((int)stk + 44)) = ((t1 & 0x1) << 29);
    t201 = (t78 << 2);
    if ((unsigned int)0x0 >= (unsigned int)t70) {
    } else {
        t80 = 0x0;
        t81 = 0x0;
        for (;;) {
            if (a9 != 0) {
                if (a9 != 1) {
                } else {
                    t80 = 0xC2EAADC;
                    *(unsigned int *)(((int)stk + 16)) = ((int)((unsigned int)t81 % (unsigned int)(*(int *)((t80 + 0x0)))));
                    *(unsigned int *)(((int)stk + 20)) = ((int)((unsigned int)t81 / (unsigned int)(*(int *)((t80 + 0x0)))));
                }
            } else {
                t80 = 0xC080FC4;
                t80 = 0xC2EAAE0;
                *(unsigned int *)(((int)stk + 16)) = ((int)((unsigned int)t81 / (unsigned int)(*(int *)0xC2EAAE0)));
                t92 = *(int *)((t80 + 0x0));
                t80 = 0xC081134;
                *(unsigned int *)(((int)stk + 20)) = ((int)((unsigned int)t81 % (unsigned int)t92));
            }
            t80 = 0xC2EA848;
            t107 = 0x0;
            if (((*(int *)((t80 + 0x0))) == 1) && ((t100 = *(int *)(((int)stk + 16)), t101 = *(int *)0xC2EA84C, (unsigned int)t101 < (unsigned int)t100) || (t102 = *(int *)(((int)stk + 20)), t103 = *(int *)0xC2EA850, (unsigned int)t103 < (unsigned int)t102))) {
                t107 = 0x80000000;
            }
            t80 = (*(int *)0xC2EAADC);
            t109 = *(int *)(((int)stk + 20));
            t110 = *(int *)(((int)stk + 16));
            t112 = (t109 * t80);
            t80 = (*(int *)(((int)stk + 52)));
            t115 = ((((t81 == t80)) ? 1 : 0) & 0x1);
            t80 = ((int)(((unsigned int)t115 >> 1) | ((unsigned int)t115 << 31)));
            t80 = (t80 | ((t109 & 0x3F) << 8));
            t80 = (t80 | ((t110 & 0x3F) << 2));
            t80 = (t80 | (*(int *)(((int)stk + 44))));
            *(unsigned int *)(((int)stk + 172)) = t80;
            t80 = (*(int *)(((int)stk + 28)));
            *(unsigned int *)(((int)stk + 176)) = (((((*(int *)(((int)stk + 56))) * (t112 + t110)) + t80) | (*(int *)(((int)stk + 76)))) | t107);
            *(unsigned int *)(((int)stk + 180)) = (((((*(int *)(((int)stk + 68))) * (t112 + t110)) + (*(int *)(((int)stk + 36)))) | (*(int *)(((int)stk + 80)))) | t107);
            t80 = (*(int *)(((int)stk + 64)));
            t80 = (t80 * (t112 + t110));
            t80 = (t80 + (*(int *)(((int)stk + 32))));
            t80 = (t80 | (*(int *)(((int)stk + 84))));
            t80 = (t80 | t107);
            *(unsigned int *)(((int)stk + 184)) = t80;
            t80 = (*(int *)(((int)stk + 40)));
            *(unsigned int *)(((int)stk + 188)) = (((((*(int *)(((int)stk + 60))) * (t112 + t110)) + t80) | (*(int *)(((int)stk + 96)))) | t107);
            if ((*(int *)0xC1784B4) != 0) {
                *(unsigned int *)(((int)stk + 192)) = (*(int *)(((int)stk + 184)));
            } else {
                t80 = (*(int *)(((int)stk + 48)));
                *(unsigned int *)(((int)stk + 192)) = (((((*(int *)(((int)stk + 72))) * (t112 + t110)) + t80) | (*(int *)(((int)stk + 92)))) | t107);
            }
            t80 = (*(int *)0xC2EA854);
            if (t80 != 0) {
                t80 = 0xC2EA858;
                if ((*(int *)((t80 + 0x0))) == 1) {
                    *(unsigned int *)(((0xB8 + ((int)stk + 4)) + 0x0)) = (*(int *)(((int)stk + 180)));
                } else {
                    *(unsigned int *)(((int)stk + 180)) = (*(int *)(((int)stk + 188)));
                }
            }
            t80 = 0xC2EA684;
            if (((*(int *)((t80 + 0x0))) & 32) == 0) {
                t198 = (kmiCopyToPVRMemory((((((t81 << 1) + t81) << 2) << 1) + (*(int *)(((int)stk + 12))))));
            } else {
                t158 = *(int *)(((int)stk + 172));
                if ((*(int *)0xC2EAAE4) == 0) {
                    *(unsigned int *)(((int)stk + 148)) = t158;
                    *(unsigned int *)(((int)stk + 172)) = ((*(int *)(((int)stk + 172))) & 0x7FFFFFFF);
                    t80 = ((*(int *)(((int)stk + 172))) & 0xBFFFFFFF);
                    t80 = (t80 | 0x10000000);
                    *(unsigned int *)(((int)stk + 172)) = t80;
                    t80 = (*(int *)(((int)stk + 148)));
                    t80 = (t80 | 0x40000000);
                    *(unsigned int *)(((int)stk + 148)) = t80;
                    t80 = 0xEFFFFFFF;
                    *(unsigned int *)(((0x90 + ((int)stk + 4)) + 0x0)) = ((*(int *)(((int)stk + 148))) & t80);
                    *(unsigned int *)(((int)stk + 152)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 156)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 160)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 164)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 168)) = 0x80000000;
                    t163 = *(int *)(((int)stk + 12));
                    *(unsigned int *)(((int)stk + 4)) = (((((t81 << 1) + t81) << 2) << 2) + t163);
                    kmiCopyToPVRMemory((((((t81 << 1) + t81) << 2) << 2) + t163));
                    t194 = ((*(int *)(((int)stk + 4))) + 0x18);
                } else {
                    t80 = 0xA8;
                    *(unsigned int *)(((int)stk + 148)) = t158;
                    *(unsigned int *)(((int)stk + 124)) = t158;
                    *(unsigned int *)(((int)stk + 100)) = t158;
                    t80 = (t80 + ((int)stk + 4));
                    *(unsigned int *)(((int)stk + 172)) = ((*(int *)(((int)stk + 172))) & 0x7FFFFFFF);
                    *(unsigned int *)(((int)stk + 148)) = ((*(int *)(((int)stk + 148))) & 0x7FFFFFFF);
                    *(unsigned int *)(((int)stk + 124)) = ((*(int *)(((int)stk + 124))) & 0x7FFFFFFF);
                    *(unsigned int *)((t80 + 0x0)) = ((*(int *)(((int)stk + 172))) & 0xBFFFFFFF);
                    t80 = (*(int *)(((int)stk + 148)));
                    t80 = (t80 | 0x40000000);
                    *(unsigned int *)(((int)stk + 148)) = t80;
                    t80 = (*(int *)(((int)stk + 124)));
                    t80 = (t80 | 0x40000000);
                    *(unsigned int *)(((int)stk + 124)) = t80;
                    t80 = (*(int *)(((int)stk + 100)));
                    t80 = (t80 | 0x40000000);
                    *(unsigned int *)(((int)stk + 100)) = t80;
                    t80 = (*(int *)(((int)stk + 172)));
                    t80 = (t80 | 0x10000000);
                    *(unsigned int *)(((int)stk + 172)) = t80;
                    t80 = (*(int *)(((int)stk + 148)));
                    t80 = (t80 | 0x10000000);
                    *(unsigned int *)(((int)stk + 148)) = t80;
                    t80 = (*(int *)(((int)stk + 124)));
                    t80 = (t80 | 0x10000000);
                    *(unsigned int *)(((int)stk + 124)) = t80;
                    t80 = 0xEFFFFFFF;
                    *(unsigned int *)(((((int)stk + 4) + 0x60) + 0x0)) = ((*(int *)(((int)stk + 100))) & t80);
                    *(unsigned int *)(((0x90 + ((int)stk + 4)) + 0x0)) = ((*(int *)(((int)stk + 148))) & 0xDFFFFFFF);
                    if ((*(int *)(((int)stk + 88))) != 0) {
                        *(unsigned int *)(((int)stk + 176)) = (*(int *)(((int)stk + 24)));
                    }
                    *(unsigned int *)(((int)stk + 152)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 156)) = 0x80000000;
                    t80 = (*(int *)(((int)stk + 24)));
                    *(unsigned int *)(((int)stk + 160)) = t80;
                    *(unsigned int *)(((int)stk + 164)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 168)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 128)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 132)) = 0x80000000;
                    t80 = (*(int *)(((int)stk + 184)));
                    *(unsigned int *)(((int)stk + 136)) = t80;
                    *(unsigned int *)(((int)stk + 140)) = (*(int *)(((int)stk + 188)));
                    *(unsigned int *)(((int)stk + 144)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 184)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 188)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 104)) = 0x80000000;
                    t80 = t81;
                    t80 = (t80 << 1);
                    *(unsigned int *)(((int)stk + 108)) = 0x80000000;
                    t80 = (t80 + t81);
                    *(unsigned int *)(((int)stk + 112)) = 0x80000000;
                    t80 = (t80 << 2);
                    t80 = (t80 << 2);
                    *(unsigned int *)(((int)stk + 116)) = 0x80000000;
                    t80 = (t80 << 1);
                    *(unsigned int *)(((int)stk + 120)) = 0x80000000;
                    t80 = (t80 + (*(int *)(((int)stk + 12))));
                    *(unsigned int *)(((int)stk + 4)) = t80;
                    kmiCopyToPVRMemory(t80);
                    kmiCopyToPVRMemory(((*(int *)(((int)stk + 4))) + 0x18));
                    kmiCopyToPVRMemory(((*(int *)(((int)stk + 4))) + 0x30));
                    t194 = ((*(int *)(((int)stk + 4))) + 0x48);
                }
                t198 = (kmiCopyToPVRMemory(t194));
            }
            t80 = (*(int *)(((int)stk + 8)));
            t81 = (t81 + 0x1);
            if ((unsigned int)t81 < (unsigned int)t80) continue;
            break;
        }
        t201 = t198;
    }
    return t201;
}
