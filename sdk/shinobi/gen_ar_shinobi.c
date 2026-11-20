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


