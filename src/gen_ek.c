/* Straight-line functions with calls and guards (batch gen_ek): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmChangeLatencyModel(int, int);
int kmiAllocSysConfig(int);
extern int kmiChkActiveListType();
int kmiCopyDummyGlobalData(int);
int kmiDiscardRenderPipeline(void);
int kmiFBinit(void);
int kmiGetDisplayData(int, int, int);
int kmiGetNativeRegOBPSize(int);
extern int kmiGetPackOBPParam();
int kmiGetProfileInt(int, int);
int kmiGetVertexBasePointer(int, int, int, int, int, int, int);
int kmiSetTAEnvironment(void);
int kmiTAallocEx(int, int, int);
int kmSetSystemConfiguration(int a4);

int kmSetSystemConfiguration(int a4)
{
    int t30;
    int t37;
    int t47;
    int t56;
    int t63;
    int t58;
    int t65;
    int t66;
    int t68;
    int t69;
    float u71;
    int t73;
    int t74;
    int t75;
    float u76;
    int t78;
    int t79;
    int t80;
    float u81;
    int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    float u94;
    int t108;
    int t109;
    int t110;
    int t111;
    int t112;
    int t118;
    int t126;
    int t128;
    int t127;
    int t130;
    int t131;
    int t132;
    int t154;
    int t157;
    int t164;
    int t176;
    int t181;
    int t182;
    int t183;
    int t184;
    int t187;
    int t188;
    int t189;
    int t197;
    int t201;
    int t213;
    int t233;
    int t273;
    int t235;
    int t271;
    float u70;
    int t83;
    int t84;
    float u86;
    float u93;
    int t104;
    int t106;
    int t198;
    int t199;
    int t200;
    int stk[39] = {0};

    *(unsigned int *)(((int)stk + 20)) = 0x2;
    kmiFBinit();
    kmiDiscardRenderPipeline();
    *(unsigned int *)0xC2B8C94 = 0x0;
    if (((*(int *)((a4 + 0x4))) & 0x1) != 0) {
        *(unsigned int *)(((int)stk + 32)) = 0x1;
    } else {
        *(unsigned int *)(((int)stk + 32)) = 0x0;
    }
    if (((*(int *)((a4 + 0x4))) & 32) != 0) {
        *(unsigned int *)(((int)stk + 48)) = 0x0;
    } else {
        *(unsigned int *)(((int)stk + 48)) = 0x1;
    }
    if (((*(int *)((a4 + 0x4))) & 0x2) != 0) {
        *(unsigned int *)(((int)stk + 28)) = 0x1;
    } else {
        *(unsigned int *)(((int)stk + 28)) = 0x0;
    }
    if (((*(int *)((a4 + 0x4))) & 0x100000) != 0) {
        *(unsigned int *)0xC2EAAB0 = 0x0;
    } else {
        *(unsigned int *)0xC2EAAB0 = 0x1;
    }
    kmiGetDisplayData(0xFF, (*(int *)(((int)stk + 28))), (*(int *)((a4 + 0x14))));
    if (((*(int *)((a4 + 0x4))) & 0x10000) != 0) {
        *(unsigned int *)0xC2EAAB0 = 0x1;
        *(unsigned int *)0xC177A88 = 0x1;
        *(unsigned int *)0xC2EA9E4 = (*(int *)0xC2EA9DC);
        *(unsigned int *)((((*(int *)0xC2EA9DC) << 2) + 0xC2EA9CC)) = 0x2;
        *(unsigned int *)0xC2EA88C = 0x0;
        *(unsigned int *)0xC2EA9F4 = 0x1;
        *(unsigned int *)(((int)stk + 20)) = (((int)stk + 16) + 0x24);
        *(unsigned int *)(((((int)stk + 16) + 0x24) + 0x0)) = ((*(int *)(((*(int *)((a4 + 0x20))) + 0x10))) & 0x1);
        *(unsigned int *)((((((int)stk + 16) + 0x24) + 0x4) + 0x0)) = (0x2 & (*(int *)(((*(int *)((a4 + 0x20))) + 0x10))));
        *(unsigned int *)((((((int)stk + 16) + 0x24) + 0x8) + 0x0)) = ((*(int *)(((*(int *)((a4 + 0x20))) + 0x10))) & 0x4);
        *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 16) + 0x24) + 0xC);
        *(unsigned int *)((((((int)stk + 16) + 0x24) + 0xC) + 0x0)) = ((*(int *)(((*(int *)((a4 + 0x20))) + 0x10))) & 0x8);
        *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 16) + 0x24) + 0x10);
        *(unsigned int *)((((((int)stk + 16) + 0x24) + 0x10) + 0x0)) = ((*(int *)(((*(int *)((a4 + 0x20))) + 0x10))) & 0x10);
        t30 = (*(int *)(((*(int *)(((int)stk + 24))) + 0x0)));
        t37 = ((int (*)(int, int, int, int))(kmiChkActiveListType))((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))), (*(int *)((((((int)stk + 16) + 0x24) + 0x4) + 0x0))), (*(int *)((((((int)stk + 16) + 0x24) + 0x8) + 0x0))), (*(int *)(((*(int *)(((int)stk + 16))) + 0x0))));
        t47 = ((int (*)(int, int, int, int, int, int, int))(kmiGetPackOBPParam))((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))), (*(int *)((((((int)stk + 16) + 0x24) + 0x4) + 0x0))), (*(int *)((((((int)stk + 16) + 0x24) + 0x8) + 0x0))), (*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), ((*(int *)(((*(int *)(((int)stk + 24))) + 0x0)))), 0x1, t30);
        *(unsigned int *)(((int)stk + 16)) = t47;
        kmiGetNativeRegOBPSize(t47);
    } else {
        *(unsigned int *)0xC177A88 = 0x0;
        if (((*(int *)((a4 + 0x4))) & 16) != 0) {
            *(unsigned int *)0xC2EA9C4 = 0x1;
            *(unsigned int *)0xC2EAAB0 = 0x1;
        } else {
            *(unsigned int *)0xC2EA9C4 = 0x0;
        }
        kmChangeLatencyModel((*(int *)0xC2EA9C4), (*(int *)((a4 + 0x5C))));
        t56 = *(int *)((a4 + 0x28));
        *(unsigned int *)0xC2EAAC0 = (*(int *)((a4 + 0x24)));
        t63 = t56;
        if (((*(int *)0xC2EAAC0) & 0x1F) != 0) {
            t58 = *(int *)0xC2EAAC0;
            *(unsigned int *)0xC2EAAC0 = (((*(int *)0xC2EAAC0) + 0x1F) & 0xFFFFFFE0);
            t63 = (t56 - ((-(t58 & 0x1F)) + 0x20));
        }
        t65 = *(int *)0xC2EA9C4;
        t66 = t63;
        if (t65 == 0) {
            t66 = ((unsigned int)t63 >> 1);
        }
        t68 = (((int)stk + 16) + 0x40);
        for (;;) {
            if ((unsigned int)t68 >= (unsigned int)((((int)stk + 16) + 0x40) + 0x14)) {
                break;
            }
            *(unsigned int *)((t68 + 0x0)) = 0x0;
            t68 = (t68 + 0x4);
        }
        t69 = (a4 + 0x2C);
        u71 = 0.0f;
        for (;;) {
            if ((unsigned int)t69 >= (unsigned int)(a4 + 0x40)) {
                break;
            }
            u70 = (*(float *)((t69 + 0x0)));
            t69 = (t69 + 0x4);
            u71 = (u71 + u70);
        }
        if (u71 > 100.0f) {
            t73 = 0xC14BE20;
            t74 = (a4 + 0x40);
            t75 = 0x0;
            u76 = u70;
            for (;;) {
                if ((unsigned int)t75 >= (unsigned int)0x14) {
                    break;
                }
                t74 = a4;
                t74 = (t74 + 0x2C);
                t74 = (t74 + t75);
                t73 = t75;
                u76 = (*(float *)((t74 + 0x0)));
                t75 = (t75 + 0x4);
                u76 = (u76 * 100.0f);
                u76 = (u76 / u71);
                *(float *)(((((int)stk + 16) + 0x54) + t73)) = u76;
            }
            t83 = t73;
            t84 = t74;
            u86 = u76;
        } else {
            t78 = 0xC14BE20;
            t79 = (a4 + 0x40);
            t80 = 0x0;
            u81 = u70;
            for (;;) {
                if ((unsigned int)t80 >= (unsigned int)0x14) {
                    break;
                }
                t79 = a4;
                t79 = (t79 + 0x2C);
                t79 = (t79 + t80);
                t78 = t80;
                u81 = (*(float *)((t79 + 0x0)));
                t80 = (t80 + 0x4);
                *(float *)(((((int)stk + 16) + 0x54) + t78)) = u81;
            }
            t83 = t78;
            t84 = t79;
            u86 = u81;
        }
        t87 = t83;
        t88 = 0xC2EA9C4;
        t89 = t65;
        t90 = t84;
        t91 = 0x0;
        u94 = u86;
        for (;;) {
            if ((unsigned int)t91 >= (unsigned int)0x14) {
                break;
            }
            t87 = t91;
            t90 = t91;
            u94 = (*(float *)(((((int)stk + 16) + 0x54) + t87)));
            t90 = (t90 + (((int)stk + 16) + 0x40));
            u93 = (float)t66;
            if ((int)t66 < 0) {
                t89 = 0x4F800000;
                u93 = (u93 + ((*(float *)&(t89))));
            }
            u94 = (u94 * u93);
            t88 = 0x4F000000;
            u94 = (u94 / 100.0f);
            u93 = (*(float *)&(t88));
            if (!(u93 > u94)) {
                u93 = (u93 + u93);
                u94 = (u94 - u93);
            }
            t88 = 0xFFFFFFF8;
            t91 = (t91 + 0x4);
            t89 = (int)u94;
            t89 = (t89 & t88);
            *(unsigned int *)((t90 + 0x0)) = t89;
        }
        if ((((*(int *)0xC2EA684) & 64) != 0) && (t104 = *(int *)(((((int)stk + 16) + 0x40) + 0x0)), (unsigned int)t104 < (unsigned int)0x38)) {
            *(unsigned int *)(((((int)stk + 16) + 0x40) + 0x0)) = ((*(int *)(((((int)stk + 16) + 0x40) + 0x0))) + 0x38);
            t106 = 0x38;
        } else {
            t106 = t88;
        }
        t108 = t106;
        t109 = 0xC2EA684;
        t110 = 0x0;
        t111 = 0x0;
        t112 = 0xFFFFFFFF;
        for (;;) {
            if ((unsigned int)t110 >= (unsigned int)0x5) {
                break;
            }
            *(unsigned int *)(((int)stk + 16)) = ((t110 << 2) + (((int)stk + 16) + 0x40));
            t109 = (*(int *)((((t110 << 2) + (((int)stk + 16) + 0x40)) + 0x0)));
            t108 = t109;
            t111 = (t111 + t109);
            if ((int)t108 > (int)t112) {
                *(unsigned int *)(((int)stk + 24)) = t110;
                t112 = (*(int *)(((int)stk + 16)));
                t112 = (*(int *)((t112 + 0x0)));
            }
            t110 = (t110 + 0x1);
        }
        if ((unsigned int)t111 > (unsigned int)t66) {
            t118 = *(int *)(((int)stk + 24));
            *(unsigned int *)((((t118 << 2) + (((int)stk + 16) + 0x40)) + 0x0)) = ((*(int *)((((t118 << 2) + (((int)stk + 16) + 0x40)) + 0x0))) - (t111 - t66));
            *(unsigned int *)((((t118 << 2) + (((int)stk + 16) + 0x40)) + 0x0)) = ((*(int *)((((t118 << 2) + (((int)stk + 16) + 0x40)) + 0x0))) & 0xFFFFFFE0);
        }
        t126 = *(int *)(((((int)stk + 16) + 0x40) + 0x0));
        t128 = t126;
        if (t126 != 0) {
            t127 = *(int *)(((((int)stk + 16) + 0x40) + 0x0));
            *(unsigned int *)(((((int)stk + 16) + 0x40) + 0x0)) = (t127 - 16);
            t128 = (t127 - 16);
        }
        t130 = t128;
        t131 = ((((int)stk + 16) + 0x40) + 0x4);
        t132 = ((((int)stk + 16) + 0x40) + 0x4);
        for (;;) {
            if ((unsigned int)t131 >= (unsigned int)((((int)stk + 16) + 0x40) + 0x14)) {
                break;
            }
            t130 = (*(int *)((t131 + 0x0)));
            if (t130 != 0) {
                t130 = (*(int *)((t132 + 0x0)));
                t130 = (t130 - 16);
                *(unsigned int *)((t132 + 0x0)) = t130;
            }
            t131 = (t131 + 0x4);
            t132 = (t132 + 0x4);
        }
        *(unsigned int *)0xC2B8C40 = (*(int *)((a4 + 0x20)));
        *(unsigned int *)(((int)stk + 16)) = (((int)stk + 16) + 0x40);
        *(unsigned int *)0xC2B8C44 = (*(int *)(((((int)stk + 16) + 0x40) + 0x0)));
        *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 16) + 0x40) + 0x4);
        *(unsigned int *)0xC2B8C48 = (*(int *)((((((int)stk + 16) + 0x40) + 0x4) + 0x0)));
        *(unsigned int *)(((int)stk + 44)) = ((((int)stk + 16) + 0x40) + 0x8);
        *(unsigned int *)0xC2B8C4C = (*(int *)((((((int)stk + 16) + 0x40) + 0x8) + 0x0)));
        *(unsigned int *)(((int)stk + 40)) = ((((int)stk + 16) + 0x40) + 0xC);
        *(unsigned int *)0xC2B8C50 = (*(int *)((((((int)stk + 16) + 0x40) + 0xC) + 0x0)));
        *(unsigned int *)(((int)stk + 36)) = ((((int)stk + 16) + 0x40) + 0x10);
        *(unsigned int *)0xC2B8C54 = (*(int *)((((((int)stk + 16) + 0x40) + 0x10) + 0x0)));
        t154 = ((int (*)(int, int, int, int, int, float))(kmiChkActiveListType))((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 24))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 44))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 40))) + 0x0))), ((*(int *)(((*(int *)(((int)stk + 36))) + 0x0)))), 100.0f);
        *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0x10)) = (*(int *)0xC2EAAE8);
        t157 = 0xC2B8D28;
        for (;;) {
            if ((unsigned int)t157 >= (unsigned int)0xC2B8D3C) {
                break;
            }
            *(unsigned int *)((t157 + 0x0)) = 0x0;
            t157 = (t157 + 0x4);
        }
        t164 = ((int (*)(int, int, int, int, int, int))(kmiGetPackOBPParam))((*(int *)(((((int)stk + 16) + 0x40) + 0x0))), (*(int *)(((((int)stk + 16) + 0x40) + 0x4))), (*(int *)(((((int)stk + 16) + 0x40) + 0x8))), (*(int *)(((((int)stk + 16) + 0x40) + 0xC))), ((*(int *)(((((int)stk + 16) + 0x40) + 0x10)))), 0x0);
        *(unsigned int *)(((int)stk + 16)) = t164;
        kmiGetNativeRegOBPSize(t164);
        if ((*(int *)0xC2EA9C4) == 1) {
            *(unsigned int *)(((int)stk + 20)) = 0x1;
        }
        t176 = kmiGetVertexBasePointer((*(int *)(((((int)stk + 16) + 0x40) + 0x0))), (*(int *)(((((int)stk + 16) + 0x40) + 0x4))), (*(int *)(((((int)stk + 16) + 0x40) + 0x8))), (*(int *)(((((int)stk + 16) + 0x40) + 0xC))), ((*(int *)(((((int)stk + 16) + 0x40) + 0x10)))), 0x0, ((*(int *)(((int)stk + 20)))));
        *(unsigned int *)0xC2B8CF4 = (*(int *)0xC2B8CCC);
        *(unsigned int *)0xC2B8CF8 = (*(int *)0xC2B8CD0);
        *(unsigned int *)0xC2B8CFC = (*(int *)0xC2B8CD4);
        *(unsigned int *)0xC2B8D00 = (*(int *)0xC2B8CD8);
        t181 = *(int *)0xC2B8CDC;
        *(unsigned int *)0xC2B8D04 = t181;
        t182 = t176;
        t183 = t181;
        t184 = 0x0;
        for (;;) {
            if ((unsigned int)t184 >= (unsigned int)0x14) {
                break;
            }
            t182 = t184;
            t183 = (*(int *)((0xC2B8CF4 + t182)));
            t184 = (t184 + 0x4);
            *(unsigned int *)((0xC2B8D08 + t182)) = t183;
        }
        *(unsigned int *)0xC2B8CA8 = 0x0;
        *(unsigned int *)0xC2B8CAC = 0x0;
        *(unsigned int *)0xC2B8CB0 = 0x0;
        *(unsigned int *)0xC2B8CB4 = 0x0;
        *(unsigned int *)0xC2B8CB8 = 0xC2B8CCC;
        *(unsigned int *)0xC2B8CBC = 0xC2B8CF4;
        if ((unsigned int)0x0 < (unsigned int)(*(int *)(((int)stk + 20)))) {
            t187 = 0xC2B8CCC;
            t188 = 0xC2B8CC4;
            t189 = 0x0;
            for (;;) {
                t189 = (t189 + 0x1);
                *(unsigned int *)((t188 + 0x0)) = t187;
                t187 = (t187 + 0x14);
                t188 = (t188 + 0x4);
                if ((unsigned int)t189 >= (unsigned int)(*(int *)(((int)stk + 20)))) {
                    break;
                }
            }
        }
        t197 = (kmiCopyDummyGlobalData((*(int *)(((int)stk + 20)))));
        t201 = 0x0;
        for (;;) {
            if ((unsigned int)t201 >= (unsigned int)0x14) {
                break;
            }
            t197 = 0xC2B8D28;
            t199 = (*(int *)0xC2B8CBC);
            t200 = (*(int *)((t201 + t197)));
            t199 = (t199 + t201);
            t198 = (*(int *)((t199 + 0x0)));
            t200 = (t200 << 2);
            t201 = (t201 + 0x4);
            t198 = (t198 + t200);
            *(unsigned int *)((t199 + 0x0)) = t198;
        }
    }
    t213 = *(int *)((a4 + 0x1C));
    *(unsigned int *)0xC2B8C9C = t213;
    if ((t213 & 7) != 0) {
        *(unsigned int *)0xC2B8C9C = (((*(int *)0xC2B8C9C) + 0x7) & 0xFFFFFFF8);
    }
    *(unsigned int *)0xC2B8C98 = ((unsigned int)(((*(int *)0xC2EA694) - ((*(int *)0xC2B8C9C) << 2)) - ((*(int *)0xC2B8CA0) << 1)) >> 1);
    if ((kmiGetProfileInt(0xC174C80, 0xC174C8C)) == 1) {
        if ((unsigned int)(*(int *)0xC2B8C98) > (unsigned int)0x400000) {
            *(unsigned int *)0xC2B8C98 = 0x400000;
        }
    } else {
        if ((unsigned int)(*(int *)0xC2B8C98) > (unsigned int)0x200000) {
            *(unsigned int *)0xC2B8C98 = 0x200000;
        }
    }
    t233 = *(int *)0xC2B8C98;
    t273 = 0x3;
    if ((unsigned int)t233 < (unsigned int)(*(int *)0xC2B8CA4)) {
    } else {
        t235 = kmiTAallocEx(t233, (((int)stk + 16) + 0x38), (((int)stk + 16) + 0x3C));
        t271 = t235;
        if (t235 == 0) {
            *(unsigned int *)0xC2EAAD8 = (*(int *)0xC2B8C98);
            *(volatile int *)(((int)stk + 28));
            *(volatile int *)(((int)stk + 16));
            *(volatile int *)0xC2EA6F8;
            *(volatile int *)0xC2EA6F4;
            *(volatile int *)0xC2EA6F0;
            *(volatile int *)0xC2EA6EC;
            kmiSetTAEnvironment();
            if (((*(int *)((a4 + 0x4))) & 0x10000) != 0) {
                *(unsigned int *)0xC2EA88C = 0x1;
            }
            *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0x0)) = 0xC2B8CF4;
            *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0x4)) = 0xC178304;
            *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0x8)) = 0xC2B8CA8;
            *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0xC)) = 0xC2B8CC4;
            *(unsigned int *)0xC2B8C58 = (*(int *)(((int)stk + 28)));
            *(unsigned int *)0xC2EA6B4 = (*(int *)(((int)stk + 28)));
            *(unsigned int *)0xC2B8C5C = (*(int *)(((*(int *)((a4 + 0x8))) + 0x0)));
            *(unsigned int *)0xC2B8C60 = (*(int *)((a4 + 0x10)));
            *(unsigned int *)0xC2B8C64 = (*(int *)((a4 + 0x14)));
            *(unsigned int *)0xC2B8C68 = (*(int *)(((int)stk + 32)));
            *(unsigned int *)0xC2B8C6C = (*(int *)(((*(int *)((a4 + 0x8))) + 0x4)));
            *(unsigned int *)0xC2B8C70 = (*(int *)((a4 + 0x10)));
            *(unsigned int *)0xC2B8C74 = (*(int *)((a4 + 0x14)));
            *(unsigned int *)0xC2B8C78 = (*(int *)(((int)stk + 32)));
            *(unsigned int *)0xC2B8C7C = (*(int *)(((*(int *)((a4 + 0x8))) + 0x0)));
            *(unsigned int *)0xC2B8C80 = (*(int *)(((*(int *)((a4 + 0x8))) + 0x4)));
            *(unsigned int *)0xC2B8C84 = (*(int *)(((int)stk + 48)));
            *(unsigned int *)0xC177A84 = 0x80000000;
            t271 = (kmiAllocSysConfig((*(int *)0xC2B8C94)));
        }
        t273 = t271;
    }
    return t273;
}
