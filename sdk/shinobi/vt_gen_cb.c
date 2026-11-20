/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_cb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buFbrSleepFiber(int, int, int, int, float, float, float, float, float, float, float, float);
int copy_device(void);
int gdFsSearchName(int, int, int);
int init_sub(void);
int kdDevGetFD(int, int);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdSetHandler(int, int);
int kdSetSetCondition(void);
int memcmp(int, int, int);
int memset(int, int, int);
int mpdrv_init(int, int, int);
int mpdrv_init_ex(int, int, int, int);
int nlGetMatrix(int);
int nlUnitMatrix(void);
int ovGetLibTbl(int);
int ovLockCs(int);
int ovUnlockCs(int);
int pdTmrIsReady(int);
int pdVibSetUnitInfo(int, int, int, int, int, int);
int set_file_info(int, int, int, int);
int str_len(int);
int syRtcAicaSetDateHi(int);
int syRtcAicaSetDateLo(int);
int syRtcAicaSetWriteFlag(void);
int syRtcDateToCount(int, int);
int syRtcGetCountForce(void);
int vmsfs_read_retry(int, int, int);
int vsprintf(int, int, int);
int kdInitSystemEx(int a4, int a5, int a6, int a7);
int pdTmrAlarm(int a4, int a5);
int kdInitSystem(int a4, int a5);
int read_fat(int a4);
int ovSearchLibByUuid(int a4);
int syRtcSetDate(int a4);
int search_fat_free(int a4, int a5);
int search_fat(int a4, int a5);
int ovLibEntryTbl(int a4);
int gdFsReopenHn(int a4, int a5, int a6, int a7);
int search_fat_used(int a4);
int gdFsSeek(int a4, int a5, int a6);
int gdFsGetDirInfoG(int a4, int a5);
int kdDevGetControllerInfo(int a4, int a5);
int kdDevGetSIPInfo(int a4, int a5);
int kdDevGetGunInfo(int a4, int a5);
int vmsfs_resetwork(int a4);
int cmp_fname(int a4, int a5);
int mpdrv_sdckbenable(int a4);
int mpdrv_dpf(Stk4 s);
int fmMngWrite(int a4, int a5);
int vmsio_isready(int a4);
int search_exec_file(int a4, int a5);
void buDisableServer(void);
int vmsfs_init_work_new(int a4);
int vmsfs_dpf(Stk4 s);
int nlInitMatrixStack(int a4, int a5, int a6);
int kdDevGetTimerInfo(int a4, int a5);
int vmsfs_isready(void);
int mpdrv_sdckbdisable(int a4);
int buFbrEndFiber(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int kdDevGetVibrationInfo(int a4, int a5);
void pdVibGetUnitInfoCallback(int a4, int a5, int a6, int a7);


int kdInitSystemEx(int a4, int a5, int a6, int a7)
{
    int t0;
    int t3;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0x0C1701BC = ((*(int *)0x0C1701BC) | 0xA0000000);
    init_sub();
    t3 = mpdrv_init_ex(a4, a5, a6, a7);
    copy_device();
    *(unsigned int *)0x0C2EC4D4 = 0x1;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return t3;
}


int kdInitSystem(int a4, int a5)
{
    int t0;
    int t3;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0x0C1701BC = ((*(int *)0x0C1701BC) | 0xA0000000);
    init_sub();
    t3 = mpdrv_init(a5, 0xC000, a4);
    copy_device();
    *(unsigned int *)0x0C2EC4D4 = 0x1;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return t3;
}


int read_fat(int a4)
{
    int t1;
    int t7;
    int t2;
    int t6;

    t1 = *(int *)(((*(int *)((((a4 * 0x148) + 0x0C2EE990) + 0x1C))) + 0x10));
    t7 = 0x0;
    if ((int)t1 > 0) {
        t2 = 0x0;
        for (;;) {
            t6 = vmsfs_read_retry(a4, ((*(int *)(((*(int *)((((a4 * 0x148) + 0x0C2EE990) + 0x1C))) + 0xC))) + t2), (((t2 << 8) << 1) + (*(int *)((((a4 * 0x148) + 0x0C2EE990) + 0x24)))));
            if ((int)t6 < 0) {
                break;
            }
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)t1) {
                return 0x0;
            }
        }
        t7 = t6;
    }
    return t7;
}


