extern int crowdTask();
/* Straight-line functions with calls and guards (batch gen_ar): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Chat_Choin(void);
void nlSetBackColor(int, int, int);
int nlSetWindowSize(float, float, float, float);
int nlsndBlockMove(int, int, int);
int nlsndBlockMoveStatus(void);
int nlsndPackFreeInit(int, int, int);
int nlsndSeqRequest(void);
int nlsndStreamChgPan(int, int, int);
int kmytex_FBAllocEntry(void);
int kmytex_FBEnQueueTop(int, int, int);
int SJMEM_Lock(void);
int GetCollision2D(int, float);
int SJMEM_Unlock(int, int);
int SJRBF_Lock(void);
int SJRBF_Unlock(int, int);
int SJUNI_Lock(void);
int SJUNI_Unlock(int, int);
int SJ_SplitChunk(int, int, int);
int TrainCarInit(int, int, int);
int buIsFormat(void);
int check_cache(int);
int check_caps(int);
int check_fat_all(int);
int check_fat_xross(int, int);
int check_file_correct(int);
int check_isopen(void);
int clear_file(int, int);
int close_file_handle(void);
int cmp_fname(int, int);
int direntry(int, int);
int direntry_dirty(int, int);
int get_fat(int, int);
int get_vmstime(int, int);
int kmFreeTexture(int);
int kmSetDisplayMode(int, int, int, int);
int kmSetPALEXTCallback(int);
int kmSetSystemConfiguration(int);
int kmStopDisplayFrameBuffer(void);
int kmiDMAtoTARequest(int, int, int, int, int);
int kmiWriteRegister(int, int);
int kmytex_FBDeQueueEntry(int, int, int);
int nlCloseEvent(int);
int nlCommonTextureClearTextureIndex(int);
int nlFreePalette(int);
int nlMalloc(int);
int nlSpriteClearSpriteIndex(int);
int nlsndCheckPackFreeError(int);
int nlsndStreamSetHdPan(int, int, int);
int open_file_handle(void);
int psgEnterState3(int);
int search_dir(int, int, int);
int search_dir_by_startfat(int, int);
int search_exec_file(int);
int search_fat(int, int);
int search_fat_free(int, int);
int search_fat_used(int);
int search_free_dir(int);
int set_event(int, int);
int set_fat(int, int);
int set_file_info(int, int);
int set_vmstime(int, int);
int vmsfs_c_progress(int);
int vmsfs_diskfree(int, int);
int vmsfs_fclose(int, int);
int vmsfs_fcreate(int, int, int, int);
int vmsfs_fgetsize(int, int);
int vmsfs_fwrite1(int, int);
int vmsfs_mediainfo_retry(int, int);
int vmsfs_mount2(int);
int vmsfs_read_retry(int, int, int);
int vmsfs_save_exec_file_verify(int, int, int, int, int, int);
int vmsfs_save_file_verify(int, int, int, int, int, int);
int vmsfs_unmount(int);
int vmsfs_write_retry(int, int, int);
int vmsfs_xcreate(int, int, int, int);
int vmsfs_xfind(int, int);
int vmsfs_xwrite1(int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int);
int write_fat(int);
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o26_short { char p[0x26]; short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o28_ushort { char p[0x28]; unsigned short v; };
struct o2A_short { char p[0x2A]; short v; };
struct o2A_ushort { char p[0x2A]; unsigned short v; };
struct o2C_ushort { char p[0x2C]; unsigned short v; };
struct o2E_ushort { char p[0x2E]; unsigned short v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };





void getReplayPoint(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int stk[5];
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    t0 = *(int *)0xC2A62A4;
    t1 = *(int *)0xC2A1B28;
    t2 = *(int *)((((((t0 << 1) + t0) << 2) + t1) + 0x8));
    R1012 = t2;
    t3 = *(int *)((((((t0 << 1) + t0) << 2) + t1) + 0x4));
    R1008 = t3;
    t4 = *(int *)((((((t0 << 1) + t0) << 2) + t1) + 0x0));
    R1004 = t4;
    t5 = R1012;
    *(unsigned int *)((a8 + 0x8)) = t5;
    t6 = R1008;
    *(unsigned int *)((a8 + 0x4)) = t6;
    t7 = R1004;
    *(unsigned int *)((a8 + 0x0)) = t7;
}





int nlSpriteFreeTextureOnce_Sub(int a4, int a5, int a6, int a7)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t66;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t15;
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
    int t32;
    int t40;
    int t41;
    int t42;
    int t43;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t57;

    t1 = a6;
    if (a7 == 1) {
        t1 = *(int *)(((a4 + ((a6 << 2) << 2)) + 0xC));
    }
    t2 = *(int *)0xC2B3184;
    t3 = *(int *)0xC2AEC84;
    t4 = *(int *)(((t3 + (((t1 + t2) << 2) << 1)) + 0x0));
    t66 = 0x0;
    if ((unsigned int)t4 > (unsigned int)0x0) {
        t5 = *(int *)0xC2AEC84;
        t6 = *(int *)(((t5 + (((t1 + t2) << 2) << 1)) + 0x0));
        *(unsigned int *)(((t5 + (((t1 + t2) << 2) << 1)) + 0x0)) = (t6 - 1);
        t7 = *(int *)0xC2AEC84;
        t8 = *(int *)(((t7 + (((t1 + t2) << 2) << 1)) + 0x0));
        t66 = 0x0;
        if (t8 == 0) {
            t9 = *(int *)0xC2AEC84;
            t10 = *(int *)(((t9 + (((t1 + t2) << 2) << 1)) + 0x4));
            t11 = *(int *)0xC2B29C0;
            t12 = *(int *)(((t11 + (t10 * 0x3C)) + 0x28));
            if (t12 == 0) {
                t13 = *(int *)0xC2B29C0;
                t66 = kmFreeTexture((t13 + (t10 * 0x3C)));
                if (t66 != 0) {
                    (((struct o0_uint *)0xC2B76B4)->v) = 0x2;
                } else {
                    t15 = *(int *)0xC2B29C0;
                    *(unsigned int *)(((t15 + (t10 * 0x3C)) + 0x2C)) = 0x0;
                    t16 = *(int *)0xC2B29C0;
                    *(unsigned int *)(((t16 + (t10 * 0x3C)) + 0x38)) = 0xFFFFFFFF;
                    t17 = (((struct o4_int *)0xC2B76B4)->v);
                    t18 = *(short *)((((t1 + t2) << 1) + t17));
                    nlCommonTextureClearTextureIndex(t10);
                    nlSpriteClearSpriteIndex(t18);
                    t21 = *(int *)0xC2AEC84;
                    *(unsigned int *)(((t21 + (((t1 + t2) << 2) << 1)) + 0x4)) = 0xFFFFFFFF;
                    t22 = (((struct o4_int *)0xC2B76B4)->v);
                    *(unsigned short *)((t22 + ((t1 + t2) << 1))) = 0xFFFFFFFF;
                    t23 = *(int *)0xC14A644;
                    if (t23 == 0) {
                        t24 = (((struct o14_int *)0xC2B76B4)->v);
                        t25 = *(int *)((((((t18 << 2) << 2) << 1) + t24) + 0xC));
                        t26 = *(int *)0xC2B3568;
                        t27 = *(short *)((((((t18 << 2) << 2) << 1) + t24) + 0x16));
                        if (t26 != 0) {
                            if ((0x7 & ((unsigned int)t25 >> 27)) != 5) {
                                if ((0x7 & ((unsigned int)t25 >> 27)) == 6) {
                                    t28 = *(short *)0xC2B7BC4;
                                    if ((int)(unsigned short)t27 < (int)t28) {
                                        nlFreePalette((unsigned short)t27);
                                    }
                                }
                            } else {
                                t32 = *(short *)0xC2B7BC4;
                                if ((int)(unsigned short)t27 < (int)t32) {
                                    nlFreePalette((unsigned short)t27);
                                }
                            }
                        }
                    }
                    t66 = 0x0;
                }
            } else {
                t40 = *(int *)0xC2B29C0;
                *(unsigned int *)(((t40 + (t10 * 0x3C)) + 0x2C)) = 0x0;
                t41 = *(int *)0xC2B29C0;
                *(unsigned int *)(((t41 + (t10 * 0x3C)) + 0x38)) = 0xFFFFFFFF;
                t42 = (((struct o4_int *)0xC2B76B4)->v);
                t43 = *(short *)((((t1 + t2) << 1) + t42));
                nlCommonTextureClearTextureIndex(t10);
                nlSpriteClearSpriteIndex(t43);
                t46 = *(int *)0xC2AEC84;
                *(unsigned int *)(((t46 + (((t1 + t2) << 2) << 1)) + 0x4)) = 0xFFFFFFFF;
                t47 = (((struct o4_int *)0xC2B76B4)->v);
                *(unsigned short *)((t47 + ((t1 + t2) << 1))) = 0xFFFFFFFF;
                t48 = *(int *)0xC14A644;
                if (t48 == 0) {
                    t49 = (((struct o14_int *)0xC2B76B4)->v);
                    t50 = *(int *)((((((t43 << 2) << 2) << 1) + t49) + 0xC));
                    t51 = *(int *)0xC2B3568;
                    t52 = *(short *)((((((t43 << 2) << 2) << 1) + t49) + 0x16));
                    if (t51 != 0) {
                        if ((0x7 & ((unsigned int)t50 >> 27)) != 5) {
                            if ((0x7 & ((unsigned int)t50 >> 27)) == 6) {
                                t53 = *(short *)0xC2B7BC4;
                                if ((int)(unsigned short)t52 < (int)t53) {
                                    nlFreePalette((unsigned short)t52);
                                }
                            }
                        } else {
                            t57 = *(short *)0xC2B7BC4;
                            if ((int)(unsigned short)t52 < (int)t57) {
                                nlFreePalette((unsigned short)t52);
                            }
                        }
                    }
                }
                t66 = 0x0;
            }
        }
    }
    return t66;
}

int nlsndPackFreeInit(int a4, int a5, int a6)
{
    int t0;
    int t13;
    int t14;
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

    t0 = *(int *)0xC2B76F4;
    *(unsigned int *)0xC2B76F4 = (t0 - a5);
    *(unsigned int *)((((((a4 << 1) + a4) << 2) + 0xC2B77DC) + 0x0)) = 0xFFFFFFFF;
    *(unsigned int *)((((a4 << 2) + 0xA0800060) + 0x0)) = 0xFFFFFFFF;
    t13 = 0x0;
    t14 = 0x0;
    if ((unsigned int)(((((a4 + 0x1) << 1) + (a4 + 0x1)) << 2) + 0xC2B77DC) < (unsigned int)0xC2B783C) {
        t1 = (((((a4 + 0x1) << 1) + (a4 + 0x1)) << 2) + 0xC2B77DC);
        t2 = 0xA0800060;
        t3 = (a4 + 0x1);
        t4 = (((((a4 + 0x1) << 1) + (a4 + 0x1)) << 2) + 0xC2B77DC);
        t5 = (((((a4 + 0x1) << 1) + (a4 + 0x1)) << 2) + 0xC2B77DC);
        t6 = 0x0;
        t7 = 0x0;
        do {
            t8 = *(int *)((t4 + 0x0));
            if (t8 != -1) {
                t9 = *(int *)((t5 + 0x8));
                t2 = t9;
                if (t7 == 0) {
                    t10 = *(int *)((t1 + 0x4));
                    t7 = t10;
                }
                t11 = *(int *)((t5 + 0x4));
                t3 = t11;
                t6 = (t6 + t2);
                t3 = (t3 - a5);
                *(unsigned int *)((t5 + 0x4)) = t3;
            }
            t4 = (t4 + 0xC);
            t5 = (t5 + 0xC);
            t1 = (t1 + 0xC);
        } while ((unsigned int)t4 < (unsigned int)0xC2B783C);
        t13 = t6;
        t14 = t7;
    }
    *(unsigned int *)((a6 + 0x0)) = t13;
    return t14;
}

int nlsndPackFree(int a4)
{
    int t0;
    int t13;
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
    int stk[9];

    t0 = nlsndCheckPackFreeError(a4);
    t13 = t0;
    if (t0 == 0) {
        t1 = *(int *)(((((a4 << 1) + a4) << 2) + 0xC2B77E4));
        t2 = nlsndPackFreeInit(a4, t1, ((int)stk + 4));
        t3 = 0x0;
        for (;;) {
            t4 = nlsndSeqRequest();
            if (t4 != 0) {
                t3 = (t3 + 0x1);
                if ((int)t3 >= (int)0x400000) break;
                continue;
            }
            t3 = 0xA08000B4;
            t5 = 0x0;
            for (;;) {
                t6 = *(int *)((t3 + 0x0));
                if (t6 == 0) {
                    t5 = (t5 + 0x1);
                    if ((int)t5 >= (int)0x400000) break;
                    continue;
                }
                if (t2 != 0) {
                    t7 = *(int *)(((int)stk + 4));
                    t5 = t2;
                    t8 = nlsndBlockMove(t5, (t2 - t1), t7);
                    t5 = t8;
                    if (t8 != 0) {
                        return t5;
                    }
                    t9 = 0x0;
                    for (;;) {
                        t10 = nlsndBlockMoveStatus();
                        if (t10 != 0) {
                            t9 = (t9 + 0x1);
                            if ((int)t9 >= (int)0x1000000) break;
                            continue;
                        }
                        *(unsigned int *)0xA08000B0 = 0x1;
                        t5 = 0x0;
                        if (0x1 != 0) {
                            for (;;) {
                                t11 = *(int *)((t3 + 0x0));
                                if (t11 != 0) {
                                    t5 = (t5 + 0x1);
                                    if ((int)t5 >= (int)0x400000) break;
                                    continue;
                                }
                                *(unsigned int *)0xA08000B0 = 0x0;
                                return 0x0;
                            }
                            return 0xFFFFFF00;
                        }
                        return 0xFFFFFF00;
                    }
                    return 0xFFFFFF00;
                }
                *(unsigned int *)0xA08000B0 = 0x1;
                t5 = 0x0;
                if (0x1 != 0) {
                    for (;;) {
                        t12 = *(int *)((t3 + 0x0));
                        if (t12 != 0) {
                            t5 = (t5 + 0x1);
                            if ((int)t5 >= (int)0x400000) break;
                            continue;
                        }
                        *(unsigned int *)0xA08000B0 = 0x0;
                        return 0x0;
                    }
                    return 0xFFFFFF00;
                }
                return 0xFFFFFF00;
            }
            return 0xFFFFFF00;
        }
        t13 = 0xFFFFFF00;
    }
    return t13;
}

int nlsndStreamSetHdInfo(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = *(signed char *)((((((((short)a4 << 1) + (short)a4) << 2) << 1) + 0xC2B771C) + 0x0));
    if (t0 == 1) {
        t1 = *(signed char *)((((((((short)a4 << 1) + (short)a4) << 2) << 1) + 0xC2B771C) + 0x1));
        if (t1 == 0) {
            t2 = ((((((((short)a4 << 1) + (short)a4) << 2) << 2) << 1) + 0xA0800100) + 0x20);
            t3 = a5;
            t4 = 0x0;
            do {
                t5 = *(int *)((t3 + 0x0));
                t3 = (t3 + 0x4);
                *(unsigned int *)((t2 + 0x0)) = t5;
                t4 = (t4 + 0x1);
                t2 = (t2 + 0x4);
            } while ((unsigned int)(short)t4 < (unsigned int)0x10);
            t6 = (((struct o2A_short *)(a5))->v);
            *(unsigned int *)((((((((short)a4 << 1) + (short)a4) << 2) << 1) + 0xC2B771C) + 0xC)) = (unsigned short)t6;
            t7 = *(signed char *)((a5 + 0x8));
            if ((short)(unsigned char)t7 != 0) {
                if ((short)(unsigned char)t7 != 1) {
                    if ((short)(unsigned char)t7 != 2) {
                        if ((short)(unsigned char)t7 != 3) {
                            return (short)(unsigned char)t7;
                        }
                        *(unsigned short *)((((((((short)a4 << 1) + (short)a4) << 2) << 1) + 0xC2B771C) + 0x2)) = 0x4;
                        return 0x4;
                    }
                    *(unsigned short *)((((((((short)a4 << 1) + (short)a4) << 2) << 1) + 0xC2B771C) + 0x2)) = 0x4;
                    return 0x4;
                }
                *(unsigned short *)((((((((short)a4 << 1) + (short)a4) << 2) << 1) + 0xC2B771C) + 0x2)) = 0x8;
                return 0x8;
            }
            *(unsigned short *)((((((((short)a4 << 1) + (short)a4) << 2) << 1) + 0xC2B771C) + 0x2)) = 0x10;
            return 0x10;
        }
        return t1;
    }
    return t0;
}

int nlsndStreamGetBufInfo(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;

    t0 = *(signed char *)(((((((short)a4 << 1) + (short)a4) << 2) << 1) + 0xC2B771C));
    if (t0 != 1) {
        return 0x0;
    }
    t1 = *(int *)0xC2B76F8;
    *(unsigned int *)((a6 + 0x0)) = t1;
    t2 = *(int *)(((0xC2B7720 + (((((short)a4 << 1) + (short)a4) << 2) << 1)) + ((short)a5 << 2)));
    return t2;
}

int nlsndStreamStop(int a4)
{
    int t0;
    int t19;
    int t1;
    int t17;
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

    t0 = *(signed char *)((0xC2B771C + (((((short)a4 << 1) + (short)a4) << 2) << 1)));
    t19 = t0;
    if (t0 == 1) {
        t1 = *(signed char *)((((((((short)a4 << 1) + (short)a4) << 2) << 1) + 0xC2B771C) + 0x1));
        t17 = t1;
        if (t1 != 0) {
            t2 = *(int *)((((((((short)a4 << 1) + (short)a4) << 2) << 1) + 0xC2B771C) + 0x14));
            t3 = 0x0;
            for (;;) {
                t4 = *(int *)((t2 + 0x0));
                if (t4 == 0) {
                    t3 = (t3 + 0x1);
                    if ((unsigned int)t3 >= (unsigned int)0x40000) break;
                    continue;
                }
                t5 = *(int *)((t2 + 0x0));
                t6 = *(int *)(((t5 | 0xA0000000) + 0x0));
                t3 = t6;
                t3 = (t3 & 0x7FF);
                *(unsigned int *)(((t5 | 0xA0000000) + 0x0)) = t3;
                t7 = *(int *)(((((((((short)a4 << 1) + (short)a4) << 2) << 2) << 1) + 0xA0800128) + 0x0));
                if ((t7 & 0x300) == 0x100) {
                    t8 = *(int *)((((((((short)a4 << 1) + (short)a4) << 2) << 1) + 0xC2B771C) + 0x14));
                    t9 = 0x0;
                    for (;;) {
                        t10 = *(int *)(((t8 + 0x4) + 0x0));
                        if (t10 == 0) {
                            t9 = (t9 + 0x1);
                            if ((unsigned int)t9 >= (unsigned int)0x40000) break;
                            continue;
                        }
                        t11 = *(int *)(((t8 + 0x4) + 0x0));
                        t12 = *(int *)(((t11 | 0xA0000000) + 0x0));
                        t9 = t12;
                        t9 = (t9 & 0x7FF);
                        *(unsigned int *)(((t11 | 0xA0000000) + 0x0)) = t9;
                        t3 = (t3 | 0x8000);
                        *(unsigned int *)(((t5 | 0xA0000000) + 0x0)) = t3;
                        nlsndSeqRequest();
                        *(unsigned char *)((((((((short)a4 << 1) + (short)a4) << 2) << 1) + 0xC2B771C) + 0x1)) = 0x0;
                        return 0x0;
                    }
                    nlsndSeqRequest();
                    *(unsigned char *)((((((((short)a4 << 1) + (short)a4) << 2) << 1) + 0xC2B771C) + 0x1)) = 0x0;
                    return 0x0;
                }
                t3 = (t3 | 0x8000);
                *(unsigned int *)(((t5 | 0xA0000000) + 0x0)) = t3;
                nlsndSeqRequest();
                *(unsigned char *)((((((((short)a4 << 1) + (short)a4) << 2) << 1) + 0xC2B771C) + 0x1)) = 0x0;
                return 0x0;
            }
            nlsndSeqRequest();
            *(unsigned char *)((((((((short)a4 << 1) + (short)a4) << 2) << 1) + 0xC2B771C) + 0x1)) = 0x0;
            t17 = 0x0;
        }
        t19 = t17;
    }
    return t19;
}

void kmFlushVertexBuffer(int a4)
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
    int stk[8];

    t0 = *(int *)0xC2B8CBC;
    t1 = *(int *)(((a4 << 2) + t0));
    t2 = *(int *)(((a4 << 2) + 0xC2B8D08));
    t3 = (t1 - t2);
    if ((int)(t1 - t2) < 0) {
        t3 = ((t1 - t2) + 0x3);
    }
    do {
        t4 = *(int *)((((a4 << 2) + 0xC2B8D08) + 0x0));
        t5 = kmiDMAtoTARequest(0x10000000, t4, (((t3 >> 1) >> 1) << 2), 0x10, ((int)stk + 0));
    } while (t5 == 0x100);
    t6 = *(int *)(((a4 << 2) + 0xC2B8D28));
    t7 = *(int *)0xC2B8CBC;
    t8 = *(int *)(((a4 << 2) + 0xC2B8D08));
    *(unsigned int *)(((t7 + (a4 << 2)) + 0x0)) = ((t6 << 2) + t8);
    t9 = *(int *)(((int)stk + 0));
    t10 = *(int *)((t9 + 0x0));
    *(unsigned int *)0xC2EAAA8 = t10;
}

void adxf_SetCmdHstry(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;

    t0 = *(int *)0xC2BB35C;
    t1 = ((~(((~t0) + 0x1) & 0xFF)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0xFF);
    }
    *(unsigned int *)0xC2BB35C = t1;
    if (a5 == 0) {
        t2 = *(short *)(((a4 << 1) + 0xC2BB33C));
        *(unsigned short *)(((a4 << 1) + 0xC2BB33C)) = (t2 + 0x1);
    }
    *(unsigned char *)(((((t1 << 2) << 2) + 0xC2BA33C) + 0x0)) = a4;
    *(unsigned char *)(((((t1 << 2) << 2) + 0xC2BA33C) + 0x1)) = a5;
    t4 = *(short *)(((a4 << 1) + 0xC2BB33C));
    *(unsigned short *)(((0x2 + (((t1 << 2) << 2) + 0xC2BA33C)) + 0x0)) = t4;
    *(unsigned int *)(((((t1 << 2) << 2) + 0xC2BA33C) + 0x4)) = a6;
    *(unsigned int *)(((((t1 << 2) << 2) + 0xC2BA33C) + 0x8)) = a7;
    *(unsigned int *)(((((t1 << 2) << 2) + 0xC2BA33C) + 0xC)) = a8;
    t5 = *(int *)0xC2BB35C;
    *(unsigned int *)0xC2BB35C = (t5 + 0x1);
}

void kmiFBSearchFree(int a4, int a5, int a6)
{
    int t12;
    int t3;
    int t4;
    int t5;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;

    t4 = *(int *)((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FC4));
    t12 = 0x0;
    if (t4 != 0) {
        t12 = 0x0;
        t3 = (short)a4;
        do {
            t5 = *(int *)((t4 + 0xC));
            if ((int)t5 <= (int)a5) {
                t3 = *(int *)((t4 + 0x10));
                t3 = (t3 + t5);
                if ((int)t3 > (int)a5) {
                    if ((int)t5 <= (int)(a5 + a6)) {
                        t7 = *(int *)((t4 + 0x10));
                        if ((int)(t7 + t5) >= (int)(a5 + a6)) {
                            t12 = t4;
                            t4 = 0x0;
                        } else {
                            t8 = *(int *)((t4 + 0x8));
                            t4 = t8;
                        }
                    } else {
                        t9 = *(int *)((t4 + 0x8));
                        t4 = t9;
                    }
                } else {
                    t10 = *(int *)((t4 + 0x8));
                    t4 = t10;
                }
            } else {
                t11 = *(int *)((t4 + 0x8));
                t4 = t11;
            }
        } while (t4 != 0);
    }
    if (t12 == 0) {
        return;
    }
}

int kmytex_TXalloc(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t7;
    int t3;
    int t5;
    int t6;
    int t38;
    int t9;
    int t12;
    int t13;
    int t14;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t24;
    int t25;
    int t26;
    int t28;
    int t29;
    int t30;
    int t15;
    int t27;

    t0 = ((~(((~a5) + 0x1) & 0x1F)) + 0x1);
    if ((int)a5 >= 0) {
        t0 = (a5 & 0x1F);
    }
    t1 = a5;
    if (t0 != 0) {
        t1 = (a5 + (0x20 - t0));
    }
    t3 = *(int *)(((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC) + 0x8));
    t7 = 0x0;
    if (t3 != 0) {
        t7 = 0x0;
        do {
            t5 = *(int *)((t3 + 0x10));
            if ((int)t5 >= (int)t1) {
                t7 = t3;
                t3 = 0x0;
            } else {
                t6 = *(int *)((t3 + 0x8));
                t3 = t6;
            }
        } while (t3 != 0);
    }
    t38 = 0x3;
    if (t7 != 0) {
        t9 = *(int *)((t7 + 0x10));
        if (t9 == t1) {
            kmytex_FBDeQueueEntry(((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC) + 0x8), ((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC) + 0xC), t7);
            kmytex_FBEnQueueTop((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC), ((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC) + 0x4), t7);
            t12 = *(int *)((t7 + 0xC));
            *(unsigned int *)((a6 + 0x1C)) = t12;
            *(unsigned int *)((t7 + 0x14)) = a6;
            *(unsigned short *)((t7 + 0x0)) = 0x1;
            if ((short)a4 == 0) {
                t13 = *(short *)((t7 + 0x0));
                t15 = (t13 | 0x20);
            } else {
                t14 = *(short *)((t7 + 0x0));
                t15 = (t14 | 0x40);
            }
            *(unsigned short *)((t7 + 0x0)) = t15;
            t16 = *(short *)((t7 + 0x0));
            *(unsigned short *)((t7 + 0x0)) = (t16 | 0x4);
            t17 = *(int *)((t7 + 0x10));
            t18 = *(int *)(((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC) + 0x10));
            *(unsigned int *)(((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC) + 0x10)) = (t18 - t17);
            t38 = 0x0;
        } else {
            t19 = kmytex_FBAllocEntry();
            t38 = 0x3;
            if (t19 != 0) {
                t20 = *(int *)((t7 + 0xC));
                *(unsigned int *)((t19 + 0xC)) = t20;
                *(unsigned int *)((t19 + 0x10)) = t1;
                t21 = *(int *)((t7 + 0x10));
                *(unsigned int *)((t7 + 0x10)) = (t21 - t1);
                t22 = *(int *)((t7 + 0xC));
                *(unsigned int *)((t7 + 0xC)) = (t22 + t1);
                kmytex_FBEnQueueTop((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC), ((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC) + 0x4), t19);
                t24 = *(int *)((t19 + 0xC));
                *(unsigned int *)((a6 + 0x1C)) = t24;
                *(unsigned int *)((t19 + 0x14)) = a6;
                if ((short)a4 == 0) {
                    t25 = *(short *)((t19 + 0x0));
                    t27 = (t25 | 0x20);
                } else {
                    t26 = *(short *)((t19 + 0x0));
                    t27 = (t26 | 0x40);
                }
                *(unsigned short *)((t19 + 0x0)) = t27;
                t28 = *(short *)((t19 + 0x0));
                *(unsigned short *)((t19 + 0x0)) = (t28 | 0x4);
                t29 = *(int *)((t19 + 0x10));
                t30 = *(int *)(((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC) + 0x10));
                *(unsigned int *)(((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC) + 0x10)) = (t30 - t29);
                t38 = 0x0;
            }
        }
    }
    return t38;
}

int kmiSetupRegionRegisters(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t24;
    int t21;

    t0 = *(int *)(((((a6 << 2) << 2) << 1) + 0xC2EAAF8));
    kmiWriteRegister(0x124, t0);
    t2 = *(int *)(((((a6 << 2) << 2) << 1) + 0xC2EAAFC));
    kmiWriteRegister(0x12C, t2);
    t4 = *(int *)(((((a6 << 2) << 2) << 1) + 0xC2EAB04));
    kmiWriteRegister(0x128, t4);
    t6 = *(int *)(((((a6 << 2) << 2) << 1) + 0xC2EAB08));
    kmiWriteRegister(0x130, t6);
    kmiWriteRegister(0x13C, ((((a5 - 1) << 16) + a4) - 1));
    t9 = (((struct o4_int *)0xC2EAB2C)->v);
    t10 = (((struct o8_int *)0xC2EAB2C)->v);
    t11 = (((struct oC_int *)0xC2EAB2C)->v);
    t12 = (((struct o10_int *)0xC2EAB2C)->v);
    t13 = *(int *)0xC2EA680;
    if (t13 == 6) {
        t14 = (((struct o0_int *)0xC2EAB2C)->v);
        t15 = (((struct o14_int *)0xC2EAB2C)->v);
        t21 = ((((((t9 & 0x3) | (((t10 & 0x3) << 2) << 2)) | ((t11 & 0x3) << 8)) | ((((t12 & 0x3) << 8) << 2) << 2)) | ((((0x1 & t14) << 16) << 2) << 2)) | ((0x3 & t15) << 16));
    } else {
        t16 = (((struct o0_int *)0xC2EAB2C)->v);
        t21 = (((((t9 & 0x3) | (((t10 & 0x3) << 2) << 2)) | ((t11 & 0x3) << 8)) | ((((t12 & 0x3) << 8) << 2) << 2)) | ((0x1 & t16) << 16));
    }
    kmiWriteRegister(0x140, t21);
    t24 = kmiWriteRegister(0x144, 0x80000000);
    return t24;
}

int kmiCreateDummyTranslucentObject(int a4, int a5)
{
    *(unsigned int *)(((0xA5000000 | a4) + 0x0)) = ((((unsigned int)(a4 - a5) >> 2) + 0x2) | 0x80200000);
    *(unsigned int *)(((0xA5000000 | a4) + 0x4)) = 0xF0000000;
    *(unsigned int *)((((0xA5000000 | a4) + 0x8) + 0x0)) = 0x800000;
    *(unsigned int *)((((0xA5000000 | a4) + 0x8) + 0x4)) = 0x24900000;
    *(unsigned int *)((((0xA5000000 | a4) + 0x8) + 0x8)) = 0x0;
    *(float *)((((0xA5000000 | a4) + 0x8) + 0xC)) = 0.0f;
    *(float *)((((0xA5000000 | a4) + 0x8) + 0x10)) = 0.0f;
    *(float *)((((0xA5000000 | a4) + 0x8) + 0x14)) = 9.99999944e-11f;
    *(unsigned int *)((((0xA5000000 | a4) + 0x8) + 0x18)) = 0x80FF0000;
    *(float *)((((0xA5000000 | a4) + 0x8) + 0x1C)) = 0.0f;
    *(float *)((((0xA5000000 | a4) + 0x8) + 0x20)) = 1280.0f;
    *(float *)((((0xA5000000 | a4) + 0x8) + 0x24)) = 9.99999944e-11f;
    *(unsigned int *)((((0xA5000000 | a4) + 0x8) + 0x28)) = 0x8000FF00;
    *(float *)((((0xA5000000 | a4) + 0x8) + 0x2C)) = 2560.0f;
    *(float *)((((0xA5000000 | a4) + 0x8) + 0x30)) = 0.0f;
    *(float *)((((0xA5000000 | a4) + 0x8) + 0x34)) = 9.99999944e-11f;
    *(unsigned int *)((((0xA5000000 | a4) + 0x8) + 0x38)) = 0x800000FF;
    return a4;
}

int vmsfs_mount(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;

    t0 = *(int *)0xC2EE98C;
    t1 = *(int *)((t0 + 0x8));
    if (t1 == 1) {
        return vmsfs_mount2(a4);
    }
    t2 = *(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x2));
    if (t2 != 0) {
        *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x30)) = 0x1;
        t3 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x4));
        t4 = *(int *)((((((t3 << 2) + t3) << 2) << 2) + 0xC1784E4));
        *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x34)) = t4;
        t5 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x30));
        t6 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x34));
        *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x30)) = (t5 + 0x1);
        t7 = *(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC2EC578) + 0x8));
        vmsfs_c_progress(a4);
        t9 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
        t10 = vmsfs_mediainfo_retry(a4, t9);
        if ((int)t10 < 0) {
            *(unsigned char *)((((a4 * 0x148) + 0xC2EE990) + 0x9)) = 0x0;
            *(unsigned char *)((((a4 * 0x148) + 0xC2EE990) + 0x8)) = 0x0;
            return 0xFFFFFF01;
        }
        t11 = check_caps(((a4 * 0x148) + 0xC2EE990));
        if ((int)t11 < 0) {
            return 0xFFFFFF83;
        }
        t12 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
        t13 = *(int *)((t12 + 0x1C));
        *(unsigned int *)((t12 + 0x30)) = t13;
        *(unsigned char *)((((a4 * 0x148) + 0xC2EE990) + 0x9)) = 0x1;
        *(unsigned char *)((((a4 * 0x148) + 0xC2EE990) + 0x8)) = 0x1;
        *(unsigned char *)((((a4 * 0x148) + 0xC2EE990) + 0xA)) = 0x0;
        *(unsigned char *)((((a4 * 0x148) + 0xC2EE990) + 0xB)) = 0x0;
        *(unsigned char *)((((a4 * 0x148) + 0xC2EE990) + 0xC)) = 0x0;
        return check_cache(a4);
    }
    return 0xFFFFFF01;
}

int vmsfs_mount2(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x2));
    if (t0 == 0) {
        return 0xFFFFFF01;
    }
    *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x30)) = 0x1;
    t1 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x4));
    t2 = *(int *)((((((t1 << 2) + t1) << 2) << 2) + 0xC1784E4));
    *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x34)) = t2;
    t3 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x30));
    t4 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x34));
    *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x30)) = (t3 + 0x1);
    t5 = *(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC2EC578) + 0x8));
    vmsfs_c_progress(a4);
    return check_cache(a4);
}

int vmsfs_fgetinfo(int a4, int a5, int a6)
{
    int t0;
    int t24;
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
    int t15;
    int t16;
    int t17;
    int stk[18];
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    R1008 = a5;
    R1012 = (a4 * 0x148);
    R1004 = ((a4 * 0x148) + 0xC2EE990);
    t0 = *(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x2));
    t24 = 0xFFFFFF01;
    if (t0 != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t24 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t24 = 0xFFFFFF01;
            if (t3 != 0) {
                t4 = R1012;
                t5 = *(signed char *)(((t4 + 0xC2EE990) + 0x8));
                t24 = 0xFFFFFF01;
                if (t5 != 0) {
                    t6 = buIsFormat();
                    t24 = 0xFFFFFF03;
                    if ((int)t6 >= 0) {
                        t7 = R1008;
                        t8 = search_dir(a4, t7, (((int)stk + 4) + 0xC));
                        t24 = 0xFFFFFF05;
                        if ((int)t8 >= 0) {
                            t9 = R1004;
                            t10 = *(int *)((t9 + 0x1C));
                            t11 = *(int *)(((int)stk + 56));
                            t12 = *(int *)((t10 + 0x2C));
                            *(unsigned int *)((a6 + 0x0)) = (t11 * (t12 + 0x1));
                            t13 = *(int *)(((int)stk + 56));
                            *(unsigned short *)((a6 + 0x4)) = t13;
                            t14 = *(int *)(((int)stk + 20));
                            *(unsigned char *)((a6 + 0x6)) = t14;
                            t15 = *(signed char *)(((int)stk + 26));
                            *(unsigned char *)((a6 + 0x7)) = t15;
                            t16 = *(short *)(((int)stk + 24));
                            *(unsigned short *)((a6 + 0x8)) = t16;
                            t17 = *(int *)(((int)stk + 20));
                            *(unsigned char *)((a6 + 0x6)) = (((t17 == 0xCC)) ? 1 : 0);
                            get_vmstime((a6 + 0xA), (((int)stk + 4) + 0x2C));
                            t24 = 0x0;
                        }
                    }
                }
            }
        }
    }
    return t24;
}

int vmsfs_getinfo(int a4, int a5)
{
    int t0;
    int t35;
    int t1;
    int t3;
    int t4;
    int t5;
    int t7;
    int t8;
    int t10;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
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
    int stk[9];
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    R1004 = (a4 * 0x148);
    t0 = *(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x2));
    t35 = 0xFFFFFF01;
    if (t0 != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t35 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t35 = 0xFFFFFF01;
            if (t3 != 0) {
                t4 = R1004;
                t5 = *(signed char *)(((t4 + 0xC2EE990) + 0x8));
                t35 = 0xFFFFFF01;
                if (t5 != 0) {
                    t7 = buIsFormat();
                    t35 = 0xFFFFFF03;
                    if ((int)t7 >= 0) {
                        t8 = 0x0;
                        while ((int)t8 < (int)0x20) {
                            t7 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            t10 = *(signed char *)(((t8 + 0x10) + t7));
                            t12 = (a5 + t8);
                            t8 = (t8 + 0x1);
                            *(unsigned char *)((t12 + 0x0)) = t10;
                        }
                        t13 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                        t14 = (((int)stk + 4) + 0x4);
                        t15 = (t13 + 0x30);
                        while ((unsigned int)t14 < (unsigned int)((((int)stk + 4) + 0x4) + 0x8)) {
                            t16 = *(signed char *)((t15 + 0x0));
                            t15 = (t15 + 0x1);
                            *(unsigned char *)((t14 + 0x0)) = t16;
                            t14 = (t14 + 0x1);
                        }
                        get_vmstime((a5 + 0x30), (((int)stk + 4) + 0x4));
                        t18 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                        t19 = *(int *)((t18 + 0x0));
                        (((struct o20_ushort *)(a5))->v) = (t19 + 0x1);
                        t20 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                        t21 = *(int *)((t20 + 0x30));
                        (((struct o22_ushort *)(a5))->v) = t21;
                        t22 = vmsfs_diskfree(a4, 0x0);
                        (((struct o26_ushort *)(a5))->v) = t22;
                        t23 = (((struct o26_short *)(a5))->v);
                        (((struct o24_ushort *)(a5))->v) = t23;
                        t24 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                        t25 = *(int *)((t24 + 0x38));
                        (((struct o28_ushort *)(a5))->v) = t25;
                        t26 = vmsfs_diskfree(a4, 0x1);
                        (((struct o2A_ushort *)(a5))->v) = t26;
                        t27 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                        t28 = *(int *)((t27 + 0x2C));
                        (((struct o2C_ushort *)(a5))->v) = (t28 + 0x1);
                        t29 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                        t30 = *(signed char *)((t29 + 0x4E));
                        (((struct o2E_ushort *)(a5))->v) = (unsigned char)t30;
                        t35 = 0x0;
                    }
                }
            }
        }
    }
    return t35;
}

int vmsfs_diskfree(int a4, int a5)
{
    int t0;
    int t37;
    int t1;
    int t3;
    int t35;
    int t4;
    int t34;
    int t5;
    int t33;
    int t6;
    int t7;
    int t8;
    int t9;
    int t11;
    int t12;
    int t14;
    int t15;
    int t16;
    int t19;
    int t21;
    int t22;
    int t23;
    int t36;

    t0 = *(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x2));
    t37 = 0xFFFFFF01;
    if (t0 != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t36 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t35 = 0xFFFFFF01;
            if (t3 != 0) {
                t4 = *(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x8));
                t34 = 0xFFFFFF01;
                if (t4 != 0) {
                    t5 = buIsFormat();
                    t33 = 0xFFFFFF03;
                    if ((int)t5 >= 0) {
                        if (a5 == 1) {
                            t6 = a5;
                            t7 = 0x0;
                            for (;;) {
                                t8 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                                t9 = *(int *)((t8 + 0x38));
                                if ((int)t7 >= (int)t9) break;
                                t6 = get_fat(a4, t7);
                                t6 = (unsigned short)t6;
                                if (t6 == 0xFFFC) {
                                    t7 = (t7 + 0x1);
                                    continue;
                                }
                                break;
                            }
                            t33 = t7;
                        } else {
                            t11 = *(int *)0xC17640C;
                            if (t11 != 0) {
                                t12 = a5;
                                t33 = 0x0;
                                t14 = 0x0;
                                for (;;) {
                                    t15 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                                    t16 = *(int *)((t15 + 0x30));
                                    if ((int)t14 >= (int)t16) break;
                                    t12 = get_fat(a4, t14);
                                    t12 = (unsigned short)t12;
                                    if (t12 == 0xFFFC) {
                                        t12 = check_fat_xross(a4, t14);
                                        if ((int)t12 >= 0) {
                                            t33 = (t33 + 0x1);
                                        }
                                    }
                                    t14 = (t14 + 0x1);
                                }
                            } else {
                                t19 = a5;
                                t33 = 0x0;
                                t21 = 0x0;
                                for (;;) {
                                    t22 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                                    t23 = *(int *)((t22 + 0x30));
                                    if ((int)t21 >= (int)t23) break;
                                    t19 = get_fat(a4, t21);
                                    t19 = (unsigned short)t19;
                                    t21 = (t21 + 0x1);
                                    if (t19 == 0xFFFC) {
                                        t33 = (t33 + 0x1);
                                    }
                                }
                            }
                        }
                    }
                    t34 = t33;
                }
                t35 = t34;
            }
            t36 = t35;
        }
        t37 = t36;
    }
    return t37;
}

int vmsfs_fcreate(int a4, int a5, int a6, int a7)
{
    int t0;
    int t53;
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t17;
    int t19;
    int t26;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t34;
    int t36;
    int stk[20];
    int R1004;
    int R1008;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    R1008 = a6;
    R1004 = a7;
    *(unsigned int *)((a7 + 0x0)) = 0x0;
    t0 = *(signed char *)(((a4 * 0x148) + 0xC2EE992));
    t53 = 0xFFFFFF01;
    if (t0 != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t53 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t53 = 0xFFFFFF01;
            if (t3 != 0) {
                t4 = *(signed char *)(((a4 * 0x148) + 0xC2EE998));
                t53 = 0xFFFFFF01;
                if (t4 != 0) {
                    t5 = buIsFormat();
                    t53 = 0xFFFFFF03;
                    if ((int)t5 >= 0) {
                        t6 = check_isopen();
                        t53 = 0xFFFFFF08;
                        if ((int)t6 >= 0) {
                            t7 = search_dir(a4, a5, (((int)stk + 4) + 0x8));
                            if ((int)t7 >= 0) {
                                t8 = clear_file(a4, a5);
                                t53 = t8;
                                if ((int)t8 >= 0) {
                                    t9 = search_free_dir(a4);
                                    t53 = 0xFFFFFF08;
                                    if ((int)t9 >= 0) {
                                        direntry(a4, t9);
                                        t11 = open_file_handle();
                                        t53 = 0xFFFFFF07;
                                        if (t11 != 0) {
                                            *(unsigned int *)((t11 + 0x8)) = 0x0;
                                            *(unsigned int *)((t11 + 0x4)) = 0x1;
                                            *(unsigned int *)((t11 + 0x2C)) = t9;
                                            *(unsigned int *)((t11 + 0x38)) = 0xFFFF;
                                            *(unsigned int *)((t11 + 0x30)) = 0x0;
                                            *(unsigned int *)((t11 + 0x28)) = a4;
                                            *(unsigned short *)((t11 + 0x2)) = 0x0;
                                            *(unsigned char *)((t11 + 0x1)) = 0x0;
                                            t12 = 0x1;
                                            t13 = (t11 + 0x10);
                                            t14 = a5;
                                            for (;;) {
                                                t15 = *(signed char *)((t14 + 0x0));
                                                if (t15 == 0) break;
                                                t12 = *(signed char *)((t14 + 0x0));
                                                t14 = (t14 + 0x1);
                                                *(unsigned char *)((t13 + 0x0)) = t12;
                                                t13 = (t13 + 0x1);
                                            }
                                            *(unsigned char *)((t13 + 0x0)) = 0x0;
                                            t17 = R1008;
                                            set_vmstime((t11 + 0x20), t17);
                                            t19 = R1004;
                                            *(unsigned int *)((t19 + 0x0)) = t11;
                                            t53 = 0x0;
                                        }
                                    }
                                }
                            } else {
                                t26 = search_free_dir(a4);
                                t53 = 0xFFFFFF08;
                                if ((int)t26 >= 0) {
                                    direntry(a4, t26);
                                    t28 = open_file_handle();
                                    t53 = 0xFFFFFF07;
                                    if (t28 != 0) {
                                        *(unsigned int *)((t28 + 0x8)) = 0x0;
                                        *(unsigned int *)((t28 + 0x4)) = 0x1;
                                        *(unsigned int *)((t28 + 0x2C)) = t26;
                                        *(unsigned int *)((t28 + 0x38)) = 0xFFFF;
                                        *(unsigned int *)((t28 + 0x30)) = 0x0;
                                        *(unsigned int *)((t28 + 0x28)) = a4;
                                        *(unsigned short *)((t28 + 0x2)) = 0x0;
                                        *(unsigned char *)((t28 + 0x1)) = 0x0;
                                        t29 = 0x1;
                                        t30 = (t28 + 0x10);
                                        t31 = a5;
                                        for (;;) {
                                            t32 = *(signed char *)((t31 + 0x0));
                                            if (t32 == 0) break;
                                            t29 = *(signed char *)((t31 + 0x0));
                                            t31 = (t31 + 0x1);
                                            *(unsigned char *)((t30 + 0x0)) = t29;
                                            t30 = (t30 + 0x1);
                                        }
                                        *(unsigned char *)((t30 + 0x0)) = 0x0;
                                        t34 = R1008;
                                        set_vmstime((t28 + 0x20), t34);
                                        t36 = R1004;
                                        *(unsigned int *)((t36 + 0x0)) = t28;
                                        t53 = 0x0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return t53;
}

void vmsfs_fisexist(int a4, int a5)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int stk[15];
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    R1004 = a5;
    t0 = *(signed char *)(((a4 * 0x148) + 0xC2EE992));
    if (t0 != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            return;
        }
        t3 = vmsio_ismount(a4);
        if (t3 != 0) {
            t4 = *(signed char *)(((a4 * 0x148) + 0xC2EE998));
            if (t4 == 0) {
                return;
            }
            t5 = buIsFormat();
            if ((int)t5 < 0) {
                return;
            }
            t6 = R1004;
            t7 = search_dir(a4, t6, (((int)stk + 4) + 0x4));
            if ((int)t7 >= 0) {
                return;
            }
            return;
        }
        return;
    }
}

int vmsfs_findfirst(int a4, int a5)
{
    int t0;
    int t35;
    int t1;
    int t3;
    int t31;
    int t4;
    int t29;
    int t5;
    int t27;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t21;
    int t33;

    t0 = *(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x2));
    t35 = 0xFFFFFF01;
    if (t0 != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t33 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t31 = 0xFFFFFF01;
            if (t3 != 0) {
                t4 = *(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x8));
                t29 = 0xFFFFFF01;
                if (t4 != 0) {
                    t5 = buIsFormat();
                    t27 = 0xFFFFFF03;
                    if ((int)t5 >= 0) {
                        *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x18)) = 0x0;
                        t7 = direntry(a4, 0x0);
                        t8 = 0x0;
                        for (;;) {
                            t9 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                            t10 = *(int *)((t9 + 0x30));
                            if ((int)t8 >= (int)t10) {
                                if (0x0 == 0) {
                                    return 0xFFFFFF05;
                                }
                                t8 = t7;
                                t7 = a5;
                                t8 = (t8 + 0x4);
                                t11 = t10;
                                t12 = (t7 + 0xC);
                                while ((unsigned int)t7 < (unsigned int)t12) {
                                    t11 = *(signed char *)((t8 + 0x0));
                                    t8 = (t8 + 0x1);
                                    *(unsigned char *)((t7 + 0x0)) = t11;
                                    t7 = (t7 + 0x1);
                                }
                                *(unsigned char *)((t12 + 0x0)) = 0x0;
                                t14 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x18));
                                *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x18)) = (t14 + 0x1);
                                return 0x0;
                            }
                            t15 = *(signed char *)((t7 + 0x0));
                            if ((unsigned char)t15 != 51) {
                                if ((unsigned char)t15 == 0xCC) break;
                                t16 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x18));
                                t7 = (t7 + 0x20);
                                t8 = (t8 + 0x1);
                                *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x18)) = (t16 + 0x1);
                                continue;
                            }
                            break;
                        }
                        t27 = 0xFFFFFF05;
                        if (0x1 != 0) {
                            t17 = t10;
                            t18 = a5;
                            t19 = (t7 + 0x4);
                            while ((unsigned int)t18 < (unsigned int)(a5 + 0xC)) {
                                t17 = *(signed char *)((t19 + 0x0));
                                t19 = (t19 + 0x1);
                                *(unsigned char *)((t18 + 0x0)) = t17;
                                t18 = (t18 + 0x1);
                            }
                            *(unsigned char *)(((a5 + 0xC) + 0x0)) = 0x0;
                            t21 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x18));
                            *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x18)) = (t21 + 0x1);
                            t27 = 0x0;
                        }
                    }
                    t29 = t27;
                }
                t31 = t29;
            }
            t33 = t31;
        }
        t35 = t33;
    }
    return t35;
}

int vmsfs_findfirst_ex(int a4, int a5, int a6)
{
    int t0;
    int t57;
    int t1;
    int t3;
    int t53;
    int t4;
    int t5;
    int t51;
    int t6;
    int t49;
    int t8;
    int t9;
    int t10;
    int t11;
    int t13;
    int t14;
    int t15;
    int t17;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t36;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t55;
    int stk[18];

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = (a4 * 0x148);
    t0 = *(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x2));
    t57 = 0xFFFFFF01;
    if (t0 != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t55 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t53 = 0xFFFFFF01;
            if (t3 != 0) {
                t4 = *(int *)(((int)stk + 4));
                t5 = *(signed char *)(((t4 + 0xC2EE990) + 0x8));
                t51 = 0xFFFFFF01;
                if (t5 != 0) {
                    t6 = buIsFormat();
                    t49 = 0xFFFFFF03;
                    if ((int)t6 >= 0) {
                        *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x18)) = 0x0;
                        t8 = direntry(a4, 0x0);
                        t9 = 0x0;
                        for (;;) {
                            t10 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                            t11 = *(int *)((t10 + 0x30));
                            if ((int)t9 >= (int)t11) {
                                if (0x0 == 0) {
                                    return 0xFFFFFF05;
                                }
                                t9 = *(int *)(((int)stk + 0));
                                t13 = (t9 + 0xC);
                                t14 = t11;
                                t15 = (t8 + 0x4);
                                while ((unsigned int)t9 < (unsigned int)t13) {
                                    t14 = *(signed char *)((t15 + 0x0));
                                    t15 = (t15 + 0x1);
                                    *(unsigned char *)((t9 + 0x0)) = t14;
                                    t9 = (t9 + 0x1);
                                }
                                t9 = ((int)stk + 0);
                                *(unsigned char *)((t13 + 0x0)) = 0x0;
                                t17 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x18));
                                *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x18)) = (t17 + 0x1);
                                t9 = (t9 + 0x8);
                                set_file_info(t8, t9);
                                t19 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                                t20 = *(int *)((t19 + 0x2C));
                                t21 = *(int *)(((int)stk + 48));
                                *(unsigned int *)((a6 + 0x0)) = (t21 * (t20 + 0x1));
                                t22 = *(int *)(((int)stk + 48));
                                *(unsigned short *)((a6 + 0x4)) = t22;
                                t23 = *(signed char *)(((int)stk + 12));
                                *(unsigned char *)((a6 + 0x6)) = t23;
                                t24 = *(signed char *)(((int)stk + 18));
                                *(unsigned char *)((a6 + 0x7)) = t24;
                                t25 = *(short *)(((int)stk + 16));
                                *(unsigned short *)((a6 + 0x8)) = t25;
                                t26 = *(int *)(((int)stk + 12));
                                if (t26 == 0xCC) {
                                    t9 = ((int)stk + 0);
                                    t8 = a6;
                                    *(unsigned char *)((a6 + 0x6)) = 0x1;
                                    t9 = (t9 + 0x28);
                                    t8 = (t8 + 0xA);
                                    get_vmstime(t8, t9);
                                    return 0x0;
                                }
                                t9 = ((int)stk + 0);
                                t8 = a6;
                                *(unsigned char *)((a6 + 0x6)) = 0x0;
                                t9 = (t9 + 0x28);
                                t8 = (t8 + 0xA);
                                get_vmstime(t8, t9);
                                return 0x0;
                            }
                            t29 = *(signed char *)((t8 + 0x0));
                            if ((unsigned char)t29 != 51) {
                                if ((unsigned char)t29 == 0xCC) break;
                                t30 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x18));
                                t8 = (t8 + 0x20);
                                t9 = (t9 + 0x1);
                                *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x18)) = (t30 + 0x1);
                                continue;
                            }
                            break;
                        }
                        t49 = 0xFFFFFF05;
                        if (0x1 != 0) {
                            t31 = *(int *)(((int)stk + 0));
                            t32 = t11;
                            t33 = t31;
                            t34 = (t8 + 0x4);
                            while ((unsigned int)t33 < (unsigned int)(t31 + 0xC)) {
                                t32 = *(signed char *)((t34 + 0x0));
                                t34 = (t34 + 0x1);
                                *(unsigned char *)((t33 + 0x0)) = t32;
                                t33 = (t33 + 0x1);
                            }
                            *(unsigned char *)(((t31 + 0xC) + 0x0)) = 0x0;
                            t36 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x18));
                            *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x18)) = (t36 + 0x1);
                            set_file_info(t8, (((int)stk + 0) + 0x8));
                            t38 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                            t39 = *(int *)((t38 + 0x2C));
                            t40 = *(int *)(((int)stk + 48));
                            *(unsigned int *)((a6 + 0x0)) = (t40 * (t39 + 0x1));
                            t41 = *(int *)(((int)stk + 48));
                            *(unsigned short *)((a6 + 0x4)) = t41;
                            t42 = *(signed char *)(((int)stk + 12));
                            *(unsigned char *)((a6 + 0x6)) = t42;
                            t43 = *(signed char *)(((int)stk + 18));
                            *(unsigned char *)((a6 + 0x7)) = t43;
                            t44 = *(short *)(((int)stk + 16));
                            *(unsigned short *)((a6 + 0x8)) = t44;
                            t45 = *(int *)(((int)stk + 12));
                            t46 = 0x0;
                            if (t45 == 0xCC) {
                                t46 = 0x1;
                            }
                            *(unsigned char *)((a6 + 0x6)) = t46;
                            get_vmstime((a6 + 0xA), (((int)stk + 0) + 0x28));
                            t49 = 0x0;
                        }
                    }
                    t51 = t49;
                }
                t53 = t51;
            }
            t55 = t53;
        }
        t57 = t55;
    }
    return t57;
}

int vmsfs_frename(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t34;
    int t3;
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
    int t17;
    int t18;
    int t19;
    int stk[18];
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    R1004 = a5;
    R1008 = a6;
    R1012 = (a4 * 0x148);
    *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x4));
    t1 = *(int *)((((((t0 << 2) + t0) << 2) << 2) + 0xC178500));
    *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x34)) = t1;
    t2 = *(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x2));
    t34 = 0xFFFFFF01;
    if (t2 != 0) {
        t3 = vmsio_isready(a4);
        if (t3 == 0) {
            vmsfs_unmount(a4);
            t34 = 0xFFFFFF01;
        } else {
            t5 = vmsio_ismount(a4);
            t34 = 0xFFFFFF01;
            if (t5 != 0) {
                t6 = R1012;
                t7 = *(signed char *)(((t6 + 0xC2EE990) + 0x8));
                t34 = 0xFFFFFF01;
                if (t7 != 0) {
                    t8 = buIsFormat();
                    t34 = 0xFFFFFF03;
                    if ((int)t8 >= 0) {
                        t9 = R1004;
                        t10 = check_isopen();
                        t34 = 0xFFFFFF0B;
                        if ((int)t10 >= 0) {
                            t11 = R1004;
                            t12 = search_dir(a4, t11, (((int)stk + 4) + 0xC));
                            t34 = 0xFFFFFF05;
                            if ((int)t12 >= 0) {
                                t13 = R1008;
                                t14 = search_dir(a4, t13, (((int)stk + 4) + 0xC));
                                t34 = 0xFFFFFF06;
                                if ((int)t14 < 0) {
                                    t15 = direntry(a4, t12);
                                    t18 = R1008;
                                    t17 = (t15 + 0x4);
                                    while ((unsigned int)t17 < (unsigned int)(t15 + 0x10)) {
                                        t19 = *(signed char *)((t18 + 0x0));
                                        t18 = (t18 + 0x1);
                                        *(unsigned char *)((t17 + 0x0)) = t19;
                                        t17 = (t17 + 0x1);
                                    }
                                    direntry_dirty(a4, t12);
                                    t34 = write_dir(a4);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return t34;
}

int vmsfs_fsettime(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t32;
    int t3;
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
    int t16;
    int t17;
    int t18;
    int stk[21];
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    R1004 = a5;
    R1008 = a6;
    R1012 = (a4 * 0x148);
    *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x4));
    t1 = *(int *)((((((t0 << 2) + t0) << 2) << 2) + 0xC178508));
    *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x34)) = t1;
    t2 = *(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x2));
    t32 = 0xFFFFFF01;
    if (t2 != 0) {
        t3 = vmsio_isready(a4);
        if (t3 == 0) {
            vmsfs_unmount(a4);
            t32 = 0xFFFFFF01;
        } else {
            t5 = vmsio_ismount(a4);
            t32 = 0xFFFFFF01;
            if (t5 != 0) {
                t6 = R1012;
                t7 = *(signed char *)(((t6 + 0xC2EE990) + 0x8));
                t32 = 0xFFFFFF01;
                if (t7 != 0) {
                    t8 = buIsFormat();
                    t32 = 0xFFFFFF03;
                    if ((int)t8 >= 0) {
                        t9 = R1004;
                        t10 = check_isopen();
                        t32 = 0xFFFFFF0B;
                        if ((int)t10 >= 0) {
                            t11 = R1004;
                            t12 = search_dir(a4, t11, (((int)stk + 4) + 0xC));
                            t32 = 0xFFFFFF05;
                            if ((int)t12 >= 0) {
                                t13 = direntry(a4, t12);
                                t14 = R1008;
                                set_vmstime((((int)stk + 4) + 0x38), t14);
                                t16 = (t13 + 0x10);
                                t17 = (((int)stk + 4) + 0x38);
                                while ((unsigned int)t16 < (unsigned int)(t13 + 0x18)) {
                                    t18 = *(signed char *)((t17 + 0x0));
                                    t17 = (t17 + 0x1);
                                    *(unsigned char *)((t16 + 0x0)) = t18;
                                    t16 = (t16 + 0x1);
                                }
                                direntry_dirty(a4, t12);
                                t32 = write_dir(a4);
                            }
                        }
                    }
                }
            }
        }
    }
    return t32;
}

int vmsfs_xdefrag(int a4, int a5)
{
    int t0;
    int t38;
    int t1;
    int t3;
    int t36;
    int t4;
    int t5;
    int t35;
    int t6;
    int t34;
    int t7;
    int t8;
    int t33;
    int t9;
    int t32;
    int t10;
    int t31;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t17;
    int t18;
    int t19;
    int t20;
    int t26;
    int t27;
    int t30;
    int t28;
    int t37;
    int stk[13];
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    R1004 = (a4 * 0x148);
    t0 = *(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x2));
    t38 = 0xFFFFFF01;
    if (t0 != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t37 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t36 = 0xFFFFFF01;
            if (t3 != 0) {
                t4 = R1004;
                t5 = *(signed char *)(((t4 + 0xC2EE990) + 0x8));
                t35 = 0xFFFFFF01;
                if (t5 != 0) {
                    t6 = buIsFormat();
                    t34 = 0xFFFFFF03;
                    if ((int)t6 >= 0) {
                        t7 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                        t8 = *(int *)((t7 + 0x38));
                        t33 = 0xFFFFFF0B;
                        if (t8 != 0) {
                            t9 = vmsfs_xfind(a4, (((int)stk + 4) + 0x4));
                            t32 = 0xFFFFFF0B;
                            if (t9 != 0) {
                                t10 = check_fat_all(a4);
                                t31 = 0xFFFFFF0B;
                                if ((int)t10 >= 0) {
                                    for (;;) {
                                        t11 = search_fat_used(a4);
                                        if ((int)t11 >= 0) {
                                            t12 = search_fat_free(a4, (t11 + 0x1));
                                            if ((int)t12 >= 0) {
                                                t13 = vmsfs_read_retry(a4, t11, a5);
                                                if ((int)t13 >= 0) {
                                                    t14 = vmsfs_write_retry(a4, t12, a5);
                                                    if ((int)t14 >= 0) {
                                                        t15 = search_fat(a4, t11);
                                                        if ((int)t15 > 0) {
                                                            set_fat(a4, t15);
                                                        } else {
                                                            t17 = search_dir_by_startfat(a4, t11);
                                                            t18 = *(int *)0xC2EE98C;
                                                            t19 = *(int *)((t18 + 0x10));
                                                            t20 = ((int (*)(int, int, int))(t19))(t17, 0x2, t12);
                                                        }
                                                        get_fat(a4, t11);
                                                        set_fat(a4, t12);
                                                        set_fat(a4, t11);
                                                        continue;
                                                    }
                                                    return t14;
                                                }
                                                return t13;
                                            }
                                            break;
                                        }
                                        break;
                                    }
                                    t26 = (((a4 * 0x148) + 0xC2EE990) + 0x48);
                                    while ((unsigned int)t26 < (unsigned int)((((a4 * 0x148) + 0xC2EE990) + 0x48) + 0x100)) {
                                        *(unsigned char *)((t26 + 0x0)) = 0x1;
                                        t26 = (t26 + 0x1);
                                    }
                                    t27 = write_dir(a4);
                                    t30 = t27;
                                    if ((int)t27 >= 0) {
                                        t28 = write_fat(a4);
                                        t30 = t28;
                                    }
                                    t31 = t30;
                                }
                                t32 = t31;
                            }
                            t33 = t32;
                        }
                        t34 = t33;
                    }
                    t35 = t34;
                }
                t36 = t35;
            }
            t37 = t36;
        }
        t38 = t37;
    }
    return t38;
}

int search_dir(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t2 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x28));
    t1 = 0x0;
    for (;;) {
        t3 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
        t4 = *(int *)((t3 + 0x30));
        if ((int)t1 >= (int)t4) {
            return 0xFFFFFFFF;
        }
        t5 = *(signed char *)((t2 + 0x0));
        if ((unsigned char)t5 != 51) {
            if ((unsigned char)t5 != 0xCC) {
                t2 = (t2 + 0x20);
                t1 = (t1 + 0x1);
                continue;
            }
            t6 = cmp_fname(a5, (t2 + 0x4));
            if (t6 != 0) break;
            t2 = (t2 + 0x20);
            t1 = (t1 + 0x1);
            continue;
        }
        t7 = cmp_fname(a5, (t2 + 0x4));
        if (t7 != 0) break;
        t2 = (t2 + 0x20);
        t1 = (t1 + 0x1);
    }
    set_file_info(t2, a6);
    return t1;
}

int vmsfs_read_disk_image(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x4));
    t1 = *(int *)((((((t0 << 2) + t0) << 2) << 2) + 0xC17851C));
    *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x34)) = t1;
    t2 = a5;
    t3 = 0x0;
    for (;;) {
        t4 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
        t5 = *(int *)((t4 + 0x0));
        if ((int)t3 >= (int)(t5 + 0x1)) {
            return 0x0;
        }
        t6 = vmsfs_read_retry(a4, t3, t2);
        if ((int)t6 < 0) break;
        t3 = (t3 + 0x1);
        t2 = (t2 + 0x200);
    }
    return t6;
}

int vmsfs_save_file(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t1;
    int t2;
    int t37;
    int t32;
    int t3;
    int t5;
    int t26;
    int t6;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t20;
    int t27;
    int stk[8];

    *(unsigned int *)(((int)stk + 4)) = a6;
    t0 = vmsfs_diskfree(a4, 0x0);
    t1 = vmsfs_fgetsize(a4, a5);
    t2 = t0;
    if ((int)t1 > 0) {
        t2 = (t0 + t1);
    }
    t37 = t2;
    if ((int)t2 >= 0) {
        t32 = 0xFFFFFF04;
        if ((unsigned int)t2 >= (unsigned int)a7) {
            if ((0x80000000 & a9) != 0) {
                t3 = *(int *)(((int)stk + 4));
                t27 = vmsfs_save_file_verify(a4, a5, t3, a7, a8, a9);
            } else {
                t5 = vmsfs_fcreate(a4, a5, a8, ((int)stk + 0));
                t26 = t5;
                if ((int)t5 >= 0) {
                    t6 = *(int *)(((int)stk + 0));
                    *(unsigned char *)((t6 + 0x1)) = a9;
                    t10 = *(int *)(((int)stk + 4));
                    *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x30)) = 0x1;
                    t8 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x4));
                    t9 = *(int *)((((((t8 << 2) + t8) << 2) << 2) + 0xC178510));
                    *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x34)) = (t9 + a7);
                    if ((unsigned int)0x0 < (unsigned int)a7) {
                        t11 = 0x0;
                        for (;;) {
                            t12 = *(int *)(((int)stk + 0));
                            t13 = vmsfs_fwrite1(t12, t10);
                            if ((int)t13 >= 0) {
                                t11 = (t11 + 0x1);
                                t10 = (t10 + 0x200);
                                if ((unsigned int)t11 >= (unsigned int)a7) break;
                                continue;
                            }
                            t14 = *(int *)(((int)stk + 0));
                            vmsfs_fclose(t14, 0x0);
                            return t13;
                        }
                    }
                    t20 = *(int *)(((int)stk + 0));
                    vmsfs_fclose(t20, 0x0);
                    t26 = 0x0;
                }
                t27 = t26;
            }
            t32 = t27;
        }
        t37 = t32;
    }
    return t37;
}

int vmsfs_save_exec_file(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t31;
    int t28;
    int t1;
    int t2;
    int t4;
    int t5;
    int t24;
    int t6;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t19;
    int t25;
    int stk[9];

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    t0 = vmsfs_diskfree(a4, 0x1);
    t31 = t0;
    if ((int)t0 >= 0) {
        t28 = 0xFFFFFF04;
        if ((unsigned int)t0 >= (unsigned int)a7) {
            if ((0x80000000 & a9) != 0) {
                t1 = *(int *)(((int)stk + 8));
                t2 = *(int *)(((int)stk + 4));
                t25 = vmsfs_save_exec_file_verify(a4, t1, t2, a7, a8, a9);
            } else {
                t4 = *(int *)(((int)stk + 8));
                t5 = vmsfs_xcreate(a4, t4, a8, ((int)stk + 0));
                t24 = t5;
                if ((int)t5 >= 0) {
                    t6 = *(int *)(((int)stk + 0));
                    *(unsigned char *)((t6 + 0x1)) = a9;
                    t11 = *(int *)(((int)stk + 4));
                    *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x30)) = 0x1;
                    t8 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x4));
                    t9 = *(int *)((((((t8 << 2) + t8) << 2) << 2) + 0xC178510));
                    *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x34)) = (t9 + a7);
                    if ((unsigned int)0x0 < (unsigned int)a7) {
                        t10 = 0x0;
                        for (;;) {
                            t12 = *(int *)(((int)stk + 0));
                            t13 = vmsfs_xwrite1(t12, t11);
                            if ((int)t13 >= 0) {
                                t10 = (t10 + 0x1);
                                t11 = (t11 + 0x200);
                                if ((unsigned int)t10 >= (unsigned int)a7) break;
                                continue;
                            }
                            t14 = *(int *)(((int)stk + 0));
                            vmsfs_fclose(t14, 0x0);
                            return t13;
                        }
                    }
                    t19 = *(int *)(((int)stk + 0));
                    vmsfs_fclose(t19, 0x0);
                    t24 = 0x0;
                }
                t25 = t24;
            }
            t28 = t25;
        }
        t31 = t28;
    }
    return t31;
}

int SJMEM_IsGetChunk(int a4, int a5, int a6, int a7)
{
    int t0;
    int t11;
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;

    t0 = SJMEM_Lock();
    t11 = 0x0;
    if (a5 != 0) {
        if (a5 == 1) {
            t1 = *(int *)((a4 + 0xC));
            t11 = a6;
            if ((int)t1 < (int)a6) {
                t11 = t1;
            }
        } else {
            t3 = *(int *)((a4 + 0x1C));
            if (t3 != 0) {
                t4 = *(int *)((a4 + 0x1C));
                t5 = *(int *)((a4 + 0x20));
                t6 = ((int (*)(int, int))(t4))(t5, 0xFFFFFFFD);
            }
            t11 = 0x0;
        }
    }
    *(unsigned int *)((a7 + 0x0)) = t11;
    SJMEM_Unlock(a4, t0);
    return (((t11 == a6)) ? 1 : 0);
}

int SJRBF_IsGetChunk(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t13;
    int t14;
    int t15;
    int t16;
    int t21;

    t0 = SJRBF_Lock();
    if (a5 == 0) {
        t1 = *(int *)((a4 + 0x20));
        t2 = *(int *)((a4 + 0x14));
        t3 = *(int *)((a4 + 0x24));
        t4 = *(int *)((a4 + 0x10));
        t5 = ((t1 - t2) + t3);
        if ((int)t4 < (int)((t1 - t2) + t3)) {
            t5 = t4;
        }
        t21 = a6;
        if ((int)t5 < (int)a6) {
            t21 = t5;
        }
    } else {
        if (a5 == 1) {
            t7 = *(int *)((a4 + 0x20));
            t8 = *(int *)((a4 + 0x18));
            t9 = *(int *)((a4 + 0x24));
            t10 = *(int *)((a4 + 0xC));
            t11 = ((t7 - t8) + t9);
            if ((int)t10 < (int)((t7 - t8) + t9)) {
                t11 = t10;
            }
            t21 = a6;
            if ((int)t11 < (int)a6) {
                t21 = t11;
            }
        } else {
            t13 = *(int *)((a4 + 0x28));
            if (t13 != 0) {
                t14 = *(int *)((a4 + 0x28));
                t15 = *(int *)((a4 + 0x2C));
                t16 = ((int (*)(int, int))(t14))(t15, 0xFFFFFFFD);
            }
            t21 = 0x0;
        }
    }
    *(unsigned int *)((a7 + 0x0)) = t21;
    SJRBF_Unlock(a4, t0);
    return (((t21 == a6)) ? 1 : 0);
}

void SJUNI_GetChunk(int a4, int a5, int a6, int a7)
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
    int t17;
    int t18;
    int t19;
    int t20;
    int t27;
    int t30;
    int t31;
    int t32;
    int t33;
    int stk[12];

    *(unsigned int *)(((int)stk + 4)) = a6;
    if ((int)a5 >= 0) {
        if ((int)a5 >= (int)0x4) {
            t0 = *(int *)((a4 + 0x28));
            if (t0 != 0) {
                t1 = *(int *)((a4 + 0x28));
                t2 = *(int *)((a4 + 0x2C));
                t3 = ((int (*)(int, int, int, int))(t1))(t2, 0xFFFFFFFD, a6, a7);
            }
            *(unsigned int *)((a7 + 0x0)) = 0x0;
            *(unsigned int *)((a7 + 0x4)) = 0x0;
        } else {
            t4 = SJUNI_Lock();
            *(unsigned int *)(((int)stk + 8)) = t4;
            t5 = *(int *)((((a4 + 0x18) + (a5 << 2)) + 0x0));
            if (t5 != 0) {
                t6 = *(int *)(((t5 + 0x8) + 0x4));
                *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x4)) = t6;
                t7 = *(int *)(((t5 + 0x8) + 0x0));
                *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = t7;
                t8 = *(int *)(((int)stk + 24));
                t9 = *(int *)(((int)stk + 4));
                if ((int)t8 <= (int)t9) {
                    t10 = *(int *)(((((int)stk + 4) + 0x10) + 0x4));
                    *(unsigned int *)((a7 + 0x4)) = t10;
                    t11 = *(int *)(((((int)stk + 4) + 0x10) + 0x0));
                    *(unsigned int *)((a7 + 0x0)) = t11;
                    t12 = *(int *)((t5 + 0x0));
                    *(unsigned int *)((((a5 << 2) + (a4 + 0x18)) + 0x0)) = t12;
                    t13 = *(int *)((a4 + 0x14));
                    *(unsigned int *)((t5 + 0x0)) = t13;
                    *(unsigned int *)((a4 + 0x14)) = t5;
                } else {
                    t14 = *(signed char *)((a4 + 0x5));
                    if (t14 == 1) {
                        t15 = *(int *)(((int)stk + 4));
                        SJ_SplitChunk((((int)stk + 4) + 0x10), t15, (((int)stk + 4) + 0x10));
                        t17 = *(int *)(((((int)stk + 4) + 0x10) + 0x4));
                        *(unsigned int *)((a7 + 0x4)) = t17;
                        t18 = *(int *)(((((int)stk + 4) + 0x10) + 0x0));
                        *(unsigned int *)((a7 + 0x0)) = t18;
                        t19 = *(int *)(((((int)stk + 4) + 0x8) + 0x4));
                        *(unsigned int *)(((t5 + 0x8) + 0x4)) = t19;
                        t20 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
                        *(unsigned int *)(((t5 + 0x8) + 0x0)) = t20;
                    } else {
                        *(unsigned int *)((a7 + 0x0)) = 0x0;
                        *(unsigned int *)((a7 + 0x4)) = 0x0;
                    }
                }
            } else {
                *(unsigned int *)((a7 + 0x0)) = 0x0;
                *(unsigned int *)((a7 + 0x4)) = 0x0;
            }
            t27 = *(int *)(((int)stk + 8));
            SJUNI_Unlock(a4, t27);
        }
    } else {
        t30 = *(int *)((a4 + 0x28));
        if (t30 != 0) {
            t31 = *(int *)((a4 + 0x28));
            t32 = *(int *)((a4 + 0x2C));
            t33 = ((int (*)(int, int, int, int))(t31))(t32, 0xFFFFFFFD, a6, a7);
        }
        *(unsigned int *)((a7 + 0x0)) = 0x0;
        *(unsigned int *)((a7 + 0x4)) = 0x0;
    }
}

int mwSbSetPan(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    *(unsigned int *)((((a5 << 2) + (a4 + 0x40)) + 0x0)) = a6;
    t0 = a6;
    if ((int)a6 < 0) {
        t0 = (0x10 | (-a6));
    }
    t1 = *(int *)((a4 + 0x18));
    if (t1 == 0) {
        t2 = *(int *)((a4 + 0x1C));
        t3 = *(int *)((t2 + 0x4));
        return nlsndStreamSetHdPan(t3, a5, t0);
    }
    t4 = *(short *)((a4 + 0x6));
    return nlsndStreamChgPan(t4, a5, t0);
}
