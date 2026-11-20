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