int ovSearchLibByUuid(int a4)
{
    int t0;
    int t1;
    int t5;
    int stk[8];
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    R1004 = a4;
    t0 = ovGetLibTbl((((int)stk + 4) + 0x4));
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(int *)((t0 + 0x0)))) {
            return 0xFFFFFFFE;
        }
        t5 = memcmp((R1004), ((*(int *)(((((t1 << 2) << 1) + (t0 + 0x8)) + 0x0))) + 0x10), 0x10);
        if (t5 == 0) {
            break;
        }
        t1 = (t1 + 0x1);
    }
    return t1;
}


int search_fat_free(int a4, int a5)
{
    int t1;
    int t2;
    int t6;
    int t7;

    t1 = *(int *)(((*(int *)((((a4 * 0x148) + 0x0C2EE990) + 0x1C))) + 0x30));
    if ((int)(t1 - 1) >= (int)a5) {
        t2 = (t1 - 1);
        for (;;) {
            t6 = ((int (*)(int, int))((*(int *)(((*(int *)0x0C2EE98C) + 0xC)))))((*(int *)((((a4 * 0x148) + 0x0C2EE990) + 0x24))), (t2 << 1));
            if ((unsigned short)t6 == 0xFFFC) {
                break;
            }
            t2 = (t2 - 1);
            if ((int)t2 < (int)a5) {
                return 0xFFFFFFFF;
            }
        }
        t7 = t2;
    } else {
        t7 = 0xFFFFFFFF;
    }
    return t7;
}


int search_fat(int a4, int a5)
{
    int t1;
    int t2;
    int t6;
    int t8;
    int stk[6];

    *(unsigned short *)(((int)stk + 4)) = a5;
    t1 = *(int *)(((*(int *)((((a4 * 0x148) + 0x0C2EE990) + 0x1C))) + 0x30));
    if ((int)(t1 - 1) >= 0) {
        t2 = (t1 - 1);
        for (;;) {
            t6 = ((int (*)(int, int))((*(int *)(((*(int *)0x0C2EE98C) + 0xC)))))((*(int *)((((a4 * 0x148) + 0x0C2EE990) + 0x24))), (t2 << 1));
            if ((unsigned short)t6 == (unsigned short)(*(short *)(((int)stk + 4)))) {
                break;
            }
            t2 = (t2 - 1);
            if ((int)t2 < 0) {
                return 0xFFFFFFFF;
            }
        }
        t8 = t2;
    } else {
        t8 = 0xFFFFFFFF;
    }
    return t8;
}


int ovLibEntryTbl(int a4)
{
    int t1;
    int t3;
    int t4;
    int stk[6];

    *(unsigned int *)(((int)stk + 8)) = a4;
    ovLockCs(((int)stk + 4));
    t1 = ovGetLibTbl((((int)stk + 4) + 0x8));
    t3 = ovSearchLibByUuid(((*(int *)(((int)stk + 8))) + 0x10));
    if ((int)t3 < 0) {
        t4 = *(int *)((t1 + 0x0));
        *(unsigned int *)((((t1 + 0x8) + ((t4 << 2) << 1)) + 0x0)) = (*(int *)(((int)stk + 8)));
        *(unsigned int *)(((((t4 << 2) << 1) + (t1 + 0x8)) + 0x4)) = 0x0;
        *(unsigned int *)((t1 + 0x0)) = ((*(int *)((t1 + 0x0))) + 0x1);
    }
    ovUnlockCs(((int)stk + 4));
    return 0x0;
}


int gdFsReopenHn(int handleAddress, int directoryEntryId, int startFad, int fileByteCount)
{
    int globalStateAddress;
    int activeHandleAddress;

    if ((handleAddress != 0) && (globalStateAddress = *(int *)((handleAddress + 0x0)), activeHandleAddress = *(int *)((globalStateAddress + 0x1C)), activeHandleAddress != handleAddress)) {
        *(unsigned int *)((handleAddress + 0x4)) = directoryEntryId;
        *(unsigned int *)((handleAddress + 0x8)) = startFad;
        *(unsigned int *)((handleAddress + 0xC)) = fileByteCount;
        *(unsigned int *)((handleAddress + 0x10)) = ((int)(fileByteCount + 0x7FF) >> 11);
        *(unsigned int *)((handleAddress + 0x14)) = 0x0;
        *(unsigned int *)((handleAddress + 0x18)) = 0x0;
        *(unsigned int *)((handleAddress + 0x1C)) = 0x0;
        *(unsigned int *)((handleAddress + 0x20)) = 0x0;
        *(unsigned int *)((handleAddress + 0x3C)) = 0x0;
        *(unsigned int *)((handleAddress + 0x44)) = 0x0;
        *(unsigned short *)((handleAddress + 0x48)) = 0x0;
        *(unsigned short *)((handleAddress + 0x4A)) = 0x0;
        *(unsigned short *)((handleAddress + 0x4C)) = 0x1;
        *(unsigned short *)((handleAddress + 0x50)) = 0x0;
        *(unsigned short *)((handleAddress + 0x52)) = 0x0;
        return handleAddress;
    }
    return 0x0;
}


