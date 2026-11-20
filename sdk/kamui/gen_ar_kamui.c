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


