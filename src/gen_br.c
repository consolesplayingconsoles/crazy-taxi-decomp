/* Straight-line functions with calls and guards (batch gen_br): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetBubble(int, int);
int ReturnBreakPin(int);
int nd_SprPut(int, int, float, float);
int Start_Bowling_Message(void);
int ndPuru2Check(void);
int Start_CrazyBox_Voice(int);
int FUN_0c074200(int, int);
int FUN_0c0770f0(int, int, int);
int FUN_0c07f5c0(void);
int FUN_0c081650(void);
int FUN_0c14f182(int, int);
int FUN_0c14f414(void);
int FUN_0c1573a0(void);
int FUN_0c1573cc(int);
int FUN_0c1573f2(int, int, int);
int FUN_0c1701c4(int, int, int);
int FUN_0c1726f0(int, int);
int FUN_0c1745b0(void);
int FUN_0c17472e(void);
int FUN_0c174768(void);
int FUN_0c1747be(int);
int FUN_0c1747f4(int);
int ResetFadeColor(void);
int SetEffect(int, int, int);
int Sound_Request(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buIsFormat(void);
int kdGetDevice(int);
int kdGetDeviceInfo(void);
int kdGetStatus(void);
int kdIsChanged(void);
int kdSetBlockRead(void);
int kmFreeTexture(int);
int kmiFatalErrorEntry(int);
int kmytex_FBDeQueueEntry(int, int, int);
int kmytex_FBEnQueueEntry(int, int, int);
int make_header(int, int);
int memset(int, int, int);
int mpdrv_clear_deviceinfo(int);
int mpdrv_init_globals(void);
int mpdrv_make_deviceinfo(int, int, int);
int mpdrv_set_dreq_ns(void);
int mpdrv_set_end_ns(void);
int mpdrv_swaplong(int, int);
int mwRnaErrCallFunc(int, ...);
int mwlRnaStartCopy(int, int, int, int, int);
int nlCommonTextureClearTextureIndex(int);
int nlCommonTextureGetNextTextureIndex(void);
int nlCreateTextureParam(int);
int nlFreePalette(int);
int nlLoadTextureMem(int, int, int);
int nlLocate(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlRand(void);
float nlScalor(int);
int nlSearchPalette(int, int);
int nlSetDummyTextureParameter(int);
int nlSetTextureParameter(int, int);
int pdVibStart(int, int);
int setTechnicalBonus(int, int);
int ndPuru2Stop(void);
int vmsfb_sleep(void);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_sys(int);
void FUN_0c074320(void);
void syChainInit(void);
void FUN_0c14ec64(int a4);
int FUN_0c080370(int a4, int a5, int a6);
int nlsndStreamChgFx(int a4, int a5, int a6);
int vmsfs_fsetparam(int a4, int a5, int a6);
int vmsfs_setvolume(int a4, int a5);
int trigger(int a4, int a5);
int ADX_DecodeInfoSpsd(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14);
int Result_Drop_Lowest_Rank(void);
int hudLoadRanking(void);
int vmsio_block_read(int a4, int a5, int a6);
int mpdrv_make_exdevicedata(int a4, int a5, int a6, int a7, int a8);
int nlObjPutFreeTextureOnce_Sub(int a4, int a5, int a6);
int vmsfs_init_work_normal(int a4, int a5, int a6);
int ADX_DecodeInfoExLoop(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int FUN_0c16c634(int a4);
int mwlRnaStartTrans(int a4);
int mpdrv_init_ex(int a4, int a5, int a6, int a7);
int Put_Bowling_Pins(void);
int FUN_0c07f870(int a4, int a5, int a6);
int FUN_0c1724b8(int a4, int a5);
int nlObjPutLoadTextureOnce_Sub(int a4, int a5, int a6, int a7, int a8);
int FUN_0c172c3c(int a4, int a5, int a6, int a7, int a8);
int FUN_0c157852(int a4, int a5, int a6, int a7, int a8, int a9);
int nd_Exec_Puru2(int a4);
int ExecEffect(int a4, int a5);

void FUN_0c074320(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int stk[3] = {0};

    *(unsigned int *)0xFFA00020 = 0x0;
    *(unsigned int *)0xFFA0002C = 0x1201;
    *(unsigned int *)0xFFA00040 = 0x8201;
    t0 = 0x1201;
    for (;;) {
        t1 = *(int *)0xFFA00040;
        *(unsigned int *)(((int)stk + 8)) = t1;
        if (t1 == 0x8201) break;
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        for (;;) {
            t2 = *(int *)(((int)stk + 4));
            if ((int)t2 >= (int)0x10000) break;
            t3 = *(int *)(((int)stk + 4));
            t0 = t3;
            t0 = (t0 + 0x1);
            *(unsigned int *)(((int)stk + 4)) = t0;
        }
        *(unsigned int *)0xFFA00040 = 0x8201;
    }
}

void syChainInit(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int stk[2] = {0};

    t0 = _builtin_get_imask();
    *(unsigned short *)(((int)stk + 4)) = t0;
    _builtin_set_imask(0xF);
    t1 = 0xC2EAC10;
    do {
        *(unsigned int *)((t1 + 0xC)) = 0x0;
        t1 = (t1 + 0x10);
    } while ((unsigned int)t1 < (unsigned int)0xC2EBC10);
    t2 = 0xC2EBC10;
    do {
        *(unsigned int *)((t2 + 0x0)) = 0x0;
        t2 = (t2 + 0x4);
    } while ((unsigned int)t2 < (unsigned int)0xC2EBF10);
    t3 = *(short *)(((int)stk + 4));
    _builtin_set_imask(((unsigned int)((((unsigned short)t3 & 0xF) << 2) << 2) >> 4));
}

void FUN_0c14ec64(int a4)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    int stk[4] = {0};

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = _builtin_get_imask();
    *(unsigned short *)(((int)stk + 8)) = t0;
    _builtin_set_imask(0xF);
    FUN_0c14f414();
    t2 = *(int *)(((int)stk + 4));
    *(unsigned int *)0xFF00001C = t2;
    t3 = *(int *)0xFF00001C;
    *(unsigned int *)0xFF00001C = ((t3 & 0xFFFFF7FF) | 0x800);
    t4 = *(int *)0xFF00001C;
    *(unsigned int *)0xFF00001C = ((t4 & 0xFFFFFFF7) | 0x8);
    t5 = *(short *)(((int)stk + 8));
    _builtin_set_imask(((unsigned int)(((t5 & 0xF) << 2) << 2) >> 4));
}

int FUN_0c080370(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t3;
    int stk[4] = {0};

    *(unsigned short *)(((int)stk + 4)) = a6;
    t0 = *(signed char *)((0xC2B771C + (((((short)a4 << 1) + (short)a4) << 2) << 1)));
    if (t0 == 1) {
        *(unsigned int *)(((int)stk + 8)) = ((((short)a4 << 8) << 2) << 2);
        FUN_0c07f5c0();
        t2 = *(short *)(((int)stk + 4));
        t3 = *(int *)(((int)stk + 8));
        return FUN_0c07f5c0();
    }
    return t0;
}

int nlsndStreamChgFx(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t3;
    int t5;
    int stk[7] = {0};

    *(unsigned short *)(((int)stk + 4)) = a5;
    t0 = *(signed char *)(((((((short)a4 << 1) + (short)a4) << 2) << 1) + 0xC2B771C));
    if (t0 == 1) {
        *(unsigned int *)(((int)stk + 8)) = ((((short)a4 << 8) << 2) << 2);
        FUN_0c07f5c0();
        t2 = *(short *)(((int)stk + 4));
        t3 = *(int *)(((int)stk + 8));
        FUN_0c07f5c0();
        t5 = *(int *)(((((((short)a4 << 1) + (short)a4) << 2) << 1) + 0xC2B7724));
        if (t5 != 0) {
            FUN_0c07f5c0();
            return FUN_0c07f5c0();
        }
        return 0xC2B7724;
    }
    return t0;
}

int vmsfs_fsetparam(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int stk[5] = {0};

    *(unsigned short *)(((int)stk + 8)) = a5;
    *(unsigned char *)(((int)stk + 4)) = a6;
    if (a4 == 0) {
        return 0xFFFFFF00;
    }
    t0 = *(int *)((a4 + 0x28));
    t1 = *(signed char *)(((t0 * 0x148) + 0xC2EE992));
    if (t1 != 0) {
        t2 = *(int *)((a4 + 0x28));
        t3 = vmsio_isready(t2);
        if (t3 == 0) {
            t4 = *(int *)((a4 + 0x28));
            vmsfs_unmount(t4);
            return 0xFFFFFF01;
        }
        t6 = *(int *)((a4 + 0x28));
        t7 = vmsio_ismount(t6);
        if (t7 != 0) {
            t8 = *(int *)((a4 + 0x28));
            t9 = *(signed char *)(((t8 * 0x148) + 0xC2EE998));
            if (t9 == 0) {
                return 0xFFFFFF01;
            }
            t10 = *(int *)((a4 + 0x28));
            t11 = buIsFormat();
            if ((int)t11 < 0) {
                return 0xFFFFFF03;
            }
            t12 = *(short *)(((int)stk + 8));
            *(unsigned short *)((a4 + 0x2)) = t12;
            t13 = *(signed char *)(((int)stk + 4));
            *(unsigned char *)((a4 + 0x1)) = t13;
            return 0x0;
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

int vmsfs_setvolume(int a4, int a5)
{
    int t0;
    int t1;
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
    int t14;
    int stk[6] = {0};

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = (a4 * 0x148);
    t0 = *(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x2));
    if (t0 != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            return 0xFFFFFF01;
        }
        t3 = vmsio_ismount(a4);
        if (t3 != 0) {
            t4 = *(int *)(((int)stk + 8));
            t5 = *(signed char *)(((t4 + 0xC2EE990) + 0x8));
            if (t5 == 0) {
                return 0xFFFFFF01;
            }
            t6 = buIsFormat();
            if ((int)t6 < 0) {
                return 0xFFFFFF03;
            }
            t7 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
            t8 = (t7 + 0x10);
            t9 = 0x0;
            while ((int)t9 < (int)0x20) {
                *(unsigned char *)((t8 + 0x0)) = 0x0;
                t8 = (t8 + 0x1);
                t9 = (t9 + 0x1);
            }
            t10 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
            t11 = (t10 + 0x10);
            t12 = 0x0;
            while ((int)t12 < (int)0x20) {
                t13 = *(int *)(((int)stk + 4));
                t12 = (t12 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = (t13 + 0x1);
                t14 = *(signed char *)((((t13 + 0x1) - 1) + 0x0));
                *(unsigned char *)((t11 + 0x0)) = t14;
                t11 = (t11 + 0x1);
            }
            return write_sys(a4);
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

int trigger(int a4, int a5)
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
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int stk[11] = {0};

    t0 = *(int *)0xC2FA538;
    t1 = *(signed char *)((t0 + 0xFB0));
    *(unsigned char *)(((int)stk + 4)) = t1;
    t2 = 0xFB0;
    t3 = a4;
    t4 = a5;
    t5 = 0x0;
    for (;;) {
        if ((int)t5 >= (int)0x4) {
            t2 = 0x0;
            return t2;
        }
        t6 = *(signed char *)(((int)stk + 4));
        if (((((int)t5 >= 0) ? (0x1 << (t5 & 31)) : ((-(int)t5 & 31) ? ((int)0x1 >> (-(int)t5 & 31)) : ((int)0x1 >> 31))) & (unsigned char)t6) != 0) {
            t3 = 0xC176310;
            t3 = (t3 + t5);
            *(unsigned int *)(((int)stk + 8)) = t3;
            t7 = *(signed char *)((t3 + 0x0));
            t3 = t7;
            t3 = (unsigned char)t3;
            t8 = kdGetDevice(t3);
            t2 = t8;
            t9 = *(int *)(((int)stk + 8));
            t3 = t9;
            t10 = *(signed char *)((t3 + 0x0));
            t3 = t10;
            t3 = (unsigned char)t3;
            t11 = kdGetDeviceInfo();
            t12 = t2;
            t2 = t11;
            t3 = t2;
            t2 = t5;
            t13 = *(signed char *)((0xC2EC550 + t2));
            *(unsigned char *)((0xC2EC54C + t2)) = t13;
            t14 = *(int *)((t3 + 0x0));
            if ((t14 & 0x80) != 0) {
                t15 = *(signed char *)((t12 + 0x2));
                t2 = t15;
                if (t2 == 0) {
                    t16 = *(signed char *)((t12 + 0x4));
                    t2 = t16;
                    t2 = (unsigned char)t2;
                    if (t2 == 8) {
                        t17 = *(int *)((t12 + 0x8));
                        t3 = t17;
                        t18 = *(signed char *)((t3 + 0x8));
                        t2 = t18;
                        t2 = (t2 & 0x4);
                        t3 = t2;
                        t2 = t5;
                        *(unsigned char *)((0xC2EC550 + t2)) = t3;
                        t19 = *(signed char *)((0xC2EC54C + t2));
                        t4 = t19;
                        t4 = (t4 ^ t3);
                        t3 = (unsigned char)t3;
                        if (t3 == 0) {
                            t4 = (unsigned char)t4;
                            if (t4 != 0) break;
                            t5 = (t5 + 0x1);
                            continue;
                        }
                        t5 = (t5 + 0x1);
                        continue;
                    }
                    t5 = (t5 + 0x1);
                    continue;
                }
                t5 = (t5 + 0x1);
                continue;
            }
            t5 = (t5 + 0x1);
            continue;
        }
        t5 = (t5 + 0x1);
    }
    return (t5 + 0x1);
}

int ADX_DecodeInfoSpsd(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t9;
    int t10;
    int t13;
    int t14;
    int t17;
    int t18;
    int t19;
    int t20;
    int t24;
    int t25;
    int t26;
    int stk[9] = {0};

    t0 = *(signed char *)((a4 + 0x7));
    *(unsigned short *)((a6 + 0x0)) = (((unsigned char)t0 << 2) << 2);
    t1 = *(signed char *)((a4 + 0x9));
    *(unsigned char *)((a10 + 0x0)) = ((t1 & 0x3) + 0x1);
    t2 = *(short *)((a4 + 0x2A));
    *(unsigned int *)((a11 + 0x0)) = (unsigned short)t2;
    t3 = *(signed char *)((a4 + 0x8));
    *(unsigned char *)(((int)stk + 4)) = t3;
    t4 = *(signed char *)(((int)stk + 4));
    if ((unsigned char)t4 != 0) {
        if ((unsigned char)t4 != 1) {
            if ((unsigned char)t4 != 2) {
                if ((unsigned char)t4 == 3) {
                    *(unsigned char *)((a8 + 0x0)) = 0x4;
                    t5 = *(signed char *)((a10 + 0x0));
                    *(unsigned char *)((a9 + 0x0)) = t5;
                    *(unsigned int *)((a13 + 0x0)) = 0x2;
                    t6 = *(int *)(((a4 + 0xC) + 0x0));
                    *(unsigned int *)((a12 + 0x0)) = (t6 << 1);
                    *(unsigned short *)((a14 + 0x0)) = 0x2;
                }
            } else {
                *(unsigned char *)((a8 + 0x0)) = 0x4;
                t9 = *(signed char *)((a10 + 0x0));
                *(unsigned char *)((a9 + 0x0)) = t9;
                *(unsigned int *)((a13 + 0x0)) = 0x2;
                t10 = *(int *)(((a4 + 0xC) + 0x0));
                *(unsigned int *)((a12 + 0x0)) = (t10 << 1);
                *(unsigned short *)((a14 + 0x0)) = 0x2;
            }
        } else {
            *(unsigned char *)((a8 + 0x0)) = 0x8;
            t13 = *(signed char *)((a10 + 0x0));
            *(unsigned char *)((a9 + 0x0)) = t13;
            *(unsigned int *)((a13 + 0x0)) = 0x1;
            t14 = *(int *)(((a4 + 0xC) + 0x0));
            *(unsigned int *)((a12 + 0x0)) = t14;
            *(unsigned short *)((a14 + 0x0)) = 0x1;
        }
    } else {
        *(unsigned char *)((a8 + 0x0)) = 0x10;
        t17 = *(signed char *)((a10 + 0x0));
        *(unsigned char *)((a9 + 0x0)) = (t17 << 1);
        *(unsigned int *)((a13 + 0x0)) = 0x1;
        t18 = *(int *)(((a4 + 0xC) + 0x0));
        t19 = (int)((unsigned int)t18 + (unsigned int)0x0);
        t20 = (int)((unsigned int)t19 + ((((int)0x0 > (int)t18)) ? 1u : 0u));
        *(unsigned int *)((a12 + 0x0)) = (t20 >> 1);
        *(unsigned short *)((a14 + 0x0)) = 0x0;
    }
    *(unsigned char *)((a9 + 0x0)) = 0x2;
    *(unsigned int *)((a13 + 0x0)) = 0x1;
    t24 = *(int *)(((a4 + 0xC) + 0x0));
    t25 = (int)((unsigned int)t24 + (unsigned int)0x0);
    t26 = (int)((unsigned int)t25 + ((((int)0x0 > (int)t24)) ? 1u : 0u));
    *(unsigned int *)((a12 + 0x0)) = (t26 >> 1);
    *(unsigned char *)((a8 + 0x0)) = 0x10;
    *(unsigned char *)((a7 + 0x0)) = 0xFFFFFFFF;
    return 0x0;
}

int Result_Drop_Lowest_Rank(void)
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
    int t25;
    int t26;
    int stk[6] = {0};

    t0 = 0x1;
    t1 = 0x0;
    do {
        t2 = *(int *)0xC1EE210;
        *(unsigned int *)(((int)stk + 4)) = ((short)((short)t2 * (short)0x3C0) + 0xC28C318);
        t3 = *(int *)(((((t1 << 2) << 1) + (((short)((short)t2 * (short)0x3C0) + 0xC28C318) + 0x140)) + 0x4));
        t4 = *(int *)(((((t0 << 2) << 1) + (((short)((short)t2 * (short)0x3C0) + 0xC28C318) + 0x140)) + 0x4));
        if ((unsigned int)t3 > (unsigned int)t4) {
            t1 = t0;
        }
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x50);
    if (t1 != 79) {
        if ((int)t1 < (int)0x4F) {
            t5 = ((t1 << 2) << 1);
            t6 = t1;
            do {
                t7 = *(int *)0xC1EE210;
                t8 = *(int *)((((((short)((short)t7 * (short)0x3C0) + 0xC28C318) + 0x140) + t5) + 0x8));
                *(unsigned int *)((((((short)((short)t7 * (short)0x3C0) + 0xC28C318) + 0x140) + t5) + 0x0)) = t8;
                t9 = *(int *)0xC1EE210;
                t10 = *(int *)((((((short)((short)t9 * (short)0x3C0) + 0xC28C318) + 0x140) + t5) + 0xC));
                t6 = (t6 + 0x1);
                *(unsigned int *)((((((short)((short)t9 * (short)0x3C0) + 0xC28C318) + 0x140) + t5) + 0x4)) = t10;
                t5 = (t5 + 0x8);
            } while ((int)t6 < (int)0x4F);
        }
    }
    t25 = *(int *)0xC1EE210;
    *(unsigned int *)((((0x140 + ((short)((short)t25 * (short)0x3C0) + 0xC28C318)) + 0x278) + 0x0)) = 0x0;
    t26 = *(int *)0xC1EE210;
    *(unsigned int *)(((0x278 + (0x140 + ((short)((short)t26 * (short)0x3C0) + 0xC28C318))) + 0x4)) = 0x0;
    return (0x140 + ((short)((short)t26 * (short)0x3C0) + 0xC28C318));
}

int hudLoadRanking(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int stk[8] = {0};

    t0 = 0x0;
    t1 = 0xC2A8FD8;
    t2 = 0x0;
    do {
        t3 = *(int *)0xC1EE210;
        t4 = *(int *)(((((short)((short)t3 * (short)0x3C0) + 0xC28C318) + t0) + 0x0));
        t2 = (t2 + 0x1);
        t0 = (t0 + 0x10);
        *(unsigned int *)((t1 + 0x0)) = t4;
        t1 = (t1 + 0x4);
    } while ((int)t2 < (int)0x14);
    t6 = 0x1;
    t7 = 0x0;
    do {
        t8 = *(int *)0xC1EE210;
        *(unsigned int *)(((int)stk + 4)) = ((short)((short)t8 * (short)0x3C0) + 0xC28C318);
        t9 = *(int *)(((((t7 << 2) << 1) + (((short)((short)t8 * (short)0x3C0) + 0xC28C318) + 0x140)) + 0x4));
        t10 = *(int *)(((((t6 << 2) << 1) + (((short)((short)t8 * (short)0x3C0) + 0xC28C318) + 0x140)) + 0x4));
        if ((unsigned int)t9 > (unsigned int)t10) {
            t7 = t6;
        }
        t6 = (t6 + 0x1);
    } while ((int)t6 < (int)0x50);
    if ((int)(t7 - 1) >= 0) {
        t11 = 0xC2A9028;
        t12 = 0x0;
        t13 = 0x0;
        do {
            t12 = (t12 + 0x1);
            t14 = *(int *)0xC1EE210;
            t15 = *(int *)((((0x140 + ((short)((short)t14 * (short)0x3C0) + 0xC28C318)) + t13) + 0x0));
            t13 = (t13 + 0x8);
            *(unsigned int *)((t11 + 0x0)) = t15;
            t11 = (t11 + 0x4);
        } while ((int)t12 <= (int)(t7 - 1));
    }
    if (t7 != 79) {
        if ((int)t7 < (int)0x4F) {
            t23 = t7;
            t24 = (((t7 << 2) + 0xC2A8FD8) + 0x50);
            t25 = ((t7 << 2) << 1);
            do {
                t23 = (t23 + 0x1);
                t26 = *(int *)0xC1EE210;
                t27 = *(int *)((((0x140 + ((short)((short)t26 * (short)0x3C0) + 0xC28C318)) + t25) + 0x8));
                t25 = (t25 + 0x8);
                *(unsigned int *)((t24 + 0x0)) = t27;
                t24 = (t24 + 0x4);
            } while ((int)t23 < (int)0x4F);
        }
    }
    *(unsigned int *)0xC2A9164 = 0x0;
    *(unsigned int *)0xC2A9168 = 0x64;
    *(unsigned int *)0xC1EE340 = 0x64;
    return 0x18C;
}

int vmsio_block_read(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t14;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t25;
    int t26;
    int t27;
    int stk[13] = {0};

    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    t0 = vmsio_ismount(a4);
    if (t0 != 0) {
        t2 = *(int *)(((a4 << 2) + 0xC176948));
        kdGetDevice(t2);
        t4 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = 0x0;
        t5 = t4;
        t6 = 0x0;
        for (;;) {
            t7 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
            t8 = *(int *)(((int)stk + 8));
            t9 = *(int *)((t7 + 0x3C));
            if ((int)t8 >= (int)t9) {
                return 0x0;
            }
            for (;;) {
                t10 = kdIsChanged();
                if (t10 == 0) {
                    t11 = *(int *)(((int)stk + 16));
                    t12 = kdSetBlockRead();
                    if ((int)t12 < 0) {
                        vmsfb_sleep();
                        continue;
                    }
                    for (;;) {
                        t14 = kdGetStatus();
                        if (t14 == 0) {
                            vmsfb_sleep();
                            continue;
                        }
                        break;
                    }
                    t16 = kdGetDevice(t2);
                    *(unsigned int *)(((int)stk + 12)) = t16;
                    t17 = kdIsChanged();
                    if (t17 != 0) {
                        return 0xFFFFFF30;
                    }
                    t18 = *(int *)(((int)stk + 12));
                    t19 = *(int *)(((int)stk + 12));
                    t20 = *(signed char *)((t18 + 0x4));
                    t21 = *(int *)((t19 + 0x8));
                    if ((unsigned char)t20 != 8) {
                        if ((unsigned char)t20 != 0xFC) {
                            if ((unsigned char)t20 == 0xFB) {
                                return 0xFFFF0000;
                            }
                            return 0xFFFFFF01;
                        }
                        continue;
                    }
                    break;
                }
                return 0xFFFFFF30;
            }
            t22 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
            t23 = *(int *)((t22 + 0x44));
            FUN_0c1701c4(t5, (t21 + 0xC), t23);
            t25 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
            t6 = (t6 + 0x1);
            t26 = *(int *)((t25 + 0x44));
            t27 = *(int *)(((int)stk + 8));
            t5 = (t5 + t26);
            *(unsigned int *)(((int)stk + 8)) = (t27 + 0x1);
        }
    }
    vmsfb_sleep();
    return 0xFFFFFF01;
}

int mpdrv_make_exdevicedata(int a4, int a5, int a6, int a7, int a8)
{
    int t1;
    int t2;
    int t3;
    int t5;
    int t7;
    int t8;
    int t9;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t19;
    int t20;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t41;
    int t44;
    int stk[8] = {0};

    *(unsigned char *)(((int)stk + 4)) = a4;
    make_header(a7, a8);
    *(unsigned char *)((a7 + 0x2)) = 0x0;
    *(unsigned char *)((a7 + 0x3)) = 0x0;
    t1 = *(signed char *)((a5 + 0x2));
    t2 = *(signed char *)(((int)stk + 4));
    if (((unsigned char)t1 & (unsigned char)t2) != 0) {
        *(unsigned char *)((a7 + 0x4)) = 0x1;
        *(unsigned char *)((a7 + 0x0)) = 0x0;
        t3 = *(int *)((a7 + 0x24));
        *(unsigned int *)((a7 + 0x24)) = (t3 + 0x1);
    }
    t5 = *(signed char *)((a5 + 0x3));
    if (((unsigned char)t5 & (unsigned char)t2) != 0) {
        *(unsigned char *)((a7 + 0x4)) = 0x4;
        *(unsigned char *)((a7 + 0x0)) = 0x0;
        *(unsigned char *)((a7 + 0x3)) = 0x1;
        *(unsigned int *)((a7 + 0x24)) = 0x0;
    }
    t7 = *(signed char *)((a5 + 0x0));
    if (((unsigned char)t7 & (unsigned char)t2) != 0) {
        t8 = *(signed char *)((a7 + 0x7));
        if (t8 == 0) {
            t9 = *(signed char *)((a7 + 0x0));
            if (t9 != 0) {
                *(unsigned char *)((a7 + 0x4)) = 0x0;
            }
        } else {
            if ((unsigned char)t8 == 1) {
                t11 = *(signed char *)((a7 + 0x8));
                if ((unsigned char)t11 == 5) {
                    *(unsigned char *)((a7 + 0x2)) = 0x1;
                    *(unsigned char *)((a7 + 0x0)) = 0x1;
                    *(unsigned char *)((a7 + 0x4)) = 0x0;
                } else {
                    t12 = *(int *)((a7 + 0x24));
                    *(unsigned int *)((a7 + 0x24)) = (t12 + 0x1);
                    t13 = *(int *)0xC2FA538;
                    t14 = *(int *)((t13 + 0x10D8));
                    t15 = *(int *)((a7 + 0x24));
                    if ((unsigned int)t15 <= (unsigned int)t14) {
                        *(unsigned char *)((a7 + 0x4)) = 0x1;
                    } else {
                        *(unsigned char *)((a7 + 0x0)) = 0x0;
                        *(unsigned char *)((a7 + 0x4)) = 0xFF;
                        *(unsigned int *)((a7 + 0x24)) = 0x0;
                    }
                }
            } else {
                t19 = *(signed char *)((a7 + 0x7));
                if ((unsigned char)t19 == 4) {
                    *(unsigned char *)((a7 + 0x3)) = 0x1;
                    *(unsigned char *)((a7 + 0x0)) = 0x0;
                    *(unsigned char *)((a7 + 0x4)) = 0xFF;
                    *(unsigned int *)((a7 + 0x24)) = 0x0;
                } else {
                    t20 = *(signed char *)((a7 + 0x7));
                    if (t20 != 0) {
                        *(unsigned char *)((a7 + 0x4)) = 0x0;
                    }
                }
            }
        }
    } else {
        *(unsigned char *)((a7 + 0x4)) = 0xFF;
        *(unsigned char *)((a7 + 0x0)) = 0x0;
    }
    t29 = *(signed char *)((a7 + 0x0));
    if (t29 != 0) {
        t30 = *(signed char *)((a7 + 0x7));
        if (t30 != 0) {
            t31 = *(int *)0xC2FA538;
            t32 = *(int *)((0x10C4 + t31));
            if (t32 == 1) {
                t33 = *(int *)((a8 + 0x0));
                if (t33 != -1) {
                    if (t33 != 0xFFFFFF00) {
                        t34 = *(int *)((a8 + 0x0));
                        mpdrv_swaplong(a8, ((unsigned char)t34 + 0x1));
                    }
                }
            }
        }
    }
    t41 = *(signed char *)((a7 + 0x2));
    if (t41 != 0) {
        *(unsigned char *)((a6 + 0x10)) = 0x0;
        mpdrv_make_deviceinfo(a6, a7, a8);
    }
    t44 = *(signed char *)((a7 + 0x3));
    if (t44 != 0) {
        *(unsigned char *)((a6 + 0x10)) = 0x0;
        mpdrv_clear_deviceinfo(a6);
    }
    return 0x0;
}

int nlObjPutFreeTextureOnce_Sub(int a4, int a5, int a6)
{
    int t0;
    int t56;
    int t1;
    int t53;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t15;
    int t9;
    int t13;
    int t10;
    int t11;
    int t16;
    int t17;
    int t18;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t32;
    int t34;
    int t35;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int stk[15] = {0};

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    t0 = *(int *)((a4 + 0x0));
    t56 = 0x0;
    if ((int)t0 >= 0) {
        t1 = *(int *)((a4 + 0x18));
        t53 = 0x0;
        if (t1 != 0) {
            t2 = *(int *)(((int)stk + 8));
            *(unsigned int *)(((int)stk + 16)) = ((((t2 == 0)) ? 1 : 0) ^ 0x1);
            t3 = ((((t2 == 0)) ? 1 : 0) ^ 0x1);
            t4 = t0;
            t5 = (a4 + 0x18);
            do {
                t6 = *(int *)((t5 + 0x20));
                t7 = t5;
                t5 = (t5 + 0x50);
                if ((int)t6 >= 0) {
                    t8 = *(int *)(((int)stk + 12));
                    t15 = t6;
                    if (t8 != 0) {
                        t9 = *(int *)(((int)stk + 16));
                        t13 = t6;
                        if (t9 != 0) {
                            t10 = *(int *)(((int)stk + 8));
                            t4 = t10;
                            t11 = *(int *)(((((t6 << 2) << 2) + t4) + 0xC));
                            t13 = t11;
                        }
                        t15 = t13;
                    }
                    t16 = *(int *)0xC2AEC84;
                    t17 = *(int *)0xC2B3184;
                    t4 = t17;
                    t18 = *(int *)(((t16 + (((t15 + t4) << 2) << 1)) + 0x0));
                    t3 = t18;
                    t21 = (((t15 + t4) << 2) << 1);
                    t4 = 0x0;
                    if ((unsigned int)t3 > (unsigned int)t4) {
                        t22 = *(int *)0xC2AEC84;
                        t23 = *(int *)(((t22 + t21) + 0x0));
                        t3 = t23;
                        t3 = (t3 - 1);
                        *(unsigned int *)(((t22 + t21) + 0x0)) = t3;
                        t24 = *(int *)0xC2AEC84;
                        t25 = *(int *)(((t24 + t21) + 0x0));
                        t3 = t25;
                        if (t3 == 0) {
                            t26 = *(int *)0xC2AEC84;
                            t3 = t26;
                            t3 = (t3 + t21);
                            t27 = *(int *)((t3 + 0x4));
                            *(unsigned int *)(((int)stk + 4)) = t27;
                            t28 = *(int *)(((int)stk + 4));
                            t3 = t28;
                            t29 = *(int *)0xC2B29C0;
                            t30 = *(int *)(((t29 + (t3 * 0x3C)) + 0x28));
                            t32 = (t3 * 0x3C);
                            t3 = t30;
                            if (t3 == 0) {
                                t34 = *(int *)0xC2B29C0;
                                t35 = kmFreeTexture((t34 + t32));
                                t3 = t35;
                                if (t3 != 0) {
                                    t4 = 0x1;
                                    *(unsigned int *)(((int)stk + 20)) = t4;
                                }
                            }
                            t37 = *(int *)0xC2B29C0;
                            t4 = 0x0;
                            *(unsigned int *)(((t37 + t32) + 0x2C)) = t4;
                            t38 = *(int *)0xC2B29C0;
                            *(unsigned int *)(((t38 + t32) + 0x38)) = 0xFFFFFFFF;
                            t39 = *(int *)(((int)stk + 4));
                            t40 = nlCommonTextureClearTextureIndex(t39);
                            t3 = t40;
                            t41 = *(int *)0xC2AEC84;
                            t4 = t41;
                            t4 = (t4 + t21);
                            *(unsigned int *)((t4 + 0x4)) = 0xFFFFFFFF;
                        }
                    }
                }
                t4 = 0xC14A644;
                t42 = *(int *)((t4 + 0x0));
                if (t42 == 0) {
                    t43 = *(int *)((t7 + 0xC));
                    t3 = t43;
                    t3 = ((unsigned int)t3 >> 27);
                    t44 = *(int *)0xC2B3568;
                    if (t44 != 0) {
                        t45 = (0x7 & t3);
                        t3 = (0x7 & t3);
                        if (t3 != 5) {
                            t3 = t45;
                            if (t3 == 6) {
                                t46 = *(int *)((t7 + 0x3C));
                                t47 = nlFreePalette(t46);
                                t3 = t47;
                            }
                        } else {
                            t48 = *(int *)((t7 + 0x3C));
                            t49 = nlFreePalette(t48);
                            t3 = t49;
                        }
                    }
                }
                t3 = 0x4C;
                t50 = *(int *)((t7 + t3));
                t4 = t50;
                t5 = (t5 + t4);
                t51 = *(int *)((t5 + 0x0));
            } while (t51 != 0);
            t52 = *(int *)(((int)stk + 20));
            t53 = t52;
        }
        t56 = t53;
    }
    return t56;
}


int ADX_DecodeInfoExLoop(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
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
    int stk[2] = {0};

    *(unsigned short *)((a7 + 0x0)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0x30;
    if ((int)a5 >= (int)0x30) {
        t0 = *(short *)((a4 + 0x0));
        *(unsigned int *)(((int)stk + 4)) = (unsigned short)t0;
        t1 = *(int *)(((int)stk + 4));
        *(unsigned short *)(((int)stk + 4)) = ((unsigned char)((int)(unsigned short)t0 >> 8) | ((t1 << 8) & 0xFF00));
        if ((unsigned short)((unsigned char)((int)(unsigned short)t0 >> 8) | ((t1 << 8) & 0xFF00)) == 0x8000) {
            t2 = *(short *)((a4 + 0x2));
            *(unsigned int *)(((int)stk + 4)) = t2;
            t3 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = ((unsigned char)((int)t2 >> 8) | ((t3 << 8) & 0xFF00));
            if ((int)((unsigned char)((int)t2 >> 8) | ((t3 << 8) & 0xFF00)) < (int)0x2C) {
                return 0xFFFFFFFF;
            }
            t4 = *(short *)((a4 + 0x14));
            *(unsigned int *)(((int)stk + 4)) = t4;
            t5 = *(int *)(((int)stk + 4));
            *(unsigned int *)((a6 + 0x0)) = ((unsigned char)((int)t4 >> 8) | ((t5 << 8) & 0xFF00));
            t6 = *(short *)((a4 + 0x16));
            *(unsigned int *)(((int)stk + 4)) = t6;
            t7 = *(int *)(((int)stk + 4));
            *(unsigned short *)((a7 + 0x0)) = ((unsigned char)((int)t6 >> 8) | ((t7 << 8) & 0xFFFFFF00));
            t8 = *(short *)((a7 + 0x0));
            if (t8 != 1) {
                return 0xFFFFFFFE;
            }
            t9 = *(short *)((a4 + 0x1A));
            *(unsigned short *)((a8 + 0x0)) = ((unsigned char)((int)t9 >> 8) | ((t9 << 8) & 0xFFFFFF00));
            t10 = *(int *)((a4 + 0x1C));
            *(unsigned int *)((a9 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t10 >> 16) >> 8) | (((int)t10 >> 8) & 0xFF00)) | ((t10 << 8) & 0xFF0000)) | ((t10 << 16) << 8));
            t11 = *(int *)((a4 + 0x20));
            *(unsigned int *)((a10 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t11 >> 16) >> 8) | (((int)t11 >> 8) & 0xFF00)) | ((t11 << 8) & 0xFF0000)) | ((t11 << 16) << 8));
            t12 = *(int *)((a4 + 0x24));
            *(unsigned int *)((a11 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t12 >> 16) >> 8) | (((int)t12 >> 8) & 0xFF00)) | ((t12 << 8) & 0xFF0000)) | ((t12 << 16) << 8));
            t13 = *(int *)((a4 + 0x28));
            *(unsigned int *)((a12 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t13 >> 16) >> 8) | (((int)t13 >> 8) & 0xFF00)) | ((t13 << 8) & 0xFF0000)) | ((t13 << 16) << 8));
            return 0x0;
        }
        return 0xFFFFFFFE;
    }
    return 0xFFFFFFFF;
}

int FUN_0c16c634(int a4)
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
    int t13;
    int t17;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int stk[10] = {0};

    if (a4 != 0) {
        if (a4 == 1) {
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            t0 = 0x0;
            t1 = 0x0;
            t2 = 0x0;
            do {
                t3 = *(int *)(((int)stk + 4));
                t4 = *(int *)(((((t3 << 2) << 2) << 1) + 0xC2EAAFC));
                t5 = *(int *)(((((t3 << 2) << 2) << 1) + 0xC2EAB04));
                if ((unsigned int)(t4 - 2048) > (unsigned int)(t5 + 0x140)) {
                    t6 = *(int *)((t1 + 0xC2EAAFC));
                    t7 = *(int *)(((0xC2F91CC + t0) + 0x0));
                    if ((unsigned int)t7 < (unsigned int)(t6 - 2048)) {
                        t8 = *(int *)((t2 + 0xC2EAAFC));
                        *(unsigned int *)((t2 + 0xC2EAAFC)) = (t8 - 0x800);
                        t9 = *(int *)((t2 + 0xC2EAAFC));
                        *(unsigned int *)(((0xC2EAB08 + t2) + 0x0)) = (t9 - 192);
                    }
                    *(unsigned int *)0xC2F91B8 = 0x0;
                } else {
                    t13 = *(int *)0xC2F91B8;
                    if ((unsigned int)t13 > (unsigned int)0xA) {
                        kmiFatalErrorEntry(0x3);
                    }
                }
                t17 = *(int *)(((int)stk + 4));
                t1 = (t1 + 0x20);
                *(unsigned int *)(((int)stk + 4)) = (t17 + 0x1);
                t2 = (t2 + 0x20);
                t0 = (t0 + 0x4);
            } while ((int)(t17 + 0x1) < (int)0x2);
        }
    } else {
        t19 = 0x0;
        t20 = 0x0;
        do {
            t21 = *(int *)((t20 + 0xC2EAB08));
            t22 = *(int *)((t20 + 0xC2EAAF8));
            if ((unsigned int)(t21 + 0x2000) < (unsigned int)(t22 - 192)) {
                t23 = *(int *)((t19 + 0xC2EAB08));
                *(unsigned int *)((t19 + 0xC2EAB08)) = (t23 + 0x2000);
                t24 = *(int *)((t19 + 0xC2EAB08));
                *(unsigned int *)((t19 + 0xC2EAAFC)) = (t24 + 0xC0);
                *(unsigned int *)0xC2F91BC = 0x0;
            } else {
                t25 = *(int *)0xC2F91BC;
                if ((unsigned int)t25 > (unsigned int)0x0) {
                    kmiFatalErrorEntry(0x3);
                }
            }
            t20 = (t20 + 0x20);
            t19 = (t19 + 0x20);
        } while ((unsigned int)t20 < (unsigned int)0x40);
    }
    return 0x0;
}

int mwlRnaStartTrans(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t36;
    int t37;
    int t38;
    int t39;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t22;
    int t47;
    int stk[13] = {0};

    t0 = *(int *)((a4 + 0x8));
    t1 = (int)((int)0x20 / (int)t0);
    t2 = *(int *)((a4 + 0x34));
    t3 = *(int *)((a4 + 0x28));
    t4 = (int)((int)(t3 - t2) / (int)((t1 << 2) << 1));
    t5 = 0x0;
    for (;;) {
        t6 = *(signed char *)((a4 + 0x3));
        if ((int)t5 >= (int)(unsigned char)t6) break;
        t7 = *(int *)((((t5 << 2) + (a4 + 0x10)) + 0x0));
        if (t7 == 0) {
            mwRnaErrCallFunc(0xC176700);
        }
        t10 = *(int *)((((t5 << 2) + (a4 + 0x10)) + 0x0));
        *(unsigned int *)(((int)stk + 8)) = t10;
        t11 = *(int *)((a4 + 0x8));
        t12 = *(int *)((t10 + 0x0));
        t13 = *(int *)((t12 + 0x18));
        t14 = ((t4 * ((t1 << 2) << 1)) * t11);
        if ((int)((t4 * ((t1 << 2) << 1)) * t11) < 0) {
            t14 = (((t4 * ((t1 << 2) << 1)) * t11) + 0x7);
        }
        t15 = *(int *)(((int)stk + 8));
        t16 = ((int (*)(int, int, int, int))(t13))(t15, 0x1, (((t14 >> 1) >> 1) >> 1), (((t5 << 2) << 1) + (a4 + 0x18)));
        t5 = (t5 + 0x1);
    }
    t17 = *(signed char *)((a4 + 0x3));
    if ((unsigned char)t17 == 1) {
        t18 = *(int *)((a4 + 0x1C));
        t22 = t18;
    } else {
        *(unsigned int *)(((int)stk + 16)) = (a4 + 0x18);
        t19 = *(int *)(((a4 + 0x18) + 0x4));
        *(unsigned int *)(((int)stk + 12)) = ((a4 + 0x18) + 0x8);
        t20 = *(int *)((((a4 + 0x18) + 0x8) + 0x4));
        t21 = t20;
        if ((int)t19 < (int)t20) {
            t21 = t19;
        }
        t22 = t21;
    }
    t23 = *(int *)((a4 + 0x8));
    t24 = (int)((int)t22 / (int)t23);
    t25 = ((t24 << 2) << 1);
    if ((int)((t24 << 2) << 1) >= (int)(t4 * ((t1 << 2) << 1))) {
        t25 = (t4 * ((t1 << 2) << 1));
    }
    t26 = *(int *)((a4 + 0x28));
    t27 = *(int *)((a4 + 0x2C));
    t28 = t25;
    if ((int)t25 >= (int)(t26 - t27)) {
        t28 = (t26 - t27);
    }
    t29 = (int)((int)t28 / (int)((t1 << 2) << 1));
    if ((int)(t29 * ((t1 << 2) << 1)) <= 0) {
        t30 = (t29 * ((t1 << 2) << 1));
        t31 = 0x0;
        for (;;) {
            t32 = *(signed char *)((a4 + 0x3));
            if ((int)t31 >= (int)(unsigned char)t32) break;
            t33 = *(int *)((((a4 + 0x10) + (t31 << 2)) + 0x0));
            if (t33 == 0) {
                mwRnaErrCallFunc(0xC176700);
            }
            t30 = a4;
            t30 = (t30 + 0x10);
            t30 = (t30 + (t31 << 2));
            t36 = *(int *)((t30 + 0x0));
            t30 = t36;
            t37 = *(int *)((t30 + 0x0));
            t38 = *(int *)((t37 + 0x1C));
            t39 = ((int (*)(int, int, int))(t38))(t30, 0x1, (((t31 << 2) << 1) + (a4 + 0x18)));
            t31 = (t31 + 0x1);
        }
        t47 = 0x0;
    } else {
        t41 = 0xC2F751C;
        t42 = 0x0;
        for (;;) {
            t43 = *(signed char *)((a4 + 0x3));
            if ((int)t42 >= (int)(unsigned char)t43) break;
            t44 = *(int *)((a4 + 0x2C));
            t45 = *(int *)(((((t42 << 2) << 1) + (a4 + 0x18)) + 0x0));
            *(unsigned int *)0xC2F751C = 0x0;
            t41 = a4;
            t46 = mwlRnaStartCopy(t41, t42, t44, t45, (t29 * ((t1 << 2) << 1)));
            t42 = (t42 + 0x1);
            *(unsigned int *)0xC2F7520 = 0x0;
            t41 = t46;
        }
        *(unsigned int *)((a4 + 0x3C)) = t41;
        t47 = t41;
    }
    return t47;
}

int mpdrv_init_ex(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t17;
    int t18;
    int t19;
    int t20;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t57;
    int t61;
    int t65;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t83;
    int t84;
    int t85;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int stk[11] = {0};

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)0xC2FA538 = 0xC2F943C;
    *(unsigned int *)0xC2FA400 = a6;
    t0 = *(int *)0xC2FA538;
    t1 = *(int *)(((int)stk + 4));
    *(unsigned int *)((t0 + 0xFC8)) = t1;
    t2 = *(int *)0xC2FA538;
    t3 = *(int *)((t2 + 0xFC4));
    if ((t3 & 0x1F) != 0) {
        t4 = *(int *)0xC2FA538;
        t5 = *(int *)((t4 + 0xFC4));
        *(unsigned int *)((t4 + 0xFC4)) = (t5 + 0x20);
        t6 = *(int *)0xC2FA538;
        t7 = *(int *)((t6 + 0xFC4));
        *(unsigned int *)((t6 + 0xFC4)) = (t7 & 0xFFFFFFE0);
    }
    t10 = *(int *)0xC2FA538;
    t11 = *(int *)((t10 + 0xFC8));
    if ((t11 & 0x1F) != 0) {
        t12 = *(int *)((t10 + 0xFC8));
        *(unsigned int *)((t10 + 0xFC8)) = (t12 + 0x20);
        t13 = *(int *)0xC2FA538;
        t14 = *(int *)((t13 + 0xFC8));
        *(unsigned int *)((t13 + 0xFC8)) = (t14 & 0xFFFFFFE0);
    }
    t17 = *(int *)0xC2FA538;
    t18 = *(int *)((t17 + 0xFC4));
    *(unsigned int *)((t17 + 0xFC4)) = (t18 | 0xA0000000);
    t19 = *(int *)0xC2FA538;
    t20 = *(int *)((t19 + 0xFC8));
    *(unsigned int *)((t19 + 0xFC8)) = (t20 | 0xA0000000);
    mpdrv_init_globals();
    t22 = 0x0;
    do {
        t23 = *(int *)0xC2FA538;
        *(unsigned int *)((((0xFE8 + t23) + t22) + 0x0)) = 0x0;
        t24 = *(int *)0xC2FA538;
        t25 = ((0xFE8 + t24) + t22);
        t22 = (t22 + 0x4);
        *(unsigned int *)(((t25 + 0x60) + 0x0)) = 0x0;
    } while ((unsigned int)t22 < (unsigned int)0x60);
    t26 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 8)) = t26;
    if ((int)a7 > 0) {
        t27 = 0x0;
        do {
            t28 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t28 + 0x4);
            t29 = *(int *)((((t28 + 0x4) - 4) + 0x0));
            t30 = t29;
            if ((t29 & 0x1F) != 0) {
                t30 = ((t29 + 0x20) & 0xFFFFFFE0);
            }
            t31 = *(int *)(((int)stk + 8));
            t27 = (t27 + 0x1);
            *(unsigned int *)(((int)stk + 8)) = (t31 + 0x4);
            t32 = *(int *)((((t31 + 0x4) - 4) + 0x0));
            t33 = *(int *)0xC2FA538;
            *(unsigned int *)((((0xFE8 + t33) + (t32 << 2)) + 0x0)) = (t30 | 0xA0000000);
            t34 = *(int *)0xC2FA538;
            *(unsigned int *)(((((t32 << 2) + (0xFE8 + t34)) + 0x60) + 0x0)) = ((t30 | 0xA0000000) + 0x400);
        } while ((int)t27 < (int)a7);
    }
    t39 = *(int *)0xC2FA538;
    t40 = *(int *)((t39 + 0xFC4));
    *(unsigned int *)((t39 + 0x10A8)) = t40;
    t41 = *(int *)0xC2FA538;
    t42 = *(int *)((t41 + 0xFC4));
    *(unsigned int *)((t41 + 0x10AC)) = (((a7 << 8) << 2) + t42);
    t43 = *(int *)0xC2FA538;
    t44 = *(int *)((t43 + 0x10A8));
    *(unsigned int *)((t43 + 0xFCC)) = t44;
    t45 = 0x0;
    do {
        t46 = *(int *)0xC2FA538;
        t47 = ((0xF90 + t46) + t45);
        t45 = (t45 + 0x1);
        *(unsigned char *)((t47 + 0x0)) = 0x0;
    } while ((int)t45 < (int)0x18);
    t48 = *(int *)(((int)stk + 12));
    if ((int)a7 > 0) {
        t49 = 0x0;
        t50 = t48;
        do {
            t51 = *(int *)((t50 + 0x0));
            t50 = (t50 + 0x4);
            if (t51 != 0) {
                if (t51 != 6) {
                    if (t51 != 12) {
                        if (t51 != 18) {
                            t52 = *(int *)0xC2FA538;
                            *(unsigned char *)(((t51 + (0xF90 + t52)) + 0x0)) = 0x65;
                        } else {
                            t53 = *(int *)0xC2FA538;
                            *(unsigned char *)(((t51 + (0xF90 + t53)) + 0x0)) = 0x72;
                        }
                    } else {
                        t57 = *(int *)0xC2FA538;
                        *(unsigned char *)(((t51 + (0xF90 + t57)) + 0x0)) = 0x72;
                    }
                } else {
                    t61 = *(int *)0xC2FA538;
                    *(unsigned char *)(((t51 + (0xF90 + t61)) + 0x0)) = 0x72;
                }
            } else {
                t65 = *(int *)0xC2FA538;
                *(unsigned char *)(((t51 + (0xF90 + t65)) + 0x0)) = 0x72;
            }
            t49 = (t49 + 0x1);
        } while ((int)t49 < (int)a7);
    }
    t74 = 0xC176930;
    t75 = 0xC176930;
    do {
        t76 = *(int *)0xC2FA538;
        t77 = *(int *)((t75 + 0x0));
        t78 = *(signed char *)((((0xF90 + t76) + t77) + 0x0));
        if (t78 != 0) {
            t79 = *(int *)((t74 + 0x0));
            mpdrv_set_dreq_ns();
        }
        t75 = (t75 + 0x4);
        t74 = (t74 + 0x4);
    } while ((unsigned int)t75 < (unsigned int)0xC176940);
    mpdrv_set_end_ns();
    t83 = *(int *)0xC2FA538;
    *(unsigned int *)((t83 + 0xFC0)) = 0x1;
    t84 = *(int *)0xC2FA538;
    t85 = *(int *)((t84 + 0x10F4));
    *(unsigned int *)((t85 + 0x8C)) = 0x6155404F;
    t86 = *(int *)0xC2FA538;
    t87 = *(int *)((t86 + 0x10F4));
    *(unsigned int *)((t87 + 0x10)) = 0x0;
    t88 = *(int *)0xC2FA538;
    t89 = *(int *)((t88 + 0x10F4));
    t90 = *(int *)((t88 + 0x10D0));
    t91 = *(int *)((t88 + 0x10C0));
    *(unsigned int *)((t89 + 0x80)) = (t91 | t90);
    t92 = *(int *)0xC2FA538;
    t93 = *(int *)((t92 + 0x10F4));
    *(unsigned int *)((t93 + 0x14)) = 0x1;
    return 0x0;
}




int nlObjPutLoadTextureOnce_Sub(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t139;
    int t1;
    int t136;
    int t2;
    int t3;
    int t4;
    int t5;
    int t33;
    int t8;
    int t6;
    int t7;
    int t9;
    int t10;
    int t11;
    int t13;
    int t14;
    int t15;
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
    int t29;
    int t32;
    int t34;
    int t35;
    int t36;
    int t37;
    int t40;
    int t42;
    int t43;
    int t44;
    int t45;
    int t49;
    int t50;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t73;
    int t67;
    int t69;
    int t70;
    int t76;
    int t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t95;
    int t96;
    int t97;
    int t98;
    int t105;
    int t99;
    int t101;
    int t102;
    int t108;
    int t131;
    int t132;
    int t133;
    int t134;
    int t135;
    int t142;
    int t143;
    int t144;
    int t172;
    int t147;
    int t145;
    int t146;
    int t148;
    int t149;
    int t150;
    int t151;
    int t152;
    int t153;
    int t156;
    int t157;
    int t158;
    int t159;
    int t160;
    int t161;
    int t162;
    int t163;
    int t164;
    int t165;
    int t166;
    int t167;
    int t171;
    int t173;
    int t174;
    int t175;
    int t176;
    int t180;
    int t181;
    int t182;
    int t183;
    int t188;
    int t189;
    int t194;
    int t195;
    int t196;
    int t197;
    int t198;
    int t199;
    int t200;
    int t201;
    int t202;
    int t203;
    int t204;
    int t205;
    int t206;
    int t213;
    int t207;
    int t209;
    int t210;
    int t216;
    int t229;
    int t230;
    int t231;
    int t232;
    int t233;
    int t234;
    int t235;
    int t236;
    int t237;
    int t238;
    int t239;
    int t246;
    int t240;
    int t242;
    int t243;
    int t249;
    int t275;
    int t276;
    int t277;
    int t278;
    int t279;
    int t280;
    int t75;
    int t107;
    int t215;
    int t248;
    int stk[15] = {0};

    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    *(unsigned int *)((a7 + 0x0)) = 0x0;
    if (a6 == 0) {
        t0 = *(int *)((a4 + 0x0));
        t139 = 0x0;
        if ((int)t0 >= 0) {
            t1 = *(int *)((a4 + 0x18));
            t136 = 0x0;
            if (t1 != 0) {
                t2 = t0;
                t3 = (a4 + 0x18);
                for (;;) {
                    t4 = *(int *)((t3 + 0x20));
                    t5 = t3;
                    t3 = (t3 + 0x50);
                    t33 = t4;
                    if ((int)t4 >= 0) {
                        t8 = t4;
                        if (a8 == 1) {
                            t2 = t4;
                            t6 = *(int *)(((int)stk + 16));
                            t2 = (t2 << 2);
                            t2 = (t2 << 2);
                            t2 = (t2 + t6);
                            t7 = *(int *)((t2 + 0xC));
                            t8 = t7;
                        }
                        t9 = *(int *)0xC2B3184;
                        *(unsigned int *)(((int)stk + 8)) = (((t8 + t9) << 2) << 1);
                        t10 = *(int *)0xC2AEC84;
                        t2 = t10;
                        t11 = *(int *)((((((t8 + t9) << 2) << 1) + t2) + 0x0));
                        t2 = t11;
                        if (t2 == 0) {
                            t13 = *(int *)(((int)stk + 8));
                            t2 = t13;
                            t14 = *(int *)0xC2AEC84;
                            t2 = (t2 + t14);
                            t15 = nlCommonTextureGetNextTextureIndex();
                            *(unsigned int *)(((0x4 + t2) + 0x0)) = t15;
                        }
                        t18 = *(int *)(((int)stk + 8));
                        t2 = t18;
                        t19 = *(int *)0xC2AEC84;
                        t2 = (t2 + t19);
                        t20 = *(int *)((t2 + 0x0));
                        *(unsigned int *)((t2 + 0x0)) = (t20 + 0x1);
                        t21 = *(int *)0xC2AEC84;
                        t22 = *(int *)(((int)stk + 8));
                        t2 = 0xC2B29C0;
                        t23 = *(int *)(((t22 + t21) + 0x4));
                        t24 = *(int *)((t2 + 0x0));
                        t25 = *(int *)((((t23 * 0x3C) + t24) + 0x2C));
                        if (t25 == 0) {
                            t26 = *(int *)(((int)stk + 16));
                            *(unsigned int *)(((int)stk + 12)) = (((t4 << 2) << 2) + t26);
                            t27 = *(int *)(((((t4 << 2) << 2) + t26) + 0x8));
                            t28 = nlLoadTextureMem((((t4 << 2) << 2) + t26), t23, t27);
                            t29 = *(int *)(((int)stk + 20));
                            t2 = t29;
                            t2 = (t2 | t28);
                            *(unsigned int *)(((int)stk + 20)) = t2;
                            nlCreateTextureParam(t23);
                            t2 = 0x1;
                            *(unsigned int *)((((t23 * 0x3C) + t24) + 0x38)) = t23;
                            *(unsigned int *)(((int)stk + 12)) = t2;
                        }
                        t32 = *(int *)((((t23 * 0x3C) + t24) + 0x2C));
                        *(unsigned int *)((((t23 * 0x3C) + t24) + 0x2C)) = (t32 + 0x1);
                        t33 = t23;
                    }
                    if ((int)t4 < 0) {
                        t34 = *(int *)((t5 + 0x0));
                        *(unsigned int *)((t5 + 0x0)) = (t34 | 0x1);
                        t35 = *(int *)((t5 + 0x4));
                        t2 = t35;
                        t2 = (t2 | 0x400000);
                        *(unsigned int *)((t5 + 0x4)) = t2;
                    }
                    t36 = *(int *)((t5 + 0x0));
                    t37 = *(int *)0xC14A650;
                    t2 = t37;
                    t2 = (t2 << 16);
                    t2 = (t2 | 0x8C0000);
                    *(unsigned int *)((t5 + 0x0)) = ((t36 & 0xFFFCFFFF) | t2);
                    if ((int)t33 >= 0) {
                        nlSetTextureParameter(t5, t33);
                    } else {
                        t2 = 0xC073FD0;
                        t40 = ((int (*)(int))(t2))(t5);
                    }
                    t2 = 0xC14A644;
                    t42 = *(int *)((t2 + 0x0));
                    if (t42 != 0) {
                        t43 = *(int *)((t5 + 0xC));
                        if ((0x7 & ((unsigned int)t43 >> 27)) != 5) {
                            if ((0x7 & ((unsigned int)t43 >> 27)) == 6) {
                                t44 = *(int *)((t5 + 0xC));
                                t2 = t44;
                                t45 = *(int *)((t5 + 0x3C));
                                t2 = (t2 & 0xF81FFFFF);
                                t2 = (t2 | (t45 << 21));
                                *(unsigned int *)((t5 + 0xC)) = t2;
                            }
                        } else {
                            t49 = *(int *)((t5 + 0xC));
                            t2 = t49;
                            t50 = *(int *)((t5 + 0x3C));
                            t2 = (t2 & 0xF81FFFFF);
                            t2 = (t2 | (t50 << 21));
                            *(unsigned int *)((t5 + 0xC)) = t2;
                        }
                    } else {
                        t54 = *(int *)((t5 + 0xC));
                        t55 = *(int *)0xC2B3568;
                        if (t55 != 0) {
                            if ((0x7 & ((unsigned int)t54 >> 27)) != 5) {
                                if ((0x7 & ((unsigned int)t54 >> 27)) == 6) {
                                    t56 = *(int *)((t5 + 0x3C));
                                    t57 = *(short *)0xC2B7BC4;
                                    if ((int)t56 < (int)t57) {
                                        t2 = t56;
                                        t2 = (t2 << 2);
                                        t58 = *(int *)0xC2B7BD8;
                                        t2 = (t2 << 1);
                                        t59 = *(short *)(((t58 + t2) + 0x4));
                                        if (t59 != 0) {
                                            t60 = *(short *)(((t58 + t2) + 0x4));
                                            *(unsigned short *)(((t58 + t2) + 0x4)) = (t60 + 0x1);
                                            t61 = *(short *)(((t58 + t2) + 0x0));
                                            t75 = t61;
                                        } else {
                                            t62 = *(signed char *)((((((t56 << 1) + t56) << 2) + t55) + 0x2));
                                            *(unsigned char *)(((t58 + t2) + 0x2)) = t62;
                                            t63 = *(int *)((((((t56 << 1) + t56) << 2) + t55) + 0x8));
                                            *(unsigned char *)(((t58 + t2) + 0x3)) = ((int)(t63 + 0xF) >> 4);
                                            *(unsigned short *)(((t58 + t2) + 0x4)) = 0x1;
                                            *(unsigned short *)(((t58 + t2) + 0x6)) = t56;
                                            t64 = *(int *)((((((t56 << 1) + t56) << 2) + t55) + 0x8));
                                            *(unsigned int *)(((int)stk + 8)) = t64;
                                            t65 = *(short *)((((((t56 << 1) + t56) << 2) + t55) + 0x2));
                                            t66 = nlSearchPalette(t65, t64);
                                            t73 = 0x0;
                                            if ((int)t66 >= 0) {
                                                *(unsigned short *)(((t58 + t2) + 0x0)) = t66;
                                                t67 = *(int *)(((int)stk + 8));
                                                FUN_0c074200(t66, t67);
                                                t69 = *(int *)(((int)stk + 8));
                                                t70 = *(int *)((((((t56 << 1) + t56) << 2) + t55) + 0x4));
                                                FUN_0c0770f0(((t66 << 2) << 2), t70, t69);
                                                t73 = t66;
                                            }
                                            t75 = t73;
                                        }
                                        t76 = *(int *)((t5 + 0xC));
                                        t2 = t76;
                                        t2 = (t2 & 0xF81FFFFF);
                                        t2 = (t2 | (t75 << 21));
                                        *(unsigned int *)((t5 + 0xC)) = t2;
                                    }
                                }
                            } else {
                                t88 = *(int *)((t5 + 0x3C));
                                t89 = *(short *)0xC2B7BC4;
                                if ((int)t88 < (int)t89) {
                                    t2 = t88;
                                    t2 = (t2 << 2);
                                    t90 = *(int *)0xC2B7BD8;
                                    t2 = (t2 << 1);
                                    t91 = *(short *)(((t90 + t2) + 0x4));
                                    if (t91 != 0) {
                                        t92 = *(short *)(((t90 + t2) + 0x4));
                                        *(unsigned short *)(((t90 + t2) + 0x4)) = (t92 + 0x1);
                                        t93 = *(short *)(((t90 + t2) + 0x0));
                                        t107 = t93;
                                    } else {
                                        t94 = *(signed char *)((((((t88 << 1) + t88) << 2) + t55) + 0x2));
                                        *(unsigned char *)(((t90 + t2) + 0x2)) = t94;
                                        t95 = *(int *)((((((t88 << 1) + t88) << 2) + t55) + 0x8));
                                        *(unsigned char *)(((t90 + t2) + 0x3)) = ((int)(t95 + 0xF) >> 4);
                                        *(unsigned short *)(((t90 + t2) + 0x4)) = 0x1;
                                        *(unsigned short *)(((t90 + t2) + 0x6)) = t88;
                                        t96 = *(int *)((((((t88 << 1) + t88) << 2) + t55) + 0x8));
                                        *(unsigned int *)(((int)stk + 8)) = t96;
                                        t97 = *(short *)((((((t88 << 1) + t88) << 2) + t55) + 0x2));
                                        t98 = nlSearchPalette(t97, t96);
                                        t105 = 0x0;
                                        if ((int)t98 >= 0) {
                                            *(unsigned short *)(((t90 + t2) + 0x0)) = t98;
                                            t99 = *(int *)(((int)stk + 8));
                                            FUN_0c074200(t98, t99);
                                            t101 = *(int *)(((int)stk + 8));
                                            t102 = *(int *)((((((t88 << 1) + t88) << 2) + t55) + 0x4));
                                            FUN_0c0770f0(((t98 << 2) << 2), t102, t101);
                                            t105 = t98;
                                        }
                                        t107 = t105;
                                    }
                                    t108 = *(int *)((t5 + 0xC));
                                    t2 = t108;
                                    t2 = (t2 & 0xF81FFFFF);
                                    t2 = (t2 | (t107 << 21));
                                    *(unsigned int *)((t5 + 0xC)) = t2;
                                }
                            }
                        }
                    }
                    FUN_0c081650();
                    t131 = *(int *)((t5 + 0x4C));
                    t2 = t131;
                    t3 = (t3 + t2);
                    t132 = *(int *)((t3 + 0x0));
                    if (t132 == 0) break;
                    t133 = *(int *)(((int)stk + 12));
                    t2 = t133;
                    if (t2 == 0) continue;
                    *(unsigned int *)((a7 + 0x0)) = t3;
                    t134 = *(int *)(((int)stk + 20));
                    return t134;
                }
                *(unsigned int *)((a7 + 0x0)) = 0x0;
                t135 = *(int *)(((int)stk + 20));
                t136 = t135;
            }
            t139 = t136;
        }
        t280 = t139;
    } else {
        t142 = a6;
        for (;;) {
            t143 = *(int *)((t142 + 0x20));
            t144 = t142;
            t142 = (t142 + 0x50);
            t172 = t143;
            if ((int)t143 >= 0) {
                t147 = t143;
                if (a8 == 1) {
                    t145 = *(int *)(((int)stk + 16));
                    t146 = *(int *)(((((t143 << 2) << 2) + t145) + 0xC));
                    t147 = t146;
                }
                t148 = *(int *)0xC2B3184;
                *(unsigned int *)(((int)stk + 8)) = (((t147 + t148) << 2) << 1);
                t149 = *(int *)0xC2AEC84;
                t150 = *(int *)((((((t147 + t148) << 2) << 1) + t149) + 0x0));
                if (t150 == 0) {
                    t151 = *(int *)(((int)stk + 8));
                    t152 = *(int *)0xC2AEC84;
                    t153 = nlCommonTextureGetNextTextureIndex();
                    *(unsigned int *)(((0x4 + (t151 + t152)) + 0x0)) = t153;
                }
                t156 = *(int *)(((int)stk + 8));
                t157 = *(int *)0xC2AEC84;
                t158 = *(int *)(((t156 + t157) + 0x0));
                *(unsigned int *)(((t156 + t157) + 0x0)) = (t158 + 0x1);
                t159 = *(int *)0xC2AEC84;
                t160 = *(int *)(((int)stk + 8));
                t161 = *(int *)(((t160 + t159) + 0x4));
                t162 = *(int *)0xC2B29C0;
                t163 = *(int *)((((t161 * 0x3C) + t162) + 0x2C));
                if (t163 == 0) {
                    t164 = *(int *)(((int)stk + 16));
                    *(unsigned int *)(((int)stk + 12)) = (((t143 << 2) << 2) + t164);
                    t165 = *(int *)(((((t143 << 2) << 2) + t164) + 0x8));
                    t166 = nlLoadTextureMem((((t143 << 2) << 2) + t164), t161, t165);
                    t167 = *(int *)(((int)stk + 20));
                    *(unsigned int *)(((int)stk + 20)) = (t167 | t166);
                    nlCreateTextureParam(t161);
                    *(unsigned int *)((((t161 * 0x3C) + t162) + 0x38)) = t161;
                    *(unsigned int *)(((int)stk + 12)) = 0x1;
                }
                t171 = *(int *)((((t161 * 0x3C) + t162) + 0x2C));
                *(unsigned int *)((((t161 * 0x3C) + t162) + 0x2C)) = (t171 + 0x1);
                t172 = t161;
            }
            if ((int)t143 < 0) {
                t173 = *(int *)((t144 + 0x0));
                *(unsigned int *)((t144 + 0x0)) = (t173 | 0x1);
                t174 = *(int *)((t144 + 0x4));
                *(unsigned int *)((t144 + 0x4)) = (t174 | 0x400000);
            }
            t175 = *(int *)((t144 + 0x0));
            t176 = *(int *)0xC14A650;
            *(unsigned int *)((t144 + 0x0)) = ((t175 & 0xFFFCFFFF) | ((t176 << 16) | 0x8C0000));
            if ((int)t172 >= 0) {
                nlSetTextureParameter(t144, t172);
            } else {
                nlSetDummyTextureParameter(t144);
            }
            t180 = *(int *)0xC14A644;
            if (t180 != 0) {
                t181 = *(int *)((t144 + 0xC));
                if ((0x7 & ((unsigned int)t181 >> 27)) != 5) {
                    if ((0x7 & ((unsigned int)t181 >> 27)) == 6) {
                        t182 = *(int *)((t144 + 0xC));
                        t183 = *(int *)((t144 + 0x3C));
                        *(unsigned int *)((t144 + 0xC)) = ((t182 & 0xF81FFFFF) | (t183 << 21));
                    }
                } else {
                    t188 = *(int *)((t144 + 0xC));
                    t189 = *(int *)((t144 + 0x3C));
                    *(unsigned int *)((t144 + 0xC)) = ((t188 & 0xF81FFFFF) | (t189 << 21));
                }
            } else {
                t194 = *(int *)((t144 + 0xC));
                t195 = *(int *)0xC2B3568;
                if (t195 != 0) {
                    if ((0x7 & ((unsigned int)t194 >> 27)) != 5) {
                        if ((0x7 & ((unsigned int)t194 >> 27)) == 6) {
                            t196 = *(int *)((t144 + 0x3C));
                            t197 = *(short *)0xC2B7BC4;
                            if ((int)t196 < (int)t197) {
                                t198 = *(int *)0xC2B7BD8;
                                t199 = *(short *)(((t198 + ((t196 << 2) << 1)) + 0x4));
                                if (t199 != 0) {
                                    t200 = *(short *)(((t198 + ((t196 << 2) << 1)) + 0x4));
                                    *(unsigned short *)(((t198 + ((t196 << 2) << 1)) + 0x4)) = (t200 + 0x1);
                                    t201 = *(short *)(((t198 + ((t196 << 2) << 1)) + 0x0));
                                    t215 = t201;
                                } else {
                                    t202 = *(signed char *)((((((t196 << 1) + t196) << 2) + t195) + 0x2));
                                    *(unsigned char *)(((t198 + ((t196 << 2) << 1)) + 0x2)) = t202;
                                    t203 = *(int *)((((((t196 << 1) + t196) << 2) + t195) + 0x8));
                                    *(unsigned char *)(((t198 + ((t196 << 2) << 1)) + 0x3)) = ((int)(t203 + 0xF) >> 4);
                                    *(unsigned short *)(((t198 + ((t196 << 2) << 1)) + 0x4)) = 0x1;
                                    *(unsigned short *)(((t198 + ((t196 << 2) << 1)) + 0x6)) = t196;
                                    t204 = *(int *)((((((t196 << 1) + t196) << 2) + t195) + 0x8));
                                    *(unsigned int *)(((int)stk + 8)) = t204;
                                    t205 = *(short *)((((((t196 << 1) + t196) << 2) + t195) + 0x2));
                                    t206 = nlSearchPalette(t205, t204);
                                    t213 = 0x0;
                                    if ((int)t206 >= 0) {
                                        *(unsigned short *)(((t198 + ((t196 << 2) << 1)) + 0x0)) = t206;
                                        t207 = *(int *)(((int)stk + 8));
                                        FUN_0c074200(t206, t207);
                                        t209 = *(int *)(((int)stk + 8));
                                        t210 = *(int *)((((((t196 << 1) + t196) << 2) + t195) + 0x4));
                                        FUN_0c0770f0(((t206 << 2) << 2), t210, t209);
                                        t213 = t206;
                                    }
                                    t215 = t213;
                                }
                                t216 = *(int *)((t144 + 0xC));
                                *(unsigned int *)((t144 + 0xC)) = ((t216 & 0xF81FFFFF) | (t215 << 21));
                            }
                        }
                    } else {
                        t229 = *(int *)((t144 + 0x3C));
                        t230 = *(short *)0xC2B7BC4;
                        if ((int)t229 < (int)t230) {
                            t231 = *(int *)0xC2B7BD8;
                            t232 = *(short *)(((t231 + ((t229 << 2) << 1)) + 0x4));
                            if (t232 != 0) {
                                t233 = *(short *)(((t231 + ((t229 << 2) << 1)) + 0x4));
                                *(unsigned short *)(((t231 + ((t229 << 2) << 1)) + 0x4)) = (t233 + 0x1);
                                t234 = *(short *)(((t231 + ((t229 << 2) << 1)) + 0x0));
                                t248 = t234;
                            } else {
                                t235 = *(signed char *)((((((t229 << 1) + t229) << 2) + t195) + 0x2));
                                *(unsigned char *)(((t231 + ((t229 << 2) << 1)) + 0x2)) = t235;
                                t236 = *(int *)((((((t229 << 1) + t229) << 2) + t195) + 0x8));
                                *(unsigned char *)(((t231 + ((t229 << 2) << 1)) + 0x3)) = ((int)(t236 + 0xF) >> 4);
                                *(unsigned short *)(((t231 + ((t229 << 2) << 1)) + 0x4)) = 0x1;
                                *(unsigned short *)(((t231 + ((t229 << 2) << 1)) + 0x6)) = t229;
                                t237 = *(int *)((((((t229 << 1) + t229) << 2) + t195) + 0x8));
                                *(unsigned int *)(((int)stk + 8)) = t237;
                                t238 = *(short *)((((((t229 << 1) + t229) << 2) + t195) + 0x2));
                                t239 = nlSearchPalette(t238, t237);
                                t246 = 0x0;
                                if ((int)t239 >= 0) {
                                    *(unsigned short *)(((t231 + ((t229 << 2) << 1)) + 0x0)) = t239;
                                    t240 = *(int *)(((int)stk + 8));
                                    FUN_0c074200(t239, t240);
                                    t242 = *(int *)(((int)stk + 8));
                                    t243 = *(int *)((((((t229 << 1) + t229) << 2) + t195) + 0x4));
                                    FUN_0c0770f0(((t239 << 2) << 2), t243, t242);
                                    t246 = t239;
                                }
                                t248 = t246;
                            }
                            t249 = *(int *)((t144 + 0xC));
                            *(unsigned int *)((t144 + 0xC)) = ((t249 & 0xF81FFFFF) | (t248 << 21));
                        }
                    }
                }
            }
            FUN_0c081650();
            t275 = *(int *)((t144 + 0x4C));
            t142 = (t142 + t275);
            t276 = *(int *)((t142 + 0x0));
            if (t276 == 0) break;
            t277 = *(int *)(((int)stk + 12));
            if (t277 == 0) continue;
            *(unsigned int *)((a7 + 0x0)) = t142;
            t278 = *(int *)(((int)stk + 20));
            return t278;
        }
        *(unsigned int *)((a7 + 0x0)) = 0x0;
        t279 = *(int *)(((int)stk + 20));
        t280 = t279;
    }
    return t280;
}

int FUN_0c172c3c(int a4, int a5, int a6, int a7, int a8)
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
    int t80;
    int t13;
    int t72;
    int t14;
    int t15;
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
    int t29;
    int t30;
    int t32;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t51;
    int t52;
    int t53;
    int t55;
    int t56;
    int t57;
    int t58;
    int t61;
    int t62;
    int t63;
    int t64;
    int stk[11] = {0};

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x0));
    t2 = *(signed char *)((a4 + 0x2));
    t3 = *(signed char *)((a4 + 0x3));
    *(unsigned int *)(((int)stk + 12)) = (((((unsigned char)t0 << 8) | ((unsigned char)t2 << 16)) | (((unsigned char)t3 << 16) << 8)) | (unsigned char)t1);
    t4 = *(signed char *)(((a4 + 0x4) + 0x1));
    t5 = *(signed char *)(((a4 + 0x4) + 0x2));
    t6 = *(signed char *)(((a4 + 0x4) + 0x3));
    t7 = *(signed char *)(((a4 + 0x4) + 0x0));
    *(unsigned int *)(((int)stk + 8)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)(((((unsigned char)t4 << 8) | ((unsigned char)t5 << 16)) | (((unsigned char)t6 << 16) << 8)) | (unsigned char)t7) >> 16) >> 8) | (((int)(((((unsigned char)t4 << 8) | ((unsigned char)t5 << 16)) | (((unsigned char)t6 << 16) << 8)) | (unsigned char)t7) >> 8) & 0xFF00)) | (((((((unsigned char)t4 << 8) | ((unsigned char)t5 << 16)) | (((unsigned char)t6 << 16) << 8)) | (unsigned char)t7) << 8) & 0xFF0000)) | (((((((unsigned char)t4 << 8) | ((unsigned char)t5 << 16)) | (((unsigned char)t6 << 16) << 8)) | (unsigned char)t7) << 16) << 8));
    t8 = *(signed char *)((((a4 + 0x4) + 0x4) + 0x1));
    t9 = *(signed char *)((((a4 + 0x4) + 0x4) + 0x2));
    t10 = *(signed char *)((((a4 + 0x4) + 0x4) + 0x3));
    t11 = *(signed char *)((((a4 + 0x4) + 0x4) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = (((((unsigned char)t8 << 8) | ((unsigned char)t9 << 16)) | (((unsigned char)t10 << 16) << 8)) | (unsigned char)t11);
    t12 = *(int *)(((int)stk + 12));
    t80 = 0x0;
    if (t12 == 0x4D524F46) {
        t13 = *(int *)(((int)stk + 4));
        t72 = 0x0;
        if (t13 == 0x46464941) {
            t14 = *(int *)(((int)stk + 8));
            if ((unsigned int)(((a4 + 0x4) + 0x4) + 0x4) >= (unsigned int)((t14 + (((a4 + 0x4) + 0x4) + 0x4)) - 4)) {
                t15 = *(int *)(((int)stk + 12));
                t64 = t15;
            } else {
                t16 = (((a4 + 0x4) + 0x4) + 0x4);
                t17 = 0x0;
                t18 = 0x0;
                for (;;) {
                    t19 = *(signed char *)((t16 + 0x1));
                    t20 = *(signed char *)((t16 + 0x0));
                    t21 = *(signed char *)((t16 + 0x2));
                    t22 = *(signed char *)((t16 + 0x3));
                    t16 = (t16 + 0x4);
                    *(unsigned int *)(((int)stk + 8)) = (((((unsigned char)t19 << 8) | ((unsigned char)t21 << 16)) | (((unsigned char)t22 << 16) << 8)) | (unsigned char)t20);
                    t23 = *(signed char *)((t16 + 0x1));
                    t24 = *(signed char *)((t16 + 0x0));
                    t25 = *(signed char *)((t16 + 0x2));
                    t26 = *(signed char *)((t16 + 0x3));
                    *(unsigned int *)(((int)stk + 4)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)(((((unsigned char)t23 << 8) | ((unsigned char)t25 << 16)) | (((unsigned char)t26 << 16) << 8)) | (unsigned char)t24) >> 16) >> 8) | (((int)(((((unsigned char)t23 << 8) | ((unsigned char)t25 << 16)) | (((unsigned char)t26 << 16) << 8)) | (unsigned char)t24) >> 8) & 0xFF00)) | (((((((unsigned char)t23 << 8) | ((unsigned char)t25 << 16)) | (((unsigned char)t26 << 16) << 8)) | (unsigned char)t24) << 8) & 0xFF0000)) | (((((((unsigned char)t23 << 8) | ((unsigned char)t25 << 16)) | (((unsigned char)t26 << 16) << 8)) | (unsigned char)t24) << 16) << 8));
                    t16 = (t16 + 0x4);
                    if ((((((unsigned char)t19 << 8) | ((unsigned char)t21 << 16)) | (((unsigned char)t22 << 16) << 8)) | (unsigned char)t20) != 0x4D4D4F43) {
                        if ((((((unsigned char)t19 << 8) | ((unsigned char)t21 << 16)) | (((unsigned char)t22 << 16) << 8)) | (unsigned char)t20) == 0x444E5353) {
                            if (t18 == 0) {
                                t27 = *(signed char *)((t16 + 0x1));
                                t28 = *(signed char *)((t16 + 0x0));
                                t18 = ((unsigned char)t27 << 8);
                                t29 = *(signed char *)((t16 + 0x2));
                                t18 = (t18 | ((unsigned char)t29 << 16));
                                t30 = *(signed char *)((t16 + 0x3));
                                t18 = (t18 | (((unsigned char)t30 << 16) << 8));
                                t18 = (t18 | (unsigned char)t28);
                                t32 = (t18 << 16);
                                t18 = (((unsigned char)((unsigned int)((unsigned int)t18 >> 16) >> 8) | (((unsigned int)t18 >> 8) & 0xFF00)) | ((t18 << 8) & 0xFF0000));
                                t16 = (t16 + 0x4);
                                t18 = (t18 | (t32 << 8));
                                t18 = (t18 + t16);
                                *(unsigned int *)(((int)stk + 12)) = t18;
                                t18 = 0x1;
                                if (t17 != 0) {
                                    if (t18 != 0) {
                                        t34 = *(int *)(((int)stk + 12));
                                        return t34;
                                    }
                                    if ((unsigned int)t16 < (unsigned int)((t14 + (((a4 + 0x4) + 0x4) + 0x4)) - 4)) continue;
                                    t35 = *(int *)(((int)stk + 12));
                                    return t35;
                                }
                                if ((unsigned int)t16 < (unsigned int)((t14 + (((a4 + 0x4) + 0x4) + 0x4)) - 4)) continue;
                                t36 = *(int *)(((int)stk + 12));
                                return t36;
                            }
                            if ((unsigned int)t16 < (unsigned int)((t14 + (((a4 + 0x4) + 0x4) + 0x4)) - 4)) continue;
                            t37 = *(int *)(((int)stk + 12));
                            return t37;
                        }
                        t38 = *(int *)(((int)stk + 4));
                        t16 = (t16 + ((t38 + 0x1) & 0xFFFFFFFE));
                        if ((unsigned int)t16 < (unsigned int)((t14 + (((a4 + 0x4) + 0x4) + 0x4)) - 4)) continue;
                        t39 = *(int *)(((int)stk + 12));
                        return t39;
                    }
                    if (t17 != 0) {
                        if ((unsigned int)t16 < (unsigned int)((t14 + (((a4 + 0x4) + 0x4) + 0x4)) - 4)) continue;
                        t40 = *(int *)(((int)stk + 12));
                        return t40;
                    }
                    t41 = *(int *)(((int)stk + 4));
                    t17 = 0x12;
                    if ((int)t41 < (int)t17) break;
                    t42 = *(signed char *)((t16 + 0x1));
                    t43 = *(signed char *)((t16 + 0x0));
                    t16 = (t16 + 0x2);
                    t17 = (((unsigned char)t42 << 8) | (unsigned char)t43);
                    *(unsigned int *)((a6 + 0x0)) = ((unsigned char)((int)(((unsigned char)t42 << 8) | (unsigned char)t43) >> 8) | (((((unsigned char)t42 << 8) | (unsigned char)t43) << 8) & 0xFF00));
                    t44 = *(signed char *)((t16 + 0x1));
                    t45 = *(signed char *)((t16 + 0x0));
                    t46 = *(signed char *)((t16 + 0x2));
                    t47 = *(signed char *)((t16 + 0x3));
                    t17 = (((((unsigned char)t44 << 8) | ((unsigned char)t46 << 16)) | (((unsigned char)t47 << 16) << 8)) | (unsigned char)t45);
                    t16 = (t16 + 0x4);
                    *(unsigned int *)((a8 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)(((((unsigned char)t44 << 8) | ((unsigned char)t46 << 16)) | (((unsigned char)t47 << 16) << 8)) | (unsigned char)t45) >> 16) >> 8) | (((int)t17 >> 8) & 0xFF00)) | ((t17 << 8) & 0xFF0000)) | ((t17 << 16) << 8));
                    t48 = *(signed char *)((t16 + 0x1));
                    t49 = *(signed char *)((t16 + 0x0));
                    t17 = (((unsigned char)t48 << 8) | (unsigned char)t49);
                    t16 = (t16 + 0x2);
                    *(unsigned int *)((a7 + 0x0)) = ((unsigned char)((int)(((unsigned char)t48 << 8) | (unsigned char)t49) >> 8) | (((((unsigned char)t48 << 8) | (unsigned char)t49) << 8) & 0xFF00));
                    t51 = *(signed char *)((t16 + 0x1));
                    t52 = *(signed char *)((t16 + 0x0));
                    t16 = (t16 + 0x2);
                    t17 = (unsigned short)(((unsigned char)t51 << 8) | (unsigned char)t52);
                    *(unsigned short *)(((int)stk + 4)) = (((unsigned char)t51 << 8) | (unsigned char)t52);
                    t53 = *(signed char *)((t16 + 0x1));
                    t55 = t17;
                    t17 = (unsigned char)((int)t17 >> 8);
                    t56 = *(signed char *)((t16 + 0x0));
                    *(unsigned short *)(((int)stk + 8)) = (((unsigned char)t53 << 8) | (unsigned char)t56);
                    t17 = (t17 | ((t55 << 8) & 0xFF00));
                    *(unsigned int *)(((int)stk + 4)) = (unsigned short)(((unsigned char)t53 << 8) | (unsigned char)t56);
                    t57 = *(int *)(((int)stk + 4));
                    t17 = (unsigned short)t17;
                    *(unsigned short *)(((int)stk + 4)) = ((unsigned char)((int)(unsigned short)(((unsigned char)t53 << 8) | (unsigned char)t56) >> 8) | ((t57 << 8) & 0xFF00));
                    t58 = *(short *)(((int)stk + 4));
                    t16 = (t16 + 0x8);
                    *(unsigned int *)((a5 + 0x0)) = (((int)(-(0x400E - t17)) >= 0) ? ((unsigned short)t58 << ((-(0x400E - t17)) & 31)) : ((-(int)(-(0x400E - t17)) & 31) ? ((unsigned int)(unsigned short)t58 >> (-(int)(-(0x400E - t17)) & 31)) : 0));
                    t17 = 0x1;
                    if (t17 != 0) {
                        if (t18 != 0) {
                            t61 = *(int *)(((int)stk + 12));
                            return t61;
                        }
                        if ((unsigned int)t16 < (unsigned int)((t14 + (((a4 + 0x4) + 0x4) + 0x4)) - 4)) continue;
                        t62 = *(int *)(((int)stk + 12));
                        return t62;
                    }
                    if ((unsigned int)t16 < (unsigned int)((t14 + (((a4 + 0x4) + 0x4) + 0x4)) - 4)) continue;
                    t63 = *(int *)(((int)stk + 12));
                    return t63;
                }
                t64 = 0x0;
            }
            t72 = t64;
        }
        t80 = t72;
    }
    return t80;
}

int FUN_0c157852(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t14;
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
    int t122;
    int t18;
    int t21;
    int t22;
    int t23;
    int t24;
    int t27;
    int t29;
    int t31;
    int t32;
    int t33;
    int t34;
    int t52;
    int t35;
    int t36;
    int t37;
    int t38;
    int t40;
    int t41;
    int t42;
    int t43;
    int t46;
    int t48;
    int t50;
    int t51;
    int t54;
    int t55;
    int t56;
    int t72;
    int t57;
    int t58;
    int t60;
    int t61;
    int t62;
    int t63;
    int t66;
    int t68;
    int t70;
    int t71;
    int t74;
    int t103;
    int t75;
    int t77;
    int t78;
    int t80;
    int t81;
    int t82;
    int t83;
    int t84;
    int t85;
    int t87;
    int t88;
    int t89;
    int t90;
    int t93;
    int t95;
    int t97;
    int t98;
    int t117;
    int t112;
    int t107;
    int t99;
    int stk[13] = {0};

    *(unsigned short *)(((int)stk + 8)) = a4;
    t0 = ((~(((~a6) + 0x1) & 0x1F)) + 0x1);
    if ((int)a6 >= 0) {
        t0 = (a6 & 0x1F);
    }
    t1 = a6;
    if (t0 != 0) {
        t1 = (a6 + (0x20 - t0));
    }
    t2 = *(short *)(((int)stk + 8));
    t3 = *(int *)((((((t2 << 2) + t2) << 2) + 0xC177FBC) + 0x8));
    t14 = 0x0;
    if (t3 != 0) {
        t4 = t2;
        t5 = t3;
        t6 = 0x0;
        do {
            t7 = *(int *)((t5 + 0xC));
            if ((int)t7 <= (int)a5) {
                t8 = *(int *)((t5 + 0x10));
                t4 = t8;
                t4 = (t4 + t7);
                if ((int)t4 > (int)a5) {
                    if ((int)t7 <= (int)(a5 + a6)) {
                        t9 = *(int *)((t5 + 0x10));
                        if ((int)(t9 + t7) >= (int)(a5 + a6)) {
                            t6 = t5;
                            t5 = 0x0;
                        } else {
                            t10 = *(int *)((t5 + 0x8));
                            t5 = t10;
                        }
                    } else {
                        t11 = *(int *)((t5 + 0x8));
                        t5 = t11;
                    }
                } else {
                    t12 = *(int *)((t5 + 0x8));
                    t5 = t12;
                }
            } else {
                t13 = *(int *)((t5 + 0x8));
                t5 = t13;
            }
        } while (t5 != 0);
        t14 = t6;
    }
    t122 = 0x3;
    if (t14 != 0) {
        t18 = *(int *)((t14 + 0x10));
        if (t18 == t1) {
            kmytex_FBDeQueueEntry((((((t2 << 2) + t2) << 2) + 0xC177FBC) + 0x8), (((((t2 << 2) + t2) << 2) + 0xC177FBC) + 0xC), t14);
            FUN_0c1573f2(((((t2 << 2) + t2) << 2) + 0xC177FBC), (((((t2 << 2) + t2) << 2) + 0xC177FBC) + 0x4), t14);
            t21 = *(int *)((t14 + 0xC));
            *(unsigned int *)((a7 + 0x8)) = t21;
            *(unsigned int *)((t14 + 0x14)) = a7;
            *(unsigned short *)((t14 + 0x0)) = 0x1;
            t22 = *(short *)(((int)stk + 8));
            if (t22 == 0) {
                t23 = *(short *)((t14 + 0x0));
                *(unsigned short *)((t14 + 0x0)) = (t23 | 0x800);
            } else {
                t24 = *(short *)((t14 + 0x0));
                *(unsigned short *)((t14 + 0x0)) = (t24 | 0x1000);
            }
            if (a8 != 0) {
                t27 = *(short *)((t14 + 0x0));
                *(unsigned short *)((t14 + 0x0)) = (t27 | 0x2);
            }
            if (a9 != 0) {
                t29 = *(short *)((t14 + 0x0));
                *(unsigned short *)((t14 + 0x0)) = (t29 | 0x4);
            }
            t31 = *(int *)((t14 + 0x10));
            t32 = *(int *)((((((t2 << 2) + t2) << 2) + 0xC177FBC) + 0x10));
            *(unsigned int *)((((((t2 << 2) + t2) << 2) + 0xC177FBC) + 0x10)) = (t32 - t31);
            t117 = 0x0;
        } else {
            t33 = *(int *)((t14 + 0xC));
            if (t33 == a5) {
                t34 = FUN_0c1573a0();
                t52 = 0x3;
                if (t34 != 0) {
                    t35 = *(int *)((t14 + 0xC));
                    *(unsigned int *)((t34 + 0xC)) = t35;
                    *(unsigned int *)((t34 + 0x10)) = t1;
                    t36 = *(int *)((t14 + 0x10));
                    *(unsigned int *)((t14 + 0x10)) = (t36 - t1);
                    t37 = *(int *)((t14 + 0xC));
                    *(unsigned int *)((t14 + 0xC)) = (t37 + t1);
                    *(unsigned int *)(((int)stk + 4)) = ((((t2 << 2) + t2) << 2) + 0xC177FBC);
                    t38 = *(int *)(((int)stk + 4));
                    FUN_0c1573f2(t38, (((((t2 << 2) + t2) << 2) + 0xC177FBC) + 0x4), t34);
                    t40 = *(int *)((t34 + 0xC));
                    *(unsigned int *)((a7 + 0x8)) = t40;
                    *(unsigned int *)((t34 + 0x14)) = a7;
                    t41 = *(short *)(((int)stk + 8));
                    if (t41 == 0) {
                        t42 = *(short *)((t34 + 0x0));
                        *(unsigned short *)((t34 + 0x0)) = (t42 | 0x800);
                    } else {
                        t43 = *(short *)((t34 + 0x0));
                        *(unsigned short *)((t34 + 0x0)) = (t43 | 0x1000);
                    }
                    if (a8 != 0) {
                        t46 = *(short *)((t34 + 0x0));
                        *(unsigned short *)((t34 + 0x0)) = (t46 | 0x2);
                    }
                    if (a9 != 0) {
                        t48 = *(short *)((t34 + 0x0));
                        *(unsigned short *)((t34 + 0x0)) = (t48 | 0x4);
                    }
                    t50 = *(int *)((t34 + 0x10));
                    t51 = *(int *)((((((t2 << 2) + t2) << 2) + 0xC177FBC) + 0x10));
                    *(unsigned int *)((((((t2 << 2) + t2) << 2) + 0xC177FBC) + 0x10)) = (t51 - t50);
                    t52 = 0x0;
                }
                t112 = t52;
            } else {
                t54 = *(int *)((t14 + 0xC));
                t55 = *(int *)((t14 + 0x10));
                if ((t54 + t55) == (a5 + a6)) {
                    t56 = FUN_0c1573a0();
                    t72 = 0x3;
                    if (t56 != 0) {
                        t57 = *(int *)((t14 + 0x10));
                        *(unsigned int *)((t14 + 0x10)) = (t57 - t1);
                        *(unsigned int *)((t56 + 0xC)) = a5;
                        *(unsigned int *)((t56 + 0x10)) = t1;
                        *(unsigned int *)(((int)stk + 4)) = ((((t2 << 2) + t2) << 2) + 0xC177FBC);
                        t58 = *(int *)(((int)stk + 4));
                        FUN_0c1573f2(t58, (((((t2 << 2) + t2) << 2) + 0xC177FBC) + 0x4), t56);
                        t60 = *(int *)((t56 + 0xC));
                        *(unsigned int *)((a7 + 0x8)) = t60;
                        *(unsigned int *)((t56 + 0x14)) = a7;
                        t61 = *(short *)(((int)stk + 8));
                        if (t61 == 0) {
                            t62 = *(short *)((t56 + 0x0));
                            *(unsigned short *)((t56 + 0x0)) = (t62 | 0x800);
                        } else {
                            t63 = *(short *)((t56 + 0x0));
                            *(unsigned short *)((t56 + 0x0)) = (t63 | 0x1000);
                        }
                        if (a8 != 0) {
                            t66 = *(short *)((t56 + 0x0));
                            *(unsigned short *)((t56 + 0x0)) = (t66 | 0x2);
                        }
                        if (a9 != 0) {
                            t68 = *(short *)((t56 + 0x0));
                            *(unsigned short *)((t56 + 0x0)) = (t68 | 0x4);
                        }
                        t70 = *(int *)((t56 + 0x10));
                        t71 = *(int *)((((((t2 << 2) + t2) << 2) + 0xC177FBC) + 0x10));
                        *(unsigned int *)((((((t2 << 2) + t2) << 2) + 0xC177FBC) + 0x10)) = (t71 - t70);
                        t72 = 0x0;
                    }
                    t107 = t72;
                } else {
                    t74 = FUN_0c1573a0();
                    t103 = 0x3;
                    if (t74 != 0) {
                        t75 = FUN_0c1573a0();
                        *(unsigned int *)(((int)stk + 4)) = t75;
                        if (t75 == 0) {
                            FUN_0c1573cc(t74);
                            t99 = 0x3;
                        } else {
                            t77 = *(int *)((t14 + 0x10));
                            *(unsigned int *)(((int)stk + 16)) = t77;
                            t78 = *(int *)((t14 + 0xC));
                            *(unsigned int *)(((int)stk + 12)) = (a5 - t78);
                            *(unsigned int *)((t14 + 0x10)) = (a5 - t78);
                            *(unsigned int *)((t74 + 0xC)) = a5;
                            *(unsigned int *)((t74 + 0x10)) = t1;
                            FUN_0c1573f2(((((t2 << 2) + t2) << 2) + 0xC177FBC), (((((t2 << 2) + t2) << 2) + 0xC177FBC) + 0x4), t74);
                            t80 = *(int *)(((int)stk + 4));
                            *(unsigned int *)((t80 + 0xC)) = (a5 + t1);
                            t81 = *(int *)(((int)stk + 16));
                            t82 = *(int *)(((int)stk + 12));
                            t83 = *(int *)(((int)stk + 4));
                            *(unsigned int *)((t83 + 0x10)) = ((t81 - t1) - t82);
                            t84 = *(int *)((((((t2 << 2) + t2) << 2) + 0xC177FBC) + 0xC));
                            t85 = *(int *)(((int)stk + 4));
                            kmytex_FBEnQueueEntry((((((t2 << 2) + t2) << 2) + 0xC177FBC) + 0xC), t85, t84);
                            t87 = *(int *)((t74 + 0xC));
                            *(unsigned int *)((a7 + 0x8)) = t87;
                            *(unsigned int *)((t74 + 0x14)) = a7;
                            t88 = *(short *)(((int)stk + 8));
                            if (t88 == 0) {
                                t89 = *(short *)((t74 + 0x0));
                                *(unsigned short *)((t74 + 0x0)) = (t89 | 0x800);
                            } else {
                                t90 = *(short *)((t74 + 0x0));
                                *(unsigned short *)((t74 + 0x0)) = (t90 | 0x1000);
                            }
                            if (a8 != 0) {
                                t93 = *(short *)((t74 + 0x0));
                                *(unsigned short *)((t74 + 0x0)) = (t93 | 0x2);
                            }
                            if (a9 != 0) {
                                t95 = *(short *)((t74 + 0x0));
                                *(unsigned short *)((t74 + 0x0)) = (t95 | 0x4);
                            }
                            t97 = *(int *)((t74 + 0x10));
                            t98 = *(int *)((((((t2 << 2) + t2) << 2) + 0xC177FBC) + 0x10));
                            *(unsigned int *)((((((t2 << 2) + t2) << 2) + 0xC177FBC) + 0x10)) = (t98 - t97);
                            t99 = 0x0;
                        }
                        t103 = t99;
                    }
                    t107 = t103;
                }
                t112 = t107;
            }
            t117 = t112;
        }
        t122 = t117;
    }
    return t122;
}