int search_fat_used(int a4)
{
    int t0;
    int t6;

    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0x0C2EE990) + 0x1C))) + 0x30)))) {
            return 0xFFFFFFFF;
        }
        t6 = ((int (*)(int, int))((*(int *)(((*(int *)0x0C2EE98C) + 0xC)))))((*(int *)((((a4 * 0x148) + 0x0C2EE990) + 0x24))), (t0 << 1));
        if (((unsigned short)t6 != 0xFFFC) && ((unsigned short)t6 != 0xFFFF)) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return t0;
}


int gdFsSeek(int handleAddress, int sectorOffset, int origin)
{
    int sectorCount;
    int sectorPosition;

    if (handleAddress != 0) {
        if ((*(short *)((handleAddress + 0x4C))) == 0) {
            return 0xFFFFFFF6;
        }
        sectorCount = *(int *)((handleAddress + 0x10));
        if (origin != 0) {
            if (origin != 1) {
                if (origin != 2) {
                    return 0xFFFFFFF0;
                }
                if (((int)(sectorOffset + sectorCount) >= 0) && ((int)(sectorOffset + sectorCount) <= (int)sectorCount)) {
                    *(unsigned int *)((handleAddress + 0x14)) = (sectorOffset + sectorCount);
                    return 0x0;
                }
                return 0xFFFFFFEF;
            }
            sectorPosition = *(int *)((handleAddress + 0x14));
            if (((int)(sectorPosition + sectorOffset) >= 0) && ((int)(sectorPosition + sectorOffset) <= (int)sectorCount)) {
                *(unsigned int *)((handleAddress + 0x14)) = (sectorPosition + sectorOffset);
                return 0x0;
            }
            return 0xFFFFFFEF;
        }
        if (((int)sectorOffset >= 0) && ((int)sectorOffset <= (int)sectorCount)) {
            *(unsigned int *)((handleAddress + 0x14)) = sectorOffset;
            return 0x0;
        }
        return 0xFFFFFFEF;
    }
    return 0xFFFFFFF6;
}


int kdDevGetControllerInfo(int a4, int a5)
{
    int t0;

    t0 = kdDevGetFD(a5, 0x1);
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)((a4 + 0x0)) = (((((unsigned char)(*(signed char *)((t0 + 0x1))) << 16) | ((unsigned char)(*(signed char *)((t0 + 0x2))) << 8)) | (((unsigned char)(*(signed char *)((t0 + 0x0))) << 16) << 8)) | (unsigned char)(*(signed char *)((t0 + 0x3))));
    return 0x0;
}


int kdDevGetSIPInfo(int a4, int a5)
{
    int t0;

    t0 = kdDevGetFD(a5, 0x10);
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)((a4 + 0x0)) = (((((unsigned char)(*(signed char *)((t0 + 0x1))) << 16) | ((unsigned char)(*(signed char *)((t0 + 0x2))) << 8)) | (((unsigned char)(*(signed char *)((t0 + 0x0))) << 16) << 8)) | (unsigned char)(*(signed char *)((t0 + 0x3))));
    return 0x0;
}


int kdDevGetGunInfo(int a4, int a5)
{
    int t0;

    t0 = kdDevGetFD(a5, 0x20);
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)((a4 + 0x0)) = (((((unsigned char)(*(signed char *)((t0 + 0x1))) << 16) | ((unsigned char)(*(signed char *)((t0 + 0x2))) << 8)) | (((unsigned char)(*(signed char *)((t0 + 0x0))) << 16) << 8)) | (unsigned char)(*(signed char *)((t0 + 0x3))));
    return 0x0;
}


int cmp_fname(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = str_len(a4);
    t1 = str_len(a5);
    if (t0 == t1) {
        if ((int)t0 > 0) {
            t2 = a5;
            t3 = a4;
            t4 = 0x0;
            for (;;) {
                if ((*(signed char *)((t3 + 0x0))) != (*(signed char *)((t2 + 0x0)))) {
                    break;
                }
                t4 = (t4 + 0x1);
                t2 = (t2 + 0x1);
                t3 = (t3 + 0x1);
                if ((int)t4 >= (int)t0) {
                    return 0x1;
                }
            }
            return 0x0;
        }
        return 0x1;
    }
    return 0x0;
}


