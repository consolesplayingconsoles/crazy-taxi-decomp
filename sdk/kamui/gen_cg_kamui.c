/* Straight-line functions with calls and guards (batch gen_cg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int buIsFormat(int);
int check_fat_all(int);
int get_fat(int, int);
int kdSetSetCondition(int, int, int, int);
int kmChangeLatencyModel(int, int);
int kmiAllocSysConfig(int);
int kmiChkActiveListType(int, int, int, int, int);
int kmiCopyDummyGlobalData(int, int, int);
int kmiDiscardRenderPipeline(void);
int kmiFBinit(void);
int kmiGetDisplayData(int, int, int);
int kmiGetNativeRegOBPSize(int);
int kmiGetPackOBPParam(int, int, int, int, int, int);
int kmiGetProfileInt(int, int, int);
int kmiGetVertexBasePointer(int, int, int, int, int, int, int);
int kmiSetTAEnvironment(int, int, int, int, int);
int kmiTAallocEx(int, int, int);
int pdVibIsReady(int);
int search_dir_by_startfat(int, int);
int search_fat(int, int, int);
int search_fat_free(int, int, int);
int search_fat_used(int, int, int);
int set_fat(int, int, int);
int vmsfs_read_retry(int, int, int);
int vmsfs_unmount(int);
int vmsfs_write_retry(int, int, int);
int vmsfs_xfind(int, int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int, int, int);
int write_fat(int);
int kmSetSystemConfiguration(int a4);
int vmsfs_xdefrag(int a4, int a5, int a6, int a7);
int pdVibStart(int a4, int a5, int a6);

int kmSetSystemConfiguration(int a4)
{
    int stk[29];
    register int t30;
    register int t40;
    register int t47;
    register int t56;
    register int t63;
    register int t58;
    register int t65;
    register int t67;
    register int t69;
    register int t70;
    register float u72;
    register int t74;
    register int t75;
    register int t76;
    register float u77;
    register int t79;
    register int t80;
    register int t81;
    register float u82;
    register int t88;
    int t89;
    int t90;
    register int t91;
    register int t92;
    register float u95;
    register int t109;
    register int t110;
    register int t111;
    register int t112;
    register int t113;
    register int t119;
    register int t127;
    register int t128;
    register int t131;
    register int t132;
    register int t133;
    register int t146;
    register int t158;
    register int t160;
    register int t165;
    register int t170;
    register int t172;
    register int t183;
    register int t184;
    register int t185;
    register int t194;
    register int t195;
    register int t188;
    register int t189;
    register int t190;
    register int t198;
    register int t202;
    register int t214;
    register int t225;
    register int t236;
    register int t276;
    register int t238;
    register int t240;
    int t241;
    register float u71;
    register int t84;
    register int t85;
    register float u87;
    register float u94;
    int t105;
    register int t199;
    register int t200;
    register int t201;

    *(unsigned int *)(((int)stk + 16)) = 0x2;
    kmiFBinit();
    kmiDiscardRenderPipeline();
    (((struct o14_uint *)0xC2B8C80)->v) = 0x0;
    if (((*(int *)((a4 + 0x4))) & 0x1) != 0) {
        *(unsigned int *)(((int)stk + 28)) = 0x1;
    } else {
        *(unsigned int *)(((int)stk + 28)) = 0x0;
    }
    if (((*(int *)((a4 + 0x4))) & 32) != 0) {
        *(unsigned int *)(((int)stk + 44)) = 0x0;
    } else {
        *(unsigned int *)(((int)stk + 44)) = 0x1;
    }
    if (((*(int *)((a4 + 0x4))) & 0x2) != 0) {
        *(unsigned int *)(((int)stk + 24)) = 0x1;
    } else {
        *(unsigned int *)(((int)stk + 24)) = 0x0;
    }
    if (((*(int *)((a4 + 0x4))) & 0x100000) != 0) {
        (((struct o0_uint *)0xC2EAAB0)->v) = 0x0;
    } else {
        (((struct o0_uint *)0xC2EAAB0)->v) = 0x1;
    }
    kmiGetDisplayData(0xFF, (*(int *)(((int)stk + 24))), (*(int *)((a4 + 0x14))));
    if (((*(int *)((a4 + 0x4))) & 0x10000) != 0) {
        (((struct o0_uint *)0xC2EAAB0)->v) = 0x1;
        (((struct o4_uint *)0xC177A84)->v) = 0x1;
        (((struct o20_uint *)0xC2EA9C4)->v) = ((((struct o18_int *)0xC2EA9C4)->v));
        *(unsigned int *)(((((((struct o18_int *)0xC2EA9C4)->v)) << 2) + 0xC2EA9CC)) = 0x2;
        *(unsigned int *)0xC2EA88C = 0x0;
        (((struct o30_uint *)0xC2EA9C4)->v) = 0x1;
        *(unsigned int *)(((int)stk + 16)) = (((int)stk + 12) + 0x24);
        *(unsigned int *)(((((int)stk + 12) + 0x24) + 0x0)) = ((*(int *)(((*(int *)((a4 + 0x20))) + 0x10))) & 0x1);
        *(unsigned int *)((((((int)stk + 12) + 0x24) + 0x4) + 0x0)) = (0x2 & (*(int *)(((*(int *)((a4 + 0x20))) + 0x10))));
        *(unsigned int *)((((((int)stk + 12) + 0x24) + 0x8) + 0x0)) = ((*(int *)(((*(int *)((a4 + 0x20))) + 0x10))) & 0x4);
        *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 12) + 0x24) + 0xC);
        *(unsigned int *)((((((int)stk + 12) + 0x24) + 0xC) + 0x0)) = ((*(int *)(((*(int *)((a4 + 0x20))) + 0x10))) & 0x8);
        *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 12) + 0x24) + 0x10);
        *(unsigned int *)((((((int)stk + 12) + 0x24) + 0x10) + 0x0)) = ((*(int *)(((*(int *)((a4 + 0x20))) + 0x10))) & 0x10);
        t30 = (*(int *)(((*(int *)(((int)stk + 20))) + 0x0)));
        *(int *)((int)stk + 8) = t30;
        kmiChkActiveListType((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), (*(int *)((((((int)stk + 12) + 0x24) + 0x4) + 0x0))), (*(int *)((((((int)stk + 12) + 0x24) + 0x8) + 0x0))), (*(int *)(((*(int *)(((int)stk + 12))) + 0x0))), t30);
        *(int *)((int)stk + 4) = 0x1;
        t40 = (*(int *)(((*(int *)(((int)stk + 20))) + 0x0)));
        *(int *)((int)stk + 0) = t40;
        t47 = kmiGetPackOBPParam((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), (*(int *)((((((int)stk + 12) + 0x24) + 0x4) + 0x0))), (*(int *)((((((int)stk + 12) + 0x24) + 0x8) + 0x0))), (*(int *)(((*(int *)(((int)stk + 12))) + 0x0))), t40, 0x1);
        *(unsigned int *)(((int)stk + 12)) = t47;
        kmiGetNativeRegOBPSize(t47);
    } else {
        (((struct o4_uint *)0xC177A84)->v) = 0x0;
        if (((*(int *)((a4 + 0x4))) & 16) != 0) {
            (((struct o0_uint *)0xC2EA9C4)->v) = 0x1;
            (((struct o0_uint *)0xC2EAAB0)->v) = 0x1;
        } else {
            (((struct o0_uint *)0xC2EA9C4)->v) = 0x0;
        }
        kmChangeLatencyModel(((((struct o0_int *)0xC2EA9C4)->v)), ((((struct o5C_int *)(a4))->v)));
        t56 = *(int *)((a4 + 0x28));
        (((struct o10_uint *)0xC2EAAB0)->v) = (*(int *)((a4 + 0x24)));
        t63 = t56;
        if ((((((struct o10_int *)0xC2EAAB0)->v)) & 0x1F) != 0) {
            t58 = (((struct o10_int *)0xC2EAAB0)->v);
            (((struct o10_uint *)0xC2EAAB0)->v) = ((((((struct o10_int *)0xC2EAAB0)->v)) + 0x1F) & 0xFFFFFFE0);
            t63 = (t56 - ((-(t58 & 0x1F)) + 0x20));
        }
        t65 = (((struct o0_int *)0xC2EA9C4)->v);
        t67 = t63;
        if (t65 == 0) {
            t67 = ((unsigned int)t63 >> 1);
        }
        t69 = (((int)stk + 12) + 0x40);
        for (;;) {
            if ((unsigned int)t69 >= (unsigned int)((((int)stk + 12) + 0x40) + 0x14)) {
                break;
            }
            *(unsigned int *)((t69 + 0x0)) = 0x0;
            t69 = (t69 + 0x4);
        }
        t70 = (a4 + 0x2C);
        u72 = 0.0f;
        for (;;) {
            if ((unsigned int)t70 >= (unsigned int)(a4 + 0x40)) {
                break;
            }
            u71 = (*(float *)((t70 + 0x0)));
            t70 = (t70 + 0x4);
            u72 = (u72 + u71);
        }
        if (u72 > 100.0f) {
            t74 = 0xC14BE20;
            t75 = (a4 + 0x40);
            t76 = 0x0;
            u77 = u71;
            for (;;) {
                if ((unsigned int)t76 >= (unsigned int)0x14) {
                    break;
                }
                t75 = a4;
                t75 = (t75 + 0x2C);
                t75 = (t75 + t76);
                t74 = t76;
                u77 = (*(float *)((t75 + 0x0)));
                t76 = (t76 + 0x4);
                u77 = (u77 * 100.0f);
                u77 = (u77 / u72);
                *(float *)(((((int)stk + 12) + 0x54) + t74)) = u77;
            }
            t84 = t74;
            t85 = t75;
            u87 = u77;
        } else {
            t79 = 0xC14BE20;
            t80 = (a4 + 0x40);
            t81 = 0x0;
            u82 = u71;
            for (;;) {
                if ((unsigned int)t81 >= (unsigned int)0x14) {
                    break;
                }
                t80 = a4;
                t80 = (t80 + 0x2C);
                t80 = (t80 + t81);
                t79 = t81;
                u82 = (*(float *)((t80 + 0x0)));
                t81 = (t81 + 0x4);
                *(float *)(((((int)stk + 12) + 0x54) + t79)) = u82;
            }
            t84 = t79;
            t85 = t80;
            u87 = u82;
        }
        t88 = t84;
        t89 = 0xC2EA9C4;
        t90 = t65;
        t91 = t85;
        t92 = 0x0;
        u95 = u87;
        for (;;) {
            if ((unsigned int)t92 >= (unsigned int)0x14) {
                break;
            }
            t88 = t92;
            t91 = t92;
            u95 = (*(float *)(((((int)stk + 12) + 0x54) + t88)));
            t91 = (t91 + (((int)stk + 12) + 0x40));
            u94 = (float)t67;
            if ((int)t67 < 0) {
                t90 = 0x4F800000;
                u94 = (u94 + ((*(float *)&(t90))));
            }
            u95 = (u95 * u94);
            t89 = 0x4F000000;
            u95 = (u95 / 100.0f);
            u94 = (*(float *)&(t89));
            if (!(u94 > u95)) {
                u94 = (u94 + u94);
                u95 = (u95 - u94);
            }
            t89 = 0xFFFFFFF8;
            t92 = (t92 + 0x4);
            t90 = (int)u95;
            t90 = (t90 & t89);
            *(unsigned int *)((t91 + 0x0)) = t90;
        }
        if (((((((struct o0_int *)0xC2EA684)->v)) & 64) != 0) && (t105 = (((struct o40_int *)(((int)stk + 12)))->v), (unsigned int)t105 < (unsigned int)0x38)) {
            (((struct o40_uint *)(((int)stk + 12)))->v) = (((((struct o40_int *)(((int)stk + 12)))->v)) + 0x38);
            t109 = 0x38;
        } else {
            t109 = t89;
        }
        t110 = 0xC2EA684;
        t111 = 0x0;
        t112 = 0x0;
        t113 = 0xFFFFFFFF;
        for (;;) {
            if ((unsigned int)t111 >= (unsigned int)0x5) {
                break;
            }
            *(unsigned int *)(((int)stk + 12)) = ((t111 << 2) + (((int)stk + 12) + 0x40));
            t110 = (*(int *)((((t111 << 2) + (((int)stk + 12) + 0x40)) + 0x0)));
            t109 = t110;
            t112 = (t112 + t110);
            if ((int)t109 > (int)t113) {
                *(unsigned int *)(((int)stk + 20)) = t111;
                t113 = (*(int *)(((int)stk + 12)));
                t113 = (*(int *)((t113 + 0x0)));
            }
            t111 = (t111 + 0x1);
        }
        if ((unsigned int)t112 > (unsigned int)t67) {
            t119 = *(int *)(((int)stk + 20));
            *(unsigned int *)((((t119 << 2) + (((int)stk + 12) + 0x40)) + 0x0)) = ((*(int *)((((t119 << 2) + (((int)stk + 12) + 0x40)) + 0x0))) - (t112 - t67));
            *(unsigned int *)((((t119 << 2) + (((int)stk + 12) + 0x40)) + 0x0)) = ((*(int *)((((t119 << 2) + (((int)stk + 12) + 0x40)) + 0x0))) & 0xFFFFFFE0);
        }
        t127 = (((struct o40_int *)(((int)stk + 12)))->v);
        t131 = t127;
        if (t127 != 0) {
            t128 = (((struct o40_int *)(((int)stk + 12)))->v);
            (((struct o40_uint *)(((int)stk + 12)))->v) = (t128 - 16);
            t131 = (t128 - 16);
        }
        t132 = ((((int)stk + 12) + 0x40) + 0x4);
        t133 = ((((int)stk + 12) + 0x40) + 0x4);
        for (;;) {
            if ((unsigned int)t132 >= (unsigned int)((((int)stk + 12) + 0x40) + 0x14)) {
                break;
            }
            t131 = (*(int *)((t132 + 0x0)));
            if (t131 != 0) {
                t131 = (*(int *)((t133 + 0x0)));
                t131 = (t131 - 16);
                *(unsigned int *)((t133 + 0x0)) = t131;
            }
            t132 = (t132 + 0x4);
            t133 = (t133 + 0x4);
        }
        (((struct o0_uint *)0xC2B8C40)->v) = (*(int *)((a4 + 0x20)));
        *(unsigned int *)(((int)stk + 12)) = (((int)stk + 12) + 0x40);
        (((struct o4_uint *)0xC2B8C40)->v) = ((((struct o40_int *)(((int)stk + 12)))->v));
        *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 12) + 0x40) + 0x4);
        (((struct o8_uint *)0xC2B8C40)->v) = (*(int *)((((((int)stk + 12) + 0x40) + 0x4) + 0x0)));
        *(unsigned int *)(((int)stk + 40)) = ((((int)stk + 12) + 0x40) + 0x8);
        (((struct oC_uint *)0xC2B8C40)->v) = (*(int *)((((((int)stk + 12) + 0x40) + 0x8) + 0x0)));
        *(unsigned int *)(((int)stk + 36)) = ((((int)stk + 12) + 0x40) + 0xC);
        (((struct o10_uint *)0xC2B8C40)->v) = (*(int *)((((((int)stk + 12) + 0x40) + 0xC) + 0x0)));
        *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 12) + 0x40) + 0x10);
        (((struct o14_uint *)0xC2B8C40)->v) = (*(int *)((((((int)stk + 12) + 0x40) + 0x10) + 0x0)));
        t146 = (*(int *)(((*(int *)(((int)stk + 32))) + 0x0)));
        *(int *)((int)stk + 8) = t146;
        kmiChkActiveListType((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 20))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 40))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 36))) + 0x0))), t146);
        *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0x10)) = ((((struct o38_int *)0xC2EAAB0)->v));
        t158 = 0xC2B8D28;
        for (;;) {
            if ((unsigned int)t158 >= (unsigned int)0xC2B8D3C) {
                break;
            }
            *(unsigned int *)((t158 + 0x0)) = 0x0;
            t158 = (t158 + 0x4);
        }
        *(int *)((int)stk + 8) = 0x0;
        t160 = (*(int *)(((((int)stk + 12) + 0x40) + 0x10)));
        *(int *)((int)stk + 4) = t160;
        t165 = kmiGetPackOBPParam(((((struct o40_int *)(((int)stk + 12)))->v)), (*(int *)(((((int)stk + 12) + 0x40) + 0x4))), (*(int *)(((((int)stk + 12) + 0x40) + 0x8))), (*(int *)(((((int)stk + 12) + 0x40) + 0xC))), t160, 0x0);
        *(unsigned int *)(((int)stk + 12)) = t165;
        kmiGetNativeRegOBPSize(t165);
        if (((((struct o0_int *)0xC2EA9C4)->v)) == 1) {
            *(unsigned int *)(((int)stk + 16)) = 0x1;
        }
        t170 = (*(int *)(((int)stk + 16)));
        *(int *)((int)stk + 8) = t170;
        *(int *)((int)stk + 4) = 0x0;
        t172 = (*(int *)(((((int)stk + 12) + 0x40) + 0x10)));
        *(int *)((int)stk + 0) = t172;
        t183 = kmiGetVertexBasePointer(((((struct o40_int *)(((int)stk + 12)))->v)), (*(int *)(((((int)stk + 12) + 0x40) + 0x4))), (*(int *)(((((int)stk + 12) + 0x40) + 0x8))), (*(int *)(((((int)stk + 12) + 0x40) + 0xC))), t172, 0x0, t170);
        (((struct o28_uint *)0xC2B8CCC)->v) = ((((struct o0_int *)0xC2B8CCC)->v));
        (((struct o2C_uint *)0xC2B8CCC)->v) = ((((struct o4_int *)0xC2B8CCC)->v));
        (((struct o30_uint *)0xC2B8CCC)->v) = ((((struct o8_int *)0xC2B8CCC)->v));
        (((struct o34_uint *)0xC2B8CCC)->v) = ((((struct oC_int *)0xC2B8CCC)->v));
        t184 = (((struct o10_int *)0xC2B8CCC)->v);
        (((struct o38_uint *)0xC2B8CCC)->v) = t184;
        t185 = 0x0;
        for (;;) {
            if ((unsigned int)t185 >= (unsigned int)0x14) {
                break;
            }
            t183 = t185;
            t184 = (*(int *)((0xC2B8CF4 + t183)));
            t185 = (t185 + 0x4);
            *(unsigned int *)((0xC2B8D08 + t183)) = t184;
        }
        (((struct o28_uint *)0xC2B8C80)->v) = 0x0;
        (((struct o2C_uint *)0xC2B8C80)->v) = 0x0;
        (((struct o30_uint *)0xC2B8C80)->v) = 0x0;
        (((struct o34_uint *)0xC2B8C80)->v) = 0x0;
        (((struct o38_uint *)0xC2B8C80)->v) = 0xC2B8CCC;
        (((struct o3C_uint *)0xC2B8C80)->v) = 0xC2B8CF4;
        t194 = 0xC2B8CC4;
        t195 = 0x0;
        if ((unsigned int)0x0 < (unsigned int)(*(int *)(((int)stk + 16)))) {
            t188 = 0xC2B8CCC;
            t189 = 0xC2B8CC4;
            t190 = 0x0;
            for (;;) {
                t190 = (t190 + 0x1);
                *(unsigned int *)((t189 + 0x0)) = t188;
                t188 = (t188 + 0x14);
                t189 = (t189 + 0x4);
                if ((unsigned int)t190 >= (unsigned int)(*(int *)(((int)stk + 16)))) {
                    break;
                }
            }
            t194 = t189;
            t195 = t190;
        }
        t198 = (kmiCopyDummyGlobalData((*(int *)(((int)stk + 16))), t194, t195));
        t202 = 0x0;
        for (;;) {
            if ((unsigned int)t202 >= (unsigned int)0x14) {
                break;
            }
            t198 = 0xC2B8D28;
            t200 = ((((struct o3C_int *)0xC2B8C80)->v));
            t201 = (*(int *)((t202 + t198)));
            t200 = (t200 + t202);
            t199 = (*(int *)((t200 + 0x0)));
            t201 = (t201 << 2);
            t202 = (t202 + 0x4);
            t199 = (t199 + t201);
            *(unsigned int *)((t200 + 0x0)) = t199;
        }
    }
    t214 = *(int *)((a4 + 0x1C));
    (((struct o1C_uint *)0xC2B8C80)->v) = t214;
    if ((t214 & 7) != 0) {
        (((struct o1C_uint *)0xC2B8C80)->v) = ((((((struct o1C_int *)0xC2B8C80)->v)) + 0x7) & 0xFFFFFFF8);
    }
    (((struct o18_uint *)0xC2B8C80)->v) = ((unsigned int)((((((struct o10_int *)0xC2EA684)->v)) - (((((struct o1C_int *)0xC2B8C80)->v)) << 2)) - (((((struct o20_int *)0xC2B8C80)->v)) << 1)) >> 1);
    t225 = kmiGetProfileInt(0xC174C80, 0xC174C8C, 0x0);
    if (t225 == 1) {
        if ((unsigned int)((((struct o18_int *)0xC2B8C80)->v)) > (unsigned int)0x400000) {
            (((struct o18_uint *)0xC2B8C80)->v) = 0x400000;
        }
    } else {
        if ((unsigned int)((((struct o18_int *)0xC2B8C80)->v)) > (unsigned int)0x200000) {
            (((struct o18_uint *)0xC2B8C80)->v) = 0x200000;
        }
    }
    t236 = (((struct o18_int *)0xC2B8C80)->v);
    t276 = 0x3;
    if ((unsigned int)t236 < (unsigned int)((((struct o24_int *)0xC2B8C80)->v))) {
    } else {
        t238 = kmiTAallocEx(t236, (((int)stk + 12) + 0x38), (((int)stk + 12) + 0x3C));
        t276 = t238;
        if (t238 == 0) {
            (((struct o28_uint *)0xC2EAAB0)->v) = ((((struct o18_int *)0xC2B8C80)->v));
            *(int *)((int)stk + 8) = 0x0;
            t240 = *(int *)(((int)stk + 24));
            t241 = *(int *)(((int)stk + 12));
            *(int *)((int)stk + 4) = ((~t240) & t241);
            kmiSetTAEnvironment(((unsigned int)((((struct o0_int *)0xC2EA6EC)->v)) >> 7), ((unsigned int)((((struct o4_int *)0xC2EA6EC)->v)) >> 7), ((unsigned int)((((struct o8_int *)0xC2EA6EC)->v)) >> 7), ((unsigned int)((((struct oC_int *)0xC2EA6EC)->v)) >> 7), ((~t240) & t241));
            if (((*(int *)((a4 + 0x4))) & 0x10000) != 0) {
                *(unsigned int *)0xC2EA88C = 0x1;
            }
            *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0x0)) = 0xC2B8CF4;
            *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0x4)) = 0xC178304;
            *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0x8)) = 0xC2B8CA8;
            *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0xC)) = 0xC2B8CC4;
            (((struct o18_uint *)0xC2B8C40)->v) = (*(int *)(((int)stk + 24)));
            (((struct o30_uint *)0xC2EA684)->v) = (*(int *)(((int)stk + 24)));
            (((struct o1C_uint *)0xC2B8C40)->v) = (*(int *)(((*(int *)((a4 + 0x8))) + 0x0)));
            (((struct o20_uint *)0xC2B8C40)->v) = (*(int *)((a4 + 0x10)));
            (((struct o24_uint *)0xC2B8C40)->v) = (*(int *)((a4 + 0x14)));
            (((struct o28_uint *)0xC2B8C40)->v) = (*(int *)(((int)stk + 28)));
            (((struct o2C_uint *)0xC2B8C40)->v) = (*(int *)(((*(int *)((a4 + 0x8))) + 0x4)));
            (((struct o30_uint *)0xC2B8C40)->v) = (*(int *)((a4 + 0x10)));
            (((struct o34_uint *)0xC2B8C40)->v) = (*(int *)((a4 + 0x14)));
            (((struct o38_uint *)0xC2B8C40)->v) = (*(int *)(((int)stk + 28)));
            (((struct o3C_uint *)0xC2B8C40)->v) = (*(int *)(((*(int *)((a4 + 0x8))) + 0x0)));
            (((struct o0_uint *)0xC2B8C80)->v) = (*(int *)(((*(int *)((a4 + 0x8))) + 0x4)));
            (((struct o4_uint *)0xC2B8C80)->v) = (*(int *)(((int)stk + 44)));
            (((struct o0_uint *)0xC177A84)->v) = 0x80000000;
            t276 = (kmiAllocSysConfig(((((struct o14_int *)0xC2B8C80)->v))));
        }
    }
    return t276;
}


