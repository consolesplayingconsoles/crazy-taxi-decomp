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


int vmsfs_xdefrag(int a4, int a5, int a6, int a7)
{
    int stk[12];

    register int R2;
    register int R3;
    register int R6;
    register int R9;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_6 = a4;
    v0_3 = a5;
    *(unsigned int *)(((int)stk + 0)) = (v0_6 * 0x148);
    v0_1 = (v0_3);
    v0_2 = (((v0_6 * 0x148) + 0xC2EE990));
    v0_0 = (v0_6);
    if (((*(signed char *)((((v0_6 * 0x148) + 0xC2EE990) + 0x2))) == 0)) goto L_C16615E;
    v0_4 = (vmsio_isready(v0_0)) != 0;
    if (v0_4) goto L_C166148;
    vmsfs_unmount(v0_0);
    L_C16615E:;
    v0_0 = (0xFFFFFF01);
    L_C166262:;
    return v0_0;
    L_C166148:;
    v0_4 = (vmsio_ismount(v0_0)) == 0;
    if (v0_4) goto L_C16615E;
    if (((*(signed char *)((((*(int *)(((int)stk + 0))) + 0xC2EE990) + 0x8))) != 0)) goto L_C166164;
    goto L_C16615E;
    L_C166164:;
    v0_4 = (int)(buIsFormat(v0_0)) >= 0;
    if (v0_4) goto L_C166174;
    v0_0 = (0xFFFFFF03);
    goto L_C166262;
    L_C166174:;
    if (((*(int *)(((*(int *)((v0_2 + 0x1C))) + 0x38))) == 0)) goto L_C166192;
    v0_4 = vmsfs_xfind(v0_0, (((int)stk + 0) + 0x4), R6);
    v0_6 = (v0_4);
    if ((v0_4 == 0)) goto L_C166192;
    v0_4 = (int)(check_fat_all(v0_0)) >= 0;
    if (v0_4) goto L_C166198;
    L_C166192:;
    v0_0 = (0xFFFFFF0B);
    goto L_C166262;
    L_C166198:;
    v0_3 = search_fat_used(v0_0, v0_3, R6);
    v0_4 = (v0_3);
    if (((int)v0_3 < 0)) goto L_C166238;
    v0_3 = search_fat_free(v0_0, (v0_4 + 0x1), R6);
    v0_5 = (v0_3);
    if (((int)v0_3 < 0)) goto L_C166238;
    v0_3 = vmsfs_read_retry(v0_0, v0_4, v0_1);
    v0_6 = (v0_3);
    if (((int)v0_3 < 0)) goto L_C166260;
    v0_3 = vmsfs_write_retry(v0_0, v0_5, v0_1);
    v0_6 = (v0_3);
    if (((int)v0_3 < 0)) goto L_C166260;
    v0_6 = search_fat(v0_0, v0_4, R6);
    v0_3 = (v0_6);
    if (((int)v0_6 <= 0)) goto L_C1661E6;
    set_fat(v0_0, v0_3, v0_5);
    L_C1661FA:;
    v0_6 = get_fat(v0_0, v0_4);
    set_fat(v0_0, v0_5, v0_6);
    set_fat(v0_0, v0_4, 0xFFFC);
    goto L_C166198;
    L_C1661E6:;
    v0_6 = search_dir_by_startfat(v0_0, v0_4);
    v0_6 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2EE98C) + 0x10)))))(v0_6, 0x2, v0_5, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    goto L_C1661FA;
    L_C166260:;
    v0_0 = (v0_6);
    goto L_C166262;
    L_C166238:;
    v0_6 = ((v0_2 + 0x48));
    v0_3 = (0x100);
    R6 = (0x1);
    L_C166246:;
    if (((unsigned int)v0_6 < (unsigned int)((v0_2 + 0x48) + v0_3))) goto L_C166242;
    v0_1 = write_dir(v0_0, v0_3, R6);
    v0_6 = (v0_1);
    if (((int)v0_1 < 0)) goto L_C166260;
    v0_6 = ((write_fat(v0_0)));
    goto L_C166260;
    L_C166242:;
    *(unsigned char *)((v0_6 + 0x0)) = R6;
    v0_6 = ((v0_6 + 0x1));
    goto L_C166246;
}

int pdVibStart(int a4, int a5, int a6)
{
    int stk[17];
    register int t0;
    register int t41;
    register int t1;
    register int t2;
    register int t3;
    int t5;
    register int t6;
    register int t12;
    register int t7;
    register int t18;
    register int t22;
    register int t25;
    register int t38;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = pdVibIsReady(a4);
    t41 = 0xFFFFFFFE;
    if (t0 == 0) {
    } else {
        if ((unsigned int)0x0 < (unsigned int)a6) {
            t1 = (((int)stk + 0) + 0x4);
            t2 = 0x0;
            t3 = a5;
            for (;;) {
                t5 = *(signed char *)((t3 + 0x1));
                *(unsigned char *)((t1 + 0x0)) = ((((unsigned char)(*(signed char *)((t3 + 0x0))) << 2) << 2) | (0x1 & t5));
                t6 = *(signed char *)((t3 + 0x2));
                t1 = (t1 + 0x1);
                t12 = t6;
                if (((unsigned char)t5 & 0x88) == 0) {
                    t7 = t6;
                    if ((signed char)t6 == 1) {
                        t7 = 0x2;
                    }
                    t12 = t7;
                    if ((signed char)t7 == -1) {
                        t12 = 0xFFFFFFFE;
                    }
                }
                t18 = (0x70 & (((signed char)t12 << 2) << 2));
                if ((int)(signed char)t12 > 0) {
                } else {
                    t18 = 0x0;
                    if ((int)(signed char)t12 < 0) {
                        t18 = (0x7 & (-(signed char)t12));
                    }
                }
                *(unsigned char *)((t1 + 0x0)) = (t18 | (0x88 & t5));
                t1 = (t1 + 0x1);
                *(unsigned char *)((t1 + 0x0)) = (*(signed char *)((t3 + 0x3)));
                t1 = (t1 + 0x1);
                t22 = t1;
                t1 = (t1 + 0x1);
                t25 = 0x0;
                if (((unsigned char)t5 & 0x88) != 0) {
                    t25 = (unsigned char)(*(signed char *)((t3 + 0x4)));
                }
                t2 = (t2 + 0x1);
                *(unsigned char *)((t22 + 0x0)) = t25;
                t3 = (t3 + 0x8);
                if ((unsigned int)t2 >= (unsigned int)a6) {
                    break;
                }
            }
        }
        *(volatile int *)(((int)stk + 0));
        t38 = kdSetSetCondition((*(int *)(((int)stk + 0))), 0x100, ((int)stk + 4), a6);
        t41 = 0x0;
        if ((int)t38 < 0) {
            t41 = 0xFFFFFFFF;
        }
    }
    return t41;
}
