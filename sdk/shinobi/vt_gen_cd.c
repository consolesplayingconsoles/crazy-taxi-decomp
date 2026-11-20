/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_cd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int DECtoBCD(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int _pd_peripheral_set_null(int);
int buIsFormat(int);
int check_isopen(void);
int direntry(int, int);
int fmMngClearBuf(int, int);
int fmMngReadData(int);
int fmMngReadSctAllData(int);
int fmMngWriteData(int, int, int);
int gdFsGetStat(int);
int gdFsReopenHn(int, int, int, int);
int gdFsReqRd32(int, int, int);
int gdFsReqRdPio(int, int, int);
int get_fat(int, int);
int kdGetDeviceInfo(int);
int kdInitSystem(int, int);
int kmyRegisterBGPlane(int);
int memset(int, int, int);
int mpdrv_check_port(int);
int mpdrv_make_devicedata(int, int);
int nlLineSendVertex(int, int, int);
int search_dir(int, int, int);
int search_subst_fat_top(int);
int set_fat(int, int, int);
int syBtFlDeleteSct(int, int, int);
int syBtFlWrite(int, int, int);
int syTmrDiffCount(int, int);
int syTmrGetCount(void);
int thunk_copyBytes(void);
int vmsfs_c_getstate(int);
int vmsfs_c_setfunc(int, int);
int vmsfs_c_setparam(int, int, int, int, int, int, int);
int vmsfs_fclose(int, int);
int vmsfs_fopen(int, int, int);
int vmsfs_fread1(int, int);
int vmsfs_fseek(int, int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_fat_1(int);
int write_sys(int);
int kmiProcessVertex_11(int a4, int a5, int a6, int a7);
int write_fat(int a4);
int pdInitPeripheral(int a4, int a5, int a6);
int vmsfs_fgetsize(int a4, int a5);
int vmsfs_load_file_ex(int a4, int a5, int a6, int a7, int a8);
int pdTmrGetTimeCallback(int a4, int a5, int a6, int a7);
int gdFsMovePickup(int a4);
int gdFsWaitCompleteReq(int a4);
int syMmuAddEntry(int a4, int a5, int a6);
int gdFsReqDrvStatG(void);
int check_file_correct(int a4, int a5);
int gdFsRead(int a4, int a5, int a6);
int vmsfs_getvolume(int a4, int a5);
int fmMngFormat(int a4, int a5, int a6);
int gdFsGetTocG(int a4, int a5);
int vmsfs_isformat(int a4, int a5, int a6, int a7);
int nlLineSendQuadA(int a4, int a5, int a6, int a7, float f4, float f5);
int set_vmstime(int a4, int a5);
int buReadFile(int a4, int a5, int a6);
int mpdrv_frame_recv_main(int a4);
int fmMngExecServer(int a4, int a5, int a6);


int write_fat(int a4)
{
    int t0;
    int t1;
    int t7;

    t0 = 0x0;
    for (;;) {
        t1 = write_fat_1(a4);
        if (t1 != 0xFFFFFF01) {
            if (t1 != 0xFFFFFF40) {
                break;
            }
            t0 = (search_subst_fat_top(a4));
            if ((int)t0 < 0) {
                return 0xFFFFFF40;
            }
            *(unsigned int *)(((*(int *)((((a4 * 0x148) + 0x0C2EE990) + 0x1C))) + 0xC)) = t0;
            t7 = ((int (*)(int, int, int))((*(int *)(((*(int *)0x0C2EE98C) + 0x10)))))((*(int *)((((a4 * 0x148) + 0x0C2EE990) + 0x20))), 0x46, t0);
            t0 = 0x0;
            for (;;) {
                if ((int)t0 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0x0C2EE990) + 0x1C))) + 0x10)))) {
                    break;
                }
                set_fat(a4, ((*(int *)(((*(int *)((((a4 * 0x148) + 0x0C2EE990) + 0x1C))) + 0xC))) + t0), 0xFFFA);
                t0 = (t0 + 0x1);
            }
            t0 = 0x1;
            continue;
        }
        return 0xFFFFFF01;
    }
    
    if (t0 != 0) {
        write_sys(a4);
    }
    return 0x0;
}


