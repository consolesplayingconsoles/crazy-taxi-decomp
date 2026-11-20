/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_cc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int BCDtoDEC(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern int _builtin_tas(char *);
int cmp_fname(int, int);
int direntry(int, int);
int gdFsClose(int);
int gdFsCreateHnG(int, int, int, int);
int gdFsGetSearchID(int);
int gdFsMemcpy(int, int, int);
int gdFsSetGlobalErrG(int);
int gdFsStrcmpi(int, int);
int get_fat(int, int, int, int);
int kdDevGetFD(int, int);
int kdExecGun(void);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdIsChanged(int);
int kdRecvFrame(void);
int kdSetBlockWrite(int, ...);
int kdSetCallback(int, int, int);
int kdSetGetMediaInfoEx(int, int, int, int);
int kmyRegisterBGPlane(int);
int memset(int, int, int);
int mpdrv_dpf(int, ...);
int mpdrv_exit(void);
int mpdrv_set_bread_ns(int, int, int, int, int);
int mpdrv_set_getlerr_ns(int, int, int, int, int);
int nlLineSendVertex(int, int, int);
int pdVibMxIsReady(int);
int pdVibSetUnitInfo(int, int, int, int, int, int);
int search_fat_backward(int, int, int, int);
int set_fat(int, int, int);
int syChainDeleteHandler(int);
int syRtcAicaGetCount(int);
int thunk_stringEquals(void);
int vmsfs_c_getstate(int);
int vmsfs_c_setfunc(int, int);
int vmsfs_c_setparam(int, int, int, int, int, int, int);
int vmsfs_fread1(int, int);
int vmsfs_write_retry(int, int, int);
int nlLineSendQuadD(int a4, int a5, int a6, int a7, float f4, float f5);
int write_fat_1(int a4);
int search_subst_fat_top(int a4);
int set_file_info(int a4, int a5);
int gdFsOpenG(int a4, int a5);
int kmiProcessVertex_00(int a4, int a5, int a6, int a7);
int nlLineSendQuadC(int a4, int a5, int a6, int a7, float f4, float f5);
int vmsfs_c_setfname(int a4, int a5, int a6);
int vmsfs_fread(int a4, int a5, int a6);
int gdFsSearchName(int a4, int a5, int a6);
int search_dir(int a4, int a5, int a6);
int check_fat_all(int a4, int a5, int a6, int a7);
int pdVibEnumUnitCallback(int a4, int a5, int a6, int a7);
int syRtcGetCountForce(void);
int kdDevGetLCDInfo(int a4, int a5);
int vmsfs_write_disk_image(int a4, int a5);
int vmsio_ismount(int a4);
int gdFsSetDirG(int a4);
void kdDmaEndHandler0(int a4, int a5);
int buDefragDisk(int a4, int a5);
void kdExitSystem(void);
int vmsfs_fseek(int a4, int a5, int a6, int a7);
int pdVibMxSetStopTime(int a4, int a5);
int kdDevGetStorageInfo(int a4, int a5);
int check_fat_xross(int a4, int a5);
int gdFsFinishG(void);
int get_vmstime(int a4, int a5);
int kdSetBlockReadEx(int a4, int a5, int a6, int a7, int a8, int a9);
int kdSetGetLastErrorEx(int a4, int a5, int a6, int a7, int a8, int a9);
int pdTmrSetTimeCallback(int a4, int a5, int a6, int a7);
int pdVmsLcdIsReady(int a4);


int set_file_info(int a4, int a5)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t16;

    *(unsigned int *)((a5 + 0x4)) = (unsigned char)(*(signed char *)((a4 + 0x0)));
    t1 = (a5 + 0x10);
    t2 = (a4 + 0x4);
    for (;;) {
        t3 = *(signed char *)((t2 + 0x0));
        t2 = (t2 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = t3;
        t1 = (t1 + 0x1);
        if ((unsigned int)t1 >= (unsigned int)(a5 + 0x1C)) {
            break;
        }
    }
    *(unsigned char *)((a5 + 0x1C)) = 0x0;
    t4 = (a5 + 0x20);
    t5 = (a4 + 0x10);
    for (;;) {
        t6 = *(signed char *)((t5 + 0x0));
        t5 = (t5 + 0x1);
        *(unsigned char *)((t4 + 0x0)) = t6;
        t4 = (t4 + 0x1);
        if ((unsigned int)t4 >= (unsigned int)(a5 + 0x28)) {
            break;
        }
    }
    *(unsigned int *)((a5 + 0xC)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0x0C2EE98C) + 0xC)))))(a4, 0x2));
    *(unsigned int *)((a5 + 0x28)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0x0C2EE98C) + 0xC)))))(a4, 0x18));
    *(unsigned char *)((a5 + 0xA)) = (*(signed char *)((a4 + 0x1)));
    t16 = ((int (*)(int, int))((*(int *)(((*(int *)0x0C2EE98C) + 0xC)))))(a4, 0x1A);
    *(unsigned short *)((a5 + 0x8)) = t16;
    return t16;
}


