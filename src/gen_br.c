/* Straight-line functions with calls and guards (batch gen_br): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetBubble(int, int);
int ReturnBreakPin(int);
int nd_SprPut(int, int, float, float);
int Start_Bowling_Message(void);
int ndPuru2Check(void);
int Start_CrazyBox_Voice(int);
int nlSetPaletteMap(int, int);
int nlSetPaletteData(int, int, int);
int nlsndSeqRequest(void);
int nlObjPutLoadTextureCallBack(void);
int syCacheOCWB(int, int);
int syCachePurgeAll(void);
int kmytex_FBAllocEntry(void);
int kmytex_FBFreeEntry(int);
int kmytex_FBEnQueueTop(int, int, int);
int vmsfs_memcpyl(int, int, int);
int syIntAdrChk_dumpline(int, int);
int syIntAdrChk_init(void);
int syIntAdrChk_getchar(void);
int syIntAdrChk_finish(void);
int syIntAdrChk_prints(int);
int syIntAdrChk_printh(int);
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
void sys_init(void);
void syChainInit(void);
void syCacheInit_P2_(int a4);
int nlsndStreamChgFilter(int a4, int a5, int a6);
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
int kmiErrorRecover(int a4);
int mwlRnaStartTrans(int a4);
int mpdrv_init_ex(int a4, int a5, int a6, int a7);
int Put_Bowling_Pins(void);
int nlsndStreamInit(int a4, int a5, int a6);
int syIntChkDump(int a4, int a5);
int nlObjPutLoadTextureOnce_Sub(int a4, int a5, int a6, int a7, int a8);
int adxb_DecodeInfoAiffSub(int a4, int a5, int a6, int a7, int a8);
int kmiVQallocFB(int a4, int a5, int a6, int a7, int a8, int a9);
int nd_Exec_Puru2(int a4);
int ExecEffect(int a4, int a5);

void sys_init(void)
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

void syCacheInit_P2_(int a4)
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
    syCachePurgeAll();
    t2 = *(int *)(((int)stk + 4));
    *(unsigned int *)0xFF00001C = t2;
    t3 = *(int *)0xFF00001C;
    *(unsigned int *)0xFF00001C = ((t3 & 0xFFFFF7FF) | 0x800);
    t4 = *(int *)0xFF00001C;
    *(unsigned int *)0xFF00001C = ((t4 & 0xFFFFFFF7) | 0x8);
    t5 = *(short *)(((int)stk + 8));
    _builtin_set_imask(((unsigned int)(((t5 & 0xF) << 2) << 2) >> 4));
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
            vmsfs_memcpyl(t5, (t21 + 0xC), t23);
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

int kmiErrorRecover(int a4)
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