int vmsfs_load_file_ex(int a4, int a5, int a6, int a7, int a8)
{
    int t4;
    int t11;
    int t14;
    int t23;
    int t26;
    int stk[11];

    int R0;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_8C1EEF36:;
    *(unsigned int *)(((int)stk + 12)) = R5;
    *(unsigned int *)(((int)stk + 16)) = R6;
    *(unsigned int *)(((int)stk + 8)) = R7;
    R11 = (R4);
    R13 = (a8);
    if ((a8 != 0)) goto L_8C1EEF6A;
    goto L_8C1EEF52;
    L_8C1EEF52:;
    t4 = vmsfs_fgetsize(R11, (*(int *)(((int)stk + 12))));
    R4 = (t4);
    if (((int)t4 >= 0)) goto L_8C1EEF64;
    goto L_8C1EEF60;
    L_8C1EEF60:;
    R0 = (R4);
    goto L_8C1EEFC0;
    L_8C1EEFC0:;
    return R0;
    L_8C1EEF64:;
    R13 = ((R4 - (*(int *)(((int)stk + 8)))));
    goto L_8C1EEF6A;
    L_8C1EEF6A:;
    t11 = vmsfs_fopen(R11, (*(int *)(((int)stk + 12))), ((int)stk + 4));
    R14 = (t11);
    if (((int)t11 < 0)) goto L_8C1EEFBE;
    goto L_8C1EEF7A;
    L_8C1EEF7A:;
    t14 = *(int *)(((int)stk + 16));
    *(unsigned int *)((((R11 * 0x148) + 0x0C2EE990) + 0x30)) = 0x1;
    *(unsigned int *)((((R11 * 0x148) + 0x0C2EE990) + 0x34)) = R13;
    vmsfs_fseek((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))), 0x0, R7);
    R11 = (0x0);
    R12 = (t14);
    if (((unsigned int)0x0 >= (unsigned int)R13)) goto L_8C1EEFB4;
    goto L_8C1EEF9C;
    L_8C1EEF9C:;
    R10 = (0x200);
    goto L_8C1EEF9E;
    L_8C1EEF9E:;
    t23 = vmsfs_fread1((*(int *)(((int)stk + 4))), R12);
    R14 = (t23);
    if (((int)t23 < 0)) goto L_8C1EEFB6;
    goto L_8C1EEFAC;
    L_8C1EEFAC:;
    t26 = (unsigned int)(R11 + 0x1) < (unsigned int)R13;
    R11 = ((R11 + 0x1));
    R12 = ((R12 + R10));
    if (t26) goto L_8C1EEF9E;
    goto L_8C1EEFB4;
    L_8C1EEFB4:;
    R14 = (0x0);
    goto L_8C1EEFB6;
    L_8C1EEFB6:;
    vmsfs_fclose((*(int *)(((int)stk + 4))), 0x0);
    goto L_8C1EEFBE;
    L_8C1EEFBE:;
    R0 = (R14);
    goto L_8C1EEFC0;
}


int gdFsMovePickup(int handleAddress)
{
    int pickupResult;
    int idleDriveResult;
    int savedInterruptMask;
    int commandRequestId;
    int driverExecuteResult;
    int completionResult;
    int handleAllocated;

    pickupResult = 0xFFFFFFF6;
    if ((handleAddress != 0) && (handleAllocated = *(short *)((handleAddress + 0x4C)), handleAllocated != 0)) {
        idleDriveResult = 0xFFFFFFF3;
        if ((*(int *)(((*(int *)((handleAddress + 0x0))) + 0x1C))) == 0) {
            savedInterruptMask = _builtin_get_imask();
            _builtin_set_imask(0xF);
            commandRequestId = ((int (*)(int))((*(int *)(((*(int *)(((*(int *)((handleAddress + 0x0))) + 0xC))) + 0x18)))))(((*(int *)((handleAddress + 0x8))) + (*(int *)((handleAddress + 0x14)))));
            if (commandRequestId != 0) {
                *(unsigned int *)((handleAddress + 0x3C)) = commandRequestId;
                *(unsigned short *)((handleAddress + 0x50)) = 0x3;
                *(unsigned short *)((handleAddress + 0x48)) = 0x2;
                *(unsigned int *)(((*(int *)((handleAddress + 0x0))) + 0x1C)) = handleAddress;
                driverExecuteResult = ((int (*)(void))((*(int *)(((*(int *)(((*(int *)((handleAddress + 0x0))) + 0xC))) + 0x40)))))();
            }
            _builtin_set_imask(((unsigned int)(((savedInterruptMask & 0xF) << 2) << 2) >> 4));
            completionResult = 0xFFFFFFF3;
            if (commandRequestId != 0) {
                completionResult = (gdFsWaitCompleteReq(handleAddress));
            }
            idleDriveResult = completionResult;
        }
        pickupResult = idleDriveResult;
    }
    return pickupResult;
}