int syRtcGetCountForce(void)
{
    int t0;
    int t1;
    int t14;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int stk[9];

    t0 = 0x0;
    for (;;) {
        t1 = syRtcAicaGetCount((((int)stk + 4) + 0x4));
        if (t1 == 0) {
            t0 = 0x1;
        }
        if (t0 != 0) {
            break;
        }
    }
    t14 = 0xFFFFFFFF;
    if (t0 == 0) {
    } else {
        t3 = 0x0;
        for (;;) {
            t4 = 0x0;
            for (;;) {
                t5 = syRtcAicaGetCount(((int)stk + 4));
                if ((t5 == 0) && (t6 = *(int *)(((int)stk + 8)), t7 = *(int *)(((int)stk + 4)), t6 == t7)) {
                    t4 = (t4 + 0x1);
                    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 4)));
                    if ((int)t4 >= (int)0x3) {
                        break;
                    }
                    continue;
                }
                break;
            }
            if (t4 == 3) {
                t3 = 0x1;
            }
            if (t3 != 0) {
                break;
            }
        }
        t14 = (*(int *)(((int)stk + 4)));
    }
    return t14;
}


int kdDevGetLCDInfo(int a4, int a5)
{
    int t0;

    t0 = kdDevGetFD(a5, 0x4);
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned short *)((a4 + 0x0)) = ((unsigned char)(*(signed char *)((t0 + 0x0))) + 0x1);
    *(unsigned short *)((a4 + 0x2)) = (((((unsigned char)(*(signed char *)((t0 + 0x1))) + 0x1) << 2) << 2) << 1);
    *(unsigned short *)((a4 + 0x4)) = (((unsigned int)((unsigned int)(unsigned char)(*(signed char *)((t0 + 0x2))) >> 2) >> 2) & 0xF);
    *(unsigned char *)((a4 + 0x6)) = (((unsigned int)((unsigned int)((unsigned int)(unsigned char)(*(signed char *)(((t0 + 0x3) + 0x0))) >> 2) >> 2) >> 2) & 0x3);
    *(unsigned char *)((a4 + 0x7)) = (((unsigned int)((unsigned int)((unsigned int)(unsigned char)(*(signed char *)(((t0 + 0x3) + 0x0))) >> 2) >> 2) >> 1) & 0x1);
    return 0x0;
}


int gdFsSetDirG(int a4)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t14;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t20;

    t1 = *(int *)((a4 + 0x0));
    t2 = *(int *)(((*(int *)0x8C20C204) + 0x10));
    t3 = *(int *)((t2 + 0x4));
    t4 = *(int *)((a4 + 0x8));
    t5 = t3;
    if ((int)t3 > (int)t1) {
        t5 = t1;
    }
    *(unsigned int *)((t2 + 0x8)) = t4;
    t14 = 0x0;
    if ((int)t5 > 0) {
        t7 = (a4 + 0x10);
        t8 = (t2 + 0x10);
        t9 = 0x0;
        for (;;) {
            t10 = t8;
            t8 = (t8 + 0x2C);
            t11 = t7;
            t7 = (t7 + 0x2C);
            gdFsMemcpy(t11, t10, 0x2C);
            t9 = (t9 + 0x1);
            if ((int)t9 >= (int)t5) {
                break;
            }
        }
        t14 = t9;
    }
    *(unsigned int *)((t2 + 0x0)) = t14;
    t20 = 0x0;
    if ((int)t3 < (int)t1) {
        t20 = 0xFFFFFFF4;
    }
    return t20;
}


