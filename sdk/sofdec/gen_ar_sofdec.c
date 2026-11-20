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