int gdFsWaitCompleteReq(int a4)
{
    int t2;
    int t3;
    int t4;
    int t8;
    int t9;
    int t23;
    int t26;
    int t21;

    t2 = a4;
    t3 = (*(int *)((a4 + 0x18)));
    t4 = (syTmrGetCount());
    for (;;) {
        t8 = ((int (*)(int))((*(int *)(((*(int *)(((*(int *)((a4 + 0x0))) + 0x3C))) + 0x48)))))(t2);
        t2 = a4;
        t9 = gdFsGetStat(t2);
        t2 = t9;
        if (t9 != 0) {
            if (t9 != 1) {
                if ((t9 != 2) && ((t9 != 3) && (t9 != 4))) {
                    break;
                }
                if (t3 != (*(int *)((a4 + 0x18)))) {
                    t4 = (syTmrGetCount());
                    t3 = (*(int *)((a4 + 0x18)));
                } else {
                    t21 = t2;
                }
                t2 = t21;
                t23 = syTmrGetCount();
                t2 = t4;
                t2 = (syTmrDiffCount(t2, t23));
                if ((unsigned int)t2 > (unsigned int)0xEE6B28) {
                    return 0xFFFFFFEB;
                }
                continue;
            }
            return 0x0;
        }
        return 0xFFFFFFE0;
    }
    t26 = 0xFFFFFFE7;
    if ((t9 == 5) || (t9 == 64)) {
        t26 = (*(short *)((a4 + 0x52)));
    }
    return t26;
}


int syMmuAddEntry(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t26;
    int t18;
    int t19;
    int t15;
    int t16;
    int t12;
    int t13;
    int t9;
    int t10;
    int t8;

    t0 = *(int *)0xFF000010;
    if ((unsigned int)(0x3F & ((unsigned int)((unsigned int)t0 >> 16) >> 2)) < (unsigned int)0x40) {
        t1 = (0x3F & ((unsigned int)((unsigned int)t0 >> 16) >> 2));
        for (;;) {
            if (((*(int *)((((t1 << 8) + 0xF6000000) + 0x0))) & 0x100) == 0x100) {
                t1 = (t1 + 0x1);
                if ((unsigned int)t1 >= (unsigned int)0x40) {
                    break;
                }
                continue;
            }
            break;
        }
        t8 = t1;
    } else {
        t8 = (0x3F & ((unsigned int)((unsigned int)t0 >> 16) >> 2));
    }
    t26 = 0xFF;
    if (t8 == 64) {
    } else {
        t18 = 0x1FFFFC00;
        t19 = 0x0;
        if ((signed char)a6 != 1) {
            t15 = 0x1FFFF000;
            t16 = 0x10;
            if ((signed char)a6 != 2) {
                t12 = 0x1FFF0000;
                t13 = 0x80;
                if ((signed char)a6 != 3) {
                    t9 = 0x1FF00000;
                    t10 = 0x90;
                    if ((signed char)a6 != 4) {
                        t9 = ((a5 & 0xFFFFFC00) | 0x100);
                        t10 = a6;
                    }
                    t12 = t9;
                    t13 = t10;
                }
                t15 = t12;
                t16 = t13;
            }
            t18 = t15;
            t19 = t16;
        }
        *(unsigned int *)(((0xF6000000 + (t8 << 8)) + 0x0)) = ((a5 & 0xFFFFFC00) | 0x100);
        *(unsigned int *)((((t8 << 8) + 0xF7000000) + 0x0)) = (((a4 & t18) | t19) | 0x13E);
        t26 = t8;
    }
    return t26;
}


int check_file_correct(int a4, int a5)
{
    int t0;
    int t20;
    int t3;
    int t5;
    int t6;
    int t8;
    int t12;
    int t13;
    int stk[17];

    t0 = search_dir(a4, a5, ((int)stk + 4));
    t20 = 0xFFFFFF05;
    if ((int)t0 >= 0) {
        direntry(a4, t0);
        t3 = *(int *)(((int)stk + 16));
        if ((int)t3 < (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0x0C2EE990) + 0x1C))) + 0x30)))) {
            t5 = t3;
            t6 = 0x0;
            for (;;) {
                if ((int)t6 >= (int)(*(int *)(((int)stk + 44)))) {
                    return 0x0;
                }
                t8 = get_fat(a4, t5);
                if (t6 == ((*(int *)(((int)stk + 44))) - 1)) {
                    if ((unsigned short)t8 != 0xFFFA) {
                        break;
                    }
                    t6 = (t6 + 0x1);
                    t5 = (unsigned short)t8;
                    continue;
                }
                if (((unsigned short)t8 != t5) && (((unsigned short)t8 != 0xFFFA) && (((unsigned short)t8 != 0xFFFC) && (((unsigned short)t8 != 0xFFFF) && (t12 = *(int *)((((a4 * 0x148) + 0x0C2EE990) + 0x1C)), t13 = *(int *)((t12 + 0x30)), (int)(unsigned short)t8 < (int)t13))))) {
                    t6 = (t6 + 0x1);
                    t5 = (unsigned short)t8;
                    continue;
                }
                return 0xFFFFFF41;
            }
        }
        t20 = 0xFFFFFF41;
    }
    return t20;
}