int vmsfs_fseek(int a4, int a5, int a6, int a7)
{
    int t1;
    int t3;
    int t13;
    int t16;
    int t2;

    t1 = *(int *)((a4 + 0x28));
    *(unsigned int *)((a4 + 0x40)) = (*(int *)((a4 + 0x38)));
    if ((unsigned int)0x0 < (unsigned int)a5) {
        t3 = 0x0;
        for (;;) {
            if ((*(int *)((a4 + 0x40))) == 0xFFFA) {
                break;
            }
            if ((*(int *)((a4 + 0x34))) == 0) {
                return 0xFFFF0000;
            }
            t2 = 0x40;
            t3 = (t3 + 0x1);
            t2 = (t2 + a4);
            *(unsigned int *)((t2 + 0x0)) = (unsigned short)(get_fat(t1, (*(int *)((a4 + 0x40))), a6, a7));
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - 1);
            if ((unsigned int)t3 >= (unsigned int)a5) {
                return (*(int *)((a4 + 0x34)));
            }
        }
        t13 = 0xFFFF0000;
        if ((*(int *)((a4 + 0x34))) == 0) {
            t13 = 0x0;
        }
        t16 = t13;
    } else {
        t16 = (*(int *)((a4 + 0x34)));
    }
    return t16;
}


int kdDevGetStorageInfo(int a4, int a5)
{
    int t0;

    t0 = kdDevGetFD(a5, 0x2);
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned short *)((a4 + 0x0)) = ((unsigned char)(*(signed char *)((t0 + 0x0))) + 0x1);
    *(unsigned short *)((a4 + 0x2)) = (((((unsigned char)(*(signed char *)((t0 + 0x1))) + 0x1) << 2) << 2) << 1);
    *(unsigned short *)((a4 + 0x4)) = (((unsigned int)((unsigned int)(unsigned char)(*(signed char *)(((t0 + 0x2) + 0x0))) >> 2) >> 2) & 0xF);
    *(unsigned short *)((a4 + 0x6)) = ((unsigned char)(*(signed char *)(((t0 + 0x2) + 0x0))) & 0xF);
    *(unsigned short *)((a4 + 0x8)) = (((unsigned int)(unsigned char)(*(signed char *)((t0 + 0x3))) >> 7) & 0x1);
    return 0x0;
}


int check_fat_xross(int a4, int a5)
{
    int t0;
    int t3;
    int t4;
    int t7;

    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0x0C2EE990) + 0x1C))) + 0x30)))) {
            return (unsigned short)a5;
        }
        t3 = direntry(a4, t0);
        t4 = *(signed char *)((t3 + 0x0));
        if (((unsigned char)t4 != 51) && ((unsigned char)t4 != 0xCC)) {
            t0 = (t0 + 0x1);
            continue;
        }
        t7 = ((int (*)(int, int))((*(int *)(((*(int *)0x0C2EE98C) + 0xC)))))(t3, 0x2);
        if ((unsigned short)a5 == (unsigned short)t7) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return 0xFFFFFFFF;
}


int pdVmsLcdIsReady(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int stk[6];


    (*(int *)((int)stk + 4)) = a4;
    t0 = kdGetDeviceInfo(a4);
    t1 = kdDevGetLCDInfo((((int)stk + 4) + 0x4), t0);
    if (((int)t1 >= 0) && ((t2 = *(int *)((t0 + 0x0)), t2 == 14) && ((t3 = *(short *)(((int)stk + 8)), (unsigned short)t3 == 1) && ((t4 = *(short *)(((int)stk + 10)), (unsigned short)t4 == 0xC0) && ((t5 = *(short *)(((int)stk + 12)), (unsigned short)t5 == 1) && ((t6 = *(signed char *)(((int)stk + 14)), t6 == 0) && (t7 = *(signed char *)(((int)stk + 15)), t7 == 0))))))) {
        return 0x1;
    }
    return 0x0;
}
