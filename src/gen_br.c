/* Straight-line functions with calls and guards (batch gen_br): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c036b5a(int, int);
int FUN_0c038eec(int);
int FUN_0c05778a(int, int, float, float);
int FUN_0c05cdb4(void);
int FUN_0c05ef68(void);
int FUN_0c05fd70(int);
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
int vibStart(void);
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
int FUN_0c059110(void);
int FUN_0c0523f8(void);
int vmsio_block_read(int a4, int a5, int a6);
int mpdrv_make_exdevicedata(int a4, int a5, int a6, int a7, int a8);
int nlObjPutFreeTextureOnce_Sub(int a4, int a5, int a6);
int vmsfs_init_work_normal(int a4, int a5, int a6);
int ADX_DecodeInfoExLoop(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int FUN_0c16c634(int a4);
int mwlRnaStartTrans(int a4);
int mpdrv_init_ex(int a4, int a5, int a6, int a7);
int FUN_0c05ce64(void);
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

int FUN_0c059110(void)
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

int FUN_0c0523f8(void)
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

int vmsfs_init_work_normal(int a4, int a5, int a6)
{
    int t0;
    int t25;
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
    int t20;
    int t21;
    int t22;
    int t24;
    int t30;
    int t31;
    int t32;
    int t33;
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
    int t50;
    int t51;
    int t53;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t82;
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
    int t99;
    int t100;
    int t101;
    int t102;
    int t103;
    int t104;
    int t105;
    int t106;
    int t107;
    int t108;
    int t109;
    int t111;
    int t112;
    int t83;
    int t54;
    int stk[14] = {0};

    *(unsigned int *)(((int)stk + 8)) = a5;
    t0 = *(int *)0xC2EE98C;
    if (a4 != 15) {
        if (a4 != 33) {
            if (a4 != 65) {
                t25 = 0xFFFFFF00;
                if (a4 == 122) {
                    *(unsigned int *)((t0 + 0x4)) = 0x3;
                    t1 = *(int *)0xC1784CC;
                    t2 = *(int *)0xC1784DC;
                    *(unsigned int *)(((int)stk + 20)) = t2;
                    *(unsigned int *)(((int)stk + 12)) = (((a4 << 8) << 1) + 0x20);
                    *(unsigned int *)(((int)stk + 4)) = 0x1;
                    *(unsigned int *)(((int)stk + 16)) = (((t1 + 0x1) << 8) << 1);
                    t3 = a4;
                    t4 = 0x3;
                    t5 = 0x0;
                    t6 = a6;
                    t7 = 0xC2EE990;
                    while ((int)t5 < (int)0x8) {
                        t8 = *(int *)(((int)stk + 8));
                        t4 = t8;
                        t9 = *(int *)(((int)stk + 4));
                        if ((t4 & t9) != 0) {
                            t4 = 0xC2F33F0;
                            t3 = 0x1;
                            *(unsigned char *)((t7 + 0x2)) = t3;
                            t3 = 0x0;
                            *(unsigned short *)((t7 + 0x0)) = t5;
                            *(unsigned int *)((t7 + 0x1C)) = ((t5 * 0x4C) + t4);
                            *(unsigned char *)((t7 + 0xA)) = t3;
                            *(unsigned char *)((t7 + 0xB)) = t3;
                            *(unsigned char *)((t7 + 0xC)) = t3;
                            t3 = 0x0;
                            *(unsigned int *)((t7 + 0x2C)) = t6;
                            *(unsigned int *)((t7 + 0x20)) = (t6 + 0x20);
                            *(unsigned int *)((t7 + 0x24)) = (0x220 + t6);
                            t10 = *(int *)(((int)stk + 16));
                            *(unsigned int *)((t7 + 0x28)) = ((t10 + t6) + 0x20);
                            *(unsigned char *)((t7 + 0x8)) = t3;
                            *(unsigned char *)((t7 + 0x9)) = t3;
                            t3 = 0x1;
                            *(unsigned short *)((t7 + 0xE)) = t3;
                            t3 = t1;
                            *(unsigned short *)((t7 + 0x10)) = t3;
                            t11 = *(short *)(((int)stk + 20));
                            t3 = t11;
                            *(unsigned short *)((t7 + 0x12)) = t3;
                            t3 = 0x20;
                            *(unsigned short *)((t7 + 0x14)) = t3;
                            t12 = memset((t7 + 0x38), 0x0, 0x10);
                            t3 = t12;
                            t13 = memset((t7 + 0x48), 0x0, 0x100);
                            t3 = t13;
                            t14 = *(int *)((t7 + 0x2C));
                            t15 = memset(t14, 0x47, 0x20);
                            t3 = t15;
                            t16 = *(int *)((t7 + 0x20));
                            t17 = memset(t16, 0x53, 0x20);
                            t3 = t17;
                            t18 = *(int *)((t7 + 0x24));
                            t19 = memset(t18, 0x46, 0x20);
                            t3 = t19;
                            t20 = *(int *)((t7 + 0x28));
                            t21 = memset(t20, 0x44, 0x20);
                            t3 = t21;
                            t22 = *(int *)(((int)stk + 12));
                            t6 = (t6 + t22);
                        }
                        t24 = *(int *)(((int)stk + 4));
                        t5 = (t5 + 0x1);
                        t4 = 0x148;
                        t7 = (t7 + t4);
                        *(unsigned int *)(((int)stk + 4)) = (t24 << 1);
                    }
                    t25 = 0x0;
                }
                t54 = t25;
            } else {
                *(unsigned int *)((t0 + 0x4)) = 0x2;
                t30 = *(int *)0xC1784C8;
                t31 = *(int *)0xC1784D8;
                *(unsigned int *)(((int)stk + 20)) = t31;
                *(unsigned int *)(((int)stk + 12)) = (((a4 << 8) << 1) + 0x20);
                *(unsigned int *)(((int)stk + 4)) = 0x1;
                *(unsigned int *)(((int)stk + 16)) = (((t30 + 0x1) << 8) << 1);
                t32 = a4;
                t33 = 0x2;
                t34 = 0x0;
                t35 = a6;
                t36 = 0xC2EE990;
                while ((int)t34 < (int)0x8) {
                    t37 = *(int *)(((int)stk + 8));
                    t33 = t37;
                    t38 = *(int *)(((int)stk + 4));
                    if ((t33 & t38) != 0) {
                        t33 = 0xC2F33F0;
                        t32 = 0x1;
                        *(unsigned char *)((t36 + 0x2)) = t32;
                        t32 = 0x0;
                        *(unsigned short *)((t36 + 0x0)) = t34;
                        *(unsigned int *)((t36 + 0x1C)) = ((t34 * 0x4C) + t33);
                        *(unsigned char *)((t36 + 0xA)) = t32;
                        *(unsigned char *)((t36 + 0xB)) = t32;
                        *(unsigned char *)((t36 + 0xC)) = t32;
                        t32 = 0x0;
                        *(unsigned int *)((t36 + 0x2C)) = t35;
                        *(unsigned int *)((t36 + 0x20)) = (t35 + 0x20);
                        *(unsigned int *)((t36 + 0x24)) = (0x220 + t35);
                        t39 = *(int *)(((int)stk + 16));
                        *(unsigned int *)((t36 + 0x28)) = ((t39 + t35) + 0x20);
                        *(unsigned char *)((t36 + 0x8)) = t32;
                        *(unsigned char *)((t36 + 0x9)) = t32;
                        t32 = 0x1;
                        *(unsigned short *)((t36 + 0xE)) = t32;
                        t32 = t30;
                        *(unsigned short *)((t36 + 0x10)) = t32;
                        t40 = *(short *)(((int)stk + 20));
                        t32 = t40;
                        *(unsigned short *)((t36 + 0x12)) = t32;
                        t32 = 0x20;
                        *(unsigned short *)((t36 + 0x14)) = t32;
                        t41 = memset((t36 + 0x38), 0x0, 0x10);
                        t32 = t41;
                        t42 = memset((t36 + 0x48), 0x0, 0x100);
                        t32 = t42;
                        t43 = *(int *)((t36 + 0x2C));
                        t44 = memset(t43, 0x47, 0x20);
                        t32 = t44;
                        t45 = *(int *)((t36 + 0x20));
                        t46 = memset(t45, 0x53, 0x20);
                        t32 = t46;
                        t47 = *(int *)((t36 + 0x24));
                        t48 = memset(t47, 0x46, 0x20);
                        t32 = t48;
                        t49 = *(int *)((t36 + 0x28));
                        t50 = memset(t49, 0x44, 0x20);
                        t32 = t50;
                        t51 = *(int *)(((int)stk + 12));
                        t35 = (t35 + t51);
                    }
                    t53 = *(int *)(((int)stk + 4));
                    t34 = (t34 + 0x1);
                    t33 = 0x148;
                    t36 = (t36 + t33);
                    *(unsigned int *)(((int)stk + 4)) = (t53 << 1);
                }
                t54 = 0x0;
            }
            t83 = t54;
        } else {
            *(unsigned int *)((t0 + 0x4)) = 0x1;
            t59 = *(int *)0xC1784D4;
            t60 = *(int *)0xC1784C4;
            *(unsigned int *)(((int)stk + 20)) = t59;
            *(unsigned int *)(((int)stk + 12)) = (((a4 << 8) << 1) + 0x20);
            *(unsigned int *)(((int)stk + 4)) = 0x1;
            *(unsigned int *)(((int)stk + 16)) = (((t60 + 0x1) << 8) << 1);
            t61 = a4;
            t62 = t59;
            t63 = 0x0;
            t64 = a6;
            t65 = 0xC2EE990;
            while ((int)t63 < (int)0x8) {
                t66 = *(int *)(((int)stk + 8));
                t62 = t66;
                t67 = *(int *)(((int)stk + 4));
                if ((t62 & t67) != 0) {
                    t62 = 0xC2F33F0;
                    t61 = 0x1;
                    *(unsigned char *)((t65 + 0x2)) = t61;
                    t61 = 0x0;
                    *(unsigned short *)((t65 + 0x0)) = t63;
                    *(unsigned int *)((t65 + 0x1C)) = ((t63 * 0x4C) + t62);
                    *(unsigned char *)((t65 + 0xA)) = t61;
                    *(unsigned char *)((t65 + 0xB)) = t61;
                    *(unsigned char *)((t65 + 0xC)) = t61;
                    t61 = 0x0;
                    *(unsigned int *)((t65 + 0x2C)) = t64;
                    *(unsigned int *)((t65 + 0x20)) = (t64 + 0x20);
                    *(unsigned int *)((t65 + 0x24)) = (0x220 + t64);
                    t68 = *(int *)(((int)stk + 16));
                    *(unsigned int *)((t65 + 0x28)) = ((t68 + t64) + 0x20);
                    *(unsigned char *)((t65 + 0x8)) = t61;
                    *(unsigned char *)((t65 + 0x9)) = t61;
                    t61 = 0x1;
                    *(unsigned short *)((t65 + 0xE)) = t61;
                    t61 = t60;
                    *(unsigned short *)((t65 + 0x10)) = t61;
                    t69 = *(short *)(((int)stk + 20));
                    t61 = t69;
                    *(unsigned short *)((t65 + 0x12)) = t61;
                    t61 = 0x20;
                    *(unsigned short *)((t65 + 0x14)) = t61;
                    t70 = memset((t65 + 0x38), 0x0, 0x10);
                    t61 = t70;
                    t71 = memset((t65 + 0x48), 0x0, 0x100);
                    t61 = t71;
                    t72 = *(int *)((t65 + 0x2C));
                    t73 = memset(t72, 0x47, 0x20);
                    t61 = t73;
                    t74 = *(int *)((t65 + 0x20));
                    t75 = memset(t74, 0x53, 0x20);
                    t61 = t75;
                    t76 = *(int *)((t65 + 0x24));
                    t77 = memset(t76, 0x46, 0x20);
                    t61 = t77;
                    t78 = *(int *)((t65 + 0x28));
                    t79 = memset(t78, 0x44, 0x20);
                    t61 = t79;
                    t80 = *(int *)(((int)stk + 12));
                    t64 = (t64 + t80);
                }
                t82 = *(int *)(((int)stk + 4));
                t63 = (t63 + 0x1);
                t62 = 0x148;
                t65 = (t65 + t62);
                *(unsigned int *)(((int)stk + 4)) = (t82 << 1);
            }
            t83 = 0x0;
        }
        t112 = t83;
    } else {
        *(unsigned int *)((t0 + 0x4)) = 0x0;
        t88 = *(int *)0xC1784C0;
        t89 = *(int *)0xC1784D0;
        *(unsigned int *)(((int)stk + 20)) = t89;
        *(unsigned int *)(((int)stk + 12)) = (((a4 << 8) << 1) + 0x20);
        *(unsigned int *)(((int)stk + 4)) = 0x1;
        *(unsigned int *)(((int)stk + 16)) = (((t88 + 0x1) << 8) << 1);
        t90 = a4;
        t91 = t89;
        t92 = 0x0;
        t93 = a6;
        t94 = 0xC2EE990;
        while ((int)t92 < (int)0x8) {
            t95 = *(int *)(((int)stk + 8));
            t91 = t95;
            t96 = *(int *)(((int)stk + 4));
            if ((t91 & t96) != 0) {
                t91 = 0xC2F33F0;
                t90 = 0x1;
                *(unsigned char *)((t94 + 0x2)) = t90;
                t90 = 0x0;
                *(unsigned short *)((t94 + 0x0)) = t92;
                *(unsigned int *)((t94 + 0x1C)) = ((t92 * 0x4C) + t91);
                *(unsigned char *)((t94 + 0xA)) = t90;
                *(unsigned char *)((t94 + 0xB)) = t90;
                *(unsigned char *)((t94 + 0xC)) = t90;
                t90 = 0x0;
                *(unsigned int *)((t94 + 0x2C)) = t93;
                *(unsigned int *)((t94 + 0x20)) = (t93 + 0x20);
                *(unsigned int *)((t94 + 0x24)) = (0x220 + t93);
                t97 = *(int *)(((int)stk + 16));
                *(unsigned int *)((t94 + 0x28)) = ((t97 + t93) + 0x20);
                *(unsigned char *)((t94 + 0x8)) = t90;
                *(unsigned char *)((t94 + 0x9)) = t90;
                t90 = 0x1;
                *(unsigned short *)((t94 + 0xE)) = t90;
                t90 = t88;
                *(unsigned short *)((t94 + 0x10)) = t90;
                t98 = *(short *)(((int)stk + 20));
                t90 = t98;
                *(unsigned short *)((t94 + 0x12)) = t90;
                t90 = 0x20;
                *(unsigned short *)((t94 + 0x14)) = t90;
                t99 = memset((t94 + 0x38), 0x0, 0x10);
                t90 = t99;
                t100 = memset((t94 + 0x48), 0x0, 0x100);
                t90 = t100;
                t101 = *(int *)((t94 + 0x2C));
                t102 = memset(t101, 0x47, 0x20);
                t90 = t102;
                t103 = *(int *)((t94 + 0x20));
                t104 = memset(t103, 0x53, 0x20);
                t90 = t104;
                t105 = *(int *)((t94 + 0x24));
                t106 = memset(t105, 0x46, 0x20);
                t90 = t106;
                t107 = *(int *)((t94 + 0x28));
                t108 = memset(t107, 0x44, 0x20);
                t90 = t108;
                t109 = *(int *)(((int)stk + 12));
                t93 = (t93 + t109);
            }
            t111 = *(int *)(((int)stk + 4));
            t92 = (t92 + 0x1);
            t91 = 0x148;
            t94 = (t94 + t91);
            *(unsigned int *)(((int)stk + 4)) = (t111 << 1);
        }
        t112 = 0x0;
    }
    return t112;
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

int FUN_0c05ce64(void)
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
    int t20;
    int t22;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    float u31;
    float u32;
    float u33;
    int t35;
    int t36;
    int t37;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    float u44;
    float u45;
    float u46;
    int t48;
    int t49;
    int t50;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    float u57;
    float u58;
    float u59;
    int t61;
    int t62;
    int t63;
    int t65;
    int t66;
    int t67;
    int t68;
    int t69;
    float u70;
    float u71;
    float u72;
    int t74;
    int t75;
    int t76;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    float u83;
    float u84;
    float u85;
    int t87;
    int t88;
    int t89;
    int t91;
    int t92;
    int t93;
    int t94;
    int t95;
    float u96;
    float u97;
    float u98;
    int t100;
    int t101;
    int t102;
    int t104;
    int t105;
    int t106;
    int t107;
    int t108;
    float u109;
    float u110;
    float u111;
    int t113;
    int t114;
    int t115;
    int t117;
    int t118;
    int t119;
    int t120;
    int t121;
    float u122;
    float u123;
    float u124;
    int t126;
    int t127;
    int t128;
    int t130;
    int t131;
    int t132;
    int t133;
    int t134;
    float u135;
    float u136;
    float u137;
    int t139;
    int t140;
    int t141;
    int t143;
    int t144;
    int t145;
    int t146;
    int t147;
    float u148;
    float u149;
    float u150;
    int t152;
    int t153;
    int t154;
    int stk[15] = {0};

    t0 = *(int *)0xC2A9964;
    *(unsigned int *)0xC2A9964 = (t0 + 0x1);
    if ((int)(t0 + 0x1) >= (int)0x78) {
        return ResetFadeColor();
    }
    t1 = *(int *)0xC2A995C;
    t2 = FUN_0c038eec((((((t1 - 1) << 2) + (t1 - 1)) << 1) + 0x1));
    if (t2 != 0) {
        t3 = *(int *)0xC2A995C;
        t4 = FUN_0c038eec((((((t3 - 1) << 2) + (t3 - 1)) << 1) + 0x2));
        if (t4 != 0) {
            t5 = *(int *)0xC2A995C;
            t6 = FUN_0c038eec((((((t5 - 1) << 2) + (t5 - 1)) << 1) + 0x3));
            if (t6 != 0) {
                t7 = *(int *)0xC2A995C;
                t8 = FUN_0c038eec((((((t7 - 1) << 2) + (t7 - 1)) << 1) + 0x4));
                if (t8 != 0) {
                    t9 = *(int *)0xC2A995C;
                    t10 = FUN_0c038eec((((((t9 - 1) << 2) + (t9 - 1)) << 1) + 0x5));
                    if (t10 != 0) {
                        t11 = *(int *)0xC2A995C;
                        t12 = FUN_0c038eec((((((t11 - 1) << 2) + (t11 - 1)) << 1) + 0x6));
                        if (t12 != 0) {
                            t13 = *(int *)0xC2A995C;
                            t14 = FUN_0c038eec((((((t13 - 1) << 2) + (t13 - 1)) << 1) + 0x7));
                            if (t14 != 0) {
                                t15 = *(int *)0xC2A995C;
                                t16 = FUN_0c038eec((((((t15 - 1) << 2) + (t15 - 1)) << 1) + 0x8));
                                if (t16 != 0) {
                                    t17 = *(int *)0xC2A995C;
                                    t18 = FUN_0c038eec((((((t17 - 1) << 2) + (t17 - 1)) << 1) + 0x9));
                                    if (t18 != 0) {
                                        t19 = *(int *)0xC2A995C;
                                        t20 = FUN_0c038eec((((((t19 - 1) << 2) + (t19 - 1)) << 1) + 0xA));
                                        if (t20 != 0) {
                                            *(unsigned int *)0xC2A9964 = 0x78;
                                            FUN_0c05cdb4();
                                            t22 = *(int *)0xC131204;
                                            FUN_0c05fd70((t22 + 0x17));
                                            t24 = *(int *)0xC131204;
                                            t25 = (int)((int)(t24 + 0x1) % (int)0x3);
                                            *(unsigned int *)0xC131204 = t25;
                                            return t25;
                                        }
                                        *(unsigned int *)(((int)stk + 4)) = 0xC13132C;
                                        t26 = 0x0;
                                        t27 = 0x0;
                                        do {
                                            *(float *)0xC2A98A8 = (1.0f + 1.0f);
                                            *(float *)0xC2A98AC = (1.0f + 1.0f);
                                            t28 = *(int *)0xC2A995C;
                                            t29 = *(int *)((((0xC131214 + (short)(((((t28 - 1) << 2) + (t28 - 1)) << 2) << 1)) + t27) + 0x0));
                                            t30 = FUN_0c038eec(t29);
                                            u31 = 1.0f;
                                            u32 = 1.0f;
                                            u33 = 0.0f;
                                            if (t30 != 0) {
                                                u31 = 0.75f;
                                                u32 = 0.75f;
                                                u33 = 0.75f;
                                            }
                                            nlObjPutSetFadeColor(u31, u32, u33);
                                            t35 = *(int *)(((int)stk + 4));
                                            *(unsigned int *)(((int)stk + 4)) = (t35 + 0x8);
                                            *(unsigned int *)(((int)stk + 8)) = ((t35 + 0x8) - 8);
                                            t36 = *(int *)((((t35 + 0x8) - 8) + 0x4));
                                            t37 = *(int *)((((t35 + 0x8) - 8) + 0x0));
                                            FUN_0c05778a(0xC2A9898, 0x1F6, (float)t37, (float)t36);
                                            t26 = (t26 + 0x1);
                                            t27 = (t27 + 0x4);
                                        } while ((int)t26 < (int)0xA);
                                        *(float *)0xC2A98A8 = 1.0f;
                                        *(float *)0xC2A98AC = 1.0f;
                                        return ResetFadeColor();
                                    }
                                    *(unsigned int *)(((int)stk + 4)) = 0xC13132C;
                                    t39 = 0x0;
                                    t40 = 0x0;
                                    do {
                                        *(float *)0xC2A98A8 = (1.0f + 1.0f);
                                        *(float *)0xC2A98AC = (1.0f + 1.0f);
                                        t41 = *(int *)0xC2A995C;
                                        t42 = *(int *)((((0xC131214 + (short)(((((t41 - 1) << 2) + (t41 - 1)) << 2) << 1)) + t40) + 0x0));
                                        t43 = FUN_0c038eec(t42);
                                        u44 = 1.0f;
                                        u45 = 1.0f;
                                        u46 = 0.0f;
                                        if (t43 != 0) {
                                            u44 = 0.75f;
                                            u45 = 0.75f;
                                            u46 = 0.75f;
                                        }
                                        nlObjPutSetFadeColor(u44, u45, u46);
                                        t48 = *(int *)(((int)stk + 4));
                                        *(unsigned int *)(((int)stk + 4)) = (t48 + 0x8);
                                        *(unsigned int *)(((int)stk + 8)) = ((t48 + 0x8) - 8);
                                        t49 = *(int *)((((t48 + 0x8) - 8) + 0x4));
                                        t50 = *(int *)((((t48 + 0x8) - 8) + 0x0));
                                        FUN_0c05778a(0xC2A9898, 0x1F6, (float)t50, (float)t49);
                                        t39 = (t39 + 0x1);
                                        t40 = (t40 + 0x4);
                                    } while ((int)t39 < (int)0xA);
                                    *(float *)0xC2A98A8 = 1.0f;
                                    *(float *)0xC2A98AC = 1.0f;
                                    return ResetFadeColor();
                                }
                                *(unsigned int *)(((int)stk + 4)) = 0xC13132C;
                                t52 = 0x0;
                                t53 = 0x0;
                                do {
                                    *(float *)0xC2A98A8 = (1.0f + 1.0f);
                                    *(float *)0xC2A98AC = (1.0f + 1.0f);
                                    t54 = *(int *)0xC2A995C;
                                    t55 = *(int *)((((0xC131214 + (short)(((((t54 - 1) << 2) + (t54 - 1)) << 2) << 1)) + t53) + 0x0));
                                    t56 = FUN_0c038eec(t55);
                                    u57 = 1.0f;
                                    u58 = 1.0f;
                                    u59 = 0.0f;
                                    if (t56 != 0) {
                                        u57 = 0.75f;
                                        u58 = 0.75f;
                                        u59 = 0.75f;
                                    }
                                    nlObjPutSetFadeColor(u57, u58, u59);
                                    t61 = *(int *)(((int)stk + 4));
                                    *(unsigned int *)(((int)stk + 4)) = (t61 + 0x8);
                                    *(unsigned int *)(((int)stk + 8)) = ((t61 + 0x8) - 8);
                                    t62 = *(int *)((((t61 + 0x8) - 8) + 0x4));
                                    t63 = *(int *)((((t61 + 0x8) - 8) + 0x0));
                                    FUN_0c05778a(0xC2A9898, 0x1F6, (float)t63, (float)t62);
                                    t52 = (t52 + 0x1);
                                    t53 = (t53 + 0x4);
                                } while ((int)t52 < (int)0xA);
                                *(float *)0xC2A98A8 = 1.0f;
                                *(float *)0xC2A98AC = 1.0f;
                                return ResetFadeColor();
                            }
                            *(unsigned int *)(((int)stk + 4)) = 0xC13132C;
                            t65 = 0x0;
                            t66 = 0x0;
                            do {
                                *(float *)0xC2A98A8 = (1.0f + 1.0f);
                                *(float *)0xC2A98AC = (1.0f + 1.0f);
                                t67 = *(int *)0xC2A995C;
                                t68 = *(int *)((((0xC131214 + (short)(((((t67 - 1) << 2) + (t67 - 1)) << 2) << 1)) + t66) + 0x0));
                                t69 = FUN_0c038eec(t68);
                                u70 = 1.0f;
                                u71 = 1.0f;
                                u72 = 0.0f;
                                if (t69 != 0) {
                                    u70 = 0.75f;
                                    u71 = 0.75f;
                                    u72 = 0.75f;
                                }
                                nlObjPutSetFadeColor(u70, u71, u72);
                                t74 = *(int *)(((int)stk + 4));
                                *(unsigned int *)(((int)stk + 4)) = (t74 + 0x8);
                                *(unsigned int *)(((int)stk + 8)) = ((t74 + 0x8) - 8);
                                t75 = *(int *)((((t74 + 0x8) - 8) + 0x4));
                                t76 = *(int *)((((t74 + 0x8) - 8) + 0x0));
                                FUN_0c05778a(0xC2A9898, 0x1F6, (float)t76, (float)t75);
                                t65 = (t65 + 0x1);
                                t66 = (t66 + 0x4);
                            } while ((int)t65 < (int)0xA);
                            *(float *)0xC2A98A8 = 1.0f;
                            *(float *)0xC2A98AC = 1.0f;
                            return ResetFadeColor();
                        }
                        *(unsigned int *)(((int)stk + 4)) = 0xC13132C;
                        t78 = 0x0;
                        t79 = 0x0;
                        do {
                            *(float *)0xC2A98A8 = (1.0f + 1.0f);
                            *(float *)0xC2A98AC = (1.0f + 1.0f);
                            t80 = *(int *)0xC2A995C;
                            t81 = *(int *)((((0xC131214 + (short)(((((t80 - 1) << 2) + (t80 - 1)) << 2) << 1)) + t79) + 0x0));
                            t82 = FUN_0c038eec(t81);
                            u83 = 1.0f;
                            u84 = 1.0f;
                            u85 = 0.0f;
                            if (t82 != 0) {
                                u83 = 0.75f;
                                u84 = 0.75f;
                                u85 = 0.75f;
                            }
                            nlObjPutSetFadeColor(u83, u84, u85);
                            t87 = *(int *)(((int)stk + 4));
                            *(unsigned int *)(((int)stk + 4)) = (t87 + 0x8);
                            *(unsigned int *)(((int)stk + 8)) = ((t87 + 0x8) - 8);
                            t88 = *(int *)((((t87 + 0x8) - 8) + 0x4));
                            t89 = *(int *)((((t87 + 0x8) - 8) + 0x0));
                            FUN_0c05778a(0xC2A9898, 0x1F6, (float)t89, (float)t88);
                            t78 = (t78 + 0x1);
                            t79 = (t79 + 0x4);
                        } while ((int)t78 < (int)0xA);
                        *(float *)0xC2A98A8 = 1.0f;
                        *(float *)0xC2A98AC = 1.0f;
                        return ResetFadeColor();
                    }
                    *(unsigned int *)(((int)stk + 4)) = 0xC13132C;
                    t91 = 0x0;
                    t92 = 0x0;
                    do {
                        *(float *)0xC2A98A8 = (1.0f + 1.0f);
                        *(float *)0xC2A98AC = (1.0f + 1.0f);
                        t93 = *(int *)0xC2A995C;
                        t94 = *(int *)((((0xC131214 + (short)(((((t93 - 1) << 2) + (t93 - 1)) << 2) << 1)) + t92) + 0x0));
                        t95 = FUN_0c038eec(t94);
                        u96 = 1.0f;
                        u97 = 1.0f;
                        u98 = 0.0f;
                        if (t95 != 0) {
                            u96 = 0.75f;
                            u97 = 0.75f;
                            u98 = 0.75f;
                        }
                        nlObjPutSetFadeColor(u96, u97, u98);
                        t100 = *(int *)(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = (t100 + 0x8);
                        *(unsigned int *)(((int)stk + 8)) = ((t100 + 0x8) - 8);
                        t101 = *(int *)((((t100 + 0x8) - 8) + 0x4));
                        t102 = *(int *)((((t100 + 0x8) - 8) + 0x0));
                        FUN_0c05778a(0xC2A9898, 0x1F6, (float)t102, (float)t101);
                        t91 = (t91 + 0x1);
                        t92 = (t92 + 0x4);
                    } while ((int)t91 < (int)0xA);
                    *(float *)0xC2A98A8 = 1.0f;
                    *(float *)0xC2A98AC = 1.0f;
                    return ResetFadeColor();
                }
                *(unsigned int *)(((int)stk + 4)) = 0xC13132C;
                t104 = 0x0;
                t105 = 0x0;
                do {
                    *(float *)0xC2A98A8 = (1.0f + 1.0f);
                    *(float *)0xC2A98AC = (1.0f + 1.0f);
                    t106 = *(int *)0xC2A995C;
                    t107 = *(int *)((((0xC131214 + (short)(((((t106 - 1) << 2) + (t106 - 1)) << 2) << 1)) + t105) + 0x0));
                    t108 = FUN_0c038eec(t107);
                    u109 = 1.0f;
                    u110 = 1.0f;
                    u111 = 0.0f;
                    if (t108 != 0) {
                        u109 = 0.75f;
                        u110 = 0.75f;
                        u111 = 0.75f;
                    }
                    nlObjPutSetFadeColor(u109, u110, u111);
                    t113 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t113 + 0x8);
                    *(unsigned int *)(((int)stk + 8)) = ((t113 + 0x8) - 8);
                    t114 = *(int *)((((t113 + 0x8) - 8) + 0x4));
                    t115 = *(int *)((((t113 + 0x8) - 8) + 0x0));
                    FUN_0c05778a(0xC2A9898, 0x1F6, (float)t115, (float)t114);
                    t104 = (t104 + 0x1);
                    t105 = (t105 + 0x4);
                } while ((int)t104 < (int)0xA);
                *(float *)0xC2A98A8 = 1.0f;
                *(float *)0xC2A98AC = 1.0f;
                return ResetFadeColor();
            }
            *(unsigned int *)(((int)stk + 4)) = 0xC13132C;
            t117 = 0x0;
            t118 = 0x0;
            do {
                *(float *)0xC2A98A8 = (1.0f + 1.0f);
                *(float *)0xC2A98AC = (1.0f + 1.0f);
                t119 = *(int *)0xC2A995C;
                t120 = *(int *)((((0xC131214 + (short)(((((t119 - 1) << 2) + (t119 - 1)) << 2) << 1)) + t118) + 0x0));
                t121 = FUN_0c038eec(t120);
                u122 = 1.0f;
                u123 = 1.0f;
                u124 = 0.0f;
                if (t121 != 0) {
                    u122 = 0.75f;
                    u123 = 0.75f;
                    u124 = 0.75f;
                }
                nlObjPutSetFadeColor(u122, u123, u124);
                t126 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 4)) = (t126 + 0x8);
                *(unsigned int *)(((int)stk + 8)) = ((t126 + 0x8) - 8);
                t127 = *(int *)((((t126 + 0x8) - 8) + 0x4));
                t128 = *(int *)((((t126 + 0x8) - 8) + 0x0));
                FUN_0c05778a(0xC2A9898, 0x1F6, (float)t128, (float)t127);
                t117 = (t117 + 0x1);
                t118 = (t118 + 0x4);
            } while ((int)t117 < (int)0xA);
            *(float *)0xC2A98A8 = 1.0f;
            *(float *)0xC2A98AC = 1.0f;
            return ResetFadeColor();
        }
        *(unsigned int *)(((int)stk + 4)) = 0xC13132C;
        t130 = 0x0;
        t131 = 0x0;
        do {
            *(float *)0xC2A98A8 = (1.0f + 1.0f);
            *(float *)0xC2A98AC = (1.0f + 1.0f);
            t132 = *(int *)0xC2A995C;
            t133 = *(int *)((((0xC131214 + (short)(((((t132 - 1) << 2) + (t132 - 1)) << 2) << 1)) + t131) + 0x0));
            t134 = FUN_0c038eec(t133);
            u135 = 1.0f;
            u136 = 1.0f;
            u137 = 0.0f;
            if (t134 != 0) {
                u135 = 0.75f;
                u136 = 0.75f;
                u137 = 0.75f;
            }
            nlObjPutSetFadeColor(u135, u136, u137);
            t139 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t139 + 0x8);
            *(unsigned int *)(((int)stk + 8)) = ((t139 + 0x8) - 8);
            t140 = *(int *)((((t139 + 0x8) - 8) + 0x4));
            t141 = *(int *)((((t139 + 0x8) - 8) + 0x0));
            FUN_0c05778a(0xC2A9898, 0x1F6, (float)t141, (float)t140);
            t130 = (t130 + 0x1);
            t131 = (t131 + 0x4);
        } while ((int)t130 < (int)0xA);
        *(float *)0xC2A98A8 = 1.0f;
        *(float *)0xC2A98AC = 1.0f;
        return ResetFadeColor();
    }
    *(unsigned int *)(((int)stk + 4)) = 0xC13132C;
    t143 = 0x0;
    t144 = 0x0;
    do {
        *(float *)0xC2A98A8 = (1.0f + 1.0f);
        *(float *)0xC2A98AC = (1.0f + 1.0f);
        t145 = *(int *)0xC2A995C;
        t146 = *(int *)((((0xC131214 + (short)(((((t145 - 1) << 2) + (t145 - 1)) << 2) << 1)) + t144) + 0x0));
        t147 = FUN_0c038eec(t146);
        u148 = 1.0f;
        u149 = 1.0f;
        u150 = 0.0f;
        if (t147 != 0) {
            u148 = 0.75f;
            u149 = 0.75f;
            u150 = 0.75f;
        }
        nlObjPutSetFadeColor(u148, u149, u150);
        t152 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t152 + 0x8);
        *(unsigned int *)(((int)stk + 8)) = ((t152 + 0x8) - 8);
        t153 = *(int *)((((t152 + 0x8) - 8) + 0x4));
        t154 = *(int *)((((t152 + 0x8) - 8) + 0x0));
        FUN_0c05778a(0xC2A9898, 0x1F6, (float)t154, (float)t153);
        t143 = (t143 + 0x1);
        t144 = (t144 + 0x4);
    } while ((int)t143 < (int)0xA);
    *(float *)0xC2A98A8 = 1.0f;
    *(float *)0xC2A98AC = 1.0f;
    return ResetFadeColor();
}

int FUN_0c07f870(int a4, int a5, int a6)
{
    int t294;
    int t292;
    int t0;
    int t1;
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
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t20;
    int t21;
    int t24;
    int t25;
    int t26;
    int t29;
    int t36;
    int t41;
    int t42;
    int t43;
    int t45;
    int t46;
    int t49;
    int t50;
    int t51;
    int t54;
    int t61;
    int t66;
    int t67;
    int t68;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;
    int t76;
    int t77;
    int t80;
    int t81;
    int t82;
    int t85;
    int t92;
    int t97;
    int t98;
    int t99;
    int t101;
    int t102;
    int t105;
    int t106;
    int t107;
    int t110;
    int t117;
    int t122;
    int t123;
    int t124;
    int t126;
    int t127;
    int t128;
    int t130;
    int t131;
    int t132;
    int t133;
    int t134;
    int t136;
    int t137;
    int t140;
    int t141;
    int t142;
    int t145;
    int t152;
    int t157;
    int t158;
    int t159;
    int t161;
    int t162;
    int t165;
    int t166;
    int t167;
    int t170;
    int t177;
    int t182;
    int t183;
    int t184;
    int t186;
    int t187;
    int t188;
    int t189;
    int t190;
    int t192;
    int t193;
    int t196;
    int t197;
    int t198;
    int t201;
    int t208;
    int t213;
    int t214;
    int t215;
    int t217;
    int t218;
    int t221;
    int t222;
    int t223;
    int t226;
    int t233;
    int t238;
    int t240;
    int t241;
    int t242;
    int t243;
    int t244;
    int t246;
    int t247;
    int t250;
    int t251;
    int t252;
    int t255;
    int t262;
    int t267;
    int t268;
    int t269;
    int t271;
    int t272;
    int t275;
    int t276;
    int t277;
    int t280;
    int t287;
    int stk[12] = {0};

    t294 = 0xFFFFFFFE;
    if ((short)a6 == 0) {
        t292 = 0xFFFFFFFF;
        if ((int)(short)((a5 << 1) + a4) <= (int)0x8) {
            t0 = 0xC2B771C;
            t1 = 0x0;
            for (;;) {
                t2 = *(signed char *)((t0 + 0x0));
                if (t2 == 1) break;
                t1 = (t1 + 0x1);
                t0 = (t0 + 0x18);
                if ((int)(short)t1 >= (int)0x8) {
                    *(unsigned int *)0xA08000A0 = (short)a4;
                    *(unsigned int *)0xA08000A4 = (short)a5;
                    t3 = *(int *)0xA080008C;
                    *(unsigned int *)(((int)stk + 4)) = t3;
                    t0 = 0xC2B76F8;
                    if ((short)((a5 << 1) + a4) != 0) {
                        t4 = *(int *)(((int)stk + 4));
                        t5 = (int)((unsigned int)(t4 - ((((short)((a5 << 1) + a4) << 2) << 2) << 2)) / (unsigned int)(short)((a5 << 1) + a4));
                        *(unsigned int *)((t0 + 0x0)) = (t5 & 0x7FFFFFE0);
                        if ((int)(t5 & 0x7FFFFFE0) > (int)0x4000) {
                            *(unsigned int *)((t0 + 0x0)) = 0x4000;
                            t6 = *(int *)((t0 + 0x0));
                            t7 = *(int *)0xC2B76EC;
                            t0 = t7;
                            t8 = *(int *)((t0 + 0x0));
                            t0 = t8;
                            if ((0x1F & t0) != 0) {
                                t0 = (0xFFFFFFE0 & t0);
                                t0 = (t0 + 0x20);
                                t1 = 0xA0800100;
                                t10 = *(int *)0xC2B76F0;
                                *(unsigned int *)0xA08000A8 = (t6 + 0x40);
                                t11 = ((t10 - (t6 + 0x40)) - t0);
                                t0 = 0x0;
                                *(unsigned int *)(((int)stk + 8)) = (short)a4;
                                if ((int)(short)a4 > 0) {
                                    t12 = t11;
                                    do {
                                        *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x1)) = 0x0;
                                        *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x0)) = 0x0;
                                        *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x4)) = (t12 + 0xA0800000);
                                        *(unsigned int *)((t1 + 0xC)) = t12;
                                        *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x8)) = 0x0;
                                        t12 = (t12 - (t6 + 0x40));
                                        *(unsigned int *)((t1 + 0x10)) = 0x0;
                                        t14 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                        t0 = (t0 + 0x1);
                                        *(unsigned int *)((t14 + 0x10)) = (t1 + 0x14);
                                        *(unsigned int *)((t14 + 0x14)) = (t1 + 0x4);
                                        t15 = *(int *)(((int)stk + 8));
                                        t1 = (t1 + 0x60);
                                    } while ((int)(short)t0 < (int)t15);
                                    *(unsigned int *)(((int)stk + 12)) = (t1 + 0x4);
                                    *(unsigned int *)(((int)stk + 4)) = (t1 + 0x14);
                                    t16 = *(int *)(((int)stk + 8));
                                    if ((int)(short)t0 < (int)((short)a5 + t16)) {
                                        t17 = t12;
                                        t18 = (t1 + 0xC);
                                        do {
                                            *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x1)) = 0x0;
                                            *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x0)) = 0x0;
                                            *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x8)) = (t17 + 0xA0800000);
                                            *(unsigned int *)((t1 + 0x10)) = t17;
                                            t17 = (t17 - (t6 + 0x40));
                                            *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x4)) = (t17 + 0xA0800000);
                                            *(unsigned int *)((t18 + 0x0)) = t17;
                                            t20 = *(int *)(((int)stk + 4));
                                            t21 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                            t0 = (t0 + 0x1);
                                            *(unsigned int *)((t21 + 0x10)) = t20;
                                            t17 = (t17 - (t6 + 0x40));
                                            t24 = *(int *)(((int)stk + 12));
                                            t1 = (t1 + 0x60);
                                            *(unsigned int *)((t21 + 0x14)) = t24;
                                            t25 = *(int *)(((int)stk + 12));
                                            *(unsigned int *)(((int)stk + 12)) = (t25 + 0x60);
                                            t26 = *(int *)(((int)stk + 4));
                                            *(unsigned int *)(((int)stk + 4)) = (t26 + 0x60);
                                            t18 = (t18 + 0x60);
                                        } while ((int)(short)t0 < (int)((short)a5 + t16));
                                        if ((int)(short)t0 < (int)0x8) {
                                            t29 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                            do {
                                                t0 = (t0 + 0x1);
                                                *(unsigned char *)((t29 + 0x0)) = 0xFFFFFFFF;
                                                *(unsigned char *)((t29 + 0x1)) = 0x0;
                                                *(unsigned int *)(((t29 + 0x4) + 0x4)) = 0xFFFFFFFF;
                                                *(unsigned int *)(((t29 + 0x4) + 0x0)) = 0xFFFFFFFF;
                                                t29 = (t29 + 0x18);
                                            } while ((int)(short)t0 < (int)0x8);
                                            FUN_0c07f5c0();
                                            return 0x0;
                                        }
                                        FUN_0c07f5c0();
                                        return 0x0;
                                    }
                                    if ((int)(short)t0 < (int)0x8) {
                                        t36 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                        do {
                                            t0 = (t0 + 0x1);
                                            *(unsigned char *)((t36 + 0x0)) = 0xFFFFFFFF;
                                            *(unsigned char *)((t36 + 0x1)) = 0x0;
                                            *(unsigned int *)(((t36 + 0x4) + 0x4)) = 0xFFFFFFFF;
                                            *(unsigned int *)(((t36 + 0x4) + 0x0)) = 0xFFFFFFFF;
                                            t36 = (t36 + 0x18);
                                        } while ((int)(short)t0 < (int)0x8);
                                        FUN_0c07f5c0();
                                        return 0x0;
                                    }
                                    FUN_0c07f5c0();
                                    return 0x0;
                                }
                                *(unsigned int *)(((int)stk + 12)) = (t1 + 0x4);
                                *(unsigned int *)(((int)stk + 4)) = (t1 + 0x14);
                                t41 = *(int *)(((int)stk + 8));
                                if ((int)(short)t0 < (int)((short)a5 + t41)) {
                                    t42 = t11;
                                    t43 = (t1 + 0xC);
                                    do {
                                        *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x1)) = 0x0;
                                        *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x0)) = 0x0;
                                        *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x8)) = (t42 + 0xA0800000);
                                        *(unsigned int *)((t1 + 0x10)) = t42;
                                        t42 = (t42 - (t6 + 0x40));
                                        *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x4)) = (t42 + 0xA0800000);
                                        *(unsigned int *)((t43 + 0x0)) = t42;
                                        t45 = *(int *)(((int)stk + 4));
                                        t46 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                        t0 = (t0 + 0x1);
                                        *(unsigned int *)((t46 + 0x10)) = t45;
                                        t42 = (t42 - (t6 + 0x40));
                                        t49 = *(int *)(((int)stk + 12));
                                        t1 = (t1 + 0x60);
                                        *(unsigned int *)((t46 + 0x14)) = t49;
                                        t50 = *(int *)(((int)stk + 12));
                                        *(unsigned int *)(((int)stk + 12)) = (t50 + 0x60);
                                        t51 = *(int *)(((int)stk + 4));
                                        *(unsigned int *)(((int)stk + 4)) = (t51 + 0x60);
                                        t43 = (t43 + 0x60);
                                    } while ((int)(short)t0 < (int)((short)a5 + t41));
                                    if ((int)(short)t0 < (int)0x8) {
                                        t54 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                        do {
                                            t0 = (t0 + 0x1);
                                            *(unsigned char *)((t54 + 0x0)) = 0xFFFFFFFF;
                                            *(unsigned char *)((t54 + 0x1)) = 0x0;
                                            *(unsigned int *)(((t54 + 0x4) + 0x4)) = 0xFFFFFFFF;
                                            *(unsigned int *)(((t54 + 0x4) + 0x0)) = 0xFFFFFFFF;
                                            t54 = (t54 + 0x18);
                                        } while ((int)(short)t0 < (int)0x8);
                                        FUN_0c07f5c0();
                                        return 0x0;
                                    }
                                    FUN_0c07f5c0();
                                    return 0x0;
                                }
                                if ((int)(short)t0 < (int)0x8) {
                                    t61 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                    do {
                                        t0 = (t0 + 0x1);
                                        *(unsigned char *)((t61 + 0x0)) = 0xFFFFFFFF;
                                        *(unsigned char *)((t61 + 0x1)) = 0x0;
                                        *(unsigned int *)(((t61 + 0x4) + 0x4)) = 0xFFFFFFFF;
                                        *(unsigned int *)(((t61 + 0x4) + 0x0)) = 0xFFFFFFFF;
                                        t61 = (t61 + 0x18);
                                    } while ((int)(short)t0 < (int)0x8);
                                    FUN_0c07f5c0();
                                    return 0x0;
                                }
                                FUN_0c07f5c0();
                                return 0x0;
                            }
                            t1 = 0xA0800100;
                            t66 = *(int *)0xC2B76F0;
                            *(unsigned int *)0xA08000A8 = (t6 + 0x40);
                            t67 = ((t66 - (t6 + 0x40)) - t0);
                            t0 = 0x0;
                            *(unsigned int *)(((int)stk + 8)) = (short)a4;
                            if ((int)(short)a4 > 0) {
                                t68 = t67;
                                do {
                                    *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x1)) = 0x0;
                                    *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x0)) = 0x0;
                                    *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x4)) = (t68 + 0xA0800000);
                                    *(unsigned int *)((t1 + 0xC)) = t68;
                                    *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x8)) = 0x0;
                                    t68 = (t68 - (t6 + 0x40));
                                    *(unsigned int *)((t1 + 0x10)) = 0x0;
                                    t70 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                    t0 = (t0 + 0x1);
                                    *(unsigned int *)((t70 + 0x10)) = (t1 + 0x14);
                                    *(unsigned int *)((t70 + 0x14)) = (t1 + 0x4);
                                    t71 = *(int *)(((int)stk + 8));
                                    t1 = (t1 + 0x60);
                                } while ((int)(short)t0 < (int)t71);
                                *(unsigned int *)(((int)stk + 12)) = (t1 + 0x4);
                                *(unsigned int *)(((int)stk + 4)) = (t1 + 0x14);
                                t72 = *(int *)(((int)stk + 8));
                                if ((int)(short)t0 < (int)((short)a5 + t72)) {
                                    t73 = t68;
                                    t74 = (t1 + 0xC);
                                    do {
                                        *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x1)) = 0x0;
                                        *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x0)) = 0x0;
                                        *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x8)) = (t73 + 0xA0800000);
                                        *(unsigned int *)((t1 + 0x10)) = t73;
                                        t73 = (t73 - (t6 + 0x40));
                                        *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x4)) = (t73 + 0xA0800000);
                                        *(unsigned int *)((t74 + 0x0)) = t73;
                                        t76 = *(int *)(((int)stk + 4));
                                        t77 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                        t0 = (t0 + 0x1);
                                        *(unsigned int *)((t77 + 0x10)) = t76;
                                        t73 = (t73 - (t6 + 0x40));
                                        t80 = *(int *)(((int)stk + 12));
                                        t1 = (t1 + 0x60);
                                        *(unsigned int *)((t77 + 0x14)) = t80;
                                        t81 = *(int *)(((int)stk + 12));
                                        *(unsigned int *)(((int)stk + 12)) = (t81 + 0x60);
                                        t82 = *(int *)(((int)stk + 4));
                                        *(unsigned int *)(((int)stk + 4)) = (t82 + 0x60);
                                        t74 = (t74 + 0x60);
                                    } while ((int)(short)t0 < (int)((short)a5 + t72));
                                    if ((int)(short)t0 < (int)0x8) {
                                        t85 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                        do {
                                            t0 = (t0 + 0x1);
                                            *(unsigned char *)((t85 + 0x0)) = 0xFFFFFFFF;
                                            *(unsigned char *)((t85 + 0x1)) = 0x0;
                                            *(unsigned int *)(((t85 + 0x4) + 0x4)) = 0xFFFFFFFF;
                                            *(unsigned int *)(((t85 + 0x4) + 0x0)) = 0xFFFFFFFF;
                                            t85 = (t85 + 0x18);
                                        } while ((int)(short)t0 < (int)0x8);
                                        FUN_0c07f5c0();
                                        return 0x0;
                                    }
                                    FUN_0c07f5c0();
                                    return 0x0;
                                }
                                if ((int)(short)t0 < (int)0x8) {
                                    t92 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                    do {
                                        t0 = (t0 + 0x1);
                                        *(unsigned char *)((t92 + 0x0)) = 0xFFFFFFFF;
                                        *(unsigned char *)((t92 + 0x1)) = 0x0;
                                        *(unsigned int *)(((t92 + 0x4) + 0x4)) = 0xFFFFFFFF;
                                        *(unsigned int *)(((t92 + 0x4) + 0x0)) = 0xFFFFFFFF;
                                        t92 = (t92 + 0x18);
                                    } while ((int)(short)t0 < (int)0x8);
                                    FUN_0c07f5c0();
                                    return 0x0;
                                }
                                FUN_0c07f5c0();
                                return 0x0;
                            }
                            *(unsigned int *)(((int)stk + 12)) = (t1 + 0x4);
                            *(unsigned int *)(((int)stk + 4)) = (t1 + 0x14);
                            t97 = *(int *)(((int)stk + 8));
                            if ((int)(short)t0 < (int)((short)a5 + t97)) {
                                t98 = t67;
                                t99 = (t1 + 0xC);
                                do {
                                    *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x1)) = 0x0;
                                    *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x0)) = 0x0;
                                    *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x8)) = (t98 + 0xA0800000);
                                    *(unsigned int *)((t1 + 0x10)) = t98;
                                    t98 = (t98 - (t6 + 0x40));
                                    *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x4)) = (t98 + 0xA0800000);
                                    *(unsigned int *)((t99 + 0x0)) = t98;
                                    t101 = *(int *)(((int)stk + 4));
                                    t102 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                    t0 = (t0 + 0x1);
                                    *(unsigned int *)((t102 + 0x10)) = t101;
                                    t98 = (t98 - (t6 + 0x40));
                                    t105 = *(int *)(((int)stk + 12));
                                    t1 = (t1 + 0x60);
                                    *(unsigned int *)((t102 + 0x14)) = t105;
                                    t106 = *(int *)(((int)stk + 12));
                                    *(unsigned int *)(((int)stk + 12)) = (t106 + 0x60);
                                    t107 = *(int *)(((int)stk + 4));
                                    *(unsigned int *)(((int)stk + 4)) = (t107 + 0x60);
                                    t99 = (t99 + 0x60);
                                } while ((int)(short)t0 < (int)((short)a5 + t97));
                                if ((int)(short)t0 < (int)0x8) {
                                    t110 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                    do {
                                        t0 = (t0 + 0x1);
                                        *(unsigned char *)((t110 + 0x0)) = 0xFFFFFFFF;
                                        *(unsigned char *)((t110 + 0x1)) = 0x0;
                                        *(unsigned int *)(((t110 + 0x4) + 0x4)) = 0xFFFFFFFF;
                                        *(unsigned int *)(((t110 + 0x4) + 0x0)) = 0xFFFFFFFF;
                                        t110 = (t110 + 0x18);
                                    } while ((int)(short)t0 < (int)0x8);
                                    FUN_0c07f5c0();
                                    return 0x0;
                                }
                                FUN_0c07f5c0();
                                return 0x0;
                            }
                            if ((int)(short)t0 < (int)0x8) {
                                t117 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                do {
                                    t0 = (t0 + 0x1);
                                    *(unsigned char *)((t117 + 0x0)) = 0xFFFFFFFF;
                                    *(unsigned char *)((t117 + 0x1)) = 0x0;
                                    *(unsigned int *)(((t117 + 0x4) + 0x4)) = 0xFFFFFFFF;
                                    *(unsigned int *)(((t117 + 0x4) + 0x0)) = 0xFFFFFFFF;
                                    t117 = (t117 + 0x18);
                                } while ((int)(short)t0 < (int)0x8);
                                FUN_0c07f5c0();
                                return 0x0;
                            }
                            FUN_0c07f5c0();
                            return 0x0;
                        }
                        t122 = *(int *)((t0 + 0x0));
                        t123 = *(int *)0xC2B76EC;
                        t0 = t123;
                        t124 = *(int *)((t0 + 0x0));
                        t0 = t124;
                        if ((0x1F & t0) != 0) {
                            t0 = (0xFFFFFFE0 & t0);
                            t0 = (t0 + 0x20);
                            t1 = 0xA0800100;
                            t126 = *(int *)0xC2B76F0;
                            *(unsigned int *)0xA08000A8 = (t122 + 0x40);
                            t127 = ((t126 - (t122 + 0x40)) - t0);
                            t0 = 0x0;
                            *(unsigned int *)(((int)stk + 8)) = (short)a4;
                            if ((int)(short)a4 > 0) {
                                t128 = t127;
                                do {
                                    *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x1)) = 0x0;
                                    *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x0)) = 0x0;
                                    *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x4)) = (t128 + 0xA0800000);
                                    *(unsigned int *)((t1 + 0xC)) = t128;
                                    *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x8)) = 0x0;
                                    t128 = (t128 - (t122 + 0x40));
                                    *(unsigned int *)((t1 + 0x10)) = 0x0;
                                    t130 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                    t0 = (t0 + 0x1);
                                    *(unsigned int *)((t130 + 0x10)) = (t1 + 0x14);
                                    *(unsigned int *)((t130 + 0x14)) = (t1 + 0x4);
                                    t131 = *(int *)(((int)stk + 8));
                                    t1 = (t1 + 0x60);
                                } while ((int)(short)t0 < (int)t131);
                                *(unsigned int *)(((int)stk + 12)) = (t1 + 0x4);
                                *(unsigned int *)(((int)stk + 4)) = (t1 + 0x14);
                                t132 = *(int *)(((int)stk + 8));
                                if ((int)(short)t0 < (int)((short)a5 + t132)) {
                                    t133 = t128;
                                    t134 = (t1 + 0xC);
                                    do {
                                        *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x1)) = 0x0;
                                        *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x0)) = 0x0;
                                        *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x8)) = (t133 + 0xA0800000);
                                        *(unsigned int *)((t1 + 0x10)) = t133;
                                        t133 = (t133 - (t122 + 0x40));
                                        *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x4)) = (t133 + 0xA0800000);
                                        *(unsigned int *)((t134 + 0x0)) = t133;
                                        t136 = *(int *)(((int)stk + 4));
                                        t137 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                        t0 = (t0 + 0x1);
                                        *(unsigned int *)((t137 + 0x10)) = t136;
                                        t133 = (t133 - (t122 + 0x40));
                                        t140 = *(int *)(((int)stk + 12));
                                        t1 = (t1 + 0x60);
                                        *(unsigned int *)((t137 + 0x14)) = t140;
                                        t141 = *(int *)(((int)stk + 12));
                                        *(unsigned int *)(((int)stk + 12)) = (t141 + 0x60);
                                        t142 = *(int *)(((int)stk + 4));
                                        *(unsigned int *)(((int)stk + 4)) = (t142 + 0x60);
                                        t134 = (t134 + 0x60);
                                    } while ((int)(short)t0 < (int)((short)a5 + t132));
                                    if ((int)(short)t0 < (int)0x8) {
                                        t145 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                        do {
                                            t0 = (t0 + 0x1);
                                            *(unsigned char *)((t145 + 0x0)) = 0xFFFFFFFF;
                                            *(unsigned char *)((t145 + 0x1)) = 0x0;
                                            *(unsigned int *)(((t145 + 0x4) + 0x4)) = 0xFFFFFFFF;
                                            *(unsigned int *)(((t145 + 0x4) + 0x0)) = 0xFFFFFFFF;
                                            t145 = (t145 + 0x18);
                                        } while ((int)(short)t0 < (int)0x8);
                                        FUN_0c07f5c0();
                                        return 0x0;
                                    }
                                    FUN_0c07f5c0();
                                    return 0x0;
                                }
                                if ((int)(short)t0 < (int)0x8) {
                                    t152 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                    do {
                                        t0 = (t0 + 0x1);
                                        *(unsigned char *)((t152 + 0x0)) = 0xFFFFFFFF;
                                        *(unsigned char *)((t152 + 0x1)) = 0x0;
                                        *(unsigned int *)(((t152 + 0x4) + 0x4)) = 0xFFFFFFFF;
                                        *(unsigned int *)(((t152 + 0x4) + 0x0)) = 0xFFFFFFFF;
                                        t152 = (t152 + 0x18);
                                    } while ((int)(short)t0 < (int)0x8);
                                    FUN_0c07f5c0();
                                    return 0x0;
                                }
                                FUN_0c07f5c0();
                                return 0x0;
                            }
                            *(unsigned int *)(((int)stk + 12)) = (t1 + 0x4);
                            *(unsigned int *)(((int)stk + 4)) = (t1 + 0x14);
                            t157 = *(int *)(((int)stk + 8));
                            if ((int)(short)t0 < (int)((short)a5 + t157)) {
                                t158 = t127;
                                t159 = (t1 + 0xC);
                                do {
                                    *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x1)) = 0x0;
                                    *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x0)) = 0x0;
                                    *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x8)) = (t158 + 0xA0800000);
                                    *(unsigned int *)((t1 + 0x10)) = t158;
                                    t158 = (t158 - (t122 + 0x40));
                                    *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x4)) = (t158 + 0xA0800000);
                                    *(unsigned int *)((t159 + 0x0)) = t158;
                                    t161 = *(int *)(((int)stk + 4));
                                    t162 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                    t0 = (t0 + 0x1);
                                    *(unsigned int *)((t162 + 0x10)) = t161;
                                    t158 = (t158 - (t122 + 0x40));
                                    t165 = *(int *)(((int)stk + 12));
                                    t1 = (t1 + 0x60);
                                    *(unsigned int *)((t162 + 0x14)) = t165;
                                    t166 = *(int *)(((int)stk + 12));
                                    *(unsigned int *)(((int)stk + 12)) = (t166 + 0x60);
                                    t167 = *(int *)(((int)stk + 4));
                                    *(unsigned int *)(((int)stk + 4)) = (t167 + 0x60);
                                    t159 = (t159 + 0x60);
                                } while ((int)(short)t0 < (int)((short)a5 + t157));
                                if ((int)(short)t0 < (int)0x8) {
                                    t170 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                    do {
                                        t0 = (t0 + 0x1);
                                        *(unsigned char *)((t170 + 0x0)) = 0xFFFFFFFF;
                                        *(unsigned char *)((t170 + 0x1)) = 0x0;
                                        *(unsigned int *)(((t170 + 0x4) + 0x4)) = 0xFFFFFFFF;
                                        *(unsigned int *)(((t170 + 0x4) + 0x0)) = 0xFFFFFFFF;
                                        t170 = (t170 + 0x18);
                                    } while ((int)(short)t0 < (int)0x8);
                                    FUN_0c07f5c0();
                                    return 0x0;
                                }
                                FUN_0c07f5c0();
                                return 0x0;
                            }
                            if ((int)(short)t0 < (int)0x8) {
                                t177 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                do {
                                    t0 = (t0 + 0x1);
                                    *(unsigned char *)((t177 + 0x0)) = 0xFFFFFFFF;
                                    *(unsigned char *)((t177 + 0x1)) = 0x0;
                                    *(unsigned int *)(((t177 + 0x4) + 0x4)) = 0xFFFFFFFF;
                                    *(unsigned int *)(((t177 + 0x4) + 0x0)) = 0xFFFFFFFF;
                                    t177 = (t177 + 0x18);
                                } while ((int)(short)t0 < (int)0x8);
                                FUN_0c07f5c0();
                                return 0x0;
                            }
                            FUN_0c07f5c0();
                            return 0x0;
                        }
                        t1 = 0xA0800100;
                        t182 = *(int *)0xC2B76F0;
                        *(unsigned int *)0xA08000A8 = (t122 + 0x40);
                        t183 = ((t182 - (t122 + 0x40)) - t0);
                        t0 = 0x0;
                        *(unsigned int *)(((int)stk + 8)) = (short)a4;
                        if ((int)(short)a4 > 0) {
                            t184 = t183;
                            do {
                                *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x1)) = 0x0;
                                *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x0)) = 0x0;
                                *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x4)) = (t184 + 0xA0800000);
                                *(unsigned int *)((t1 + 0xC)) = t184;
                                *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x8)) = 0x0;
                                t184 = (t184 - (t122 + 0x40));
                                *(unsigned int *)((t1 + 0x10)) = 0x0;
                                t186 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                t0 = (t0 + 0x1);
                                *(unsigned int *)((t186 + 0x10)) = (t1 + 0x14);
                                *(unsigned int *)((t186 + 0x14)) = (t1 + 0x4);
                                t187 = *(int *)(((int)stk + 8));
                                t1 = (t1 + 0x60);
                            } while ((int)(short)t0 < (int)t187);
                            *(unsigned int *)(((int)stk + 12)) = (t1 + 0x4);
                            *(unsigned int *)(((int)stk + 4)) = (t1 + 0x14);
                            t188 = *(int *)(((int)stk + 8));
                            if ((int)(short)t0 < (int)((short)a5 + t188)) {
                                t189 = t184;
                                t190 = (t1 + 0xC);
                                do {
                                    *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x1)) = 0x0;
                                    *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x0)) = 0x0;
                                    *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x8)) = (t189 + 0xA0800000);
                                    *(unsigned int *)((t1 + 0x10)) = t189;
                                    t189 = (t189 - (t122 + 0x40));
                                    *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x4)) = (t189 + 0xA0800000);
                                    *(unsigned int *)((t190 + 0x0)) = t189;
                                    t192 = *(int *)(((int)stk + 4));
                                    t193 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                    t0 = (t0 + 0x1);
                                    *(unsigned int *)((t193 + 0x10)) = t192;
                                    t189 = (t189 - (t122 + 0x40));
                                    t196 = *(int *)(((int)stk + 12));
                                    t1 = (t1 + 0x60);
                                    *(unsigned int *)((t193 + 0x14)) = t196;
                                    t197 = *(int *)(((int)stk + 12));
                                    *(unsigned int *)(((int)stk + 12)) = (t197 + 0x60);
                                    t198 = *(int *)(((int)stk + 4));
                                    *(unsigned int *)(((int)stk + 4)) = (t198 + 0x60);
                                    t190 = (t190 + 0x60);
                                } while ((int)(short)t0 < (int)((short)a5 + t188));
                                if ((int)(short)t0 < (int)0x8) {
                                    t201 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                    do {
                                        t0 = (t0 + 0x1);
                                        *(unsigned char *)((t201 + 0x0)) = 0xFFFFFFFF;
                                        *(unsigned char *)((t201 + 0x1)) = 0x0;
                                        *(unsigned int *)(((t201 + 0x4) + 0x4)) = 0xFFFFFFFF;
                                        *(unsigned int *)(((t201 + 0x4) + 0x0)) = 0xFFFFFFFF;
                                        t201 = (t201 + 0x18);
                                    } while ((int)(short)t0 < (int)0x8);
                                    FUN_0c07f5c0();
                                    return 0x0;
                                }
                                FUN_0c07f5c0();
                                return 0x0;
                            }
                            if ((int)(short)t0 < (int)0x8) {
                                t208 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                do {
                                    t0 = (t0 + 0x1);
                                    *(unsigned char *)((t208 + 0x0)) = 0xFFFFFFFF;
                                    *(unsigned char *)((t208 + 0x1)) = 0x0;
                                    *(unsigned int *)(((t208 + 0x4) + 0x4)) = 0xFFFFFFFF;
                                    *(unsigned int *)(((t208 + 0x4) + 0x0)) = 0xFFFFFFFF;
                                    t208 = (t208 + 0x18);
                                } while ((int)(short)t0 < (int)0x8);
                                FUN_0c07f5c0();
                                return 0x0;
                            }
                            FUN_0c07f5c0();
                            return 0x0;
                        }
                        *(unsigned int *)(((int)stk + 12)) = (t1 + 0x4);
                        *(unsigned int *)(((int)stk + 4)) = (t1 + 0x14);
                        t213 = *(int *)(((int)stk + 8));
                        if ((int)(short)t0 < (int)((short)a5 + t213)) {
                            t214 = t183;
                            t215 = (t1 + 0xC);
                            do {
                                *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x1)) = 0x0;
                                *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x0)) = 0x0;
                                *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x8)) = (t214 + 0xA0800000);
                                *(unsigned int *)((t1 + 0x10)) = t214;
                                t214 = (t214 - (t122 + 0x40));
                                *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x4)) = (t214 + 0xA0800000);
                                *(unsigned int *)((t215 + 0x0)) = t214;
                                t217 = *(int *)(((int)stk + 4));
                                t218 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                t0 = (t0 + 0x1);
                                *(unsigned int *)((t218 + 0x10)) = t217;
                                t214 = (t214 - (t122 + 0x40));
                                t221 = *(int *)(((int)stk + 12));
                                t1 = (t1 + 0x60);
                                *(unsigned int *)((t218 + 0x14)) = t221;
                                t222 = *(int *)(((int)stk + 12));
                                *(unsigned int *)(((int)stk + 12)) = (t222 + 0x60);
                                t223 = *(int *)(((int)stk + 4));
                                *(unsigned int *)(((int)stk + 4)) = (t223 + 0x60);
                                t215 = (t215 + 0x60);
                            } while ((int)(short)t0 < (int)((short)a5 + t213));
                            if ((int)(short)t0 < (int)0x8) {
                                t226 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                do {
                                    t0 = (t0 + 0x1);
                                    *(unsigned char *)((t226 + 0x0)) = 0xFFFFFFFF;
                                    *(unsigned char *)((t226 + 0x1)) = 0x0;
                                    *(unsigned int *)(((t226 + 0x4) + 0x4)) = 0xFFFFFFFF;
                                    *(unsigned int *)(((t226 + 0x4) + 0x0)) = 0xFFFFFFFF;
                                    t226 = (t226 + 0x18);
                                } while ((int)(short)t0 < (int)0x8);
                                FUN_0c07f5c0();
                                return 0x0;
                            }
                            FUN_0c07f5c0();
                            return 0x0;
                        }
                        if ((int)(short)t0 < (int)0x8) {
                            t233 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                            do {
                                t0 = (t0 + 0x1);
                                *(unsigned char *)((t233 + 0x0)) = 0xFFFFFFFF;
                                *(unsigned char *)((t233 + 0x1)) = 0x0;
                                *(unsigned int *)(((t233 + 0x4) + 0x4)) = 0xFFFFFFFF;
                                *(unsigned int *)(((t233 + 0x4) + 0x0)) = 0xFFFFFFFF;
                                t233 = (t233 + 0x18);
                            } while ((int)(short)t0 < (int)0x8);
                            FUN_0c07f5c0();
                            return 0x0;
                        }
                        FUN_0c07f5c0();
                        return 0x0;
                    }
                    *(unsigned int *)((t0 + 0x0)) = 0x0;
                    *(unsigned int *)0xA08000A8 = 0x0;
                    t0 = 0x0;
                    *(unsigned int *)(((int)stk + 8)) = (short)a4;
                    if ((int)(short)a4 > 0) {
                        t238 = ((a5 << 1) + a4);
                        do {
                            *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x1)) = 0x0;
                            *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x0)) = 0x0;
                            *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x4)) = (t238 + 0xA0800000);
                            *(unsigned int *)((t1 + 0xC)) = t238;
                            *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x8)) = 0x0;
                            t238 = (t238 - 0x0);
                            *(unsigned int *)((t1 + 0x10)) = 0x0;
                            t240 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                            t0 = (t0 + 0x1);
                            *(unsigned int *)((t240 + 0x10)) = (t1 + 0x14);
                            *(unsigned int *)((t240 + 0x14)) = (t1 + 0x4);
                            t241 = *(int *)(((int)stk + 8));
                            t1 = (t1 + 0x60);
                        } while ((int)(short)t0 < (int)t241);
                        *(unsigned int *)(((int)stk + 12)) = (t1 + 0x4);
                        *(unsigned int *)(((int)stk + 4)) = (t1 + 0x14);
                        t242 = *(int *)(((int)stk + 8));
                        if ((int)(short)t0 < (int)((short)a5 + t242)) {
                            t243 = t238;
                            t244 = (t1 + 0xC);
                            do {
                                *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x1)) = 0x0;
                                *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x0)) = 0x0;
                                *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x8)) = (t243 + 0xA0800000);
                                *(unsigned int *)((t1 + 0x10)) = t243;
                                t243 = (t243 - 0x0);
                                *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x4)) = (t243 + 0xA0800000);
                                *(unsigned int *)((t244 + 0x0)) = t243;
                                t246 = *(int *)(((int)stk + 4));
                                t247 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                t0 = (t0 + 0x1);
                                *(unsigned int *)((t247 + 0x10)) = t246;
                                t243 = (t243 - 0x0);
                                t250 = *(int *)(((int)stk + 12));
                                t1 = (t1 + 0x60);
                                *(unsigned int *)((t247 + 0x14)) = t250;
                                t251 = *(int *)(((int)stk + 12));
                                *(unsigned int *)(((int)stk + 12)) = (t251 + 0x60);
                                t252 = *(int *)(((int)stk + 4));
                                *(unsigned int *)(((int)stk + 4)) = (t252 + 0x60);
                                t244 = (t244 + 0x60);
                            } while ((int)(short)t0 < (int)((short)a5 + t242));
                            if ((int)(short)t0 < (int)0x8) {
                                t255 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                                do {
                                    t0 = (t0 + 0x1);
                                    *(unsigned char *)((t255 + 0x0)) = 0xFFFFFFFF;
                                    *(unsigned char *)((t255 + 0x1)) = 0x0;
                                    *(unsigned int *)(((t255 + 0x4) + 0x4)) = 0xFFFFFFFF;
                                    *(unsigned int *)(((t255 + 0x4) + 0x0)) = 0xFFFFFFFF;
                                    t255 = (t255 + 0x18);
                                } while ((int)(short)t0 < (int)0x8);
                                FUN_0c07f5c0();
                                return 0x0;
                            }
                            FUN_0c07f5c0();
                            return 0x0;
                        }
                        if ((int)(short)t0 < (int)0x8) {
                            t262 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                            do {
                                t0 = (t0 + 0x1);
                                *(unsigned char *)((t262 + 0x0)) = 0xFFFFFFFF;
                                *(unsigned char *)((t262 + 0x1)) = 0x0;
                                *(unsigned int *)(((t262 + 0x4) + 0x4)) = 0xFFFFFFFF;
                                *(unsigned int *)(((t262 + 0x4) + 0x0)) = 0xFFFFFFFF;
                                t262 = (t262 + 0x18);
                            } while ((int)(short)t0 < (int)0x8);
                            FUN_0c07f5c0();
                            return 0x0;
                        }
                        FUN_0c07f5c0();
                        return 0x0;
                    }
                    *(unsigned int *)(((int)stk + 12)) = (t1 + 0x4);
                    *(unsigned int *)(((int)stk + 4)) = (t1 + 0x14);
                    t267 = *(int *)(((int)stk + 8));
                    if ((int)(short)t0 < (int)((short)a5 + t267)) {
                        t268 = ((a5 << 1) + a4);
                        t269 = (t1 + 0xC);
                        do {
                            *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x1)) = 0x0;
                            *(unsigned char *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x0)) = 0x0;
                            *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x8)) = (t268 + 0xA0800000);
                            *(unsigned int *)((t1 + 0x10)) = t268;
                            t268 = (t268 - 0x0);
                            *(unsigned int *)((((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C) + 0x4)) = (t268 + 0xA0800000);
                            *(unsigned int *)((t269 + 0x0)) = t268;
                            t271 = *(int *)(((int)stk + 4));
                            t272 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                            t0 = (t0 + 0x1);
                            *(unsigned int *)((t272 + 0x10)) = t271;
                            t268 = (t268 - 0x0);
                            t275 = *(int *)(((int)stk + 12));
                            t1 = (t1 + 0x60);
                            *(unsigned int *)((t272 + 0x14)) = t275;
                            t276 = *(int *)(((int)stk + 12));
                            *(unsigned int *)(((int)stk + 12)) = (t276 + 0x60);
                            t277 = *(int *)(((int)stk + 4));
                            *(unsigned int *)(((int)stk + 4)) = (t277 + 0x60);
                            t269 = (t269 + 0x60);
                        } while ((int)(short)t0 < (int)((short)a5 + t267));
                        if ((int)(short)t0 < (int)0x8) {
                            t280 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                            do {
                                t0 = (t0 + 0x1);
                                *(unsigned char *)((t280 + 0x0)) = 0xFFFFFFFF;
                                *(unsigned char *)((t280 + 0x1)) = 0x0;
                                *(unsigned int *)(((t280 + 0x4) + 0x4)) = 0xFFFFFFFF;
                                *(unsigned int *)(((t280 + 0x4) + 0x0)) = 0xFFFFFFFF;
                                t280 = (t280 + 0x18);
                            } while ((int)(short)t0 < (int)0x8);
                            FUN_0c07f5c0();
                            return 0x0;
                        }
                        FUN_0c07f5c0();
                        return 0x0;
                    }
                    if ((int)(short)t0 < (int)0x8) {
                        t287 = ((((((short)t0 << 1) + (short)t0) << 2) << 1) + 0xC2B771C);
                        do {
                            t0 = (t0 + 0x1);
                            *(unsigned char *)((t287 + 0x0)) = 0xFFFFFFFF;
                            *(unsigned char *)((t287 + 0x1)) = 0x0;
                            *(unsigned int *)(((t287 + 0x4) + 0x4)) = 0xFFFFFFFF;
                            *(unsigned int *)(((t287 + 0x4) + 0x0)) = 0xFFFFFFFF;
                            t287 = (t287 + 0x18);
                        } while ((int)(short)t0 < (int)0x8);
                        FUN_0c07f5c0();
                        return 0x0;
                    }
                    FUN_0c07f5c0();
                    return 0x0;
                }
            }
            t292 = 0xFFFFFFFD;
        }
        t294 = t292;
    }
    return t294;
}

int FUN_0c1724b8(int a4, int a5)
{
    int t0;
    int t1;
    int t8;
    int t9;
    int t12;
    int t13;
    int t16;
    int t17;
    int t18;
    int t19;
    int t21;
    int t22;
    int t25;
    int t26;
    int t29;
    int t30;
    int t33;
    int t34;
    int t37;
    int t38;
    int t41;
    int t42;
    int t45;
    int t46;
    int t49;
    int t50;
    int t53;
    int t54;
    int t56;
    int t57;
    int t60;
    int t63;
    int t64;
    int t69;
    int t70;
    int t72;
    int t73;
    int t74;
    int t81;
    int t82;
    int t85;
    int t86;
    int t89;
    int t90;
    int t91;
    int t92;
    int t94;
    int t95;
    int t98;
    int t99;
    int t102;
    int t103;
    int t106;
    int t107;
    int t110;
    int t111;
    int t114;
    int t115;
    int t118;
    int t119;
    int t122;
    int t123;
    int t126;
    int t127;
    int t129;
    int t130;
    int t133;
    int t136;
    int t137;
    int t142;
    int t143;
    int t145;
    int t146;
    int t147;
    int t154;
    int t155;
    int t158;
    int t159;
    int t162;
    int t163;
    int t164;
    int t165;
    int t167;
    int t168;
    int t171;
    int t172;
    int t175;
    int t176;
    int t179;
    int t180;
    int t183;
    int t184;
    int t187;
    int t188;
    int t191;
    int t192;
    int t195;
    int t196;
    int t199;
    int t200;
    int t202;
    int t203;
    int t206;
    int t209;
    int t210;
    int t215;
    int t216;
    int t218;
    int t219;
    int t220;
    int t227;
    int t228;
    int t231;
    int t232;
    int t235;
    int t236;
    int t237;
    int t238;
    int t240;
    int t241;
    int t244;
    int t245;
    int t248;
    int t249;
    int t252;
    int t253;
    int t256;
    int t257;
    int t260;
    int t261;
    int t264;
    int t265;
    int t268;
    int t269;
    int t272;
    int t273;
    int t275;
    int t276;
    int t279;
    int t282;
    int t283;
    int t288;
    int t289;
    int t291;
    int t292;
    int stk[12] = {0};

    *(unsigned short *)(((int)stk + 4)) = a4;
    t0 = *(short *)(((int)stk + 4));
    if ((unsigned short)t0 != 0x300) {
        if ((unsigned short)t0 != 0x340) {
            if ((unsigned short)t0 != 0x380) {
                if ((unsigned short)t0 != 0x3C0) {
                    return (unsigned short)t0;
                }
                *(unsigned int *)0xC2FB794 = a5;
                t1 = FUN_0c1745b0();
                *(unsigned int *)(((int)stk + 12)) = t1;
                FUN_0c1747be(0xC176E94);
                FUN_0c1726f0(0xC176EB8, 0xA);
                FUN_0c1726f0(0xC176EC4, 0x12);
                FUN_0c1726f0(0xC176ED0, 0x1A);
                FUN_0c1726f0(0xC176EDC, 0x22);
                FUN_0c1747be(0xC176EE8);
                t8 = *(int *)0xC2FB794;
                t9 = *(int *)((t8 + 0xA8));
                FUN_0c1747f4(t9);
                FUN_0c1747be(0xC176EF0);
                t12 = *(int *)0xC2FB794;
                t13 = *(int *)((t12 + 0xAC));
                FUN_0c1747f4(t13);
                FUN_0c1726f0(0xC176EFC, 0x2D);
                t16 = *(int *)0xC2FB794;
                t17 = *(int *)(((t16 + 0xF0) + 0x0));
                *(unsigned int *)(((int)stk + 8)) = t17;
                t18 = *(int *)0xC2FB794;
                t19 = *(int *)((t18 + 0x4));
                *(unsigned int *)(((t16 + 0xF0) + 0x0)) = t19;
                FUN_0c1726f0(0xC176F0C, 0x35);
                t21 = *(int *)(((int)stk + 8));
                t22 = *(int *)0xC2FB794;
                *(unsigned int *)((0xF0 + t22)) = t21;
                FUN_0c1726f0(0xC176F18, 0x2);
                FUN_0c1747be(0xC176F28);
                t25 = *(int *)0xC2FB794;
                t26 = *(int *)((0xF0 + t25));
                FUN_0c1747f4(t26);
                FUN_0c1747be(0xC176F30);
                t29 = *(int *)0xC2FB794;
                t30 = *(int *)((t29 + 0xF4));
                FUN_0c1747f4(t30);
                FUN_0c1747be(0xC176F38);
                t33 = *(int *)0xC2FB794;
                t34 = *(int *)((t33 + 0xF8));
                FUN_0c1747f4(t34);
                FUN_0c1747be(0xC176F40);
                t37 = *(int *)0xC2FB794;
                t38 = *(int *)((t37 + 0xFC));
                FUN_0c1747f4(t38);
                FUN_0c1747be(0xC176F48);
                t41 = *(int *)0xC2FB794;
                t42 = *(int *)((t41 + 0x0));
                FUN_0c1747f4(t42);
                FUN_0c1747be(0xC176F50);
                t45 = *(int *)0xC2FB794;
                t46 = *(int *)((t45 + 0x100));
                FUN_0c1747f4(t46);
                FUN_0c1747be(0xC176F58);
                t49 = *(int *)0xC2FB794;
                t50 = *(int *)((t49 + 0x104));
                FUN_0c1747f4(t50);
                FUN_0c1747be(0xC176F60);
                t53 = *(int *)0xC2FB794;
                t54 = *(int *)((t53 + 0x108));
                FUN_0c1747f4(t54);
                t56 = 0x0;
                do {
                    t57 = ((~(((~t56) + 0x1) & 0x3)) + 0x1);
                    if ((int)t56 >= 0) {
                        t57 = (t56 & 0x3);
                    }
                    if (t57 == 0) {
                        FUN_0c1747be(0xC176F68);
                    }
                    t60 = *(int *)((((t56 << 2) + 0xC176D80) + 0x0));
                    FUN_0c1747f4(t60);
                    FUN_0c1747be(0xC176F6C);
                    t63 = *(int *)((((t56 << 2) + 0xC176D80) + 0x0));
                    t64 = *(int *)((t63 + 0x0));
                    FUN_0c1747f4(t64);
                    FUN_0c1747be(0xC176F70);
                    t56 = (t56 + 0x1);
                } while ((int)t56 < (int)0x45);
                FUN_0c1747be(0xC176F68);
                t69 = *(int *)(((int)stk + 12));
                t70 = 0xC176F74;
                if (t69 != 0) {
                    t70 = 0xC176FC0;
                }
                FUN_0c1747be(t70);
                do {
                    t72 = FUN_0c17472e();
                } while ((signed char)t72 != 13);
                t73 = *(short *)(((int)stk + 4));
                *(unsigned int *)0xFF000024 = (unsigned short)t73;
                return FUN_0c174768();
            }
            *(unsigned int *)0xC2FB794 = a5;
            t74 = FUN_0c1745b0();
            *(unsigned int *)(((int)stk + 12)) = t74;
            FUN_0c1747be(0xC176E94);
            FUN_0c1726f0(0xC176EB8, 0xA);
            FUN_0c1726f0(0xC176EC4, 0x12);
            FUN_0c1726f0(0xC176ED0, 0x1A);
            FUN_0c1726f0(0xC176EDC, 0x22);
            FUN_0c1747be(0xC176EE8);
            t81 = *(int *)0xC2FB794;
            t82 = *(int *)((t81 + 0xA8));
            FUN_0c1747f4(t82);
            FUN_0c1747be(0xC176EF0);
            t85 = *(int *)0xC2FB794;
            t86 = *(int *)((t85 + 0xAC));
            FUN_0c1747f4(t86);
            FUN_0c1726f0(0xC176EFC, 0x2D);
            t89 = *(int *)0xC2FB794;
            t90 = *(int *)(((t89 + 0xF0) + 0x0));
            *(unsigned int *)(((int)stk + 8)) = t90;
            t91 = *(int *)0xC2FB794;
            t92 = *(int *)((t91 + 0x4));
            *(unsigned int *)(((t89 + 0xF0) + 0x0)) = t92;
            FUN_0c1726f0(0xC176F0C, 0x35);
            t94 = *(int *)(((int)stk + 8));
            t95 = *(int *)0xC2FB794;
            *(unsigned int *)((0xF0 + t95)) = t94;
            FUN_0c1726f0(0xC176F18, 0x2);
            FUN_0c1747be(0xC176F28);
            t98 = *(int *)0xC2FB794;
            t99 = *(int *)((0xF0 + t98));
            FUN_0c1747f4(t99);
            FUN_0c1747be(0xC176F30);
            t102 = *(int *)0xC2FB794;
            t103 = *(int *)((t102 + 0xF4));
            FUN_0c1747f4(t103);
            FUN_0c1747be(0xC176F38);
            t106 = *(int *)0xC2FB794;
            t107 = *(int *)((t106 + 0xF8));
            FUN_0c1747f4(t107);
            FUN_0c1747be(0xC176F40);
            t110 = *(int *)0xC2FB794;
            t111 = *(int *)((t110 + 0xFC));
            FUN_0c1747f4(t111);
            FUN_0c1747be(0xC176F48);
            t114 = *(int *)0xC2FB794;
            t115 = *(int *)((t114 + 0x0));
            FUN_0c1747f4(t115);
            FUN_0c1747be(0xC176F50);
            t118 = *(int *)0xC2FB794;
            t119 = *(int *)((t118 + 0x100));
            FUN_0c1747f4(t119);
            FUN_0c1747be(0xC176F58);
            t122 = *(int *)0xC2FB794;
            t123 = *(int *)((t122 + 0x104));
            FUN_0c1747f4(t123);
            FUN_0c1747be(0xC176F60);
            t126 = *(int *)0xC2FB794;
            t127 = *(int *)((t126 + 0x108));
            FUN_0c1747f4(t127);
            t129 = 0x0;
            do {
                t130 = ((~(((~t129) + 0x1) & 0x3)) + 0x1);
                if ((int)t129 >= 0) {
                    t130 = (t129 & 0x3);
                }
                if (t130 == 0) {
                    FUN_0c1747be(0xC176F68);
                }
                t133 = *(int *)((((t129 << 2) + 0xC176D80) + 0x0));
                FUN_0c1747f4(t133);
                FUN_0c1747be(0xC176F6C);
                t136 = *(int *)((((t129 << 2) + 0xC176D80) + 0x0));
                t137 = *(int *)((t136 + 0x0));
                FUN_0c1747f4(t137);
                FUN_0c1747be(0xC176F70);
                t129 = (t129 + 0x1);
            } while ((int)t129 < (int)0x45);
            FUN_0c1747be(0xC176F68);
            t142 = *(int *)(((int)stk + 12));
            t143 = 0xC176F74;
            if (t142 != 0) {
                t143 = 0xC176FC0;
            }
            FUN_0c1747be(t143);
            do {
                t145 = FUN_0c17472e();
            } while ((signed char)t145 != 13);
            t146 = *(short *)(((int)stk + 4));
            *(unsigned int *)0xFF000024 = (unsigned short)t146;
            return FUN_0c174768();
        }
        *(unsigned int *)0xC2FB794 = a5;
        t147 = FUN_0c1745b0();
        *(unsigned int *)(((int)stk + 12)) = t147;
        FUN_0c1747be(0xC176E94);
        FUN_0c1726f0(0xC176EB8, 0xA);
        FUN_0c1726f0(0xC176EC4, 0x12);
        FUN_0c1726f0(0xC176ED0, 0x1A);
        FUN_0c1726f0(0xC176EDC, 0x22);
        FUN_0c1747be(0xC176EE8);
        t154 = *(int *)0xC2FB794;
        t155 = *(int *)((t154 + 0xA8));
        FUN_0c1747f4(t155);
        FUN_0c1747be(0xC176EF0);
        t158 = *(int *)0xC2FB794;
        t159 = *(int *)((t158 + 0xAC));
        FUN_0c1747f4(t159);
        FUN_0c1726f0(0xC176EFC, 0x2D);
        t162 = *(int *)0xC2FB794;
        t163 = *(int *)(((t162 + 0xF0) + 0x0));
        *(unsigned int *)(((int)stk + 8)) = t163;
        t164 = *(int *)0xC2FB794;
        t165 = *(int *)((t164 + 0x4));
        *(unsigned int *)(((t162 + 0xF0) + 0x0)) = t165;
        FUN_0c1726f0(0xC176F0C, 0x35);
        t167 = *(int *)(((int)stk + 8));
        t168 = *(int *)0xC2FB794;
        *(unsigned int *)((0xF0 + t168)) = t167;
        FUN_0c1726f0(0xC176F18, 0x2);
        FUN_0c1747be(0xC176F28);
        t171 = *(int *)0xC2FB794;
        t172 = *(int *)((0xF0 + t171));
        FUN_0c1747f4(t172);
        FUN_0c1747be(0xC176F30);
        t175 = *(int *)0xC2FB794;
        t176 = *(int *)((t175 + 0xF4));
        FUN_0c1747f4(t176);
        FUN_0c1747be(0xC176F38);
        t179 = *(int *)0xC2FB794;
        t180 = *(int *)((t179 + 0xF8));
        FUN_0c1747f4(t180);
        FUN_0c1747be(0xC176F40);
        t183 = *(int *)0xC2FB794;
        t184 = *(int *)((t183 + 0xFC));
        FUN_0c1747f4(t184);
        FUN_0c1747be(0xC176F48);
        t187 = *(int *)0xC2FB794;
        t188 = *(int *)((t187 + 0x0));
        FUN_0c1747f4(t188);
        FUN_0c1747be(0xC176F50);
        t191 = *(int *)0xC2FB794;
        t192 = *(int *)((t191 + 0x100));
        FUN_0c1747f4(t192);
        FUN_0c1747be(0xC176F58);
        t195 = *(int *)0xC2FB794;
        t196 = *(int *)((t195 + 0x104));
        FUN_0c1747f4(t196);
        FUN_0c1747be(0xC176F60);
        t199 = *(int *)0xC2FB794;
        t200 = *(int *)((t199 + 0x108));
        FUN_0c1747f4(t200);
        t202 = 0x0;
        do {
            t203 = ((~(((~t202) + 0x1) & 0x3)) + 0x1);
            if ((int)t202 >= 0) {
                t203 = (t202 & 0x3);
            }
            if (t203 == 0) {
                FUN_0c1747be(0xC176F68);
            }
            t206 = *(int *)((((t202 << 2) + 0xC176D80) + 0x0));
            FUN_0c1747f4(t206);
            FUN_0c1747be(0xC176F6C);
            t209 = *(int *)((((t202 << 2) + 0xC176D80) + 0x0));
            t210 = *(int *)((t209 + 0x0));
            FUN_0c1747f4(t210);
            FUN_0c1747be(0xC176F70);
            t202 = (t202 + 0x1);
        } while ((int)t202 < (int)0x45);
        FUN_0c1747be(0xC176F68);
        t215 = *(int *)(((int)stk + 12));
        t216 = 0xC176F74;
        if (t215 != 0) {
            t216 = 0xC176FC0;
        }
        FUN_0c1747be(t216);
        do {
            t218 = FUN_0c17472e();
        } while ((signed char)t218 != 13);
        t219 = *(short *)(((int)stk + 4));
        *(unsigned int *)0xFF000024 = (unsigned short)t219;
        return FUN_0c174768();
    }
    *(unsigned int *)0xC2FB794 = a5;
    t220 = FUN_0c1745b0();
    *(unsigned int *)(((int)stk + 12)) = t220;
    FUN_0c1747be(0xC176E94);
    FUN_0c1726f0(0xC176EB8, 0xA);
    FUN_0c1726f0(0xC176EC4, 0x12);
    FUN_0c1726f0(0xC176ED0, 0x1A);
    FUN_0c1726f0(0xC176EDC, 0x22);
    FUN_0c1747be(0xC176EE8);
    t227 = *(int *)0xC2FB794;
    t228 = *(int *)((t227 + 0xA8));
    FUN_0c1747f4(t228);
    FUN_0c1747be(0xC176EF0);
    t231 = *(int *)0xC2FB794;
    t232 = *(int *)((t231 + 0xAC));
    FUN_0c1747f4(t232);
    FUN_0c1726f0(0xC176EFC, 0x2D);
    t235 = *(int *)0xC2FB794;
    t236 = *(int *)(((t235 + 0xF0) + 0x0));
    *(unsigned int *)(((int)stk + 8)) = t236;
    t237 = *(int *)0xC2FB794;
    t238 = *(int *)((t237 + 0x4));
    *(unsigned int *)(((t235 + 0xF0) + 0x0)) = t238;
    FUN_0c1726f0(0xC176F0C, 0x35);
    t240 = *(int *)(((int)stk + 8));
    t241 = *(int *)0xC2FB794;
    *(unsigned int *)((0xF0 + t241)) = t240;
    FUN_0c1726f0(0xC176F18, 0x2);
    FUN_0c1747be(0xC176F28);
    t244 = *(int *)0xC2FB794;
    t245 = *(int *)((0xF0 + t244));
    FUN_0c1747f4(t245);
    FUN_0c1747be(0xC176F30);
    t248 = *(int *)0xC2FB794;
    t249 = *(int *)((t248 + 0xF4));
    FUN_0c1747f4(t249);
    FUN_0c1747be(0xC176F38);
    t252 = *(int *)0xC2FB794;
    t253 = *(int *)((t252 + 0xF8));
    FUN_0c1747f4(t253);
    FUN_0c1747be(0xC176F40);
    t256 = *(int *)0xC2FB794;
    t257 = *(int *)((t256 + 0xFC));
    FUN_0c1747f4(t257);
    FUN_0c1747be(0xC176F48);
    t260 = *(int *)0xC2FB794;
    t261 = *(int *)((t260 + 0x0));
    FUN_0c1747f4(t261);
    FUN_0c1747be(0xC176F50);
    t264 = *(int *)0xC2FB794;
    t265 = *(int *)((t264 + 0x100));
    FUN_0c1747f4(t265);
    FUN_0c1747be(0xC176F58);
    t268 = *(int *)0xC2FB794;
    t269 = *(int *)((t268 + 0x104));
    FUN_0c1747f4(t269);
    FUN_0c1747be(0xC176F60);
    t272 = *(int *)0xC2FB794;
    t273 = *(int *)((t272 + 0x108));
    FUN_0c1747f4(t273);
    t275 = 0x0;
    do {
        t276 = ((~(((~t275) + 0x1) & 0x3)) + 0x1);
        if ((int)t275 >= 0) {
            t276 = (t275 & 0x3);
        }
        if (t276 == 0) {
            FUN_0c1747be(0xC176F68);
        }
        t279 = *(int *)((((t275 << 2) + 0xC176D80) + 0x0));
        FUN_0c1747f4(t279);
        FUN_0c1747be(0xC176F6C);
        t282 = *(int *)((((t275 << 2) + 0xC176D80) + 0x0));
        t283 = *(int *)((t282 + 0x0));
        FUN_0c1747f4(t283);
        FUN_0c1747be(0xC176F70);
        t275 = (t275 + 0x1);
    } while ((int)t275 < (int)0x45);
    FUN_0c1747be(0xC176F68);
    t288 = *(int *)(((int)stk + 12));
    t289 = 0xC176F74;
    if (t288 != 0) {
        t289 = 0xC176FC0;
    }
    FUN_0c1747be(t289);
    do {
        t291 = FUN_0c17472e();
    } while ((signed char)t291 != 13);
    t292 = *(short *)(((int)stk + 4));
    *(unsigned int *)0xFF000024 = (unsigned short)t292;
    return FUN_0c174768();
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

int nd_Exec_Puru2(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t6;
    int t11;
    int t406;
    int t12;
    int t13;
    int t14;
    int t16;
    int t15;
    int t17;
    int t18;
    int t19;
    int t21;
    int t20;
    int t22;
    int t210;
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
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t54;
    int t53;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t65;
    int t67;
    int t66;
    int t70;
    int t71;
    int t72;
    int t73;
    int t75;
    int t77;
    int t76;
    int t80;
    int t81;
    int t82;
    int t83;
    int t84;
    int t85;
    int t86;
    int t87;
    int t89;
    int t88;
    int t91;
    int t93;
    int t94;
    int t95;
    int t96;
    int t98;
    int t100;
    int t99;
    int t103;
    int t104;
    int t105;
    int t106;
    int t107;
    int t108;
    int t110;
    int t111;
    int t112;
    int t113;
    int t114;
    int t116;
    int t115;
    int t118;
    int t120;
    int t121;
    int t122;
    int t123;
    int t125;
    int t127;
    int t126;
    int t130;
    int t131;
    int t132;
    int t133;
    int t134;
    int t135;
    int t136;
    int t137;
    int t139;
    int t141;
    int t140;
    int t144;
    int t145;
    int t146;
    int t147;
    int t149;
    int t151;
    int t150;
    int t155;
    int t156;
    int t157;
    int t158;
    int t160;
    int t159;
    int t161;
    int t162;
    int t163;
    int t164;
    int t171;
    int t165;
    int t166;
    int t167;
    int t169;
    int t168;
    int t172;
    int t173;
    int t175;
    int t177;
    int t176;
    int t180;
    int t181;
    int t183;
    int t185;
    int t184;
    int t188;
    int t189;
    int t191;
    int t193;
    int t192;
    int t196;
    int t197;
    int t199;
    int t201;
    int t200;
    int t214;
    int t402;
    int t215;
    int t216;
    int t217;
    int t218;
    int t219;
    int t220;
    int t221;
    int t222;
    int t223;
    int t224;
    int t225;
    int t226;
    int t228;
    int t229;
    int t230;
    int t231;
    int t232;
    int t233;
    int t234;
    int t235;
    int t236;
    int t240;
    int t241;
    int t242;
    int t243;
    int t244;
    int t246;
    int t245;
    int t247;
    int t248;
    int t249;
    int t250;
    int t251;
    int t252;
    int t253;
    int t254;
    int t255;
    int t257;
    int t259;
    int t258;
    int t262;
    int t263;
    int t264;
    int t265;
    int t267;
    int t269;
    int t268;
    int t272;
    int t273;
    int t274;
    int t275;
    int t276;
    int t277;
    int t278;
    int t279;
    int t281;
    int t280;
    int t283;
    int t285;
    int t286;
    int t287;
    int t288;
    int t290;
    int t292;
    int t291;
    int t295;
    int t296;
    int t297;
    int t298;
    int t299;
    int t300;
    int t302;
    int t303;
    int t304;
    int t305;
    int t306;
    int t308;
    int t307;
    int t310;
    int t312;
    int t313;
    int t314;
    int t315;
    int t317;
    int t319;
    int t318;
    int t322;
    int t323;
    int t324;
    int t325;
    int t326;
    int t327;
    int t328;
    int t329;
    int t331;
    int t333;
    int t332;
    int t336;
    int t337;
    int t338;
    int t339;
    int t341;
    int t343;
    int t342;
    int t347;
    int t348;
    int t349;
    int t350;
    int t352;
    int t351;
    int t353;
    int t354;
    int t355;
    int t356;
    int t363;
    int t357;
    int t358;
    int t359;
    int t361;
    int t360;
    int t364;
    int t365;
    int t367;
    int t369;
    int t368;
    int t372;
    int t373;
    int t375;
    int t377;
    int t376;
    int t380;
    int t381;
    int t383;
    int t385;
    int t384;
    int t388;
    int t389;
    int t391;
    int t393;
    int t392;
    int t411;
    int t410;
    int t417;
    int t812;
    int t418;
    int t419;
    int t420;
    int t422;
    int t421;
    int t423;
    int t424;
    int t425;
    int t427;
    int t426;
    int t428;
    int t616;
    int t429;
    int t430;
    int t431;
    int t432;
    int t433;
    int t434;
    int t435;
    int t436;
    int t437;
    int t438;
    int t439;
    int t440;
    int t442;
    int t443;
    int t444;
    int t445;
    int t446;
    int t447;
    int t448;
    int t449;
    int t450;
    int t454;
    int t455;
    int t456;
    int t457;
    int t458;
    int t460;
    int t459;
    int t461;
    int t462;
    int t463;
    int t464;
    int t465;
    int t466;
    int t467;
    int t468;
    int t469;
    int t471;
    int t473;
    int t472;
    int t476;
    int t477;
    int t478;
    int t479;
    int t481;
    int t483;
    int t482;
    int t486;
    int t487;
    int t488;
    int t489;
    int t490;
    int t491;
    int t492;
    int t493;
    int t495;
    int t494;
    int t497;
    int t499;
    int t500;
    int t501;
    int t502;
    int t504;
    int t506;
    int t505;
    int t509;
    int t510;
    int t511;
    int t512;
    int t513;
    int t514;
    int t516;
    int t517;
    int t518;
    int t519;
    int t520;
    int t522;
    int t521;
    int t524;
    int t526;
    int t527;
    int t528;
    int t529;
    int t531;
    int t533;
    int t532;
    int t536;
    int t537;
    int t538;
    int t539;
    int t540;
    int t541;
    int t542;
    int t543;
    int t545;
    int t547;
    int t546;
    int t550;
    int t551;
    int t552;
    int t553;
    int t555;
    int t557;
    int t556;
    int t561;
    int t562;
    int t563;
    int t564;
    int t566;
    int t565;
    int t567;
    int t568;
    int t569;
    int t570;
    int t577;
    int t571;
    int t572;
    int t573;
    int t575;
    int t574;
    int t578;
    int t579;
    int t581;
    int t583;
    int t582;
    int t586;
    int t587;
    int t589;
    int t591;
    int t590;
    int t594;
    int t595;
    int t597;
    int t599;
    int t598;
    int t602;
    int t603;
    int t605;
    int t607;
    int t606;
    int t620;
    int t808;
    int t621;
    int t622;
    int t623;
    int t624;
    int t625;
    int t626;
    int t627;
    int t628;
    int t629;
    int t630;
    int t631;
    int t632;
    int t634;
    int t635;
    int t636;
    int t637;
    int t638;
    int t639;
    int t640;
    int t641;
    int t642;
    int t646;
    int t647;
    int t648;
    int t649;
    int t650;
    int t652;
    int t651;
    int t653;
    int t654;
    int t655;
    int t656;
    int t657;
    int t658;
    int t659;
    int t660;
    int t661;
    int t663;
    int t665;
    int t664;
    int t668;
    int t669;
    int t670;
    int t671;
    int t673;
    int t675;
    int t674;
    int t678;
    int t679;
    int t680;
    int t681;
    int t682;
    int t683;
    int t684;
    int t685;
    int t687;
    int t686;
    int t689;
    int t691;
    int t692;
    int t693;
    int t694;
    int t696;
    int t698;
    int t697;
    int t701;
    int t702;
    int t703;
    int t704;
    int t705;
    int t706;
    int t708;
    int t709;
    int t710;
    int t711;
    int t712;
    int t714;
    int t713;
    int t716;
    int t718;
    int t719;
    int t720;
    int t721;
    int t723;
    int t725;
    int t724;
    int t728;
    int t729;
    int t730;
    int t731;
    int t732;
    int t733;
    int t734;
    int t735;
    int t737;
    int t739;
    int t738;
    int t742;
    int t743;
    int t744;
    int t745;
    int t747;
    int t749;
    int t748;
    int t753;
    int t754;
    int t755;
    int t756;
    int t758;
    int t757;
    int t759;
    int t760;
    int t761;
    int t762;
    int t769;
    int t763;
    int t764;
    int t765;
    int t767;
    int t766;
    int t770;
    int t771;
    int t773;
    int t775;
    int t774;
    int t778;
    int t779;
    int t781;
    int t783;
    int t782;
    int t786;
    int t787;
    int t789;
    int t791;
    int t790;
    int t794;
    int t795;
    int t797;
    int t799;
    int t798;
    int t816;
    int t817;
    int t819;
    int t818;
    int t823;
    int t1218;
    int t824;
    int t825;
    int t826;
    int t828;
    int t827;
    int t829;
    int t830;
    int t831;
    int t833;
    int t832;
    int t834;
    int t1022;
    int t835;
    int t836;
    int t837;
    int t838;
    int t839;
    int t840;
    int t841;
    int t842;
    int t843;
    int t844;
    int t845;
    int t846;
    int t848;
    int t849;
    int t850;
    int t851;
    int t852;
    int t853;
    int t854;
    int t855;
    int t856;
    int t860;
    int t861;
    int t862;
    int t863;
    int t864;
    int t866;
    int t865;
    int t867;
    int t868;
    int t869;
    int t870;
    int t871;
    int t872;
    int t873;
    int t874;
    int t875;
    int t877;
    int t879;
    int t878;
    int t882;
    int t883;
    int t884;
    int t885;
    int t887;
    int t889;
    int t888;
    int t892;
    int t893;
    int t894;
    int t895;
    int t896;
    int t897;
    int t898;
    int t899;
    int t901;
    int t900;
    int t903;
    int t905;
    int t906;
    int t907;
    int t908;
    int t910;
    int t912;
    int t911;
    int t915;
    int t916;
    int t917;
    int t918;
    int t919;
    int t920;
    int t922;
    int t923;
    int t924;
    int t925;
    int t926;
    int t928;
    int t927;
    int t930;
    int t932;
    int t933;
    int t934;
    int t935;
    int t937;
    int t939;
    int t938;
    int t942;
    int t943;
    int t944;
    int t945;
    int t946;
    int t947;
    int t948;
    int t949;
    int t951;
    int t953;
    int t952;
    int t956;
    int t957;
    int t958;
    int t959;
    int t961;
    int t963;
    int t962;
    int t967;
    int t968;
    int t969;
    int t970;
    int t972;
    int t971;
    int t973;
    int t974;
    int t975;
    int t976;
    int t983;
    int t977;
    int t978;
    int t979;
    int t981;
    int t980;
    int t984;
    int t985;
    int t987;
    int t989;
    int t988;
    int t992;
    int t993;
    int t995;
    int t997;
    int t996;
    int t1000;
    int t1001;
    int t1003;
    int t1005;
    int t1004;
    int t1008;
    int t1009;
    int t1011;
    int t1013;
    int t1012;
    int t1026;
    int t1214;
    int t1027;
    int t1028;
    int t1029;
    int t1030;
    int t1031;
    int t1032;
    int t1033;
    int t1034;
    int t1035;
    int t1036;
    int t1037;
    int t1038;
    int t1040;
    int t1041;
    int t1042;
    int t1043;
    int t1044;
    int t1045;
    int t1046;
    int t1047;
    int t1048;
    int t1052;
    int t1053;
    int t1054;
    int t1055;
    int t1056;
    int t1058;
    int t1057;
    int t1059;
    int t1060;
    int t1061;
    int t1062;
    int t1063;
    int t1064;
    int t1065;
    int t1066;
    int t1067;
    int t1069;
    int t1071;
    int t1070;
    int t1074;
    int t1075;
    int t1076;
    int t1077;
    int t1079;
    int t1081;
    int t1080;
    int t1084;
    int t1085;
    int t1086;
    int t1087;
    int t1088;
    int t1089;
    int t1090;
    int t1091;
    int t1093;
    int t1092;
    int t1095;
    int t1097;
    int t1098;
    int t1099;
    int t1100;
    int t1102;
    int t1104;
    int t1103;
    int t1107;
    int t1108;
    int t1109;
    int t1110;
    int t1111;
    int t1112;
    int t1114;
    int t1115;
    int t1116;
    int t1117;
    int t1118;
    int t1120;
    int t1119;
    int t1122;
    int t1124;
    int t1125;
    int t1126;
    int t1127;
    int t1129;
    int t1131;
    int t1130;
    int t1134;
    int t1135;
    int t1136;
    int t1137;
    int t1138;
    int t1139;
    int t1140;
    int t1141;
    int t1143;
    int t1145;
    int t1144;
    int t1148;
    int t1149;
    int t1150;
    int t1151;
    int t1153;
    int t1155;
    int t1154;
    int t1159;
    int t1160;
    int t1161;
    int t1162;
    int t1164;
    int t1163;
    int t1165;
    int t1166;
    int t1167;
    int t1168;
    int t1175;
    int t1169;
    int t1170;
    int t1171;
    int t1173;
    int t1172;
    int t1176;
    int t1177;
    int t1179;
    int t1181;
    int t1180;
    int t1184;
    int t1185;
    int t1187;
    int t1189;
    int t1188;
    int t1192;
    int t1193;
    int t1195;
    int t1197;
    int t1196;
    int t1200;
    int t1201;
    int t1203;
    int t1205;
    int t1204;
    int t1223;
    int t1222;
    int t1228;
    int t814;
    int t414;
    int t408;
    int t404;
    int t212;
    int t209;
    int t208;
    int t79;
    int t69;
    int t207;
    int t102;
    int t92;
    int t206;
    int t129;
    int t119;
    int t109;
    int t205;
    int t153;
    int t143;
    int t204;
    int t203;
    int t195;
    int t187;
    int t179;
    int t401;
    int t400;
    int t271;
    int t261;
    int t399;
    int t294;
    int t284;
    int t398;
    int t321;
    int t311;
    int t301;
    int t397;
    int t345;
    int t335;
    int t396;
    int t395;
    int t387;
    int t379;
    int t371;
    int t810;
    int t618;
    int t615;
    int t614;
    int t485;
    int t475;
    int t613;
    int t508;
    int t498;
    int t612;
    int t535;
    int t525;
    int t515;
    int t611;
    int t559;
    int t549;
    int t610;
    int t609;
    int t601;
    int t593;
    int t585;
    int t807;
    int t806;
    int t677;
    int t667;
    int t805;
    int t700;
    int t690;
    int t804;
    int t727;
    int t717;
    int t707;
    int t803;
    int t751;
    int t741;
    int t802;
    int t801;
    int t793;
    int t785;
    int t777;
    int t1226;
    int t1220;
    int t1216;
    int t1024;
    int t1021;
    int t1020;
    int t891;
    int t881;
    int t1019;
    int t914;
    int t904;
    int t1018;
    int t941;
    int t931;
    int t921;
    int t1017;
    int t965;
    int t955;
    int t1016;
    int t1015;
    int t1007;
    int t999;
    int t991;
    int t1213;
    int t1212;
    int t1083;
    int t1073;
    int t1211;
    int t1106;
    int t1096;
    int t1210;
    int t1133;
    int t1123;
    int t1113;
    int t1209;
    int t1157;
    int t1147;
    int t1208;
    int t1207;
    int t1199;
    int t1191;
    int t1183;
    int stk[10] = {0};

    t0 = *(signed char *)0xC0D2B5A;
    *(unsigned char *)(((int)stk + 4)) = t0;
    t1 = *(int *)0xC1EE234;
    t2 = *(int *)0xC2A9C90;
    if (t1 == 1) {
        t3 = *(int *)0xC1EE238;
        if (t3 != 1) {
            t4 = *(int *)0xC1EE234;
            if (t4 == 3) {
                t5 = *(int *)0xC1EE238;
                if (t5 != 1) {
                    t7 = t2;
                    if (t2 == 1) {
                        t6 = vibStart();
                        *(unsigned int *)0xC2A9C8C = 0x0;
                        *(unsigned int *)0xC2A9C90 = 0x2;
                        t7 = t6;
                    }
                    t408 = t7;
                } else {
                    if (t2 != 1) {
                        *(unsigned int *)0xC2A9C90 = 0x1;
                    }
                    t11 = *(signed char *)0xC28A4EF;
                    t406 = t2;
                    if (t11 != 0) {
                        t12 = *(int *)0xC2A11B0;
                        if (t12 != 0) {
                            t13 = *(int *)0xC2A9C8C;
                            if ((t13 & 1) == 0) {
                                t14 = *(int *)0xC2A9C94;
                                *(unsigned int *)0xC2A9C94 = (t14 + 0x1);
                                t16 = t13;
                                if ((int)(t14 + 0x1) < (int)0xA) {
                                    t15 = vibStart();
                                    t16 = t15;
                                }
                                t17 = *(int *)0xC2A9C60;
                                if ((int)t17 > 0) {
                                    t18 = *(int *)0xC2A9C60;
                                    *(unsigned int *)0xC2A9C60 = (t18 - 1);
                                }
                                t19 = *(int *)0xC2A9C60;
                                t21 = t16;
                                if (t19 == 0) {
                                    t20 = vibStart();
                                    *(unsigned int *)0xC2A9C8C = 0x0;
                                    t21 = t20;
                                }
                                t212 = t21;
                            } else {
                                *(unsigned int *)0xC2A9C94 = 0x0;
                                t22 = FUN_0c05ef68();
                                t210 = t22;
                                if (t22 != 0) {
                                    t23 = *(int *)0xC2A9C8C;
                                    t24 = *(int *)0xC2A9C98;
                                    if ((0x10000000 & t23) != 0) {
                                        if (t24 == 1) {
                                            t25 = *(signed char *)0xC131AAC;
                                            *(unsigned char *)0xC2A9C68 = t25;
                                            t26 = *(signed char *)0xC131AAD;
                                            *(unsigned char *)0xC2A9C69 = t26;
                                            t27 = *(signed char *)0xC131AAE;
                                            *(unsigned char *)0xC2A9C6A = t27;
                                            t28 = *(signed char *)0xC131AAF;
                                            *(unsigned char *)0xC2A9C6B = t28;
                                            t29 = *(signed char *)0xC131AB0;
                                            *(unsigned char *)0xC2A9C6C = t29;
                                            t30 = *(signed char *)0xC131AB1;
                                            *(unsigned char *)0xC2A9C6D = t30;
                                            t31 = *(signed char *)0xC131AB2;
                                            *(unsigned char *)0xC2A9C6E = t31;
                                            t32 = *(signed char *)0xC131AB3;
                                            *(unsigned char *)0xC2A9C6F = t32;
                                            t33 = *(int *)0xC131B04;
                                            *(unsigned char *)0xC2A9C6A = (0xFFFFFFFF - t33);
                                            t34 = *(signed char *)0xC2A9C6A;
                                            if ((int)t34 < (int)0xFFFFFFF9) {
                                                *(unsigned char *)0xC2A9C6A = 0xFFFFFFF9;
                                            }
                                        } else {
                                            t36 = *(signed char *)0xC131A74;
                                            *(unsigned char *)0xC2A9C68 = t36;
                                            t37 = *(signed char *)0xC131A75;
                                            *(unsigned char *)0xC2A9C69 = t37;
                                            t38 = *(signed char *)0xC131A76;
                                            *(unsigned char *)0xC2A9C6A = t38;
                                            t39 = *(signed char *)0xC131A77;
                                            *(unsigned char *)0xC2A9C6B = t39;
                                            t40 = *(signed char *)0xC131A78;
                                            *(unsigned char *)0xC2A9C6C = t40;
                                            t41 = *(signed char *)0xC131A79;
                                            *(unsigned char *)0xC2A9C6D = t41;
                                            t42 = *(signed char *)0xC131A7A;
                                            *(unsigned char *)0xC2A9C6E = t42;
                                            t43 = *(signed char *)0xC131A7B;
                                            *(unsigned char *)0xC2A9C6F = t43;
                                            t44 = *(int *)0xC131B04;
                                            *(unsigned char *)0xC2A9C6A = t44;
                                        }
                                        t48 = pdVibStart(a4, 0xC2A9C68);
                                        *(unsigned int *)0xC2A9C64 = 0x10000000;
                                        t49 = *(int *)0xC131A00;
                                        *(unsigned int *)0xC2A9C60 = t49;
                                        *(unsigned int *)0xC2A9C8C = 0x0;
                                        t50 = *(int *)0xC2A9C60;
                                        if ((int)t50 > 0) {
                                            t51 = *(int *)0xC2A9C60;
                                            *(unsigned int *)0xC2A9C60 = (t51 - 1);
                                        }
                                        t52 = *(int *)0xC2A9C60;
                                        t54 = t48;
                                        if (t52 == 0) {
                                            t53 = vibStart();
                                            *(unsigned int *)0xC2A9C8C = 0x0;
                                            t54 = t53;
                                        }
                                        t209 = t54;
                                    } else {
                                        t55 = *(int *)0xC2A9C64;
                                        if ((0x1000000 & t23) != 0) {
                                            if ((int)t55 <= (int)0x1000000) {
                                                t56 = *(int *)0xC2A9C60;
                                                if (t56 != 0) {
                                                    t57 = vibStart();
                                                    t69 = t57;
                                                } else {
                                                    t58 = 0xC131A7C;
                                                    if (t24 == 1) {
                                                        t58 = 0xC131AB4;
                                                    }
                                                    t59 = pdVibStart(a4, t58);
                                                    *(unsigned int *)0xC2A9C64 = 0x1000000;
                                                    t60 = *(int *)0xC131A00;
                                                    *(unsigned int *)0xC2A9C60 = t60;
                                                    t61 = *(int *)0xC2A9C8C;
                                                    *(unsigned int *)0xC2A9C8C = (t61 & 0xFEEEEFEE);
                                                    t62 = *(int *)0xC2A9C60;
                                                    if ((int)t62 > 0) {
                                                        t63 = *(int *)0xC2A9C60;
                                                        *(unsigned int *)0xC2A9C60 = (t63 - 1);
                                                    }
                                                    t65 = *(int *)0xC2A9C60;
                                                    t67 = t59;
                                                    if (t65 == 0) {
                                                        t66 = vibStart();
                                                        *(unsigned int *)0xC2A9C8C = 0x0;
                                                        t67 = t66;
                                                    }
                                                    t69 = t67;
                                                }
                                                t79 = t69;
                                            } else {
                                                *(unsigned int *)0xC2A9C64 = 0x1000000;
                                                t70 = *(int *)0xC131A00;
                                                *(unsigned int *)0xC2A9C60 = t70;
                                                t71 = *(int *)0xC2A9C8C;
                                                *(unsigned int *)0xC2A9C8C = (t71 & 0xFEEEEFEE);
                                                t72 = *(int *)0xC2A9C60;
                                                if ((int)t72 > 0) {
                                                    t73 = *(int *)0xC2A9C60;
                                                    *(unsigned int *)0xC2A9C60 = (t73 - 1);
                                                }
                                                t75 = *(int *)0xC2A9C60;
                                                t77 = 0x1000000;
                                                if (t75 == 0) {
                                                    t76 = vibStart();
                                                    *(unsigned int *)0xC2A9C8C = 0x0;
                                                    t77 = t76;
                                                }
                                                t79 = t77;
                                            }
                                            t208 = t79;
                                        } else {
                                            if ((0x100000 & t23) != 0) {
                                                if ((int)t55 <= (int)0x100000) {
                                                    t80 = *(int *)0xC2A9C60;
                                                    if (t80 == 0) {
                                                        t81 = 0xC131A84;
                                                        if (t24 == 1) {
                                                            t81 = 0xC131ABC;
                                                        }
                                                        t82 = pdVibStart(a4, t81);
                                                        *(unsigned int *)0xC2A9C64 = 0x100000;
                                                        t83 = *(int *)0xC131A00;
                                                        *(unsigned int *)0xC2A9C60 = t83;
                                                        t84 = *(int *)0xC2A9C8C;
                                                        *(unsigned int *)0xC2A9C8C = (t84 & 0xFFEEEFEE);
                                                        t85 = *(int *)0xC2A9C60;
                                                        if ((int)t85 > 0) {
                                                            t86 = *(int *)0xC2A9C60;
                                                            *(unsigned int *)0xC2A9C60 = (t86 - 1);
                                                        }
                                                        t87 = *(int *)0xC2A9C60;
                                                        t89 = t82;
                                                        if (t87 == 0) {
                                                            t88 = vibStart();
                                                            *(unsigned int *)0xC2A9C8C = 0x0;
                                                            t89 = t88;
                                                        }
                                                        t92 = t89;
                                                    } else {
                                                        t91 = vibStart();
                                                        t92 = t91;
                                                    }
                                                    t102 = t92;
                                                } else {
                                                    *(unsigned int *)0xC2A9C64 = 0x100000;
                                                    t93 = *(int *)0xC131A00;
                                                    *(unsigned int *)0xC2A9C60 = t93;
                                                    t94 = *(int *)0xC2A9C8C;
                                                    *(unsigned int *)0xC2A9C8C = (t94 & 0xFFEEEFEE);
                                                    t95 = *(int *)0xC2A9C60;
                                                    if ((int)t95 > 0) {
                                                        t96 = *(int *)0xC2A9C60;
                                                        *(unsigned int *)0xC2A9C60 = (t96 - 1);
                                                    }
                                                    t98 = *(int *)0xC2A9C60;
                                                    t100 = 0x100000;
                                                    if (t98 == 0) {
                                                        t99 = vibStart();
                                                        *(unsigned int *)0xC2A9C8C = 0x0;
                                                        t100 = t99;
                                                    }
                                                    t102 = t100;
                                                }
                                                t207 = t102;
                                            } else {
                                                if ((0x10000 & t23) != 0) {
                                                    if ((int)t55 <= (int)0x10000) {
                                                        t103 = *(int *)0xC2A9C60;
                                                        if (t103 == 0) {
                                                            t104 = *(int *)0xC131B0C;
                                                            if (t104 == 0) {
                                                                t105 = 0xC131A8C;
                                                                if (t24 == 1) {
                                                                    t105 = 0xC131AC4;
                                                                }
                                                                t106 = pdVibStart(a4, t105);
                                                                t109 = t106;
                                                            } else {
                                                                t107 = 0xC131A94;
                                                                if (t24 == 1) {
                                                                    t107 = 0xC131ACC;
                                                                }
                                                                t108 = pdVibStart(a4, t107);
                                                                t109 = t108;
                                                            }
                                                            *(unsigned int *)0xC2A9C64 = 0x10000;
                                                            t110 = *(int *)0xC131A00;
                                                            *(unsigned int *)0xC2A9C60 = t110;
                                                            t111 = *(int *)0xC2A9C8C;
                                                            *(unsigned int *)0xC2A9C8C = (t111 & 0xFFFEEFEE);
                                                            t112 = *(int *)0xC2A9C60;
                                                            if ((int)t112 > 0) {
                                                                t113 = *(int *)0xC2A9C60;
                                                                *(unsigned int *)0xC2A9C60 = (t113 - 1);
                                                            }
                                                            t114 = *(int *)0xC2A9C60;
                                                            t116 = t109;
                                                            if (t114 == 0) {
                                                                t115 = vibStart();
                                                                *(unsigned int *)0xC2A9C8C = 0x0;
                                                                t116 = t115;
                                                            }
                                                            t119 = t116;
                                                        } else {
                                                            t118 = vibStart();
                                                            t119 = t118;
                                                        }
                                                        t129 = t119;
                                                    } else {
                                                        *(unsigned int *)0xC2A9C64 = 0x10000;
                                                        t120 = *(int *)0xC131A00;
                                                        *(unsigned int *)0xC2A9C60 = t120;
                                                        t121 = *(int *)0xC2A9C8C;
                                                        *(unsigned int *)0xC2A9C8C = (t121 & 0xFFFEEFEE);
                                                        t122 = *(int *)0xC2A9C60;
                                                        if ((int)t122 > 0) {
                                                            t123 = *(int *)0xC2A9C60;
                                                            *(unsigned int *)0xC2A9C60 = (t123 - 1);
                                                        }
                                                        t125 = *(int *)0xC2A9C60;
                                                        t127 = 0x10000;
                                                        if (t125 == 0) {
                                                            t126 = vibStart();
                                                            *(unsigned int *)0xC2A9C8C = 0x0;
                                                            t127 = t126;
                                                        }
                                                        t129 = t127;
                                                    }
                                                    t206 = t129;
                                                } else {
                                                    if ((0x1000 & t23) != 0) {
                                                        if ((int)t55 <= (int)0x1000) {
                                                            t130 = *(int *)0xC2A9C60;
                                                            if (t130 != 0) {
                                                                t131 = vibStart();
                                                                t143 = t131;
                                                            } else {
                                                                t132 = 0xC131A9C;
                                                                if (t24 == 1) {
                                                                    t132 = 0xC131AD4;
                                                                }
                                                                t133 = pdVibStart(a4, t132);
                                                                *(unsigned int *)0xC2A9C64 = 0x1000;
                                                                t134 = *(int *)0xC131A00;
                                                                *(unsigned int *)0xC2A9C60 = t134;
                                                                t135 = *(int *)0xC2A9C8C;
                                                                *(unsigned int *)0xC2A9C8C = (t135 & 0xFFFFEFEE);
                                                                t136 = *(int *)0xC2A9C60;
                                                                if ((int)t136 > 0) {
                                                                    t137 = *(int *)0xC2A9C60;
                                                                    *(unsigned int *)0xC2A9C60 = (t137 - 1);
                                                                }
                                                                t139 = *(int *)0xC2A9C60;
                                                                t141 = t133;
                                                                if (t139 == 0) {
                                                                    t140 = vibStart();
                                                                    *(unsigned int *)0xC2A9C8C = 0x0;
                                                                    t141 = t140;
                                                                }
                                                                t143 = t141;
                                                            }
                                                            t153 = t143;
                                                        } else {
                                                            *(unsigned int *)0xC2A9C64 = 0x1000;
                                                            t144 = *(int *)0xC131A00;
                                                            *(unsigned int *)0xC2A9C60 = t144;
                                                            t145 = *(int *)0xC2A9C8C;
                                                            *(unsigned int *)0xC2A9C8C = (t145 & 0xFFFFEFEE);
                                                            t146 = *(int *)0xC2A9C60;
                                                            if ((int)t146 > 0) {
                                                                t147 = *(int *)0xC2A9C60;
                                                                *(unsigned int *)0xC2A9C60 = (t147 - 1);
                                                            }
                                                            t149 = *(int *)0xC2A9C60;
                                                            t151 = 0x1000;
                                                            if (t149 == 0) {
                                                                t150 = vibStart();
                                                                *(unsigned int *)0xC2A9C8C = 0x0;
                                                                t151 = t150;
                                                            }
                                                            t153 = t151;
                                                        }
                                                        t205 = t153;
                                                    } else {
                                                        if ((t23 & 0x1) != 0) {
                                                            *(unsigned char *)0xC2A9C69 = 0x80;
                                                            *(unsigned char *)0xC2A9C6A = 0x4;
                                                            *(unsigned char *)0xC2A9C6B = 0x7;
                                                            *(unsigned char *)0xC2A9C6C = 0x1;
                                                            FUN_0c14f182(0xC2A9C68, 0x80);
                                                            t155 = pdVibStart(a4, 0xC2A9C68);
                                                            *(unsigned int *)0xC2A9C64 = 0x1;
                                                            *(unsigned int *)0xC2A9C60 = 0x3;
                                                            *(unsigned int *)0xC2A9C8C = 0x0;
                                                            t156 = *(int *)0xC2A9C60;
                                                            if ((int)t156 > 0) {
                                                                t157 = *(int *)0xC2A9C60;
                                                                *(unsigned int *)0xC2A9C60 = (t157 - 1);
                                                            }
                                                            t158 = *(int *)0xC2A9C60;
                                                            t160 = t155;
                                                            if (t158 == 0) {
                                                                t159 = vibStart();
                                                                *(unsigned int *)0xC2A9C8C = 0x0;
                                                                t160 = t159;
                                                            }
                                                            t204 = t160;
                                                        } else {
                                                            t161 = *(int *)0xC1EE234;
                                                            if (t161 == 1) {
                                                                t162 = *(int *)0xC1EE238;
                                                                if (t162 == 1) {
                                                                    t163 = *(int *)0xC2A9C60;
                                                                    if (t163 == 0) {
                                                                        if (t24 != 1) {
                                                                            t164 = pdVibStart(a4, 0xC131AA4);
                                                                            t171 = t164;
                                                                            if (t164 != -1) {
                                                                                *(unsigned int *)0xC2A9C60 = 0xA;
                                                                                *(unsigned int *)0xC2A9C64 = 0x10;
                                                                                t165 = *(int *)0xC2A9C60;
                                                                                if ((int)t165 > 0) {
                                                                                    t166 = *(int *)0xC2A9C60;
                                                                                    *(unsigned int *)0xC2A9C60 = (t166 - 1);
                                                                                }
                                                                                t167 = *(int *)0xC2A9C60;
                                                                                t169 = t164;
                                                                                if (t167 == 0) {
                                                                                    t168 = vibStart();
                                                                                    *(unsigned int *)0xC2A9C8C = 0x0;
                                                                                    t169 = t168;
                                                                                }
                                                                                t171 = t169;
                                                                            }
                                                                            t179 = t171;
                                                                        } else {
                                                                            *(unsigned int *)0xC2A9C60 = 0xA;
                                                                            *(unsigned int *)0xC2A9C64 = 0x10;
                                                                            t172 = *(int *)0xC2A9C60;
                                                                            if ((int)t172 > 0) {
                                                                                t173 = *(int *)0xC2A9C60;
                                                                                *(unsigned int *)0xC2A9C60 = (t173 - 1);
                                                                            }
                                                                            t175 = *(int *)0xC2A9C60;
                                                                            t177 = t24;
                                                                            if (t175 == 0) {
                                                                                t176 = vibStart();
                                                                                *(unsigned int *)0xC2A9C8C = 0x0;
                                                                                t177 = t176;
                                                                            }
                                                                            t179 = t177;
                                                                        }
                                                                        t187 = t179;
                                                                    } else {
                                                                        t180 = *(int *)0xC2A9C60;
                                                                        if ((int)t180 > 0) {
                                                                            t181 = *(int *)0xC2A9C60;
                                                                            *(unsigned int *)0xC2A9C60 = (t181 - 1);
                                                                        }
                                                                        t183 = *(int *)0xC2A9C60;
                                                                        t185 = t162;
                                                                        if (t183 == 0) {
                                                                            t184 = vibStart();
                                                                            *(unsigned int *)0xC2A9C8C = 0x0;
                                                                            t185 = t184;
                                                                        }
                                                                        t187 = t185;
                                                                    }
                                                                    t195 = t187;
                                                                } else {
                                                                    t188 = *(int *)0xC2A9C60;
                                                                    if ((int)t188 > 0) {
                                                                        t189 = *(int *)0xC2A9C60;
                                                                        *(unsigned int *)0xC2A9C60 = (t189 - 1);
                                                                    }
                                                                    t191 = *(int *)0xC2A9C60;
                                                                    t193 = t162;
                                                                    if (t191 == 0) {
                                                                        t192 = vibStart();
                                                                        *(unsigned int *)0xC2A9C8C = 0x0;
                                                                        t193 = t192;
                                                                    }
                                                                    t195 = t193;
                                                                }
                                                                t203 = t195;
                                                            } else {
                                                                t196 = *(int *)0xC2A9C60;
                                                                if ((int)t196 > 0) {
                                                                    t197 = *(int *)0xC2A9C60;
                                                                    *(unsigned int *)0xC2A9C60 = (t197 - 1);
                                                                }
                                                                t199 = *(int *)0xC2A9C60;
                                                                t201 = t161;
                                                                if (t199 == 0) {
                                                                    t200 = vibStart();
                                                                    *(unsigned int *)0xC2A9C8C = 0x0;
                                                                    t201 = t200;
                                                                }
                                                                t203 = t201;
                                                            }
                                                            t204 = t203;
                                                        }
                                                        t205 = t204;
                                                    }
                                                    t206 = t205;
                                                }
                                                t207 = t206;
                                            }
                                            t208 = t207;
                                        }
                                        t209 = t208;
                                    }
                                    t210 = t209;
                                }
                                t212 = t210;
                            }
                            t404 = t212;
                        } else {
                            *(unsigned int *)0xC2A9C94 = 0x0;
                            t214 = FUN_0c05ef68();
                            t402 = t214;
                            if (t214 != 0) {
                                t215 = *(int *)0xC2A9C8C;
                                t216 = *(int *)0xC2A9C98;
                                if ((0x10000000 & t215) != 0) {
                                    if (t216 == 1) {
                                        t217 = *(signed char *)0xC131AAC;
                                        *(unsigned char *)0xC2A9C68 = t217;
                                        t218 = *(signed char *)0xC131AAD;
                                        *(unsigned char *)0xC2A9C69 = t218;
                                        t219 = *(signed char *)0xC131AAE;
                                        *(unsigned char *)0xC2A9C6A = t219;
                                        t220 = *(signed char *)0xC131AAF;
                                        *(unsigned char *)0xC2A9C6B = t220;
                                        t221 = *(signed char *)0xC131AB0;
                                        *(unsigned char *)0xC2A9C6C = t221;
                                        t222 = *(signed char *)0xC131AB1;
                                        *(unsigned char *)0xC2A9C6D = t222;
                                        t223 = *(signed char *)0xC131AB2;
                                        *(unsigned char *)0xC2A9C6E = t223;
                                        t224 = *(signed char *)0xC131AB3;
                                        *(unsigned char *)0xC2A9C6F = t224;
                                        t225 = *(int *)0xC131B04;
                                        *(unsigned char *)0xC2A9C6A = (0xFFFFFFFF - t225);
                                        t226 = *(signed char *)0xC2A9C6A;
                                        if ((int)t226 < (int)0xFFFFFFF9) {
                                            *(unsigned char *)0xC2A9C6A = 0xFFFFFFF9;
                                        }
                                    } else {
                                        t228 = *(signed char *)0xC131A74;
                                        *(unsigned char *)0xC2A9C68 = t228;
                                        t229 = *(signed char *)0xC131A75;
                                        *(unsigned char *)0xC2A9C69 = t229;
                                        t230 = *(signed char *)0xC131A76;
                                        *(unsigned char *)0xC2A9C6A = t230;
                                        t231 = *(signed char *)0xC131A77;
                                        *(unsigned char *)0xC2A9C6B = t231;
                                        t232 = *(signed char *)0xC131A78;
                                        *(unsigned char *)0xC2A9C6C = t232;
                                        t233 = *(signed char *)0xC131A79;
                                        *(unsigned char *)0xC2A9C6D = t233;
                                        t234 = *(signed char *)0xC131A7A;
                                        *(unsigned char *)0xC2A9C6E = t234;
                                        t235 = *(signed char *)0xC131A7B;
                                        *(unsigned char *)0xC2A9C6F = t235;
                                        t236 = *(int *)0xC131B04;
                                        *(unsigned char *)0xC2A9C6A = t236;
                                    }
                                    t240 = pdVibStart(a4, 0xC2A9C68);
                                    *(unsigned int *)0xC2A9C64 = 0x10000000;
                                    t241 = *(int *)0xC131A00;
                                    *(unsigned int *)0xC2A9C60 = t241;
                                    *(unsigned int *)0xC2A9C8C = 0x0;
                                    t242 = *(int *)0xC2A9C60;
                                    if ((int)t242 > 0) {
                                        t243 = *(int *)0xC2A9C60;
                                        *(unsigned int *)0xC2A9C60 = (t243 - 1);
                                    }
                                    t244 = *(int *)0xC2A9C60;
                                    t246 = t240;
                                    if (t244 == 0) {
                                        t245 = vibStart();
                                        *(unsigned int *)0xC2A9C8C = 0x0;
                                        t246 = t245;
                                    }
                                    t401 = t246;
                                } else {
                                    t247 = *(int *)0xC2A9C64;
                                    if ((0x1000000 & t215) != 0) {
                                        if ((int)t247 <= (int)0x1000000) {
                                            t248 = *(int *)0xC2A9C60;
                                            if (t248 != 0) {
                                                t249 = vibStart();
                                                t261 = t249;
                                            } else {
                                                t250 = 0xC131A7C;
                                                if (t216 == 1) {
                                                    t250 = 0xC131AB4;
                                                }
                                                t251 = pdVibStart(a4, t250);
                                                *(unsigned int *)0xC2A9C64 = 0x1000000;
                                                t252 = *(int *)0xC131A00;
                                                *(unsigned int *)0xC2A9C60 = t252;
                                                t253 = *(int *)0xC2A9C8C;
                                                *(unsigned int *)0xC2A9C8C = (t253 & 0xFEEEEFEE);
                                                t254 = *(int *)0xC2A9C60;
                                                if ((int)t254 > 0) {
                                                    t255 = *(int *)0xC2A9C60;
                                                    *(unsigned int *)0xC2A9C60 = (t255 - 1);
                                                }
                                                t257 = *(int *)0xC2A9C60;
                                                t259 = t251;
                                                if (t257 == 0) {
                                                    t258 = vibStart();
                                                    *(unsigned int *)0xC2A9C8C = 0x0;
                                                    t259 = t258;
                                                }
                                                t261 = t259;
                                            }
                                            t271 = t261;
                                        } else {
                                            *(unsigned int *)0xC2A9C64 = 0x1000000;
                                            t262 = *(int *)0xC131A00;
                                            *(unsigned int *)0xC2A9C60 = t262;
                                            t263 = *(int *)0xC2A9C8C;
                                            *(unsigned int *)0xC2A9C8C = (t263 & 0xFEEEEFEE);
                                            t264 = *(int *)0xC2A9C60;
                                            if ((int)t264 > 0) {
                                                t265 = *(int *)0xC2A9C60;
                                                *(unsigned int *)0xC2A9C60 = (t265 - 1);
                                            }
                                            t267 = *(int *)0xC2A9C60;
                                            t269 = 0x1000000;
                                            if (t267 == 0) {
                                                t268 = vibStart();
                                                *(unsigned int *)0xC2A9C8C = 0x0;
                                                t269 = t268;
                                            }
                                            t271 = t269;
                                        }
                                        t400 = t271;
                                    } else {
                                        if ((0x100000 & t215) != 0) {
                                            if ((int)t247 <= (int)0x100000) {
                                                t272 = *(int *)0xC2A9C60;
                                                if (t272 == 0) {
                                                    t273 = 0xC131A84;
                                                    if (t216 == 1) {
                                                        t273 = 0xC131ABC;
                                                    }
                                                    t274 = pdVibStart(a4, t273);
                                                    *(unsigned int *)0xC2A9C64 = 0x100000;
                                                    t275 = *(int *)0xC131A00;
                                                    *(unsigned int *)0xC2A9C60 = t275;
                                                    t276 = *(int *)0xC2A9C8C;
                                                    *(unsigned int *)0xC2A9C8C = (t276 & 0xFFEEEFEE);
                                                    t277 = *(int *)0xC2A9C60;
                                                    if ((int)t277 > 0) {
                                                        t278 = *(int *)0xC2A9C60;
                                                        *(unsigned int *)0xC2A9C60 = (t278 - 1);
                                                    }
                                                    t279 = *(int *)0xC2A9C60;
                                                    t281 = t274;
                                                    if (t279 == 0) {
                                                        t280 = vibStart();
                                                        *(unsigned int *)0xC2A9C8C = 0x0;
                                                        t281 = t280;
                                                    }
                                                    t284 = t281;
                                                } else {
                                                    t283 = vibStart();
                                                    t284 = t283;
                                                }
                                                t294 = t284;
                                            } else {
                                                *(unsigned int *)0xC2A9C64 = 0x100000;
                                                t285 = *(int *)0xC131A00;
                                                *(unsigned int *)0xC2A9C60 = t285;
                                                t286 = *(int *)0xC2A9C8C;
                                                *(unsigned int *)0xC2A9C8C = (t286 & 0xFFEEEFEE);
                                                t287 = *(int *)0xC2A9C60;
                                                if ((int)t287 > 0) {
                                                    t288 = *(int *)0xC2A9C60;
                                                    *(unsigned int *)0xC2A9C60 = (t288 - 1);
                                                }
                                                t290 = *(int *)0xC2A9C60;
                                                t292 = 0x100000;
                                                if (t290 == 0) {
                                                    t291 = vibStart();
                                                    *(unsigned int *)0xC2A9C8C = 0x0;
                                                    t292 = t291;
                                                }
                                                t294 = t292;
                                            }
                                            t399 = t294;
                                        } else {
                                            if ((0x10000 & t215) != 0) {
                                                if ((int)t247 <= (int)0x10000) {
                                                    t295 = *(int *)0xC2A9C60;
                                                    if (t295 == 0) {
                                                        t296 = *(int *)0xC131B0C;
                                                        if (t296 == 0) {
                                                            t297 = 0xC131A8C;
                                                            if (t216 == 1) {
                                                                t297 = 0xC131AC4;
                                                            }
                                                            t298 = pdVibStart(a4, t297);
                                                            t301 = t298;
                                                        } else {
                                                            t299 = 0xC131A94;
                                                            if (t216 == 1) {
                                                                t299 = 0xC131ACC;
                                                            }
                                                            t300 = pdVibStart(a4, t299);
                                                            t301 = t300;
                                                        }
                                                        *(unsigned int *)0xC2A9C64 = 0x10000;
                                                        t302 = *(int *)0xC131A00;
                                                        *(unsigned int *)0xC2A9C60 = t302;
                                                        t303 = *(int *)0xC2A9C8C;
                                                        *(unsigned int *)0xC2A9C8C = (t303 & 0xFFFEEFEE);
                                                        t304 = *(int *)0xC2A9C60;
                                                        if ((int)t304 > 0) {
                                                            t305 = *(int *)0xC2A9C60;
                                                            *(unsigned int *)0xC2A9C60 = (t305 - 1);
                                                        }
                                                        t306 = *(int *)0xC2A9C60;
                                                        t308 = t301;
                                                        if (t306 == 0) {
                                                            t307 = vibStart();
                                                            *(unsigned int *)0xC2A9C8C = 0x0;
                                                            t308 = t307;
                                                        }
                                                        t311 = t308;
                                                    } else {
                                                        t310 = vibStart();
                                                        t311 = t310;
                                                    }
                                                    t321 = t311;
                                                } else {
                                                    *(unsigned int *)0xC2A9C64 = 0x10000;
                                                    t312 = *(int *)0xC131A00;
                                                    *(unsigned int *)0xC2A9C60 = t312;
                                                    t313 = *(int *)0xC2A9C8C;
                                                    *(unsigned int *)0xC2A9C8C = (t313 & 0xFFFEEFEE);
                                                    t314 = *(int *)0xC2A9C60;
                                                    if ((int)t314 > 0) {
                                                        t315 = *(int *)0xC2A9C60;
                                                        *(unsigned int *)0xC2A9C60 = (t315 - 1);
                                                    }
                                                    t317 = *(int *)0xC2A9C60;
                                                    t319 = 0x10000;
                                                    if (t317 == 0) {
                                                        t318 = vibStart();
                                                        *(unsigned int *)0xC2A9C8C = 0x0;
                                                        t319 = t318;
                                                    }
                                                    t321 = t319;
                                                }
                                                t398 = t321;
                                            } else {
                                                if ((0x1000 & t215) != 0) {
                                                    if ((int)t247 <= (int)0x1000) {
                                                        t322 = *(int *)0xC2A9C60;
                                                        if (t322 != 0) {
                                                            t323 = vibStart();
                                                            t335 = t323;
                                                        } else {
                                                            t324 = 0xC131A9C;
                                                            if (t216 == 1) {
                                                                t324 = 0xC131AD4;
                                                            }
                                                            t325 = pdVibStart(a4, t324);
                                                            *(unsigned int *)0xC2A9C64 = 0x1000;
                                                            t326 = *(int *)0xC131A00;
                                                            *(unsigned int *)0xC2A9C60 = t326;
                                                            t327 = *(int *)0xC2A9C8C;
                                                            *(unsigned int *)0xC2A9C8C = (t327 & 0xFFFFEFEE);
                                                            t328 = *(int *)0xC2A9C60;
                                                            if ((int)t328 > 0) {
                                                                t329 = *(int *)0xC2A9C60;
                                                                *(unsigned int *)0xC2A9C60 = (t329 - 1);
                                                            }
                                                            t331 = *(int *)0xC2A9C60;
                                                            t333 = t325;
                                                            if (t331 == 0) {
                                                                t332 = vibStart();
                                                                *(unsigned int *)0xC2A9C8C = 0x0;
                                                                t333 = t332;
                                                            }
                                                            t335 = t333;
                                                        }
                                                        t345 = t335;
                                                    } else {
                                                        *(unsigned int *)0xC2A9C64 = 0x1000;
                                                        t336 = *(int *)0xC131A00;
                                                        *(unsigned int *)0xC2A9C60 = t336;
                                                        t337 = *(int *)0xC2A9C8C;
                                                        *(unsigned int *)0xC2A9C8C = (t337 & 0xFFFFEFEE);
                                                        t338 = *(int *)0xC2A9C60;
                                                        if ((int)t338 > 0) {
                                                            t339 = *(int *)0xC2A9C60;
                                                            *(unsigned int *)0xC2A9C60 = (t339 - 1);
                                                        }
                                                        t341 = *(int *)0xC2A9C60;
                                                        t343 = 0x1000;
                                                        if (t341 == 0) {
                                                            t342 = vibStart();
                                                            *(unsigned int *)0xC2A9C8C = 0x0;
                                                            t343 = t342;
                                                        }
                                                        t345 = t343;
                                                    }
                                                    t397 = t345;
                                                } else {
                                                    if ((t215 & 0x1) != 0) {
                                                        *(unsigned char *)0xC2A9C69 = 0x80;
                                                        *(unsigned char *)0xC2A9C6A = 0x4;
                                                        *(unsigned char *)0xC2A9C6B = 0x7;
                                                        *(unsigned char *)0xC2A9C6C = 0x1;
                                                        FUN_0c14f182(0xC2A9C68, 0x80);
                                                        t347 = pdVibStart(a4, 0xC2A9C68);
                                                        *(unsigned int *)0xC2A9C64 = 0x1;
                                                        *(unsigned int *)0xC2A9C60 = 0x3;
                                                        *(unsigned int *)0xC2A9C8C = 0x0;
                                                        t348 = *(int *)0xC2A9C60;
                                                        if ((int)t348 > 0) {
                                                            t349 = *(int *)0xC2A9C60;
                                                            *(unsigned int *)0xC2A9C60 = (t349 - 1);
                                                        }
                                                        t350 = *(int *)0xC2A9C60;
                                                        t352 = t347;
                                                        if (t350 == 0) {
                                                            t351 = vibStart();
                                                            *(unsigned int *)0xC2A9C8C = 0x0;
                                                            t352 = t351;
                                                        }
                                                        t396 = t352;
                                                    } else {
                                                        t353 = *(int *)0xC1EE234;
                                                        if (t353 == 1) {
                                                            t354 = *(int *)0xC1EE238;
                                                            if (t354 == 1) {
                                                                t355 = *(int *)0xC2A9C60;
                                                                if (t355 == 0) {
                                                                    if (t216 != 1) {
                                                                        t356 = pdVibStart(a4, 0xC131AA4);
                                                                        t363 = t356;
                                                                        if (t356 != -1) {
                                                                            *(unsigned int *)0xC2A9C60 = 0xA;
                                                                            *(unsigned int *)0xC2A9C64 = 0x10;
                                                                            t357 = *(int *)0xC2A9C60;
                                                                            if ((int)t357 > 0) {
                                                                                t358 = *(int *)0xC2A9C60;
                                                                                *(unsigned int *)0xC2A9C60 = (t358 - 1);
                                                                            }
                                                                            t359 = *(int *)0xC2A9C60;
                                                                            t361 = t356;
                                                                            if (t359 == 0) {
                                                                                t360 = vibStart();
                                                                                *(unsigned int *)0xC2A9C8C = 0x0;
                                                                                t361 = t360;
                                                                            }
                                                                            t363 = t361;
                                                                        }
                                                                        t371 = t363;
                                                                    } else {
                                                                        *(unsigned int *)0xC2A9C60 = 0xA;
                                                                        *(unsigned int *)0xC2A9C64 = 0x10;
                                                                        t364 = *(int *)0xC2A9C60;
                                                                        if ((int)t364 > 0) {
                                                                            t365 = *(int *)0xC2A9C60;
                                                                            *(unsigned int *)0xC2A9C60 = (t365 - 1);
                                                                        }
                                                                        t367 = *(int *)0xC2A9C60;
                                                                        t369 = t216;
                                                                        if (t367 == 0) {
                                                                            t368 = vibStart();
                                                                            *(unsigned int *)0xC2A9C8C = 0x0;
                                                                            t369 = t368;
                                                                        }
                                                                        t371 = t369;
                                                                    }
                                                                    t379 = t371;
                                                                } else {
                                                                    t372 = *(int *)0xC2A9C60;
                                                                    if ((int)t372 > 0) {
                                                                        t373 = *(int *)0xC2A9C60;
                                                                        *(unsigned int *)0xC2A9C60 = (t373 - 1);
                                                                    }
                                                                    t375 = *(int *)0xC2A9C60;
                                                                    t377 = t354;
                                                                    if (t375 == 0) {
                                                                        t376 = vibStart();
                                                                        *(unsigned int *)0xC2A9C8C = 0x0;
                                                                        t377 = t376;
                                                                    }
                                                                    t379 = t377;
                                                                }
                                                                t387 = t379;
                                                            } else {
                                                                t380 = *(int *)0xC2A9C60;
                                                                if ((int)t380 > 0) {
                                                                    t381 = *(int *)0xC2A9C60;
                                                                    *(unsigned int *)0xC2A9C60 = (t381 - 1);
                                                                }
                                                                t383 = *(int *)0xC2A9C60;
                                                                t385 = t354;
                                                                if (t383 == 0) {
                                                                    t384 = vibStart();
                                                                    *(unsigned int *)0xC2A9C8C = 0x0;
                                                                    t385 = t384;
                                                                }
                                                                t387 = t385;
                                                            }
                                                            t395 = t387;
                                                        } else {
                                                            t388 = *(int *)0xC2A9C60;
                                                            if ((int)t388 > 0) {
                                                                t389 = *(int *)0xC2A9C60;
                                                                *(unsigned int *)0xC2A9C60 = (t389 - 1);
                                                            }
                                                            t391 = *(int *)0xC2A9C60;
                                                            t393 = t353;
                                                            if (t391 == 0) {
                                                                t392 = vibStart();
                                                                *(unsigned int *)0xC2A9C8C = 0x0;
                                                                t393 = t392;
                                                            }
                                                            t395 = t393;
                                                        }
                                                        t396 = t395;
                                                    }
                                                    t397 = t396;
                                                }
                                                t398 = t397;
                                            }
                                            t399 = t398;
                                        }
                                        t400 = t399;
                                    }
                                    t401 = t400;
                                }
                                t402 = t401;
                            }
                            t404 = t402;
                        }
                        t406 = t404;
                    }
                    t408 = t406;
                }
                t414 = t408;
            } else {
                t411 = t2;
                if (t2 == 1) {
                    t410 = vibStart();
                    *(unsigned int *)0xC2A9C8C = 0x0;
                    *(unsigned int *)0xC2A9C90 = 0x2;
                    t411 = t410;
                }
                t414 = t411;
            }
            t814 = t414;
        } else {
            if (t2 != 1) {
                *(unsigned int *)0xC2A9C90 = 0x1;
            }
            t417 = *(signed char *)0xC28A4EF;
            t812 = t2;
            if (t417 != 0) {
                t418 = *(int *)0xC2A11B0;
                if (t418 != 0) {
                    t419 = *(int *)0xC2A9C8C;
                    if ((t419 & 1) == 0) {
                        t420 = *(int *)0xC2A9C94;
                        *(unsigned int *)0xC2A9C94 = (t420 + 0x1);
                        t422 = t419;
                        if ((int)(t420 + 0x1) < (int)0xA) {
                            t421 = vibStart();
                            t422 = t421;
                        }
                        t423 = *(int *)0xC2A9C60;
                        if ((int)t423 > 0) {
                            t424 = *(int *)0xC2A9C60;
                            *(unsigned int *)0xC2A9C60 = (t424 - 1);
                        }
                        t425 = *(int *)0xC2A9C60;
                        t427 = t422;
                        if (t425 == 0) {
                            t426 = vibStart();
                            *(unsigned int *)0xC2A9C8C = 0x0;
                            t427 = t426;
                        }
                        t618 = t427;
                    } else {
                        *(unsigned int *)0xC2A9C94 = 0x0;
                        t428 = FUN_0c05ef68();
                        t616 = t428;
                        if (t428 != 0) {
                            t429 = *(int *)0xC2A9C8C;
                            t430 = *(int *)0xC2A9C98;
                            if ((0x10000000 & t429) != 0) {
                                if (t430 == 1) {
                                    t431 = *(signed char *)0xC131AAC;
                                    *(unsigned char *)0xC2A9C68 = t431;
                                    t432 = *(signed char *)0xC131AAD;
                                    *(unsigned char *)0xC2A9C69 = t432;
                                    t433 = *(signed char *)0xC131AAE;
                                    *(unsigned char *)0xC2A9C6A = t433;
                                    t434 = *(signed char *)0xC131AAF;
                                    *(unsigned char *)0xC2A9C6B = t434;
                                    t435 = *(signed char *)0xC131AB0;
                                    *(unsigned char *)0xC2A9C6C = t435;
                                    t436 = *(signed char *)0xC131AB1;
                                    *(unsigned char *)0xC2A9C6D = t436;
                                    t437 = *(signed char *)0xC131AB2;
                                    *(unsigned char *)0xC2A9C6E = t437;
                                    t438 = *(signed char *)0xC131AB3;
                                    *(unsigned char *)0xC2A9C6F = t438;
                                    t439 = *(int *)0xC131B04;
                                    *(unsigned char *)0xC2A9C6A = (0xFFFFFFFF - t439);
                                    t440 = *(signed char *)0xC2A9C6A;
                                    if ((int)t440 < (int)0xFFFFFFF9) {
                                        *(unsigned char *)0xC2A9C6A = 0xFFFFFFF9;
                                    }
                                } else {
                                    t442 = *(signed char *)0xC131A74;
                                    *(unsigned char *)0xC2A9C68 = t442;
                                    t443 = *(signed char *)0xC131A75;
                                    *(unsigned char *)0xC2A9C69 = t443;
                                    t444 = *(signed char *)0xC131A76;
                                    *(unsigned char *)0xC2A9C6A = t444;
                                    t445 = *(signed char *)0xC131A77;
                                    *(unsigned char *)0xC2A9C6B = t445;
                                    t446 = *(signed char *)0xC131A78;
                                    *(unsigned char *)0xC2A9C6C = t446;
                                    t447 = *(signed char *)0xC131A79;
                                    *(unsigned char *)0xC2A9C6D = t447;
                                    t448 = *(signed char *)0xC131A7A;
                                    *(unsigned char *)0xC2A9C6E = t448;
                                    t449 = *(signed char *)0xC131A7B;
                                    *(unsigned char *)0xC2A9C6F = t449;
                                    t450 = *(int *)0xC131B04;
                                    *(unsigned char *)0xC2A9C6A = t450;
                                }
                                t454 = pdVibStart(a4, 0xC2A9C68);
                                *(unsigned int *)0xC2A9C64 = 0x10000000;
                                t455 = *(int *)0xC131A00;
                                *(unsigned int *)0xC2A9C60 = t455;
                                *(unsigned int *)0xC2A9C8C = 0x0;
                                t456 = *(int *)0xC2A9C60;
                                if ((int)t456 > 0) {
                                    t457 = *(int *)0xC2A9C60;
                                    *(unsigned int *)0xC2A9C60 = (t457 - 1);
                                }
                                t458 = *(int *)0xC2A9C60;
                                t460 = t454;
                                if (t458 == 0) {
                                    t459 = vibStart();
                                    *(unsigned int *)0xC2A9C8C = 0x0;
                                    t460 = t459;
                                }
                                t615 = t460;
                            } else {
                                t461 = *(int *)0xC2A9C64;
                                if ((0x1000000 & t429) != 0) {
                                    if ((int)t461 <= (int)0x1000000) {
                                        t462 = *(int *)0xC2A9C60;
                                        if (t462 != 0) {
                                            t463 = vibStart();
                                            t475 = t463;
                                        } else {
                                            t464 = 0xC131A7C;
                                            if (t430 == 1) {
                                                t464 = 0xC131AB4;
                                            }
                                            t465 = pdVibStart(a4, t464);
                                            *(unsigned int *)0xC2A9C64 = 0x1000000;
                                            t466 = *(int *)0xC131A00;
                                            *(unsigned int *)0xC2A9C60 = t466;
                                            t467 = *(int *)0xC2A9C8C;
                                            *(unsigned int *)0xC2A9C8C = (t467 & 0xFEEEEFEE);
                                            t468 = *(int *)0xC2A9C60;
                                            if ((int)t468 > 0) {
                                                t469 = *(int *)0xC2A9C60;
                                                *(unsigned int *)0xC2A9C60 = (t469 - 1);
                                            }
                                            t471 = *(int *)0xC2A9C60;
                                            t473 = t465;
                                            if (t471 == 0) {
                                                t472 = vibStart();
                                                *(unsigned int *)0xC2A9C8C = 0x0;
                                                t473 = t472;
                                            }
                                            t475 = t473;
                                        }
                                        t485 = t475;
                                    } else {
                                        *(unsigned int *)0xC2A9C64 = 0x1000000;
                                        t476 = *(int *)0xC131A00;
                                        *(unsigned int *)0xC2A9C60 = t476;
                                        t477 = *(int *)0xC2A9C8C;
                                        *(unsigned int *)0xC2A9C8C = (t477 & 0xFEEEEFEE);
                                        t478 = *(int *)0xC2A9C60;
                                        if ((int)t478 > 0) {
                                            t479 = *(int *)0xC2A9C60;
                                            *(unsigned int *)0xC2A9C60 = (t479 - 1);
                                        }
                                        t481 = *(int *)0xC2A9C60;
                                        t483 = 0x1000000;
                                        if (t481 == 0) {
                                            t482 = vibStart();
                                            *(unsigned int *)0xC2A9C8C = 0x0;
                                            t483 = t482;
                                        }
                                        t485 = t483;
                                    }
                                    t614 = t485;
                                } else {
                                    if ((0x100000 & t429) != 0) {
                                        if ((int)t461 <= (int)0x100000) {
                                            t486 = *(int *)0xC2A9C60;
                                            if (t486 == 0) {
                                                t487 = 0xC131A84;
                                                if (t430 == 1) {
                                                    t487 = 0xC131ABC;
                                                }
                                                t488 = pdVibStart(a4, t487);
                                                *(unsigned int *)0xC2A9C64 = 0x100000;
                                                t489 = *(int *)0xC131A00;
                                                *(unsigned int *)0xC2A9C60 = t489;
                                                t490 = *(int *)0xC2A9C8C;
                                                *(unsigned int *)0xC2A9C8C = (t490 & 0xFFEEEFEE);
                                                t491 = *(int *)0xC2A9C60;
                                                if ((int)t491 > 0) {
                                                    t492 = *(int *)0xC2A9C60;
                                                    *(unsigned int *)0xC2A9C60 = (t492 - 1);
                                                }
                                                t493 = *(int *)0xC2A9C60;
                                                t495 = t488;
                                                if (t493 == 0) {
                                                    t494 = vibStart();
                                                    *(unsigned int *)0xC2A9C8C = 0x0;
                                                    t495 = t494;
                                                }
                                                t498 = t495;
                                            } else {
                                                t497 = vibStart();
                                                t498 = t497;
                                            }
                                            t508 = t498;
                                        } else {
                                            *(unsigned int *)0xC2A9C64 = 0x100000;
                                            t499 = *(int *)0xC131A00;
                                            *(unsigned int *)0xC2A9C60 = t499;
                                            t500 = *(int *)0xC2A9C8C;
                                            *(unsigned int *)0xC2A9C8C = (t500 & 0xFFEEEFEE);
                                            t501 = *(int *)0xC2A9C60;
                                            if ((int)t501 > 0) {
                                                t502 = *(int *)0xC2A9C60;
                                                *(unsigned int *)0xC2A9C60 = (t502 - 1);
                                            }
                                            t504 = *(int *)0xC2A9C60;
                                            t506 = 0x100000;
                                            if (t504 == 0) {
                                                t505 = vibStart();
                                                *(unsigned int *)0xC2A9C8C = 0x0;
                                                t506 = t505;
                                            }
                                            t508 = t506;
                                        }
                                        t613 = t508;
                                    } else {
                                        if ((0x10000 & t429) != 0) {
                                            if ((int)t461 <= (int)0x10000) {
                                                t509 = *(int *)0xC2A9C60;
                                                if (t509 == 0) {
                                                    t510 = *(int *)0xC131B0C;
                                                    if (t510 == 0) {
                                                        t511 = 0xC131A8C;
                                                        if (t430 == 1) {
                                                            t511 = 0xC131AC4;
                                                        }
                                                        t512 = pdVibStart(a4, t511);
                                                        t515 = t512;
                                                    } else {
                                                        t513 = 0xC131A94;
                                                        if (t430 == 1) {
                                                            t513 = 0xC131ACC;
                                                        }
                                                        t514 = pdVibStart(a4, t513);
                                                        t515 = t514;
                                                    }
                                                    *(unsigned int *)0xC2A9C64 = 0x10000;
                                                    t516 = *(int *)0xC131A00;
                                                    *(unsigned int *)0xC2A9C60 = t516;
                                                    t517 = *(int *)0xC2A9C8C;
                                                    *(unsigned int *)0xC2A9C8C = (t517 & 0xFFFEEFEE);
                                                    t518 = *(int *)0xC2A9C60;
                                                    if ((int)t518 > 0) {
                                                        t519 = *(int *)0xC2A9C60;
                                                        *(unsigned int *)0xC2A9C60 = (t519 - 1);
                                                    }
                                                    t520 = *(int *)0xC2A9C60;
                                                    t522 = t515;
                                                    if (t520 == 0) {
                                                        t521 = vibStart();
                                                        *(unsigned int *)0xC2A9C8C = 0x0;
                                                        t522 = t521;
                                                    }
                                                    t525 = t522;
                                                } else {
                                                    t524 = vibStart();
                                                    t525 = t524;
                                                }
                                                t535 = t525;
                                            } else {
                                                *(unsigned int *)0xC2A9C64 = 0x10000;
                                                t526 = *(int *)0xC131A00;
                                                *(unsigned int *)0xC2A9C60 = t526;
                                                t527 = *(int *)0xC2A9C8C;
                                                *(unsigned int *)0xC2A9C8C = (t527 & 0xFFFEEFEE);
                                                t528 = *(int *)0xC2A9C60;
                                                if ((int)t528 > 0) {
                                                    t529 = *(int *)0xC2A9C60;
                                                    *(unsigned int *)0xC2A9C60 = (t529 - 1);
                                                }
                                                t531 = *(int *)0xC2A9C60;
                                                t533 = 0x10000;
                                                if (t531 == 0) {
                                                    t532 = vibStart();
                                                    *(unsigned int *)0xC2A9C8C = 0x0;
                                                    t533 = t532;
                                                }
                                                t535 = t533;
                                            }
                                            t612 = t535;
                                        } else {
                                            if ((0x1000 & t429) != 0) {
                                                if ((int)t461 <= (int)0x1000) {
                                                    t536 = *(int *)0xC2A9C60;
                                                    if (t536 != 0) {
                                                        t537 = vibStart();
                                                        t549 = t537;
                                                    } else {
                                                        t538 = 0xC131A9C;
                                                        if (t430 == 1) {
                                                            t538 = 0xC131AD4;
                                                        }
                                                        t539 = pdVibStart(a4, t538);
                                                        *(unsigned int *)0xC2A9C64 = 0x1000;
                                                        t540 = *(int *)0xC131A00;
                                                        *(unsigned int *)0xC2A9C60 = t540;
                                                        t541 = *(int *)0xC2A9C8C;
                                                        *(unsigned int *)0xC2A9C8C = (t541 & 0xFFFFEFEE);
                                                        t542 = *(int *)0xC2A9C60;
                                                        if ((int)t542 > 0) {
                                                            t543 = *(int *)0xC2A9C60;
                                                            *(unsigned int *)0xC2A9C60 = (t543 - 1);
                                                        }
                                                        t545 = *(int *)0xC2A9C60;
                                                        t547 = t539;
                                                        if (t545 == 0) {
                                                            t546 = vibStart();
                                                            *(unsigned int *)0xC2A9C8C = 0x0;
                                                            t547 = t546;
                                                        }
                                                        t549 = t547;
                                                    }
                                                    t559 = t549;
                                                } else {
                                                    *(unsigned int *)0xC2A9C64 = 0x1000;
                                                    t550 = *(int *)0xC131A00;
                                                    *(unsigned int *)0xC2A9C60 = t550;
                                                    t551 = *(int *)0xC2A9C8C;
                                                    *(unsigned int *)0xC2A9C8C = (t551 & 0xFFFFEFEE);
                                                    t552 = *(int *)0xC2A9C60;
                                                    if ((int)t552 > 0) {
                                                        t553 = *(int *)0xC2A9C60;
                                                        *(unsigned int *)0xC2A9C60 = (t553 - 1);
                                                    }
                                                    t555 = *(int *)0xC2A9C60;
                                                    t557 = 0x1000;
                                                    if (t555 == 0) {
                                                        t556 = vibStart();
                                                        *(unsigned int *)0xC2A9C8C = 0x0;
                                                        t557 = t556;
                                                    }
                                                    t559 = t557;
                                                }
                                                t611 = t559;
                                            } else {
                                                if ((t429 & 0x1) != 0) {
                                                    *(unsigned char *)0xC2A9C69 = 0x80;
                                                    *(unsigned char *)0xC2A9C6A = 0x4;
                                                    *(unsigned char *)0xC2A9C6B = 0x7;
                                                    *(unsigned char *)0xC2A9C6C = 0x1;
                                                    FUN_0c14f182(0xC2A9C68, 0x80);
                                                    t561 = pdVibStart(a4, 0xC2A9C68);
                                                    *(unsigned int *)0xC2A9C64 = 0x1;
                                                    *(unsigned int *)0xC2A9C60 = 0x3;
                                                    *(unsigned int *)0xC2A9C8C = 0x0;
                                                    t562 = *(int *)0xC2A9C60;
                                                    if ((int)t562 > 0) {
                                                        t563 = *(int *)0xC2A9C60;
                                                        *(unsigned int *)0xC2A9C60 = (t563 - 1);
                                                    }
                                                    t564 = *(int *)0xC2A9C60;
                                                    t566 = t561;
                                                    if (t564 == 0) {
                                                        t565 = vibStart();
                                                        *(unsigned int *)0xC2A9C8C = 0x0;
                                                        t566 = t565;
                                                    }
                                                    t610 = t566;
                                                } else {
                                                    t567 = *(int *)0xC1EE234;
                                                    if (t567 == 1) {
                                                        t568 = *(int *)0xC1EE238;
                                                        if (t568 == 1) {
                                                            t569 = *(int *)0xC2A9C60;
                                                            if (t569 == 0) {
                                                                if (t430 != 1) {
                                                                    t570 = pdVibStart(a4, 0xC131AA4);
                                                                    t577 = t570;
                                                                    if (t570 != -1) {
                                                                        *(unsigned int *)0xC2A9C60 = 0xA;
                                                                        *(unsigned int *)0xC2A9C64 = 0x10;
                                                                        t571 = *(int *)0xC2A9C60;
                                                                        if ((int)t571 > 0) {
                                                                            t572 = *(int *)0xC2A9C60;
                                                                            *(unsigned int *)0xC2A9C60 = (t572 - 1);
                                                                        }
                                                                        t573 = *(int *)0xC2A9C60;
                                                                        t575 = t570;
                                                                        if (t573 == 0) {
                                                                            t574 = vibStart();
                                                                            *(unsigned int *)0xC2A9C8C = 0x0;
                                                                            t575 = t574;
                                                                        }
                                                                        t577 = t575;
                                                                    }
                                                                    t585 = t577;
                                                                } else {
                                                                    *(unsigned int *)0xC2A9C60 = 0xA;
                                                                    *(unsigned int *)0xC2A9C64 = 0x10;
                                                                    t578 = *(int *)0xC2A9C60;
                                                                    if ((int)t578 > 0) {
                                                                        t579 = *(int *)0xC2A9C60;
                                                                        *(unsigned int *)0xC2A9C60 = (t579 - 1);
                                                                    }
                                                                    t581 = *(int *)0xC2A9C60;
                                                                    t583 = t430;
                                                                    if (t581 == 0) {
                                                                        t582 = vibStart();
                                                                        *(unsigned int *)0xC2A9C8C = 0x0;
                                                                        t583 = t582;
                                                                    }
                                                                    t585 = t583;
                                                                }
                                                                t593 = t585;
                                                            } else {
                                                                t586 = *(int *)0xC2A9C60;
                                                                if ((int)t586 > 0) {
                                                                    t587 = *(int *)0xC2A9C60;
                                                                    *(unsigned int *)0xC2A9C60 = (t587 - 1);
                                                                }
                                                                t589 = *(int *)0xC2A9C60;
                                                                t591 = t568;
                                                                if (t589 == 0) {
                                                                    t590 = vibStart();
                                                                    *(unsigned int *)0xC2A9C8C = 0x0;
                                                                    t591 = t590;
                                                                }
                                                                t593 = t591;
                                                            }
                                                            t601 = t593;
                                                        } else {
                                                            t594 = *(int *)0xC2A9C60;
                                                            if ((int)t594 > 0) {
                                                                t595 = *(int *)0xC2A9C60;
                                                                *(unsigned int *)0xC2A9C60 = (t595 - 1);
                                                            }
                                                            t597 = *(int *)0xC2A9C60;
                                                            t599 = t568;
                                                            if (t597 == 0) {
                                                                t598 = vibStart();
                                                                *(unsigned int *)0xC2A9C8C = 0x0;
                                                                t599 = t598;
                                                            }
                                                            t601 = t599;
                                                        }
                                                        t609 = t601;
                                                    } else {
                                                        t602 = *(int *)0xC2A9C60;
                                                        if ((int)t602 > 0) {
                                                            t603 = *(int *)0xC2A9C60;
                                                            *(unsigned int *)0xC2A9C60 = (t603 - 1);
                                                        }
                                                        t605 = *(int *)0xC2A9C60;
                                                        t607 = t567;
                                                        if (t605 == 0) {
                                                            t606 = vibStart();
                                                            *(unsigned int *)0xC2A9C8C = 0x0;
                                                            t607 = t606;
                                                        }
                                                        t609 = t607;
                                                    }
                                                    t610 = t609;
                                                }
                                                t611 = t610;
                                            }
                                            t612 = t611;
                                        }
                                        t613 = t612;
                                    }
                                    t614 = t613;
                                }
                                t615 = t614;
                            }
                            t616 = t615;
                        }
                        t618 = t616;
                    }
                    t810 = t618;
                } else {
                    *(unsigned int *)0xC2A9C94 = 0x0;
                    t620 = FUN_0c05ef68();
                    t808 = t620;
                    if (t620 != 0) {
                        t621 = *(int *)0xC2A9C8C;
                        t622 = *(int *)0xC2A9C98;
                        if ((0x10000000 & t621) != 0) {
                            if (t622 == 1) {
                                t623 = *(signed char *)0xC131AAC;
                                *(unsigned char *)0xC2A9C68 = t623;
                                t624 = *(signed char *)0xC131AAD;
                                *(unsigned char *)0xC2A9C69 = t624;
                                t625 = *(signed char *)0xC131AAE;
                                *(unsigned char *)0xC2A9C6A = t625;
                                t626 = *(signed char *)0xC131AAF;
                                *(unsigned char *)0xC2A9C6B = t626;
                                t627 = *(signed char *)0xC131AB0;
                                *(unsigned char *)0xC2A9C6C = t627;
                                t628 = *(signed char *)0xC131AB1;
                                *(unsigned char *)0xC2A9C6D = t628;
                                t629 = *(signed char *)0xC131AB2;
                                *(unsigned char *)0xC2A9C6E = t629;
                                t630 = *(signed char *)0xC131AB3;
                                *(unsigned char *)0xC2A9C6F = t630;
                                t631 = *(int *)0xC131B04;
                                *(unsigned char *)0xC2A9C6A = (0xFFFFFFFF - t631);
                                t632 = *(signed char *)0xC2A9C6A;
                                if ((int)t632 < (int)0xFFFFFFF9) {
                                    *(unsigned char *)0xC2A9C6A = 0xFFFFFFF9;
                                }
                            } else {
                                t634 = *(signed char *)0xC131A74;
                                *(unsigned char *)0xC2A9C68 = t634;
                                t635 = *(signed char *)0xC131A75;
                                *(unsigned char *)0xC2A9C69 = t635;
                                t636 = *(signed char *)0xC131A76;
                                *(unsigned char *)0xC2A9C6A = t636;
                                t637 = *(signed char *)0xC131A77;
                                *(unsigned char *)0xC2A9C6B = t637;
                                t638 = *(signed char *)0xC131A78;
                                *(unsigned char *)0xC2A9C6C = t638;
                                t639 = *(signed char *)0xC131A79;
                                *(unsigned char *)0xC2A9C6D = t639;
                                t640 = *(signed char *)0xC131A7A;
                                *(unsigned char *)0xC2A9C6E = t640;
                                t641 = *(signed char *)0xC131A7B;
                                *(unsigned char *)0xC2A9C6F = t641;
                                t642 = *(int *)0xC131B04;
                                *(unsigned char *)0xC2A9C6A = t642;
                            }
                            t646 = pdVibStart(a4, 0xC2A9C68);
                            *(unsigned int *)0xC2A9C64 = 0x10000000;
                            t647 = *(int *)0xC131A00;
                            *(unsigned int *)0xC2A9C60 = t647;
                            *(unsigned int *)0xC2A9C8C = 0x0;
                            t648 = *(int *)0xC2A9C60;
                            if ((int)t648 > 0) {
                                t649 = *(int *)0xC2A9C60;
                                *(unsigned int *)0xC2A9C60 = (t649 - 1);
                            }
                            t650 = *(int *)0xC2A9C60;
                            t652 = t646;
                            if (t650 == 0) {
                                t651 = vibStart();
                                *(unsigned int *)0xC2A9C8C = 0x0;
                                t652 = t651;
                            }
                            t807 = t652;
                        } else {
                            t653 = *(int *)0xC2A9C64;
                            if ((0x1000000 & t621) != 0) {
                                if ((int)t653 <= (int)0x1000000) {
                                    t654 = *(int *)0xC2A9C60;
                                    if (t654 != 0) {
                                        t655 = vibStart();
                                        t667 = t655;
                                    } else {
                                        t656 = 0xC131A7C;
                                        if (t622 == 1) {
                                            t656 = 0xC131AB4;
                                        }
                                        t657 = pdVibStart(a4, t656);
                                        *(unsigned int *)0xC2A9C64 = 0x1000000;
                                        t658 = *(int *)0xC131A00;
                                        *(unsigned int *)0xC2A9C60 = t658;
                                        t659 = *(int *)0xC2A9C8C;
                                        *(unsigned int *)0xC2A9C8C = (t659 & 0xFEEEEFEE);
                                        t660 = *(int *)0xC2A9C60;
                                        if ((int)t660 > 0) {
                                            t661 = *(int *)0xC2A9C60;
                                            *(unsigned int *)0xC2A9C60 = (t661 - 1);
                                        }
                                        t663 = *(int *)0xC2A9C60;
                                        t665 = t657;
                                        if (t663 == 0) {
                                            t664 = vibStart();
                                            *(unsigned int *)0xC2A9C8C = 0x0;
                                            t665 = t664;
                                        }
                                        t667 = t665;
                                    }
                                    t677 = t667;
                                } else {
                                    *(unsigned int *)0xC2A9C64 = 0x1000000;
                                    t668 = *(int *)0xC131A00;
                                    *(unsigned int *)0xC2A9C60 = t668;
                                    t669 = *(int *)0xC2A9C8C;
                                    *(unsigned int *)0xC2A9C8C = (t669 & 0xFEEEEFEE);
                                    t670 = *(int *)0xC2A9C60;
                                    if ((int)t670 > 0) {
                                        t671 = *(int *)0xC2A9C60;
                                        *(unsigned int *)0xC2A9C60 = (t671 - 1);
                                    }
                                    t673 = *(int *)0xC2A9C60;
                                    t675 = 0x1000000;
                                    if (t673 == 0) {
                                        t674 = vibStart();
                                        *(unsigned int *)0xC2A9C8C = 0x0;
                                        t675 = t674;
                                    }
                                    t677 = t675;
                                }
                                t806 = t677;
                            } else {
                                if ((0x100000 & t621) != 0) {
                                    if ((int)t653 <= (int)0x100000) {
                                        t678 = *(int *)0xC2A9C60;
                                        if (t678 == 0) {
                                            t679 = 0xC131A84;
                                            if (t622 == 1) {
                                                t679 = 0xC131ABC;
                                            }
                                            t680 = pdVibStart(a4, t679);
                                            *(unsigned int *)0xC2A9C64 = 0x100000;
                                            t681 = *(int *)0xC131A00;
                                            *(unsigned int *)0xC2A9C60 = t681;
                                            t682 = *(int *)0xC2A9C8C;
                                            *(unsigned int *)0xC2A9C8C = (t682 & 0xFFEEEFEE);
                                            t683 = *(int *)0xC2A9C60;
                                            if ((int)t683 > 0) {
                                                t684 = *(int *)0xC2A9C60;
                                                *(unsigned int *)0xC2A9C60 = (t684 - 1);
                                            }
                                            t685 = *(int *)0xC2A9C60;
                                            t687 = t680;
                                            if (t685 == 0) {
                                                t686 = vibStart();
                                                *(unsigned int *)0xC2A9C8C = 0x0;
                                                t687 = t686;
                                            }
                                            t690 = t687;
                                        } else {
                                            t689 = vibStart();
                                            t690 = t689;
                                        }
                                        t700 = t690;
                                    } else {
                                        *(unsigned int *)0xC2A9C64 = 0x100000;
                                        t691 = *(int *)0xC131A00;
                                        *(unsigned int *)0xC2A9C60 = t691;
                                        t692 = *(int *)0xC2A9C8C;
                                        *(unsigned int *)0xC2A9C8C = (t692 & 0xFFEEEFEE);
                                        t693 = *(int *)0xC2A9C60;
                                        if ((int)t693 > 0) {
                                            t694 = *(int *)0xC2A9C60;
                                            *(unsigned int *)0xC2A9C60 = (t694 - 1);
                                        }
                                        t696 = *(int *)0xC2A9C60;
                                        t698 = 0x100000;
                                        if (t696 == 0) {
                                            t697 = vibStart();
                                            *(unsigned int *)0xC2A9C8C = 0x0;
                                            t698 = t697;
                                        }
                                        t700 = t698;
                                    }
                                    t805 = t700;
                                } else {
                                    if ((0x10000 & t621) != 0) {
                                        if ((int)t653 <= (int)0x10000) {
                                            t701 = *(int *)0xC2A9C60;
                                            if (t701 == 0) {
                                                t702 = *(int *)0xC131B0C;
                                                if (t702 == 0) {
                                                    t703 = 0xC131A8C;
                                                    if (t622 == 1) {
                                                        t703 = 0xC131AC4;
                                                    }
                                                    t704 = pdVibStart(a4, t703);
                                                    t707 = t704;
                                                } else {
                                                    t705 = 0xC131A94;
                                                    if (t622 == 1) {
                                                        t705 = 0xC131ACC;
                                                    }
                                                    t706 = pdVibStart(a4, t705);
                                                    t707 = t706;
                                                }
                                                *(unsigned int *)0xC2A9C64 = 0x10000;
                                                t708 = *(int *)0xC131A00;
                                                *(unsigned int *)0xC2A9C60 = t708;
                                                t709 = *(int *)0xC2A9C8C;
                                                *(unsigned int *)0xC2A9C8C = (t709 & 0xFFFEEFEE);
                                                t710 = *(int *)0xC2A9C60;
                                                if ((int)t710 > 0) {
                                                    t711 = *(int *)0xC2A9C60;
                                                    *(unsigned int *)0xC2A9C60 = (t711 - 1);
                                                }
                                                t712 = *(int *)0xC2A9C60;
                                                t714 = t707;
                                                if (t712 == 0) {
                                                    t713 = vibStart();
                                                    *(unsigned int *)0xC2A9C8C = 0x0;
                                                    t714 = t713;
                                                }
                                                t717 = t714;
                                            } else {
                                                t716 = vibStart();
                                                t717 = t716;
                                            }
                                            t727 = t717;
                                        } else {
                                            *(unsigned int *)0xC2A9C64 = 0x10000;
                                            t718 = *(int *)0xC131A00;
                                            *(unsigned int *)0xC2A9C60 = t718;
                                            t719 = *(int *)0xC2A9C8C;
                                            *(unsigned int *)0xC2A9C8C = (t719 & 0xFFFEEFEE);
                                            t720 = *(int *)0xC2A9C60;
                                            if ((int)t720 > 0) {
                                                t721 = *(int *)0xC2A9C60;
                                                *(unsigned int *)0xC2A9C60 = (t721 - 1);
                                            }
                                            t723 = *(int *)0xC2A9C60;
                                            t725 = 0x10000;
                                            if (t723 == 0) {
                                                t724 = vibStart();
                                                *(unsigned int *)0xC2A9C8C = 0x0;
                                                t725 = t724;
                                            }
                                            t727 = t725;
                                        }
                                        t804 = t727;
                                    } else {
                                        if ((0x1000 & t621) != 0) {
                                            if ((int)t653 <= (int)0x1000) {
                                                t728 = *(int *)0xC2A9C60;
                                                if (t728 != 0) {
                                                    t729 = vibStart();
                                                    t741 = t729;
                                                } else {
                                                    t730 = 0xC131A9C;
                                                    if (t622 == 1) {
                                                        t730 = 0xC131AD4;
                                                    }
                                                    t731 = pdVibStart(a4, t730);
                                                    *(unsigned int *)0xC2A9C64 = 0x1000;
                                                    t732 = *(int *)0xC131A00;
                                                    *(unsigned int *)0xC2A9C60 = t732;
                                                    t733 = *(int *)0xC2A9C8C;
                                                    *(unsigned int *)0xC2A9C8C = (t733 & 0xFFFFEFEE);
                                                    t734 = *(int *)0xC2A9C60;
                                                    if ((int)t734 > 0) {
                                                        t735 = *(int *)0xC2A9C60;
                                                        *(unsigned int *)0xC2A9C60 = (t735 - 1);
                                                    }
                                                    t737 = *(int *)0xC2A9C60;
                                                    t739 = t731;
                                                    if (t737 == 0) {
                                                        t738 = vibStart();
                                                        *(unsigned int *)0xC2A9C8C = 0x0;
                                                        t739 = t738;
                                                    }
                                                    t741 = t739;
                                                }
                                                t751 = t741;
                                            } else {
                                                *(unsigned int *)0xC2A9C64 = 0x1000;
                                                t742 = *(int *)0xC131A00;
                                                *(unsigned int *)0xC2A9C60 = t742;
                                                t743 = *(int *)0xC2A9C8C;
                                                *(unsigned int *)0xC2A9C8C = (t743 & 0xFFFFEFEE);
                                                t744 = *(int *)0xC2A9C60;
                                                if ((int)t744 > 0) {
                                                    t745 = *(int *)0xC2A9C60;
                                                    *(unsigned int *)0xC2A9C60 = (t745 - 1);
                                                }
                                                t747 = *(int *)0xC2A9C60;
                                                t749 = 0x1000;
                                                if (t747 == 0) {
                                                    t748 = vibStart();
                                                    *(unsigned int *)0xC2A9C8C = 0x0;
                                                    t749 = t748;
                                                }
                                                t751 = t749;
                                            }
                                            t803 = t751;
                                        } else {
                                            if ((t621 & 0x1) != 0) {
                                                *(unsigned char *)0xC2A9C69 = 0x80;
                                                *(unsigned char *)0xC2A9C6A = 0x4;
                                                *(unsigned char *)0xC2A9C6B = 0x7;
                                                *(unsigned char *)0xC2A9C6C = 0x1;
                                                FUN_0c14f182(0xC2A9C68, 0x80);
                                                t753 = pdVibStart(a4, 0xC2A9C68);
                                                *(unsigned int *)0xC2A9C64 = 0x1;
                                                *(unsigned int *)0xC2A9C60 = 0x3;
                                                *(unsigned int *)0xC2A9C8C = 0x0;
                                                t754 = *(int *)0xC2A9C60;
                                                if ((int)t754 > 0) {
                                                    t755 = *(int *)0xC2A9C60;
                                                    *(unsigned int *)0xC2A9C60 = (t755 - 1);
                                                }
                                                t756 = *(int *)0xC2A9C60;
                                                t758 = t753;
                                                if (t756 == 0) {
                                                    t757 = vibStart();
                                                    *(unsigned int *)0xC2A9C8C = 0x0;
                                                    t758 = t757;
                                                }
                                                t802 = t758;
                                            } else {
                                                t759 = *(int *)0xC1EE234;
                                                if (t759 == 1) {
                                                    t760 = *(int *)0xC1EE238;
                                                    if (t760 == 1) {
                                                        t761 = *(int *)0xC2A9C60;
                                                        if (t761 == 0) {
                                                            if (t622 != 1) {
                                                                t762 = pdVibStart(a4, 0xC131AA4);
                                                                t769 = t762;
                                                                if (t762 != -1) {
                                                                    *(unsigned int *)0xC2A9C60 = 0xA;
                                                                    *(unsigned int *)0xC2A9C64 = 0x10;
                                                                    t763 = *(int *)0xC2A9C60;
                                                                    if ((int)t763 > 0) {
                                                                        t764 = *(int *)0xC2A9C60;
                                                                        *(unsigned int *)0xC2A9C60 = (t764 - 1);
                                                                    }
                                                                    t765 = *(int *)0xC2A9C60;
                                                                    t767 = t762;
                                                                    if (t765 == 0) {
                                                                        t766 = vibStart();
                                                                        *(unsigned int *)0xC2A9C8C = 0x0;
                                                                        t767 = t766;
                                                                    }
                                                                    t769 = t767;
                                                                }
                                                                t777 = t769;
                                                            } else {
                                                                *(unsigned int *)0xC2A9C60 = 0xA;
                                                                *(unsigned int *)0xC2A9C64 = 0x10;
                                                                t770 = *(int *)0xC2A9C60;
                                                                if ((int)t770 > 0) {
                                                                    t771 = *(int *)0xC2A9C60;
                                                                    *(unsigned int *)0xC2A9C60 = (t771 - 1);
                                                                }
                                                                t773 = *(int *)0xC2A9C60;
                                                                t775 = t622;
                                                                if (t773 == 0) {
                                                                    t774 = vibStart();
                                                                    *(unsigned int *)0xC2A9C8C = 0x0;
                                                                    t775 = t774;
                                                                }
                                                                t777 = t775;
                                                            }
                                                            t785 = t777;
                                                        } else {
                                                            t778 = *(int *)0xC2A9C60;
                                                            if ((int)t778 > 0) {
                                                                t779 = *(int *)0xC2A9C60;
                                                                *(unsigned int *)0xC2A9C60 = (t779 - 1);
                                                            }
                                                            t781 = *(int *)0xC2A9C60;
                                                            t783 = t760;
                                                            if (t781 == 0) {
                                                                t782 = vibStart();
                                                                *(unsigned int *)0xC2A9C8C = 0x0;
                                                                t783 = t782;
                                                            }
                                                            t785 = t783;
                                                        }
                                                        t793 = t785;
                                                    } else {
                                                        t786 = *(int *)0xC2A9C60;
                                                        if ((int)t786 > 0) {
                                                            t787 = *(int *)0xC2A9C60;
                                                            *(unsigned int *)0xC2A9C60 = (t787 - 1);
                                                        }
                                                        t789 = *(int *)0xC2A9C60;
                                                        t791 = t760;
                                                        if (t789 == 0) {
                                                            t790 = vibStart();
                                                            *(unsigned int *)0xC2A9C8C = 0x0;
                                                            t791 = t790;
                                                        }
                                                        t793 = t791;
                                                    }
                                                    t801 = t793;
                                                } else {
                                                    t794 = *(int *)0xC2A9C60;
                                                    if ((int)t794 > 0) {
                                                        t795 = *(int *)0xC2A9C60;
                                                        *(unsigned int *)0xC2A9C60 = (t795 - 1);
                                                    }
                                                    t797 = *(int *)0xC2A9C60;
                                                    t799 = t759;
                                                    if (t797 == 0) {
                                                        t798 = vibStart();
                                                        *(unsigned int *)0xC2A9C8C = 0x0;
                                                        t799 = t798;
                                                    }
                                                    t801 = t799;
                                                }
                                                t802 = t801;
                                            }
                                            t803 = t802;
                                        }
                                        t804 = t803;
                                    }
                                    t805 = t804;
                                }
                                t806 = t805;
                            }
                            t807 = t806;
                        }
                        t808 = t807;
                    }
                    t810 = t808;
                }
                t812 = t810;
            }
            t814 = t812;
        }
        t1228 = t814;
    } else {
        t816 = *(int *)0xC1EE234;
        if (t816 == 3) {
            t817 = *(int *)0xC1EE238;
            if (t817 != 1) {
                t819 = t2;
                if (t2 == 1) {
                    t818 = vibStart();
                    *(unsigned int *)0xC2A9C8C = 0x0;
                    *(unsigned int *)0xC2A9C90 = 0x2;
                    t819 = t818;
                }
                t1220 = t819;
            } else {
                if (t2 != 1) {
                    *(unsigned int *)0xC2A9C90 = 0x1;
                }
                t823 = *(signed char *)0xC28A4EF;
                t1218 = t2;
                if (t823 != 0) {
                    t824 = *(int *)0xC2A11B0;
                    if (t824 != 0) {
                        t825 = *(int *)0xC2A9C8C;
                        if ((t825 & 1) == 0) {
                            t826 = *(int *)0xC2A9C94;
                            *(unsigned int *)0xC2A9C94 = (t826 + 0x1);
                            t828 = t825;
                            if ((int)(t826 + 0x1) < (int)0xA) {
                                t827 = vibStart();
                                t828 = t827;
                            }
                            t829 = *(int *)0xC2A9C60;
                            if ((int)t829 > 0) {
                                t830 = *(int *)0xC2A9C60;
                                *(unsigned int *)0xC2A9C60 = (t830 - 1);
                            }
                            t831 = *(int *)0xC2A9C60;
                            t833 = t828;
                            if (t831 == 0) {
                                t832 = vibStart();
                                *(unsigned int *)0xC2A9C8C = 0x0;
                                t833 = t832;
                            }
                            t1024 = t833;
                        } else {
                            *(unsigned int *)0xC2A9C94 = 0x0;
                            t834 = FUN_0c05ef68();
                            t1022 = t834;
                            if (t834 != 0) {
                                t835 = *(int *)0xC2A9C8C;
                                t836 = *(int *)0xC2A9C98;
                                if ((0x10000000 & t835) != 0) {
                                    if (t836 == 1) {
                                        t837 = *(signed char *)0xC131AAC;
                                        *(unsigned char *)0xC2A9C68 = t837;
                                        t838 = *(signed char *)0xC131AAD;
                                        *(unsigned char *)0xC2A9C69 = t838;
                                        t839 = *(signed char *)0xC131AAE;
                                        *(unsigned char *)0xC2A9C6A = t839;
                                        t840 = *(signed char *)0xC131AAF;
                                        *(unsigned char *)0xC2A9C6B = t840;
                                        t841 = *(signed char *)0xC131AB0;
                                        *(unsigned char *)0xC2A9C6C = t841;
                                        t842 = *(signed char *)0xC131AB1;
                                        *(unsigned char *)0xC2A9C6D = t842;
                                        t843 = *(signed char *)0xC131AB2;
                                        *(unsigned char *)0xC2A9C6E = t843;
                                        t844 = *(signed char *)0xC131AB3;
                                        *(unsigned char *)0xC2A9C6F = t844;
                                        t845 = *(int *)0xC131B04;
                                        *(unsigned char *)0xC2A9C6A = (0xFFFFFFFF - t845);
                                        t846 = *(signed char *)0xC2A9C6A;
                                        if ((int)t846 < (int)0xFFFFFFF9) {
                                            *(unsigned char *)0xC2A9C6A = 0xFFFFFFF9;
                                        }
                                    } else {
                                        t848 = *(signed char *)0xC131A74;
                                        *(unsigned char *)0xC2A9C68 = t848;
                                        t849 = *(signed char *)0xC131A75;
                                        *(unsigned char *)0xC2A9C69 = t849;
                                        t850 = *(signed char *)0xC131A76;
                                        *(unsigned char *)0xC2A9C6A = t850;
                                        t851 = *(signed char *)0xC131A77;
                                        *(unsigned char *)0xC2A9C6B = t851;
                                        t852 = *(signed char *)0xC131A78;
                                        *(unsigned char *)0xC2A9C6C = t852;
                                        t853 = *(signed char *)0xC131A79;
                                        *(unsigned char *)0xC2A9C6D = t853;
                                        t854 = *(signed char *)0xC131A7A;
                                        *(unsigned char *)0xC2A9C6E = t854;
                                        t855 = *(signed char *)0xC131A7B;
                                        *(unsigned char *)0xC2A9C6F = t855;
                                        t856 = *(int *)0xC131B04;
                                        *(unsigned char *)0xC2A9C6A = t856;
                                    }
                                    t860 = pdVibStart(a4, 0xC2A9C68);
                                    *(unsigned int *)0xC2A9C64 = 0x10000000;
                                    t861 = *(int *)0xC131A00;
                                    *(unsigned int *)0xC2A9C60 = t861;
                                    *(unsigned int *)0xC2A9C8C = 0x0;
                                    t862 = *(int *)0xC2A9C60;
                                    if ((int)t862 > 0) {
                                        t863 = *(int *)0xC2A9C60;
                                        *(unsigned int *)0xC2A9C60 = (t863 - 1);
                                    }
                                    t864 = *(int *)0xC2A9C60;
                                    t866 = t860;
                                    if (t864 == 0) {
                                        t865 = vibStart();
                                        *(unsigned int *)0xC2A9C8C = 0x0;
                                        t866 = t865;
                                    }
                                    t1021 = t866;
                                } else {
                                    t867 = *(int *)0xC2A9C64;
                                    if ((0x1000000 & t835) != 0) {
                                        if ((int)t867 <= (int)0x1000000) {
                                            t868 = *(int *)0xC2A9C60;
                                            if (t868 != 0) {
                                                t869 = vibStart();
                                                t881 = t869;
                                            } else {
                                                t870 = 0xC131A7C;
                                                if (t836 == 1) {
                                                    t870 = 0xC131AB4;
                                                }
                                                t871 = pdVibStart(a4, t870);
                                                *(unsigned int *)0xC2A9C64 = 0x1000000;
                                                t872 = *(int *)0xC131A00;
                                                *(unsigned int *)0xC2A9C60 = t872;
                                                t873 = *(int *)0xC2A9C8C;
                                                *(unsigned int *)0xC2A9C8C = (t873 & 0xFEEEEFEE);
                                                t874 = *(int *)0xC2A9C60;
                                                if ((int)t874 > 0) {
                                                    t875 = *(int *)0xC2A9C60;
                                                    *(unsigned int *)0xC2A9C60 = (t875 - 1);
                                                }
                                                t877 = *(int *)0xC2A9C60;
                                                t879 = t871;
                                                if (t877 == 0) {
                                                    t878 = vibStart();
                                                    *(unsigned int *)0xC2A9C8C = 0x0;
                                                    t879 = t878;
                                                }
                                                t881 = t879;
                                            }
                                            t891 = t881;
                                        } else {
                                            *(unsigned int *)0xC2A9C64 = 0x1000000;
                                            t882 = *(int *)0xC131A00;
                                            *(unsigned int *)0xC2A9C60 = t882;
                                            t883 = *(int *)0xC2A9C8C;
                                            *(unsigned int *)0xC2A9C8C = (t883 & 0xFEEEEFEE);
                                            t884 = *(int *)0xC2A9C60;
                                            if ((int)t884 > 0) {
                                                t885 = *(int *)0xC2A9C60;
                                                *(unsigned int *)0xC2A9C60 = (t885 - 1);
                                            }
                                            t887 = *(int *)0xC2A9C60;
                                            t889 = 0x1000000;
                                            if (t887 == 0) {
                                                t888 = vibStart();
                                                *(unsigned int *)0xC2A9C8C = 0x0;
                                                t889 = t888;
                                            }
                                            t891 = t889;
                                        }
                                        t1020 = t891;
                                    } else {
                                        if ((0x100000 & t835) != 0) {
                                            if ((int)t867 <= (int)0x100000) {
                                                t892 = *(int *)0xC2A9C60;
                                                if (t892 == 0) {
                                                    t893 = 0xC131A84;
                                                    if (t836 == 1) {
                                                        t893 = 0xC131ABC;
                                                    }
                                                    t894 = pdVibStart(a4, t893);
                                                    *(unsigned int *)0xC2A9C64 = 0x100000;
                                                    t895 = *(int *)0xC131A00;
                                                    *(unsigned int *)0xC2A9C60 = t895;
                                                    t896 = *(int *)0xC2A9C8C;
                                                    *(unsigned int *)0xC2A9C8C = (t896 & 0xFFEEEFEE);
                                                    t897 = *(int *)0xC2A9C60;
                                                    if ((int)t897 > 0) {
                                                        t898 = *(int *)0xC2A9C60;
                                                        *(unsigned int *)0xC2A9C60 = (t898 - 1);
                                                    }
                                                    t899 = *(int *)0xC2A9C60;
                                                    t901 = t894;
                                                    if (t899 == 0) {
                                                        t900 = vibStart();
                                                        *(unsigned int *)0xC2A9C8C = 0x0;
                                                        t901 = t900;
                                                    }
                                                    t904 = t901;
                                                } else {
                                                    t903 = vibStart();
                                                    t904 = t903;
                                                }
                                                t914 = t904;
                                            } else {
                                                *(unsigned int *)0xC2A9C64 = 0x100000;
                                                t905 = *(int *)0xC131A00;
                                                *(unsigned int *)0xC2A9C60 = t905;
                                                t906 = *(int *)0xC2A9C8C;
                                                *(unsigned int *)0xC2A9C8C = (t906 & 0xFFEEEFEE);
                                                t907 = *(int *)0xC2A9C60;
                                                if ((int)t907 > 0) {
                                                    t908 = *(int *)0xC2A9C60;
                                                    *(unsigned int *)0xC2A9C60 = (t908 - 1);
                                                }
                                                t910 = *(int *)0xC2A9C60;
                                                t912 = 0x100000;
                                                if (t910 == 0) {
                                                    t911 = vibStart();
                                                    *(unsigned int *)0xC2A9C8C = 0x0;
                                                    t912 = t911;
                                                }
                                                t914 = t912;
                                            }
                                            t1019 = t914;
                                        } else {
                                            if ((0x10000 & t835) != 0) {
                                                if ((int)t867 <= (int)0x10000) {
                                                    t915 = *(int *)0xC2A9C60;
                                                    if (t915 == 0) {
                                                        t916 = *(int *)0xC131B0C;
                                                        if (t916 == 0) {
                                                            t917 = 0xC131A8C;
                                                            if (t836 == 1) {
                                                                t917 = 0xC131AC4;
                                                            }
                                                            t918 = pdVibStart(a4, t917);
                                                            t921 = t918;
                                                        } else {
                                                            t919 = 0xC131A94;
                                                            if (t836 == 1) {
                                                                t919 = 0xC131ACC;
                                                            }
                                                            t920 = pdVibStart(a4, t919);
                                                            t921 = t920;
                                                        }
                                                        *(unsigned int *)0xC2A9C64 = 0x10000;
                                                        t922 = *(int *)0xC131A00;
                                                        *(unsigned int *)0xC2A9C60 = t922;
                                                        t923 = *(int *)0xC2A9C8C;
                                                        *(unsigned int *)0xC2A9C8C = (t923 & 0xFFFEEFEE);
                                                        t924 = *(int *)0xC2A9C60;
                                                        if ((int)t924 > 0) {
                                                            t925 = *(int *)0xC2A9C60;
                                                            *(unsigned int *)0xC2A9C60 = (t925 - 1);
                                                        }
                                                        t926 = *(int *)0xC2A9C60;
                                                        t928 = t921;
                                                        if (t926 == 0) {
                                                            t927 = vibStart();
                                                            *(unsigned int *)0xC2A9C8C = 0x0;
                                                            t928 = t927;
                                                        }
                                                        t931 = t928;
                                                    } else {
                                                        t930 = vibStart();
                                                        t931 = t930;
                                                    }
                                                    t941 = t931;
                                                } else {
                                                    *(unsigned int *)0xC2A9C64 = 0x10000;
                                                    t932 = *(int *)0xC131A00;
                                                    *(unsigned int *)0xC2A9C60 = t932;
                                                    t933 = *(int *)0xC2A9C8C;
                                                    *(unsigned int *)0xC2A9C8C = (t933 & 0xFFFEEFEE);
                                                    t934 = *(int *)0xC2A9C60;
                                                    if ((int)t934 > 0) {
                                                        t935 = *(int *)0xC2A9C60;
                                                        *(unsigned int *)0xC2A9C60 = (t935 - 1);
                                                    }
                                                    t937 = *(int *)0xC2A9C60;
                                                    t939 = 0x10000;
                                                    if (t937 == 0) {
                                                        t938 = vibStart();
                                                        *(unsigned int *)0xC2A9C8C = 0x0;
                                                        t939 = t938;
                                                    }
                                                    t941 = t939;
                                                }
                                                t1018 = t941;
                                            } else {
                                                if ((0x1000 & t835) != 0) {
                                                    if ((int)t867 <= (int)0x1000) {
                                                        t942 = *(int *)0xC2A9C60;
                                                        if (t942 != 0) {
                                                            t943 = vibStart();
                                                            t955 = t943;
                                                        } else {
                                                            t944 = 0xC131A9C;
                                                            if (t836 == 1) {
                                                                t944 = 0xC131AD4;
                                                            }
                                                            t945 = pdVibStart(a4, t944);
                                                            *(unsigned int *)0xC2A9C64 = 0x1000;
                                                            t946 = *(int *)0xC131A00;
                                                            *(unsigned int *)0xC2A9C60 = t946;
                                                            t947 = *(int *)0xC2A9C8C;
                                                            *(unsigned int *)0xC2A9C8C = (t947 & 0xFFFFEFEE);
                                                            t948 = *(int *)0xC2A9C60;
                                                            if ((int)t948 > 0) {
                                                                t949 = *(int *)0xC2A9C60;
                                                                *(unsigned int *)0xC2A9C60 = (t949 - 1);
                                                            }
                                                            t951 = *(int *)0xC2A9C60;
                                                            t953 = t945;
                                                            if (t951 == 0) {
                                                                t952 = vibStart();
                                                                *(unsigned int *)0xC2A9C8C = 0x0;
                                                                t953 = t952;
                                                            }
                                                            t955 = t953;
                                                        }
                                                        t965 = t955;
                                                    } else {
                                                        *(unsigned int *)0xC2A9C64 = 0x1000;
                                                        t956 = *(int *)0xC131A00;
                                                        *(unsigned int *)0xC2A9C60 = t956;
                                                        t957 = *(int *)0xC2A9C8C;
                                                        *(unsigned int *)0xC2A9C8C = (t957 & 0xFFFFEFEE);
                                                        t958 = *(int *)0xC2A9C60;
                                                        if ((int)t958 > 0) {
                                                            t959 = *(int *)0xC2A9C60;
                                                            *(unsigned int *)0xC2A9C60 = (t959 - 1);
                                                        }
                                                        t961 = *(int *)0xC2A9C60;
                                                        t963 = 0x1000;
                                                        if (t961 == 0) {
                                                            t962 = vibStart();
                                                            *(unsigned int *)0xC2A9C8C = 0x0;
                                                            t963 = t962;
                                                        }
                                                        t965 = t963;
                                                    }
                                                    t1017 = t965;
                                                } else {
                                                    if ((t835 & 0x1) != 0) {
                                                        *(unsigned char *)0xC2A9C69 = 0x80;
                                                        *(unsigned char *)0xC2A9C6A = 0x4;
                                                        *(unsigned char *)0xC2A9C6B = 0x7;
                                                        *(unsigned char *)0xC2A9C6C = 0x1;
                                                        FUN_0c14f182(0xC2A9C68, 0x80);
                                                        t967 = pdVibStart(a4, 0xC2A9C68);
                                                        *(unsigned int *)0xC2A9C64 = 0x1;
                                                        *(unsigned int *)0xC2A9C60 = 0x3;
                                                        *(unsigned int *)0xC2A9C8C = 0x0;
                                                        t968 = *(int *)0xC2A9C60;
                                                        if ((int)t968 > 0) {
                                                            t969 = *(int *)0xC2A9C60;
                                                            *(unsigned int *)0xC2A9C60 = (t969 - 1);
                                                        }
                                                        t970 = *(int *)0xC2A9C60;
                                                        t972 = t967;
                                                        if (t970 == 0) {
                                                            t971 = vibStart();
                                                            *(unsigned int *)0xC2A9C8C = 0x0;
                                                            t972 = t971;
                                                        }
                                                        t1016 = t972;
                                                    } else {
                                                        t973 = *(int *)0xC1EE234;
                                                        if (t973 == 1) {
                                                            t974 = *(int *)0xC1EE238;
                                                            if (t974 == 1) {
                                                                t975 = *(int *)0xC2A9C60;
                                                                if (t975 == 0) {
                                                                    if (t836 != 1) {
                                                                        t976 = pdVibStart(a4, 0xC131AA4);
                                                                        t983 = t976;
                                                                        if (t976 != -1) {
                                                                            *(unsigned int *)0xC2A9C60 = 0xA;
                                                                            *(unsigned int *)0xC2A9C64 = 0x10;
                                                                            t977 = *(int *)0xC2A9C60;
                                                                            if ((int)t977 > 0) {
                                                                                t978 = *(int *)0xC2A9C60;
                                                                                *(unsigned int *)0xC2A9C60 = (t978 - 1);
                                                                            }
                                                                            t979 = *(int *)0xC2A9C60;
                                                                            t981 = t976;
                                                                            if (t979 == 0) {
                                                                                t980 = vibStart();
                                                                                *(unsigned int *)0xC2A9C8C = 0x0;
                                                                                t981 = t980;
                                                                            }
                                                                            t983 = t981;
                                                                        }
                                                                        t991 = t983;
                                                                    } else {
                                                                        *(unsigned int *)0xC2A9C60 = 0xA;
                                                                        *(unsigned int *)0xC2A9C64 = 0x10;
                                                                        t984 = *(int *)0xC2A9C60;
                                                                        if ((int)t984 > 0) {
                                                                            t985 = *(int *)0xC2A9C60;
                                                                            *(unsigned int *)0xC2A9C60 = (t985 - 1);
                                                                        }
                                                                        t987 = *(int *)0xC2A9C60;
                                                                        t989 = t836;
                                                                        if (t987 == 0) {
                                                                            t988 = vibStart();
                                                                            *(unsigned int *)0xC2A9C8C = 0x0;
                                                                            t989 = t988;
                                                                        }
                                                                        t991 = t989;
                                                                    }
                                                                    t999 = t991;
                                                                } else {
                                                                    t992 = *(int *)0xC2A9C60;
                                                                    if ((int)t992 > 0) {
                                                                        t993 = *(int *)0xC2A9C60;
                                                                        *(unsigned int *)0xC2A9C60 = (t993 - 1);
                                                                    }
                                                                    t995 = *(int *)0xC2A9C60;
                                                                    t997 = t974;
                                                                    if (t995 == 0) {
                                                                        t996 = vibStart();
                                                                        *(unsigned int *)0xC2A9C8C = 0x0;
                                                                        t997 = t996;
                                                                    }
                                                                    t999 = t997;
                                                                }
                                                                t1007 = t999;
                                                            } else {
                                                                t1000 = *(int *)0xC2A9C60;
                                                                if ((int)t1000 > 0) {
                                                                    t1001 = *(int *)0xC2A9C60;
                                                                    *(unsigned int *)0xC2A9C60 = (t1001 - 1);
                                                                }
                                                                t1003 = *(int *)0xC2A9C60;
                                                                t1005 = t974;
                                                                if (t1003 == 0) {
                                                                    t1004 = vibStart();
                                                                    *(unsigned int *)0xC2A9C8C = 0x0;
                                                                    t1005 = t1004;
                                                                }
                                                                t1007 = t1005;
                                                            }
                                                            t1015 = t1007;
                                                        } else {
                                                            t1008 = *(int *)0xC2A9C60;
                                                            if ((int)t1008 > 0) {
                                                                t1009 = *(int *)0xC2A9C60;
                                                                *(unsigned int *)0xC2A9C60 = (t1009 - 1);
                                                            }
                                                            t1011 = *(int *)0xC2A9C60;
                                                            t1013 = t973;
                                                            if (t1011 == 0) {
                                                                t1012 = vibStart();
                                                                *(unsigned int *)0xC2A9C8C = 0x0;
                                                                t1013 = t1012;
                                                            }
                                                            t1015 = t1013;
                                                        }
                                                        t1016 = t1015;
                                                    }
                                                    t1017 = t1016;
                                                }
                                                t1018 = t1017;
                                            }
                                            t1019 = t1018;
                                        }
                                        t1020 = t1019;
                                    }
                                    t1021 = t1020;
                                }
                                t1022 = t1021;
                            }
                            t1024 = t1022;
                        }
                        t1216 = t1024;
                    } else {
                        *(unsigned int *)0xC2A9C94 = 0x0;
                        t1026 = FUN_0c05ef68();
                        t1214 = t1026;
                        if (t1026 != 0) {
                            t1027 = *(int *)0xC2A9C8C;
                            t1028 = *(int *)0xC2A9C98;
                            if ((0x10000000 & t1027) != 0) {
                                if (t1028 == 1) {
                                    t1029 = *(signed char *)0xC131AAC;
                                    *(unsigned char *)0xC2A9C68 = t1029;
                                    t1030 = *(signed char *)0xC131AAD;
                                    *(unsigned char *)0xC2A9C69 = t1030;
                                    t1031 = *(signed char *)0xC131AAE;
                                    *(unsigned char *)0xC2A9C6A = t1031;
                                    t1032 = *(signed char *)0xC131AAF;
                                    *(unsigned char *)0xC2A9C6B = t1032;
                                    t1033 = *(signed char *)0xC131AB0;
                                    *(unsigned char *)0xC2A9C6C = t1033;
                                    t1034 = *(signed char *)0xC131AB1;
                                    *(unsigned char *)0xC2A9C6D = t1034;
                                    t1035 = *(signed char *)0xC131AB2;
                                    *(unsigned char *)0xC2A9C6E = t1035;
                                    t1036 = *(signed char *)0xC131AB3;
                                    *(unsigned char *)0xC2A9C6F = t1036;
                                    t1037 = *(int *)0xC131B04;
                                    *(unsigned char *)0xC2A9C6A = (0xFFFFFFFF - t1037);
                                    t1038 = *(signed char *)0xC2A9C6A;
                                    if ((int)t1038 < (int)0xFFFFFFF9) {
                                        *(unsigned char *)0xC2A9C6A = 0xFFFFFFF9;
                                    }
                                } else {
                                    t1040 = *(signed char *)0xC131A74;
                                    *(unsigned char *)0xC2A9C68 = t1040;
                                    t1041 = *(signed char *)0xC131A75;
                                    *(unsigned char *)0xC2A9C69 = t1041;
                                    t1042 = *(signed char *)0xC131A76;
                                    *(unsigned char *)0xC2A9C6A = t1042;
                                    t1043 = *(signed char *)0xC131A77;
                                    *(unsigned char *)0xC2A9C6B = t1043;
                                    t1044 = *(signed char *)0xC131A78;
                                    *(unsigned char *)0xC2A9C6C = t1044;
                                    t1045 = *(signed char *)0xC131A79;
                                    *(unsigned char *)0xC2A9C6D = t1045;
                                    t1046 = *(signed char *)0xC131A7A;
                                    *(unsigned char *)0xC2A9C6E = t1046;
                                    t1047 = *(signed char *)0xC131A7B;
                                    *(unsigned char *)0xC2A9C6F = t1047;
                                    t1048 = *(int *)0xC131B04;
                                    *(unsigned char *)0xC2A9C6A = t1048;
                                }
                                t1052 = pdVibStart(a4, 0xC2A9C68);
                                *(unsigned int *)0xC2A9C64 = 0x10000000;
                                t1053 = *(int *)0xC131A00;
                                *(unsigned int *)0xC2A9C60 = t1053;
                                *(unsigned int *)0xC2A9C8C = 0x0;
                                t1054 = *(int *)0xC2A9C60;
                                if ((int)t1054 > 0) {
                                    t1055 = *(int *)0xC2A9C60;
                                    *(unsigned int *)0xC2A9C60 = (t1055 - 1);
                                }
                                t1056 = *(int *)0xC2A9C60;
                                t1058 = t1052;
                                if (t1056 == 0) {
                                    t1057 = vibStart();
                                    *(unsigned int *)0xC2A9C8C = 0x0;
                                    t1058 = t1057;
                                }
                                t1213 = t1058;
                            } else {
                                t1059 = *(int *)0xC2A9C64;
                                if ((0x1000000 & t1027) != 0) {
                                    if ((int)t1059 <= (int)0x1000000) {
                                        t1060 = *(int *)0xC2A9C60;
                                        if (t1060 != 0) {
                                            t1061 = vibStart();
                                            t1073 = t1061;
                                        } else {
                                            t1062 = 0xC131A7C;
                                            if (t1028 == 1) {
                                                t1062 = 0xC131AB4;
                                            }
                                            t1063 = pdVibStart(a4, t1062);
                                            *(unsigned int *)0xC2A9C64 = 0x1000000;
                                            t1064 = *(int *)0xC131A00;
                                            *(unsigned int *)0xC2A9C60 = t1064;
                                            t1065 = *(int *)0xC2A9C8C;
                                            *(unsigned int *)0xC2A9C8C = (t1065 & 0xFEEEEFEE);
                                            t1066 = *(int *)0xC2A9C60;
                                            if ((int)t1066 > 0) {
                                                t1067 = *(int *)0xC2A9C60;
                                                *(unsigned int *)0xC2A9C60 = (t1067 - 1);
                                            }
                                            t1069 = *(int *)0xC2A9C60;
                                            t1071 = t1063;
                                            if (t1069 == 0) {
                                                t1070 = vibStart();
                                                *(unsigned int *)0xC2A9C8C = 0x0;
                                                t1071 = t1070;
                                            }
                                            t1073 = t1071;
                                        }
                                        t1083 = t1073;
                                    } else {
                                        *(unsigned int *)0xC2A9C64 = 0x1000000;
                                        t1074 = *(int *)0xC131A00;
                                        *(unsigned int *)0xC2A9C60 = t1074;
                                        t1075 = *(int *)0xC2A9C8C;
                                        *(unsigned int *)0xC2A9C8C = (t1075 & 0xFEEEEFEE);
                                        t1076 = *(int *)0xC2A9C60;
                                        if ((int)t1076 > 0) {
                                            t1077 = *(int *)0xC2A9C60;
                                            *(unsigned int *)0xC2A9C60 = (t1077 - 1);
                                        }
                                        t1079 = *(int *)0xC2A9C60;
                                        t1081 = 0x1000000;
                                        if (t1079 == 0) {
                                            t1080 = vibStart();
                                            *(unsigned int *)0xC2A9C8C = 0x0;
                                            t1081 = t1080;
                                        }
                                        t1083 = t1081;
                                    }
                                    t1212 = t1083;
                                } else {
                                    if ((0x100000 & t1027) != 0) {
                                        if ((int)t1059 <= (int)0x100000) {
                                            t1084 = *(int *)0xC2A9C60;
                                            if (t1084 == 0) {
                                                t1085 = 0xC131A84;
                                                if (t1028 == 1) {
                                                    t1085 = 0xC131ABC;
                                                }
                                                t1086 = pdVibStart(a4, t1085);
                                                *(unsigned int *)0xC2A9C64 = 0x100000;
                                                t1087 = *(int *)0xC131A00;
                                                *(unsigned int *)0xC2A9C60 = t1087;
                                                t1088 = *(int *)0xC2A9C8C;
                                                *(unsigned int *)0xC2A9C8C = (t1088 & 0xFFEEEFEE);
                                                t1089 = *(int *)0xC2A9C60;
                                                if ((int)t1089 > 0) {
                                                    t1090 = *(int *)0xC2A9C60;
                                                    *(unsigned int *)0xC2A9C60 = (t1090 - 1);
                                                }
                                                t1091 = *(int *)0xC2A9C60;
                                                t1093 = t1086;
                                                if (t1091 == 0) {
                                                    t1092 = vibStart();
                                                    *(unsigned int *)0xC2A9C8C = 0x0;
                                                    t1093 = t1092;
                                                }
                                                t1096 = t1093;
                                            } else {
                                                t1095 = vibStart();
                                                t1096 = t1095;
                                            }
                                            t1106 = t1096;
                                        } else {
                                            *(unsigned int *)0xC2A9C64 = 0x100000;
                                            t1097 = *(int *)0xC131A00;
                                            *(unsigned int *)0xC2A9C60 = t1097;
                                            t1098 = *(int *)0xC2A9C8C;
                                            *(unsigned int *)0xC2A9C8C = (t1098 & 0xFFEEEFEE);
                                            t1099 = *(int *)0xC2A9C60;
                                            if ((int)t1099 > 0) {
                                                t1100 = *(int *)0xC2A9C60;
                                                *(unsigned int *)0xC2A9C60 = (t1100 - 1);
                                            }
                                            t1102 = *(int *)0xC2A9C60;
                                            t1104 = 0x100000;
                                            if (t1102 == 0) {
                                                t1103 = vibStart();
                                                *(unsigned int *)0xC2A9C8C = 0x0;
                                                t1104 = t1103;
                                            }
                                            t1106 = t1104;
                                        }
                                        t1211 = t1106;
                                    } else {
                                        if ((0x10000 & t1027) != 0) {
                                            if ((int)t1059 <= (int)0x10000) {
                                                t1107 = *(int *)0xC2A9C60;
                                                if (t1107 == 0) {
                                                    t1108 = *(int *)0xC131B0C;
                                                    if (t1108 == 0) {
                                                        t1109 = 0xC131A8C;
                                                        if (t1028 == 1) {
                                                            t1109 = 0xC131AC4;
                                                        }
                                                        t1110 = pdVibStart(a4, t1109);
                                                        t1113 = t1110;
                                                    } else {
                                                        t1111 = 0xC131A94;
                                                        if (t1028 == 1) {
                                                            t1111 = 0xC131ACC;
                                                        }
                                                        t1112 = pdVibStart(a4, t1111);
                                                        t1113 = t1112;
                                                    }
                                                    *(unsigned int *)0xC2A9C64 = 0x10000;
                                                    t1114 = *(int *)0xC131A00;
                                                    *(unsigned int *)0xC2A9C60 = t1114;
                                                    t1115 = *(int *)0xC2A9C8C;
                                                    *(unsigned int *)0xC2A9C8C = (t1115 & 0xFFFEEFEE);
                                                    t1116 = *(int *)0xC2A9C60;
                                                    if ((int)t1116 > 0) {
                                                        t1117 = *(int *)0xC2A9C60;
                                                        *(unsigned int *)0xC2A9C60 = (t1117 - 1);
                                                    }
                                                    t1118 = *(int *)0xC2A9C60;
                                                    t1120 = t1113;
                                                    if (t1118 == 0) {
                                                        t1119 = vibStart();
                                                        *(unsigned int *)0xC2A9C8C = 0x0;
                                                        t1120 = t1119;
                                                    }
                                                    t1123 = t1120;
                                                } else {
                                                    t1122 = vibStart();
                                                    t1123 = t1122;
                                                }
                                                t1133 = t1123;
                                            } else {
                                                *(unsigned int *)0xC2A9C64 = 0x10000;
                                                t1124 = *(int *)0xC131A00;
                                                *(unsigned int *)0xC2A9C60 = t1124;
                                                t1125 = *(int *)0xC2A9C8C;
                                                *(unsigned int *)0xC2A9C8C = (t1125 & 0xFFFEEFEE);
                                                t1126 = *(int *)0xC2A9C60;
                                                if ((int)t1126 > 0) {
                                                    t1127 = *(int *)0xC2A9C60;
                                                    *(unsigned int *)0xC2A9C60 = (t1127 - 1);
                                                }
                                                t1129 = *(int *)0xC2A9C60;
                                                t1131 = 0x10000;
                                                if (t1129 == 0) {
                                                    t1130 = vibStart();
                                                    *(unsigned int *)0xC2A9C8C = 0x0;
                                                    t1131 = t1130;
                                                }
                                                t1133 = t1131;
                                            }
                                            t1210 = t1133;
                                        } else {
                                            if ((0x1000 & t1027) != 0) {
                                                if ((int)t1059 <= (int)0x1000) {
                                                    t1134 = *(int *)0xC2A9C60;
                                                    if (t1134 != 0) {
                                                        t1135 = vibStart();
                                                        t1147 = t1135;
                                                    } else {
                                                        t1136 = 0xC131A9C;
                                                        if (t1028 == 1) {
                                                            t1136 = 0xC131AD4;
                                                        }
                                                        t1137 = pdVibStart(a4, t1136);
                                                        *(unsigned int *)0xC2A9C64 = 0x1000;
                                                        t1138 = *(int *)0xC131A00;
                                                        *(unsigned int *)0xC2A9C60 = t1138;
                                                        t1139 = *(int *)0xC2A9C8C;
                                                        *(unsigned int *)0xC2A9C8C = (t1139 & 0xFFFFEFEE);
                                                        t1140 = *(int *)0xC2A9C60;
                                                        if ((int)t1140 > 0) {
                                                            t1141 = *(int *)0xC2A9C60;
                                                            *(unsigned int *)0xC2A9C60 = (t1141 - 1);
                                                        }
                                                        t1143 = *(int *)0xC2A9C60;
                                                        t1145 = t1137;
                                                        if (t1143 == 0) {
                                                            t1144 = vibStart();
                                                            *(unsigned int *)0xC2A9C8C = 0x0;
                                                            t1145 = t1144;
                                                        }
                                                        t1147 = t1145;
                                                    }
                                                    t1157 = t1147;
                                                } else {
                                                    *(unsigned int *)0xC2A9C64 = 0x1000;
                                                    t1148 = *(int *)0xC131A00;
                                                    *(unsigned int *)0xC2A9C60 = t1148;
                                                    t1149 = *(int *)0xC2A9C8C;
                                                    *(unsigned int *)0xC2A9C8C = (t1149 & 0xFFFFEFEE);
                                                    t1150 = *(int *)0xC2A9C60;
                                                    if ((int)t1150 > 0) {
                                                        t1151 = *(int *)0xC2A9C60;
                                                        *(unsigned int *)0xC2A9C60 = (t1151 - 1);
                                                    }
                                                    t1153 = *(int *)0xC2A9C60;
                                                    t1155 = 0x1000;
                                                    if (t1153 == 0) {
                                                        t1154 = vibStart();
                                                        *(unsigned int *)0xC2A9C8C = 0x0;
                                                        t1155 = t1154;
                                                    }
                                                    t1157 = t1155;
                                                }
                                                t1209 = t1157;
                                            } else {
                                                if ((t1027 & 0x1) != 0) {
                                                    *(unsigned char *)0xC2A9C69 = 0x80;
                                                    *(unsigned char *)0xC2A9C6A = 0x4;
                                                    *(unsigned char *)0xC2A9C6B = 0x7;
                                                    *(unsigned char *)0xC2A9C6C = 0x1;
                                                    FUN_0c14f182(0xC2A9C68, 0x80);
                                                    t1159 = pdVibStart(a4, 0xC2A9C68);
                                                    *(unsigned int *)0xC2A9C64 = 0x1;
                                                    *(unsigned int *)0xC2A9C60 = 0x3;
                                                    *(unsigned int *)0xC2A9C8C = 0x0;
                                                    t1160 = *(int *)0xC2A9C60;
                                                    if ((int)t1160 > 0) {
                                                        t1161 = *(int *)0xC2A9C60;
                                                        *(unsigned int *)0xC2A9C60 = (t1161 - 1);
                                                    }
                                                    t1162 = *(int *)0xC2A9C60;
                                                    t1164 = t1159;
                                                    if (t1162 == 0) {
                                                        t1163 = vibStart();
                                                        *(unsigned int *)0xC2A9C8C = 0x0;
                                                        t1164 = t1163;
                                                    }
                                                    t1208 = t1164;
                                                } else {
                                                    t1165 = *(int *)0xC1EE234;
                                                    if (t1165 == 1) {
                                                        t1166 = *(int *)0xC1EE238;
                                                        if (t1166 == 1) {
                                                            t1167 = *(int *)0xC2A9C60;
                                                            if (t1167 == 0) {
                                                                if (t1028 != 1) {
                                                                    t1168 = pdVibStart(a4, 0xC131AA4);
                                                                    t1175 = t1168;
                                                                    if (t1168 != -1) {
                                                                        *(unsigned int *)0xC2A9C60 = 0xA;
                                                                        *(unsigned int *)0xC2A9C64 = 0x10;
                                                                        t1169 = *(int *)0xC2A9C60;
                                                                        if ((int)t1169 > 0) {
                                                                            t1170 = *(int *)0xC2A9C60;
                                                                            *(unsigned int *)0xC2A9C60 = (t1170 - 1);
                                                                        }
                                                                        t1171 = *(int *)0xC2A9C60;
                                                                        t1173 = t1168;
                                                                        if (t1171 == 0) {
                                                                            t1172 = vibStart();
                                                                            *(unsigned int *)0xC2A9C8C = 0x0;
                                                                            t1173 = t1172;
                                                                        }
                                                                        t1175 = t1173;
                                                                    }
                                                                    t1183 = t1175;
                                                                } else {
                                                                    *(unsigned int *)0xC2A9C60 = 0xA;
                                                                    *(unsigned int *)0xC2A9C64 = 0x10;
                                                                    t1176 = *(int *)0xC2A9C60;
                                                                    if ((int)t1176 > 0) {
                                                                        t1177 = *(int *)0xC2A9C60;
                                                                        *(unsigned int *)0xC2A9C60 = (t1177 - 1);
                                                                    }
                                                                    t1179 = *(int *)0xC2A9C60;
                                                                    t1181 = t1028;
                                                                    if (t1179 == 0) {
                                                                        t1180 = vibStart();
                                                                        *(unsigned int *)0xC2A9C8C = 0x0;
                                                                        t1181 = t1180;
                                                                    }
                                                                    t1183 = t1181;
                                                                }
                                                                t1191 = t1183;
                                                            } else {
                                                                t1184 = *(int *)0xC2A9C60;
                                                                if ((int)t1184 > 0) {
                                                                    t1185 = *(int *)0xC2A9C60;
                                                                    *(unsigned int *)0xC2A9C60 = (t1185 - 1);
                                                                }
                                                                t1187 = *(int *)0xC2A9C60;
                                                                t1189 = t1166;
                                                                if (t1187 == 0) {
                                                                    t1188 = vibStart();
                                                                    *(unsigned int *)0xC2A9C8C = 0x0;
                                                                    t1189 = t1188;
                                                                }
                                                                t1191 = t1189;
                                                            }
                                                            t1199 = t1191;
                                                        } else {
                                                            t1192 = *(int *)0xC2A9C60;
                                                            if ((int)t1192 > 0) {
                                                                t1193 = *(int *)0xC2A9C60;
                                                                *(unsigned int *)0xC2A9C60 = (t1193 - 1);
                                                            }
                                                            t1195 = *(int *)0xC2A9C60;
                                                            t1197 = t1166;
                                                            if (t1195 == 0) {
                                                                t1196 = vibStart();
                                                                *(unsigned int *)0xC2A9C8C = 0x0;
                                                                t1197 = t1196;
                                                            }
                                                            t1199 = t1197;
                                                        }
                                                        t1207 = t1199;
                                                    } else {
                                                        t1200 = *(int *)0xC2A9C60;
                                                        if ((int)t1200 > 0) {
                                                            t1201 = *(int *)0xC2A9C60;
                                                            *(unsigned int *)0xC2A9C60 = (t1201 - 1);
                                                        }
                                                        t1203 = *(int *)0xC2A9C60;
                                                        t1205 = t1165;
                                                        if (t1203 == 0) {
                                                            t1204 = vibStart();
                                                            *(unsigned int *)0xC2A9C8C = 0x0;
                                                            t1205 = t1204;
                                                        }
                                                        t1207 = t1205;
                                                    }
                                                    t1208 = t1207;
                                                }
                                                t1209 = t1208;
                                            }
                                            t1210 = t1209;
                                        }
                                        t1211 = t1210;
                                    }
                                    t1212 = t1211;
                                }
                                t1213 = t1212;
                            }
                            t1214 = t1213;
                        }
                        t1216 = t1214;
                    }
                    t1218 = t1216;
                }
                t1220 = t1218;
            }
            t1226 = t1220;
        } else {
            t1223 = t2;
            if (t2 == 1) {
                t1222 = vibStart();
                *(unsigned int *)0xC2A9C8C = 0x0;
                *(unsigned int *)0xC2A9C90 = 0x2;
                t1223 = t1222;
            }
            t1226 = t1223;
        }
        t1228 = t1226;
    }
    return t1228;
}

int ExecEffect(int a4, int a5)
{
    float t0;
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
    int t51;
    int t52;
    int t77;
    int t78;
    int t79;
    int t80;
    int t113;
    int t114;
    int t157;
    int t158;
    int t159;
    int t160;
    int t161;
    int t162;
    int t163;
    int t196;
    int t197;
    int t222;
    int t223;
    int t224;
    int t225;
    int t258;
    int t259;
    int t290;
    int t291;
    int t292;
    int t293;
    int t294;
    int t295;
    int t296;
    int t329;
    int t330;
    int t355;
    int t356;
    int t357;
    int t358;
    int t391;
    int t392;
    int t423;
    int t424;
    int t425;
    int t426;
    int t427;
    int t428;
    int t429;
    int t462;
    int t463;
    int t488;
    int t489;
    int t490;
    int t491;
    int t524;
    int t525;
    int t556;
    int t557;
    int t558;
    int t559;
    int t560;
    int t561;
    int t562;
    int t595;
    int t596;
    int t621;
    int t622;
    int t623;
    int t624;
    int t657;
    int t658;
    int t689;
    int t690;
    int t691;
    int t692;
    int t693;
    int t694;
    int t695;
    int t728;
    int t729;
    int t754;
    int t755;
    int t756;
    int t757;
    int t790;
    int t791;
    int t822;
    int t823;
    int t824;
    int t825;
    int t826;
    int t827;
    int t828;
    int t861;
    int t862;
    int t887;
    int t888;
    int t889;
    int t890;
    int t923;
    int t924;
    int t963;
    int t964;
    int t965;
    int t966;
    int t967;
    int t968;
    int t969;
    int t970;
    int t971;
    int t972;
    int t973;
    int t974;
    int t975;
    int t976;
    int t985;
    int t988;
    int t999;
    int t997;
    int t995;
    int t993;
    int t989;
    int t991;
    int t990;
    int t1000;
    int t1001;
    int t1002;
    int t1007;
    float u1008;
    float u1009;
    int t1012;
    int t1015;
    float u1016;
    int t1013;
    float u1014;
    int t1017;
    int t1022;
    int t1025;
    int t1026;
    int t1028;
    int t1029;
    int t1031;
    int t1032;
    int t1037;
    int t1040;
    int t1045;
    int t1046;
    int t1047;
    int t1056;
    int t1048;
    int t1052;
    int t1049;
    int t1050;
    int t1051;
    int t1059;
    int t1060;
    int t1061;
    int t1062;
    int t1066;
    int t1063;
    int t1064;
    int t1065;
    int t1078;
    int t1079;
    int t1081;
    int t1082;
    int t1083;
    int t1085;
    int t1086;
    int t1101;
    int t1087;
    float u1088;
    int t1090;
    int t1094;
    float u1091;
    int t1093;
    int t1092;
    int t1099;
    float u1096;
    int t1098;
    int t1097;
    int t1103;
    int t1118;
    int t1104;
    float u1105;
    int t1107;
    int t1111;
    float u1108;
    int t1110;
    int t1109;
    int t1116;
    float u1113;
    int t1115;
    int t1114;
    int t1121;
    int t1122;
    int t1124;
    int t1125;
    int t1140;
    int t1126;
    float u1127;
    int t1129;
    int t1133;
    float u1130;
    int t1132;
    int t1131;
    int t1138;
    float u1135;
    int t1137;
    int t1136;
    int t1142;
    int t1157;
    int t1143;
    float u1144;
    int t1146;
    int t1150;
    float u1147;
    int t1149;
    int t1148;
    int t1155;
    float u1152;
    int t1154;
    int t1153;
    int t1160;
    int t1161;
    int t1162;
    int t1164;
    int t1163;
    int t1168;
    int t1165;
    int t1166;
    int t1167;
    int t1170;
    int t1171;
    int t1172;
    int t1178;
    int t1173;
    int t1177;
    int t1174;
    int t1175;
    int t1176;
    float u1011;
    int t1075;
    int t1072;
    int t1069;
    int t1159;
    int t1120;
    int t1119;
    int t1102;
    int t1100;
    int t1095;
    int t1117;
    int t1112;
    int t1158;
    int t1141;
    int t1139;
    int t1134;
    int t1156;
    int t1151;
    int t1169;
    int t1179;
    int stk[18] = {0};

    *(unsigned int *)(((int)stk + 8)) = a5;
    t0 = nlScalor(a5);
    nlLocate(0x3, 0x32);
    t2 = *(short *)0xC1791C0;
    t3 = *(short *)0xC179152;
    t4 = *(int *)0xC1EE20C;
    if (t4 == 2) {
        t5 = *(int *)0xC1EE20C;
        if (t5 == 2) {
            t6 = *(int *)0xC1EE214;
            if (t6 != 4) {
                t7 = *(int *)0xC1EE214;
                if (t7 != 5) {
                    t8 = *(int *)0xC1EE214;
                    if (t8 != 6) {
                        t9 = *(int *)0xC1EE214;
                        if (t9 != 7) {
                            t10 = *(int *)0xC1EE214;
                            if (t10 != 11) {
                                t11 = *(int *)0xC1EE214;
                                if (t11 == 12) {
                                    t12 = *(int *)0xC1EE20C;
                                    if (t12 == 2) {
                                        t13 = *(int *)0xC1EE214;
                                        if (t13 != 12) {
                                            t14 = *(int *)0xC1EE214;
                                            if (t14 == 4) {
                                                t15 = *(short *)0xC179154;
                                                if ((int)(unsigned short)t15 >= 0) {
                                                    t16 = *(short *)0xC179154;
                                                    if ((int)(unsigned short)t16 >= (int)0x800) {
                                                        t17 = *(short *)0xC179154;
                                                        if ((int)(unsigned short)t17 > (int)0xF800) {
                                                            t18 = *(short *)0xC179154;
                                                            if ((int)(unsigned short)t18 <= (int)0xFFFF) {
                                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                                        if (t0 > (1.0f + 1.0f)) {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                                        } else {
                                                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                                    if (t0 > 1.0f) {
                                                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                                    } else {
                                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                                    }
                                                                                } else {
                                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                                }
                                                                            } else {
                                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                                if (t0 > 1.0f) {
                                                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                                } else {
                                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                                }
                                                                            } else {
                                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                            }
                                                                        } else {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                            if (t0 > 1.0f) {
                                                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                            } else {
                                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                            }
                                                                        } else {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                                            if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                                if (t0 > (1.0f + 1.0f)) {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                                } else {
                                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                            if (t0 > 1.0f) {
                                                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                            } else {
                                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                            }
                                                                        } else {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                }
                                                            } else {
                                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                        if (t0 > 1.0f) {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                        } else {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            }
                                                        } else {
                                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                    if (t0 > 1.0f) {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    t51 = *(short *)0xC179154;
                                                    if ((int)(unsigned short)t51 > (int)0xF800) {
                                                        t52 = *(short *)0xC179154;
                                                        if ((int)(unsigned short)t52 <= (int)0xFFFF) {
                                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                                                if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                                    if (t0 > (1.0f + 1.0f)) {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                                    } else {
                                                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                                if (t0 > 1.0f) {
                                                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                                } else {
                                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                                }
                                                                            } else {
                                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                            }
                                                                        } else {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                            if (t0 > 1.0f) {
                                                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                            } else {
                                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                            }
                                                                        } else {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                }
                                                            } else {
                                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                        if (t0 > 1.0f) {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                        } else {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        } else {
                                            t77 = *(short *)0xC179154;
                                            if ((int)(unsigned short)t77 >= 0) {
                                                t78 = *(short *)0xC179154;
                                                if ((int)(unsigned short)t78 >= (int)0x800) {
                                                    t79 = *(short *)0xC179154;
                                                    if ((int)(unsigned short)t79 > (int)0xF800) {
                                                        t80 = *(short *)0xC179154;
                                                        if ((int)(unsigned short)t80 <= (int)0xFFFF) {
                                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                                                if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                                    if (t0 > (1.0f + 1.0f)) {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                                    } else {
                                                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                                if (t0 > 1.0f) {
                                                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                                } else {
                                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                                }
                                                                            } else {
                                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                            }
                                                                        } else {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                            if (t0 > 1.0f) {
                                                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                            } else {
                                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                            }
                                                                        } else {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                }
                                                            } else {
                                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                        if (t0 > 1.0f) {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                        } else {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                            if (t0 > (1.0f + 1.0f)) {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                            } else {
                                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                        if (t0 > 1.0f) {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                        } else {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            }
                                                        } else {
                                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                    if (t0 > 1.0f) {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        }
                                                    } else {
                                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                if (t0 > 1.0f) {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    }
                                                }
                                            } else {
                                                t113 = *(short *)0xC179154;
                                                if ((int)(unsigned short)t113 > (int)0xF800) {
                                                    t114 = *(short *)0xC179154;
                                                    if ((int)(unsigned short)t114 <= (int)0xFFFF) {
                                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                                            if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                                if (t0 > (1.0f + 1.0f)) {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                                } else {
                                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                            if (t0 > 1.0f) {
                                                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                            } else {
                                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                            }
                                                                        } else {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                }
                                                            } else {
                                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                        if (t0 > 1.0f) {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                        } else {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            }
                                                        } else {
                                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                    if (t0 > 1.0f) {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            }
                                        }
                                    } else {
                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                    }
                                } else {
                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                        if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                            if (t0 > (1.0f + 1.0f)) {
                                                *(unsigned int *)(((int)stk + 20)) = 0x2;
                                            } else {
                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                        if (t0 > 1.0f) {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                    if (t0 > 1.0f) {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        }
                                    } else {
                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                if (t0 > 1.0f) {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        } else {
                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                        }
                                    }
                                }
                            } else {
                                t157 = *(int *)0xC1EE20C;
                                if (t157 == 2) {
                                    t158 = *(int *)0xC1EE214;
                                    if (t158 != 12) {
                                        t159 = *(int *)0xC1EE214;
                                        if (t159 == 4) {
                                            t160 = *(short *)0xC179154;
                                            if ((int)(unsigned short)t160 >= 0) {
                                                t161 = *(short *)0xC179154;
                                                if ((int)(unsigned short)t161 >= (int)0x800) {
                                                    t162 = *(short *)0xC179154;
                                                    if ((int)(unsigned short)t162 > (int)0xF800) {
                                                        t163 = *(short *)0xC179154;
                                                        if ((int)(unsigned short)t163 <= (int)0xFFFF) {
                                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                                                if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                                    if (t0 > (1.0f + 1.0f)) {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                                    } else {
                                                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                                if (t0 > 1.0f) {
                                                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                                } else {
                                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                                }
                                                                            } else {
                                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                            }
                                                                        } else {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                            if (t0 > 1.0f) {
                                                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                            } else {
                                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                            }
                                                                        } else {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                }
                                                            } else {
                                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                        if (t0 > 1.0f) {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                        } else {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                            if (t0 > (1.0f + 1.0f)) {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                            } else {
                                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                        if (t0 > 1.0f) {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                        } else {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            }
                                                        } else {
                                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                    if (t0 > 1.0f) {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        }
                                                    } else {
                                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                if (t0 > 1.0f) {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    }
                                                }
                                            } else {
                                                t196 = *(short *)0xC179154;
                                                if ((int)(unsigned short)t196 > (int)0xF800) {
                                                    t197 = *(short *)0xC179154;
                                                    if ((int)(unsigned short)t197 <= (int)0xFFFF) {
                                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                                            if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                                if (t0 > (1.0f + 1.0f)) {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                                } else {
                                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                            if (t0 > 1.0f) {
                                                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                            } else {
                                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                            }
                                                                        } else {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                }
                                                            } else {
                                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                        if (t0 > 1.0f) {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                        } else {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            }
                                                        } else {
                                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                    if (t0 > 1.0f) {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            }
                                        } else {
                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                        }
                                    } else {
                                        t222 = *(short *)0xC179154;
                                        if ((int)(unsigned short)t222 >= 0) {
                                            t223 = *(short *)0xC179154;
                                            if ((int)(unsigned short)t223 >= (int)0x800) {
                                                t224 = *(short *)0xC179154;
                                                if ((int)(unsigned short)t224 > (int)0xF800) {
                                                    t225 = *(short *)0xC179154;
                                                    if ((int)(unsigned short)t225 <= (int)0xFFFF) {
                                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                                            if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                                if (t0 > (1.0f + 1.0f)) {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                                } else {
                                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                            if (t0 > 1.0f) {
                                                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                            } else {
                                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                            }
                                                                        } else {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                }
                                                            } else {
                                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                        if (t0 > 1.0f) {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                        } else {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            }
                                                        } else {
                                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                    if (t0 > 1.0f) {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                        if (t0 > (1.0f + 1.0f)) {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                        } else {
                                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                    if (t0 > 1.0f) {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        }
                                                    } else {
                                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                if (t0 > 1.0f) {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                            if (t0 > 1.0f) {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                }
                                            }
                                        } else {
                                            t258 = *(short *)0xC179154;
                                            if ((int)(unsigned short)t258 > (int)0xF800) {
                                                t259 = *(short *)0xC179154;
                                                if ((int)(unsigned short)t259 <= (int)0xFFFF) {
                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                            if (t0 > (1.0f + 1.0f)) {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                            } else {
                                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                        if (t0 > 1.0f) {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                        } else {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            }
                                                        } else {
                                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                    if (t0 > 1.0f) {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        }
                                                    } else {
                                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                if (t0 > 1.0f) {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        }
                                    }
                                } else {
                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                }
                            }
                        } else {
                            t290 = *(int *)0xC1EE20C;
                            if (t290 == 2) {
                                t291 = *(int *)0xC1EE214;
                                if (t291 != 12) {
                                    t292 = *(int *)0xC1EE214;
                                    if (t292 == 4) {
                                        t293 = *(short *)0xC179154;
                                        if ((int)(unsigned short)t293 >= 0) {
                                            t294 = *(short *)0xC179154;
                                            if ((int)(unsigned short)t294 >= (int)0x800) {
                                                t295 = *(short *)0xC179154;
                                                if ((int)(unsigned short)t295 > (int)0xF800) {
                                                    t296 = *(short *)0xC179154;
                                                    if ((int)(unsigned short)t296 <= (int)0xFFFF) {
                                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                                            if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                                if (t0 > (1.0f + 1.0f)) {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                                } else {
                                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                            if (t0 > 1.0f) {
                                                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                            } else {
                                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                            }
                                                                        } else {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                }
                                                            } else {
                                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                        if (t0 > 1.0f) {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                        } else {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            }
                                                        } else {
                                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                    if (t0 > 1.0f) {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                        if (t0 > (1.0f + 1.0f)) {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                        } else {
                                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                    if (t0 > 1.0f) {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        }
                                                    } else {
                                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                if (t0 > 1.0f) {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                            if (t0 > 1.0f) {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                }
                                            }
                                        } else {
                                            t329 = *(short *)0xC179154;
                                            if ((int)(unsigned short)t329 > (int)0xF800) {
                                                t330 = *(short *)0xC179154;
                                                if ((int)(unsigned short)t330 <= (int)0xFFFF) {
                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                            if (t0 > (1.0f + 1.0f)) {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                            } else {
                                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                        if (t0 > 1.0f) {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                        } else {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            }
                                                        } else {
                                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                    if (t0 > 1.0f) {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        }
                                                    } else {
                                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                if (t0 > 1.0f) {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        }
                                    } else {
                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                    }
                                } else {
                                    t355 = *(short *)0xC179154;
                                    if ((int)(unsigned short)t355 >= 0) {
                                        t356 = *(short *)0xC179154;
                                        if ((int)(unsigned short)t356 >= (int)0x800) {
                                            t357 = *(short *)0xC179154;
                                            if ((int)(unsigned short)t357 > (int)0xF800) {
                                                t358 = *(short *)0xC179154;
                                                if ((int)(unsigned short)t358 <= (int)0xFFFF) {
                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                            if (t0 > (1.0f + 1.0f)) {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                            } else {
                                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                        if (t0 > 1.0f) {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                        } else {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            }
                                                        } else {
                                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                    if (t0 > 1.0f) {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        }
                                                    } else {
                                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                if (t0 > 1.0f) {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        } else {
                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                                if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                    if (t0 > (1.0f + 1.0f)) {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                    } else {
                                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                if (t0 > 1.0f) {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                            if (t0 > 1.0f) {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                        if (t0 > 1.0f) {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            }
                                        }
                                    } else {
                                        t391 = *(short *)0xC179154;
                                        if ((int)(unsigned short)t391 > (int)0xF800) {
                                            t392 = *(short *)0xC179154;
                                            if ((int)(unsigned short)t392 <= (int)0xFFFF) {
                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                        if (t0 > (1.0f + 1.0f)) {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                        } else {
                                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                    if (t0 > 1.0f) {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        }
                                                    } else {
                                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                if (t0 > 1.0f) {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                            if (t0 > 1.0f) {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        } else {
                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                        }
                                    }
                                }
                            } else {
                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                            }
                        }
                    } else {
                        t423 = *(int *)0xC1EE20C;
                        if (t423 == 2) {
                            t424 = *(int *)0xC1EE214;
                            if (t424 != 12) {
                                t425 = *(int *)0xC1EE214;
                                if (t425 == 4) {
                                    t426 = *(short *)0xC179154;
                                    if ((int)(unsigned short)t426 >= 0) {
                                        t427 = *(short *)0xC179154;
                                        if ((int)(unsigned short)t427 >= (int)0x800) {
                                            t428 = *(short *)0xC179154;
                                            if ((int)(unsigned short)t428 > (int)0xF800) {
                                                t429 = *(short *)0xC179154;
                                                if ((int)(unsigned short)t429 <= (int)0xFFFF) {
                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                            if (t0 > (1.0f + 1.0f)) {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                            } else {
                                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                        if (t0 > 1.0f) {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                        } else {
                                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            }
                                                        } else {
                                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                    if (t0 > 1.0f) {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        }
                                                    } else {
                                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                if (t0 > 1.0f) {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        } else {
                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                                if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                    if (t0 > (1.0f + 1.0f)) {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                    } else {
                                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                if (t0 > 1.0f) {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                            if (t0 > 1.0f) {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                        if (t0 > 1.0f) {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            }
                                        }
                                    } else {
                                        t462 = *(short *)0xC179154;
                                        if ((int)(unsigned short)t462 > (int)0xF800) {
                                            t463 = *(short *)0xC179154;
                                            if ((int)(unsigned short)t463 <= (int)0xFFFF) {
                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                        if (t0 > (1.0f + 1.0f)) {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                        } else {
                                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                    if (t0 > 1.0f) {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        }
                                                    } else {
                                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                if (t0 > 1.0f) {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                            if (t0 > 1.0f) {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        } else {
                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                        }
                                    }
                                } else {
                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                }
                            } else {
                                t488 = *(short *)0xC179154;
                                if ((int)(unsigned short)t488 >= 0) {
                                    t489 = *(short *)0xC179154;
                                    if ((int)(unsigned short)t489 >= (int)0x800) {
                                        t490 = *(short *)0xC179154;
                                        if ((int)(unsigned short)t490 > (int)0xF800) {
                                            t491 = *(short *)0xC179154;
                                            if ((int)(unsigned short)t491 <= (int)0xFFFF) {
                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                        if (t0 > (1.0f + 1.0f)) {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                        } else {
                                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                    if (t0 > 1.0f) {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        }
                                                    } else {
                                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                if (t0 > 1.0f) {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                            if (t0 > 1.0f) {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        } else {
                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                        }
                                    } else {
                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                            if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                if (t0 > (1.0f + 1.0f)) {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                } else {
                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                            if (t0 > 1.0f) {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                        if (t0 > 1.0f) {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                    if (t0 > 1.0f) {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        }
                                    }
                                } else {
                                    t524 = *(short *)0xC179154;
                                    if ((int)(unsigned short)t524 > (int)0xF800) {
                                        t525 = *(short *)0xC179154;
                                        if ((int)(unsigned short)t525 <= (int)0xFFFF) {
                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                                if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                    if (t0 > (1.0f + 1.0f)) {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                    } else {
                                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                if (t0 > 1.0f) {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                            if (t0 > 1.0f) {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                        if (t0 > 1.0f) {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            }
                                        } else {
                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                        }
                                    } else {
                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                    }
                                }
                            }
                        } else {
                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                        }
                    }
                } else {
                    t556 = *(int *)0xC1EE20C;
                    if (t556 == 2) {
                        t557 = *(int *)0xC1EE214;
                        if (t557 != 12) {
                            t558 = *(int *)0xC1EE214;
                            if (t558 == 4) {
                                t559 = *(short *)0xC179154;
                                if ((int)(unsigned short)t559 >= 0) {
                                    t560 = *(short *)0xC179154;
                                    if ((int)(unsigned short)t560 >= (int)0x800) {
                                        t561 = *(short *)0xC179154;
                                        if ((int)(unsigned short)t561 > (int)0xF800) {
                                            t562 = *(short *)0xC179154;
                                            if ((int)(unsigned short)t562 <= (int)0xFFFF) {
                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                        if (t0 > (1.0f + 1.0f)) {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                        } else {
                                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                    if (t0 > 1.0f) {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                    } else {
                                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        }
                                                    } else {
                                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                if (t0 > 1.0f) {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                            if (t0 > 1.0f) {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        } else {
                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                        }
                                    } else {
                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                            if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                if (t0 > (1.0f + 1.0f)) {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                } else {
                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                            if (t0 > 1.0f) {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                        if (t0 > 1.0f) {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                    if (t0 > 1.0f) {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        }
                                    }
                                } else {
                                    t595 = *(short *)0xC179154;
                                    if ((int)(unsigned short)t595 > (int)0xF800) {
                                        t596 = *(short *)0xC179154;
                                        if ((int)(unsigned short)t596 <= (int)0xFFFF) {
                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                                if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                    if (t0 > (1.0f + 1.0f)) {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                    } else {
                                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                if (t0 > 1.0f) {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                            if (t0 > 1.0f) {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                        if (t0 > 1.0f) {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            }
                                        } else {
                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                        }
                                    } else {
                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                    }
                                }
                            } else {
                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                            }
                        } else {
                            t621 = *(short *)0xC179154;
                            if ((int)(unsigned short)t621 >= 0) {
                                t622 = *(short *)0xC179154;
                                if ((int)(unsigned short)t622 >= (int)0x800) {
                                    t623 = *(short *)0xC179154;
                                    if ((int)(unsigned short)t623 > (int)0xF800) {
                                        t624 = *(short *)0xC179154;
                                        if ((int)(unsigned short)t624 <= (int)0xFFFF) {
                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                                if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                    if (t0 > (1.0f + 1.0f)) {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                    } else {
                                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                if (t0 > 1.0f) {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                            if (t0 > 1.0f) {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                        if (t0 > 1.0f) {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            }
                                        } else {
                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                        }
                                    } else {
                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                    }
                                } else {
                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                        if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                            if (t0 > (1.0f + 1.0f)) {
                                                *(unsigned int *)(((int)stk + 20)) = 0x2;
                                            } else {
                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                        if (t0 > 1.0f) {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                    if (t0 > 1.0f) {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        }
                                    } else {
                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                if (t0 > 1.0f) {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        } else {
                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                        }
                                    }
                                }
                            } else {
                                t657 = *(short *)0xC179154;
                                if ((int)(unsigned short)t657 > (int)0xF800) {
                                    t658 = *(short *)0xC179154;
                                    if ((int)(unsigned short)t658 <= (int)0xFFFF) {
                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                            if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                if (t0 > (1.0f + 1.0f)) {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                } else {
                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                            if (t0 > 1.0f) {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                        if (t0 > 1.0f) {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                    if (t0 > 1.0f) {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        }
                                    } else {
                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                    }
                                } else {
                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                }
                            }
                        }
                    } else {
                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                    }
                }
            } else {
                t689 = *(int *)0xC1EE20C;
                if (t689 == 2) {
                    t690 = *(int *)0xC1EE214;
                    if (t690 != 12) {
                        t691 = *(int *)0xC1EE214;
                        if (t691 == 4) {
                            t692 = *(short *)0xC179154;
                            if ((int)(unsigned short)t692 >= 0) {
                                t693 = *(short *)0xC179154;
                                if ((int)(unsigned short)t693 >= (int)0x800) {
                                    t694 = *(short *)0xC179154;
                                    if ((int)(unsigned short)t694 > (int)0xF800) {
                                        t695 = *(short *)0xC179154;
                                        if ((int)(unsigned short)t695 <= (int)0xFFFF) {
                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                                if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                    if (t0 > (1.0f + 1.0f)) {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                    } else {
                                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                                if (t0 > 1.0f) {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                                }
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                            if (t0 > 1.0f) {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                        if (t0 > 1.0f) {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            }
                                        } else {
                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                        }
                                    } else {
                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                    }
                                } else {
                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                        if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                            if (t0 > (1.0f + 1.0f)) {
                                                *(unsigned int *)(((int)stk + 20)) = 0x2;
                                            } else {
                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                        if (t0 > 1.0f) {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                    if (t0 > 1.0f) {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        }
                                    } else {
                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                if (t0 > 1.0f) {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        } else {
                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                        }
                                    }
                                }
                            } else {
                                t728 = *(short *)0xC179154;
                                if ((int)(unsigned short)t728 > (int)0xF800) {
                                    t729 = *(short *)0xC179154;
                                    if ((int)(unsigned short)t729 <= (int)0xFFFF) {
                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                            if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                if (t0 > (1.0f + 1.0f)) {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                } else {
                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                            if (t0 > 1.0f) {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                        if (t0 > 1.0f) {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                    if (t0 > 1.0f) {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        }
                                    } else {
                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                    }
                                } else {
                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                }
                            }
                        } else {
                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                        }
                    } else {
                        t754 = *(short *)0xC179154;
                        if ((int)(unsigned short)t754 >= 0) {
                            t755 = *(short *)0xC179154;
                            if ((int)(unsigned short)t755 >= (int)0x800) {
                                t756 = *(short *)0xC179154;
                                if ((int)(unsigned short)t756 > (int)0xF800) {
                                    t757 = *(short *)0xC179154;
                                    if ((int)(unsigned short)t757 <= (int)0xFFFF) {
                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                            if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                if (t0 > (1.0f + 1.0f)) {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                } else {
                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                            if (t0 > 1.0f) {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                        if (t0 > 1.0f) {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                    if (t0 > 1.0f) {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        }
                                    } else {
                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                    }
                                } else {
                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                }
                            } else {
                                if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                    if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                        if (t0 > (1.0f + 1.0f)) {
                                            *(unsigned int *)(((int)stk + 20)) = 0x2;
                                        } else {
                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                    if (t0 > 1.0f) {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        }
                                    } else {
                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                if (t0 > 1.0f) {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        } else {
                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                        }
                                    }
                                } else {
                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                            if (t0 > 1.0f) {
                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        } else {
                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                        }
                                    } else {
                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                    }
                                }
                            }
                        } else {
                            t790 = *(short *)0xC179154;
                            if ((int)(unsigned short)t790 > (int)0xF800) {
                                t791 = *(short *)0xC179154;
                                if ((int)(unsigned short)t791 <= (int)0xFFFF) {
                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                        if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                            if (t0 > (1.0f + 1.0f)) {
                                                *(unsigned int *)(((int)stk + 20)) = 0x2;
                                            } else {
                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                        if (t0 > 1.0f) {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                    if (t0 > 1.0f) {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        }
                                    } else {
                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                if (t0 > 1.0f) {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        } else {
                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                        }
                                    }
                                } else {
                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                }
                            } else {
                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                            }
                        }
                    }
                } else {
                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                }
            }
        } else {
            t822 = *(int *)0xC1EE20C;
            if (t822 == 2) {
                t823 = *(int *)0xC1EE214;
                if (t823 != 12) {
                    t824 = *(int *)0xC1EE214;
                    if (t824 == 4) {
                        t825 = *(short *)0xC179154;
                        if ((int)(unsigned short)t825 >= 0) {
                            t826 = *(short *)0xC179154;
                            if ((int)(unsigned short)t826 >= (int)0x800) {
                                t827 = *(short *)0xC179154;
                                if ((int)(unsigned short)t827 > (int)0xF800) {
                                    t828 = *(short *)0xC179154;
                                    if ((int)(unsigned short)t828 <= (int)0xFFFF) {
                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                            if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                                if (t0 > (1.0f + 1.0f)) {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x2;
                                                } else {
                                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                            if (t0 > 1.0f) {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                        if (t0 > 1.0f) {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                    if (t0 > 1.0f) {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        }
                                    } else {
                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                    }
                                } else {
                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                }
                            } else {
                                if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                    if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                        if (t0 > (1.0f + 1.0f)) {
                                            *(unsigned int *)(((int)stk + 20)) = 0x2;
                                        } else {
                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                    if (t0 > 1.0f) {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        }
                                    } else {
                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                if (t0 > 1.0f) {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        } else {
                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                        }
                                    }
                                } else {
                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                            if (t0 > 1.0f) {
                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        } else {
                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                        }
                                    } else {
                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                    }
                                }
                            }
                        } else {
                            t861 = *(short *)0xC179154;
                            if ((int)(unsigned short)t861 > (int)0xF800) {
                                t862 = *(short *)0xC179154;
                                if ((int)(unsigned short)t862 <= (int)0xFFFF) {
                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                        if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                            if (t0 > (1.0f + 1.0f)) {
                                                *(unsigned int *)(((int)stk + 20)) = 0x2;
                                            } else {
                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                        if (t0 > 1.0f) {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                    if (t0 > 1.0f) {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        }
                                    } else {
                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                if (t0 > 1.0f) {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        } else {
                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                        }
                                    }
                                } else {
                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                }
                            } else {
                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                            }
                        }
                    } else {
                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                    }
                } else {
                    t887 = *(short *)0xC179154;
                    if ((int)(unsigned short)t887 >= 0) {
                        t888 = *(short *)0xC179154;
                        if ((int)(unsigned short)t888 >= (int)0x800) {
                            t889 = *(short *)0xC179154;
                            if ((int)(unsigned short)t889 > (int)0xF800) {
                                t890 = *(short *)0xC179154;
                                if ((int)(unsigned short)t890 <= (int)0xFFFF) {
                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                        if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                            if (t0 > (1.0f + 1.0f)) {
                                                *(unsigned int *)(((int)stk + 20)) = 0x2;
                                            } else {
                                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                        if (t0 > 1.0f) {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                    if (t0 > 1.0f) {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        }
                                    } else {
                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                if (t0 > 1.0f) {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        } else {
                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                        }
                                    }
                                } else {
                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                }
                            } else {
                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                            }
                        } else {
                            if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                    if (t0 > (1.0f + 1.0f)) {
                                        *(unsigned int *)(((int)stk + 20)) = 0x2;
                                    } else {
                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                if (t0 > 1.0f) {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        } else {
                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                        }
                                    }
                                } else {
                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                            if (t0 > 1.0f) {
                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        } else {
                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                        }
                                    } else {
                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                    }
                                }
                            } else {
                                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                        if (t0 > 1.0f) {
                                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                                        } else {
                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                        }
                                    } else {
                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                    }
                                } else {
                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                }
                            }
                        }
                    } else {
                        t923 = *(short *)0xC179154;
                        if ((int)(unsigned short)t923 > (int)0xF800) {
                            t924 = *(short *)0xC179154;
                            if ((int)(unsigned short)t924 <= (int)0xFFFF) {
                                if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
                                    if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                                        if (t0 > (1.0f + 1.0f)) {
                                            *(unsigned int *)(((int)stk + 20)) = 0x2;
                                        } else {
                                            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                    if (t0 > 1.0f) {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                    }
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        }
                                    } else {
                                        if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                            if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                                if (t0 > 1.0f) {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        } else {
                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                        }
                                    }
                                } else {
                                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                                            if (t0 > 1.0f) {
                                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                                            }
                                        } else {
                                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                                        }
                                    } else {
                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                    }
                                }
                            } else {
                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                            }
                        } else {
                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                        }
                    }
                }
            } else {
                *(unsigned int *)(((int)stk + 20)) = 0x0;
            }
        }
    } else {
        if ((int)(unsigned short)(t3 - t2) > (int)0x1800) {
            if ((int)(unsigned short)(t3 - t2) < (int)0xE800) {
                if (t0 > (1.0f + 1.0f)) {
                    *(unsigned int *)(((int)stk + 20)) = 0x2;
                } else {
                    if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                        if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                            if (t0 > 1.0f) {
                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                            } else {
                                *(unsigned int *)(((int)stk + 20)) = 0x0;
                            }
                        } else {
                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                        }
                    } else {
                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                    }
                }
            } else {
                if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                    if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                        if (t0 > 1.0f) {
                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                        } else {
                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                        }
                    } else {
                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                    }
                } else {
                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                }
            }
        } else {
            if ((int)(unsigned short)(t3 - t2) > (int)0x1000) {
                if ((int)(unsigned short)(t3 - t2) < (int)0xF000) {
                    if (t0 > 1.0f) {
                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                    } else {
                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                    }
                } else {
                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                }
            } else {
                *(unsigned int *)(((int)stk + 20)) = 0x0;
            }
        }
    }
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    if ((int)0x0 < (int)0x4) {
        t963 = 0x0;
        t964 = a4;
        for (;;) {
            t965 = *(int *)((t964 + 0x0));
            if ((int)t965 < 0) {
                t966 = *(int *)(((int)stk + 4));
                t963 = 0xC1EE20C;
                *(unsigned int *)((0xC0EDA38 + (t966 << 2))) = 0x64;
                t967 = *(int *)((t963 + 0x0));
                if (t967 == 2) {
                    t968 = *(int *)((t963 + 0x0));
                    if (t968 == 2) {
                        t969 = *(int *)0xC1EE214;
                        if (t969 != 4) {
                            t970 = *(int *)0xC1EE214;
                            if (t970 != 5) {
                                t971 = *(int *)0xC1EE214;
                                if (t971 != 6) {
                                    t972 = *(int *)0xC1EE214;
                                    if (t972 != 7) {
                                        t973 = *(int *)0xC1EE214;
                                        if (t973 != 11) {
                                            t974 = *(int *)0xC1EE214;
                                            if (t974 != 12) {
                                                t975 = *(int *)0xC1EE214;
                                                if (t975 != 14) {
                                                    t976 = *(int *)(((int)stk + 16));
                                                    t963 = t976;
                                                    t963 = (t963 + 0x1);
                                                    *(unsigned int *)(((int)stk + 16)) = t963;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    t985 = *(int *)(((int)stk + 16));
                    t963 = t985;
                    t963 = (t963 + 0x1);
                    *(unsigned int *)(((int)stk + 16)) = t963;
                }
            } else {
                t988 = *(int *)((t964 + 0x0));
                t999 = 0x2;
                if (t988 != 3) {
                    t997 = 0x2;
                    if (t988 != 8) {
                        t995 = 0x2;
                        if (t988 != 9) {
                            t993 = 0x2;
                            if (t988 != 14) {
                                t989 = *(int *)((t964 + 0x0));
                                t991 = 0x0;
                                if (t989 == 5) {
                                    t990 = *(int *)(((int)stk + 12));
                                    t963 = t990;
                                    t963 = (t963 + 0x1);
                                    *(unsigned int *)(((int)stk + 12)) = t963;
                                    t991 = 0x3;
                                }
                                t993 = t991;
                            }
                            t995 = t993;
                        }
                        t997 = t995;
                    }
                    t999 = t997;
                }
                t1000 = *(int *)(((int)stk + 4));
                t1001 = *(int *)((t964 + 0x0));
                t963 = t1001;
                t1002 = *(int *)(((t1000 << 2) + 0xC0EDA48));
                if (t1002 != t963) {
                    if (t999 != 0) {
                        *(unsigned int *)((0xC0EDA38 + (t1000 << 2))) = 0x64;
                    }
                }
                t1007 = *(int *)(((int)stk + 4));
                t963 = t1007;
                if ((int)t963 < (int)0x2) {
                    u1008 = *(float *)0xC17924C;
                    u1011 = (u1008 + -0.599999964f);
                } else {
                    u1009 = *(float *)0xC179258;
                    u1011 = (u1009 + -0.399999976f);
                }
                t1012 = *(int *)(((int)stk + 20));
                t1015 = t999;
                u1016 = u1011;
                if (t1012 != 0) {
                    t1013 = t999;
                    u1014 = u1011;
                    if (t999 == 0) {
                        t1013 = 0x1;
                        u1014 = 1.0f;
                    }
                    t1015 = t1013;
                    u1016 = u1014;
                }
                if (!(u1016 > 0.0f)) {
                    if (t1015 != 0) {
                        if (t0 > 1.0f) {
                            t1017 = *(int *)((0xC0EDA38 + (t1000 << 2)));
                            *(unsigned int *)((0xC0EDA38 + (t1000 << 2))) = (t1017 + 0x1);
                        }
                    }
                } else {
                    t1022 = *(int *)((0xC0EDA38 + (t1000 << 2)));
                    *(unsigned int *)((0xC0EDA38 + (t1000 << 2))) = (t1022 + 0x1);
                }
                if (t1015 == 3) {
                    t1025 = *(int *)((0xC0EDA38 + (t1000 << 2)));
                    if ((int)t1025 > 0) {
                        if (t0 > 0.399999976f) {
                            t1026 = *(int *)(((int)stk + 8));
                            SetEffect((t964 + 0x5C), t1026, 0x3);
                            *(unsigned int *)((0xC0EDA38 + (t1000 << 2))) = 0x0;
                        }
                    }
                } else {
                    t1028 = *(int *)((0xC0EDA38 + (t1000 << 2)));
                    t963 = 0x5;
                    if ((int)t1028 > (int)t963) {
                        t1029 = *(int *)(((int)stk + 8));
                        SetEffect((t964 + 0x5C), t1029, t1015);
                        *(unsigned int *)((0xC0EDA38 + (t1000 << 2))) = 0x0;
                        t1031 = *(int *)((t964 + 0x0));
                        if (t1031 == 14) {
                            t1032 = *(int *)(((int)stk + 8));
                            FUN_0c036b5a((t964 + 0x5C), t1032);
                        }
                    }
                }
                t1037 = *(int *)((t964 + 0x0));
                *(unsigned int *)(((t1000 << 2) + 0xC0EDA48)) = t1037;
            }
            t963 = 0x84;
            t1040 = *(int *)(((int)stk + 4));
            t964 = (t964 + t963);
            t963 = 0x4;
            *(unsigned int *)(((int)stk + 4)) = (t1040 + 0x1);
            if ((int)(t1040 + 0x1) < (int)t963) continue;
            break;
        }
    }
    t1045 = *(int *)0xC179124;
    if (t1045 == 1) {
        t1046 = *(int *)(((int)stk + 16));
        if (t1046 == 4) {
            t1047 = *(int *)0xC27425C;
            *(unsigned int *)0xC27425C = (t1047 - 1);
            t1056 = t1046;
            if ((t1047 - 1) == 0) {
                t1048 = *(int *)0xC274260;
                t1052 = t1046;
                if (t1048 == 0) {
                    t1049 = *(int *)0xC274264;
                    t1050 = setTechnicalBonus(0x1, t1049);
                    *(unsigned int *)0xC27425C = 0x14;
                    t1051 = *(int *)0xC274264;
                    *(unsigned int *)0xC274264 = (t1051 + 0x1);
                    t1052 = t1050;
                }
                t1056 = t1052;
            }
            t1059 = *(int *)0xC1790EC;
            t1060 = t1056;
            if ((t1059 & 0x80007FFE) != 0) {
                *(unsigned int *)0xC274260 = 0x1;
                t1060 = 0xC274260;
            }
            t1072 = t1060;
        } else {
            *(unsigned int *)0xC27425C = 0x1E;
            *(unsigned int *)0xC274260 = 0x0;
            *(unsigned int *)0xC274264 = 0x1;
            t1061 = *(int *)(((int)stk + 20));
            if (t1061 == 2) {
                t1062 = *(int *)0xC274268;
                *(unsigned int *)0xC274268 = (t1062 - 1);
                t1066 = t1061;
                if ((t1062 - 1) == 0) {
                    t1063 = *(int *)0xC27426C;
                    t1064 = setTechnicalBonus(0x2, t1063);
                    *(unsigned int *)0xC274268 = 0xF;
                    t1065 = *(int *)0xC27426C;
                    *(unsigned int *)0xC27426C = (t1065 + 0x1);
                    t1066 = t1064;
                }
                t1069 = t1066;
            } else {
                *(unsigned int *)0xC274268 = 0x14;
                *(unsigned int *)0xC27426C = 0x1;
                t1069 = t1061;
            }
            t1072 = t1069;
        }
        t1075 = t1072;
    } else {
        *(unsigned int *)0xC27425C = 0x1E;
        *(unsigned int *)0xC274260 = 0x0;
        *(unsigned int *)0xC274268 = 0x1E;
        *(unsigned int *)0xC27426C = 0x1;
        *(unsigned int *)0xC274264 = 0x1;
        t1075 = t1045;
    }
    t1078 = *(int *)(((int)stk + 12));
    if (t1078 != 0) {
        t1079 = *(int *)0xC274270;
        if (t1079 == 0) {
            Sound_Request(0x20CA9, 0x0);
            t1081 = Sound_Request(0xCA9, 0x1);
            *(unsigned int *)0xC0EDAA8 = 0x1;
            t1120 = t1081;
        } else {
            t1082 = *(int *)(((int)stk + 12));
            if (t1082 == 0) {
                t1083 = *(int *)0xC274270;
                if (t1083 != 0) {
                    Sound_Request(0x30CA9, 0x0);
                    t1085 = Sound_Request(0x10CA9, 0x1);
                    *(unsigned int *)0xC0EDAA8 = 0x0;
                    t1102 = t1085;
                } else {
                    t1086 = *(int *)(((int)stk + 12));
                    t1101 = t1075;
                    if (t1086 != 0) {
                        t1087 = *(int *)0xC0EDAA8;
                        if (t1087 != 0) {
                            u1088 = *(float *)0xC037144;
                            if (u1088 > t0) {
                                Sound_Request(0x30CA9, 0x0);
                                t1090 = Sound_Request(0x40CA9, 0x0);
                                *(unsigned int *)0xC0EDAA8 = 0x0;
                                t1095 = t1090;
                            } else {
                                t1094 = 0xC037144;
                                if (t1087 == 0) {
                                    u1091 = *(float *)0xC037144;
                                    t1093 = 0xC037144;
                                    if (t0 > u1091) {
                                        t1092 = Sound_Request(0x20CA9, 0x0);
                                        *(unsigned int *)0xC0EDAA8 = 0x1;
                                        t1093 = t1092;
                                    }
                                    t1094 = t1093;
                                }
                                t1095 = t1094;
                            }
                            t1100 = t1095;
                        } else {
                            t1099 = t1075;
                            if (t1087 == 0) {
                                u1096 = *(float *)0xC037144;
                                t1098 = 0xC037144;
                                if (t0 > u1096) {
                                    t1097 = Sound_Request(0x20CA9, 0x0);
                                    *(unsigned int *)0xC0EDAA8 = 0x1;
                                    t1098 = t1097;
                                }
                                t1099 = t1098;
                            }
                            t1100 = t1099;
                        }
                        t1101 = t1100;
                    }
                    t1102 = t1101;
                }
                t1119 = t1102;
            } else {
                t1103 = *(int *)(((int)stk + 12));
                t1118 = t1075;
                if (t1103 != 0) {
                    t1104 = *(int *)0xC0EDAA8;
                    if (t1104 != 0) {
                        u1105 = *(float *)0xC037144;
                        if (u1105 > t0) {
                            Sound_Request(0x30CA9, 0x0);
                            t1107 = Sound_Request(0x40CA9, 0x0);
                            *(unsigned int *)0xC0EDAA8 = 0x0;
                            t1112 = t1107;
                        } else {
                            t1111 = 0xC037144;
                            if (t1104 == 0) {
                                u1108 = *(float *)0xC037144;
                                t1110 = 0xC037144;
                                if (t0 > u1108) {
                                    t1109 = Sound_Request(0x20CA9, 0x0);
                                    *(unsigned int *)0xC0EDAA8 = 0x1;
                                    t1110 = t1109;
                                }
                                t1111 = t1110;
                            }
                            t1112 = t1111;
                        }
                        t1117 = t1112;
                    } else {
                        t1116 = t1075;
                        if (t1104 == 0) {
                            u1113 = *(float *)0xC037144;
                            t1115 = 0xC037144;
                            if (t0 > u1113) {
                                t1114 = Sound_Request(0x20CA9, 0x0);
                                *(unsigned int *)0xC0EDAA8 = 0x1;
                                t1115 = t1114;
                            }
                            t1116 = t1115;
                        }
                        t1117 = t1116;
                    }
                    t1118 = t1117;
                }
                t1119 = t1118;
            }
            t1120 = t1119;
        }
        t1159 = t1120;
    } else {
        t1121 = *(int *)(((int)stk + 12));
        if (t1121 == 0) {
            t1122 = *(int *)0xC274270;
            if (t1122 != 0) {
                Sound_Request(0x30CA9, 0x0);
                t1124 = Sound_Request(0x10CA9, 0x1);
                *(unsigned int *)0xC0EDAA8 = 0x0;
                t1141 = t1124;
            } else {
                t1125 = *(int *)(((int)stk + 12));
                t1140 = t1075;
                if (t1125 != 0) {
                    t1126 = *(int *)0xC0EDAA8;
                    if (t1126 != 0) {
                        u1127 = *(float *)0xC037144;
                        if (u1127 > t0) {
                            Sound_Request(0x30CA9, 0x0);
                            t1129 = Sound_Request(0x40CA9, 0x0);
                            *(unsigned int *)0xC0EDAA8 = 0x0;
                            t1134 = t1129;
                        } else {
                            t1133 = 0xC037144;
                            if (t1126 == 0) {
                                u1130 = *(float *)0xC037144;
                                t1132 = 0xC037144;
                                if (t0 > u1130) {
                                    t1131 = Sound_Request(0x20CA9, 0x0);
                                    *(unsigned int *)0xC0EDAA8 = 0x1;
                                    t1132 = t1131;
                                }
                                t1133 = t1132;
                            }
                            t1134 = t1133;
                        }
                        t1139 = t1134;
                    } else {
                        t1138 = t1075;
                        if (t1126 == 0) {
                            u1135 = *(float *)0xC037144;
                            t1137 = 0xC037144;
                            if (t0 > u1135) {
                                t1136 = Sound_Request(0x20CA9, 0x0);
                                *(unsigned int *)0xC0EDAA8 = 0x1;
                                t1137 = t1136;
                            }
                            t1138 = t1137;
                        }
                        t1139 = t1138;
                    }
                    t1140 = t1139;
                }
                t1141 = t1140;
            }
            t1158 = t1141;
        } else {
            t1142 = *(int *)(((int)stk + 12));
            t1157 = t1075;
            if (t1142 != 0) {
                t1143 = *(int *)0xC0EDAA8;
                if (t1143 != 0) {
                    u1144 = *(float *)0xC037144;
                    if (u1144 > t0) {
                        Sound_Request(0x30CA9, 0x0);
                        t1146 = Sound_Request(0x40CA9, 0x0);
                        *(unsigned int *)0xC0EDAA8 = 0x0;
                        t1151 = t1146;
                    } else {
                        t1150 = 0xC037144;
                        if (t1143 == 0) {
                            u1147 = *(float *)0xC037144;
                            t1149 = 0xC037144;
                            if (t0 > u1147) {
                                t1148 = Sound_Request(0x20CA9, 0x0);
                                *(unsigned int *)0xC0EDAA8 = 0x1;
                                t1149 = t1148;
                            }
                            t1150 = t1149;
                        }
                        t1151 = t1150;
                    }
                    t1156 = t1151;
                } else {
                    t1155 = t1075;
                    if (t1143 == 0) {
                        u1152 = *(float *)0xC037144;
                        t1154 = 0xC037144;
                        if (t0 > u1152) {
                            t1153 = Sound_Request(0x20CA9, 0x0);
                            *(unsigned int *)0xC0EDAA8 = 0x1;
                            t1154 = t1153;
                        }
                        t1155 = t1154;
                    }
                    t1156 = t1155;
                }
                t1157 = t1156;
            }
            t1158 = t1157;
        }
        t1159 = t1158;
    }
    t1160 = *(int *)(((int)stk + 12));
    *(unsigned int *)0xC274270 = t1160;
    t1161 = *(int *)0xC0EDA5C;
    t1162 = *(int *)0xC0EDA58;
    if (t1161 != 0) {
        t1164 = t1159;
        if (t1162 == 0) {
            t1163 = *(int *)0xC0EDA5C;
            *(unsigned int *)0xC0EDA5C = (t1163 - 1);
            t1164 = (t1163 - 1);
        }
        t1169 = t1164;
    } else {
        t1168 = t1159;
        if (t1162 != 0) {
            *(unsigned int *)0xC0EDA5C = 0x6;
            t1165 = nlRand();
            t1166 = *(int *)((0xC0EDAAC + ((t1165 & 0x7) << 2)));
            t1167 = Sound_Request(t1166, 0x0);
            t1168 = t1167;
        }
        t1169 = t1168;
    }
    t1170 = *(int *)0xC0EDA64;
    t1171 = *(int *)0xC0EDA60;
    if (t1170 != 0) {
        if (t1171 == 0) {
            t1172 = *(int *)0xC0EDA64;
            *(unsigned int *)0xC0EDA64 = (t1172 - 1);
        }
        t1179 = t1169;
    } else {
        t1178 = t1169;
        if (t1171 != 0) {
            t1173 = *(int *)0xC0EDA5C;
            t1177 = 0xC0EDA5C;
            if (t1173 == 0) {
                *(unsigned int *)0xC0EDA64 = 0x6;
                t1174 = nlRand();
                t1175 = *(int *)((0xC0EDACC + ((t1174 & 0x7) << 2)));
                t1176 = Sound_Request(t1175, 0x0);
                t1177 = t1176;
            }
            t1178 = t1177;
        }
        t1179 = t1178;
    }
    *(unsigned int *)0xC0EDA60 = 0x0;
    *(unsigned int *)0xC0EDA58 = 0x0;
    return t1179;
}