int gdFsRead(int handleAddress, int requestedSectorCount, int destinationAddress)
{
    int useAlignedRead;
    int alignmentMaskOrSectorCount;
    int handleOrRequestResult;
    int sectorCountOrDelayCounter;
    int retryCount;
    int readResult;
    int completionResult;
    int readModeOrRequestResult;
    int sectorPosition;
    int currentSectorPosition;
    int fileSectorCount;

    useAlignedRead = 0x0;
    if ((0x1F & destinationAddress) == 0) {
        useAlignedRead = 0x1;
    }
    alignmentMaskOrSectorCount = 0x1F;
    handleOrRequestResult = 0x0;
    sectorCountOrDelayCounter = requestedSectorCount;
    retryCount = 0x0;
    for (;;) {
        if ((int)retryCount >= (int)0x4E20) {
            break;
        }
        readModeOrRequestResult = useAlignedRead;
        if (readModeOrRequestResult == 1) {
            sectorCountOrDelayCounter = requestedSectorCount;
            handleOrRequestResult = handleAddress;
            readModeOrRequestResult = (gdFsReqRd32(handleOrRequestResult, sectorCountOrDelayCounter, destinationAddress));
        } else {
            sectorCountOrDelayCounter = requestedSectorCount;
            handleOrRequestResult = handleAddress;
            readModeOrRequestResult = (gdFsReqRdPio(handleOrRequestResult, sectorCountOrDelayCounter, destinationAddress));
        }
        handleOrRequestResult = readModeOrRequestResult;
        if ((handleOrRequestResult == 0) && ((requestedSectorCount != 0) && (currentSectorPosition = *(int *)((handleAddress + 0x14)), sectorPosition = currentSectorPosition, fileSectorCount = *(int *)((handleAddress + 0x10)), alignmentMaskOrSectorCount = fileSectorCount, (int)sectorPosition < (int)alignmentMaskOrSectorCount))) {
            sectorCountOrDelayCounter = 0xC350;
            for (;;) {
                if (sectorCountOrDelayCounter == 0) {
                    break;
                }
                sectorCountOrDelayCounter = (sectorCountOrDelayCounter - 1);
            }
            retryCount = (retryCount + 0x1);
            continue;
        }
        break;
    }
    readResult = 0xFFFFFFEB;
    if (retryCount == 0x4E20) {
    } else {
        completionResult = handleOrRequestResult;
        if ((int)handleOrRequestResult >= 0) {
            completionResult = (gdFsWaitCompleteReq(handleAddress));
        }
        readResult = completionResult;
    }
    return readResult;
}


int gdFsGetTocG(int a4, int a5)
{
    int t2;
    int t3;
    int t7;
    int t15;

    t2 = gdFsReopenHn((*(int *)(((*(int *)0x8C20C204) + 0x14))), 0x0, 0x0, 0x0);
    if (t2 == 0) {
        return 0xFFFFFFF3;
    }
    t3 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t7 = ((int (*)(int, int))((*(int *)(((*(int *)(((*(int *)0x8C20C204) + 0xC))) + 0x38)))))(a4, a5);
    if (t7 != 0) {
        *(unsigned int *)((t2 + 0x3C)) = t7;
        *(unsigned short *)((t2 + 0x50)) = 0x4;
        *(unsigned int *)(((*(int *)((t2 + 0x0))) + 0x1C)) = t2;
    }
    _builtin_set_imask(((unsigned int)(((t3 & 0xF) << 2) << 2) >> 4));
    t15 = 0xFFFFFFF3;
    if (t7 == 0) {
    } else {
        t15 = (gdFsWaitCompleteReq(t2));
    }
    return t15;
}