int mpdrv_dpf(Stk4 s)
{
    int t10;
    int t2;
    int t5;
    int t7;
    int stk[15];

    stk[3] = s.w[0];
    stk[4] = s.w[1];
    stk[5] = s.w[2];
    stk[6] = s.w[3];
    t10 = 0x10C8;
    if ((*(int *)(((*(int *)0x0C2FA538) + 0x10C8))) != 0) {
        t2 = ((((int)stk + 4) + 0x8) + 0x4);
        if ((0x3 & ((((int)stk + 4) + 0x8) + 0x4)) != 0) {
            t2 = ((((int)stk + 4) + 0x8) + 0x8);
        }
        t5 = *(int *)0x0C178708;
        t7 = (vsprintf(0x0C2F933C, s.w[0], t2));
        if (t5 != 0) {
            t7 = (((int (*)(int))(t5))(0x0C2F933C));
        }
        t10 = t7;
    }
    return t10;
}


int fmMngWrite(int recordIndex, int dataBufferAddress)
{
    int managerAddress;
    int recordCapacity;

    managerAddress = *(int *)0x0C178720;
    if (managerAddress == 0) {
        return 0xFFFFFFF5;
    }
    if ((*(int *)((managerAddress + 0x1C))) != 0) {
        return 0xFFFFFFF7;
    }
    if (((int)recordIndex >= 0) && (recordCapacity = *(int *)((managerAddress + 0x14)), (int)recordIndex < (int)recordCapacity)) {
        *(unsigned int *)((managerAddress + 0x1C)) = 0x2;
        *(unsigned int *)(((*(int *)0x0C178720) + 0x20)) = 0x2;
        *(unsigned int *)(((*(int *)0x0C178720) + 0x28)) = recordIndex;
        *(unsigned int *)(((*(int *)0x0C178720) + 0x30)) = dataBufferAddress;
        *(unsigned int *)(((*(int *)0x0C178720) + 0x24)) = 0x0;
        return 0x0;
    }
    return 0xFFFFFFFB;
}


int vmsio_isready(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = *(int *)(((a4 << 2) + 0x0C176948));
    t1 = kdGetDevice(t0);
    t2 = kdGetDeviceInfo(t0);
    if (((*(signed char *)((t1 + 0x0))) != 0) && (t4 = *(int *)((t2 + 0x0)), (t4 & 2) != 0)) {
        return 0x1;
    }
    return 0x0;
}


void buDisableServer(void)
{
    int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    kdSetHandler((*(int *)0x0C17539C), 0x0);
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}


int vmsfs_dpf(Stk4 s)
{
    int t0;
    int t3;
    int t5;
    int stk[15];

    stk[3] = s.w[0];
    stk[4] = s.w[1];
    stk[5] = s.w[2];
    stk[6] = s.w[3];
    t0 = ((((int)stk + 4) + 0x8) + 0x4);
    if ((0x3 & ((((int)stk + 4) + 0x8) + 0x4)) != 0) {
        t0 = ((((int)stk + 4) + 0x8) + 0x8);
    }
    t3 = *(int *)0x0C1784BC;
    t5 = (vsprintf(0x0C2F489C, s.w[0], t0));
    if (t3 != 0) {
        t5 = (((int (*)(int))(t3))(0x0C2F489C));
    }
    return t5;
}


int kdDevGetTimerInfo(int a4, int a5)
{
    int t0;

    t0 = kdDevGetFD(a5, 0x8);
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned char *)((a4 + 0x0)) = (*(signed char *)((t0 + 0x0)));
    *(unsigned char *)((a4 + 0x1)) = (*(signed char *)((t0 + 0x1)));
    *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((t0 + 0x2)));
    *(unsigned char *)((a4 + 0x3)) = (*(signed char *)((t0 + 0x3)));
    return 0x0;
}


int kdDevGetVibrationInfo(int a4, int a5)
{
    int t0;

    t0 = kdDevGetFD(a5, 0x100);
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)((a4 + 0x0)) = (unsigned char)(*(signed char *)((t0 + 0x0)));
    *(unsigned int *)((a4 + 0x4)) = (unsigned char)(*(signed char *)((t0 + 0x1)));
    return 0x0;
}