int vmsfs_isformat(int a4, int a5, int a6, int a7)
{
    int t26;
    int t1;
    int t3;
    int t12;
    int t6;
    int t7;
    int t19;
    int t4;

    t26 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0x0C2EE990) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t19 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t12 = 0xFFFFFF01;
            if ((t3 != 0) && (t4 = *(signed char *)((((a4 * 0x148) + 0x0C2EE990) + 0x8)), t4 != 0)) {
                t6 = (*(int *)((((a4 * 0x148) + 0x0C2EE990) + 0x20)));
                t7 = 0x0;
                for (;;) {
                    if ((unsigned char)(*(signed char *)((t6 + 0x0))) != 85) {
                        break;
                    }
                    t7 = (t7 + 0x1);
                    t6 = (t6 + 0x1);
                    if ((int)t7 >= (int)0x10) {
                        if ((*(int *)(((a4 << 2) + 0x0C2EF3D0))) != 0) {
                            return 0xFFFFFF03;
                        }
                        return 0x0;
                    }
                }
                *(unsigned char *)((((a4 * 0x148) + 0x0C2EE990) + 0xB)) = 0x0;
                *(unsigned char *)((((a4 * 0x148) + 0x0C2EE990) + 0xC)) = 0x0;
                t12 = 0xFFFFFF03;
            }
            t19 = t12;
        }
        t26 = t19;
    }
    return t26;
}


int mpdrv_frame_recv_main(int a4)
{
    int t3;
    int t7;
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t23;
    int t18;
    int t20;

    t3 = a4;
    t7 = 0x0;
    for (;;) {
        if ((int)t7 >= (int)0x4) {
            break;
        }
        t0 = 0x8C20B030;
        t1 = 0xF90;
        t2 = (*(int *)(((t7 << 2) + t0)));
        t0 = (*(int *)0x0C2FA538);
        t1 = (t1 + t0);
        t2 = (t2 + t1);
        if ((*(signed char *)((t2 + 0x0))) != 0) {
            t2 = 0x8C1FE0A2;
            t3 = t7;
            t0 = (mpdrv_check_port(t3));
            t3 = t7;
            t4 = 0x0;
            t3 = (t3 << 1);
            t3 = (t3 + (t7 << 2));
            t5 = t3;
            t6 = t3;
            for (;;) {
                t0 = (*(int *)0x0C2FA538);
                t2 = (*(signed char *)((((0xF90 + t0) + t5) + 0x0)));
                if (t2 != 0) {
                    t3 = t6;
                    t0 = (mpdrv_make_devicedata(t3, t7));
                } else {
                    t18 = t2;
                    t20 = t3;
                }
                t4 = (t4 + 0x1);
                t2 = t18;
                t3 = t20;
                t6 = (t6 + 0x1);
                t5 = (t5 + 0x1);
                if ((int)t4 >= (int)0x6) {
                    break;
                }
            }
        } else {
            t23 = t1;
        }
        t1 = t23;
        t7 = (t7 + 0x1);
    }
    return 0x0;
}


int fmMngExecServer(int a4, int a5, int a6)
{
    int managerAddress;
    int managerStatus;
    int pendingOperation;
    int writeResult;
    int readResult;

    managerAddress = *(int *)0x0C178720;
    managerStatus = 0x0;
    if (managerAddress == 0) {
    } else {
        pendingOperation = *(int *)((managerAddress + 0x1C));
        if (pendingOperation != 0) {
            if (pendingOperation != 1) {
                if (pendingOperation != 2) {
                    *(unsigned int *)((managerAddress + 0x1C)) = 0x0;
                    *(unsigned int *)(((*(int *)0x0C178720) + 0x20)) = 0x0;
                } else {
                    writeResult = fmMngWriteData(managerAddress, a5, a6);
                    if (writeResult != 1) {
                        *(unsigned int *)(((*(int *)0x0C178720) + 0x1C)) = 0x0;
                        if (writeResult != 0) {
                            *(unsigned int *)(((*(int *)0x0C178720) + 0x20)) = 0x3;
                        } else {
                            *(unsigned int *)(((*(int *)0x0C178720) + 0x20)) = 0x1;
                        }
                        *(unsigned int *)(((*(int *)0x0C178720) + 0x2C)) = writeResult;
                    }
                }
            } else {
                readResult = fmMngReadData(managerAddress);
                *(unsigned int *)(((*(int *)0x0C178720) + 0x1C)) = 0x0;
                if (readResult != 0) {
                    *(unsigned int *)(((*(int *)0x0C178720) + 0x20)) = 0x3;
                } else {
                    *(unsigned int *)(((*(int *)0x0C178720) + 0x20)) = 0x1;
                }
                *(unsigned int *)(((*(int *)0x0C178720) + 0x2C)) = readResult;
            }
        }
        managerStatus = (*(int *)(((*(int *)0x0C178720) + 0x20)));
    }
    return managerStatus;
}
