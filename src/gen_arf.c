/* Straight-line functions with calls and guards (batch gen_arf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXF_GetFileRange(int, int, int, int);
int ADXSTMF_Create(int, int, int, int);
int ADXSTM_OpenRange(int, int, int);
int ADXT_Stop(int);
extern void _builtin_set_imask(int);
int adxt_start_stm(int);
int gdFsClose(int);
int gdFsGetFileSize(int, int);
int gdFsOpen(int, int, int, int);
int kmInitDevice(int);
int kmSetCullingRegister(float);
int kmSetDisplayMode(int, int, int, int);
int kmSetPALEXTCallback(int);
int kmSetWaitVsyncCount(int);
int nlSetFatalErrorMode(int);
int nlSetWindowSize(float, float, float, float);
int nlSysInitStripContextBG(int);
int nlSysInitStripContextVtx(int);
int nl_system_config_init(int);
int strncpy(int, int, int);
int sys_init(void);
void nlInitLibrary0(int a4, int a5, int a6);
int ADXSTM_OpenFname(int a4, int a5, int a6, int a7);
int ADXT_StartAfs(int a4, int a5, int a6);

void nlInitLibrary0(int a4, int a5, int a6)
{
    int t24;
    int t25;
    int t30;
    int t28;

    *(unsigned int *)0xC2AED98 = 0x0;
    if (a4 == 0) {
        *(unsigned int *)0xC2AED98 = 0x1;
    }
    *(unsigned int *)0xC2AED9C = 0x0;
    if ((a4 == 25) || ((a4 == 24) || ((a4 == 26) || (a4 == 27)))) {
        *(unsigned int *)0xC2AED9C = 0x1;
    }
    _builtin_set_imask(0xE);
    if ((int)(*(int *)0xA05F689C) >= (int)0x8) {
        *(unsigned int *)0xC2AED40 = 0x1;
    } else {
        *(unsigned int *)0xC2AED40 = 0x0;
    }
    _builtin_set_gbr((void *)(0xC2B7BC0));
    sys_init();
    *(unsigned short *)0xC2B3194 = 0x0;
    *(unsigned short *)0xC2B3196 = 0x0;
    if ((0x80 & a5) != 0) {
        *(unsigned short *)0xC2B3194 = 0x1;
    }
    if ((0x8000 & a5) != 0) {
        *(unsigned short *)0xC2B3196 = 0x1;
    }
    *(unsigned int *)0xC2AEDB8 = (*(int *)((((a5 & 0xF) << 2) + 0xC0D63D4)));
    kmInitDevice((*(int *)(((((a4 << 1) + a4) << 2) + 0xC0D6284))));
    if ((*(int *)0xC2AED9C) == 1) {
        kmSetPALEXTCallback(0xC074310);
    }
    kmSetDisplayMode((*(int *)((((((a4 << 1) + a4) << 2) + 0xC0D6284) + 0x4))), (*(int *)0xC2AEDB8), (*(short *)0xC2B3194), (*(short *)0xC2B3196));
    *(unsigned short *)0xC2B3190 = (*(short *)((((((a4 << 1) + a4) << 2) + 0xC0D6284) + 0x8)));
    *(unsigned short *)0xC2B3192 = (*(short *)((((((a4 << 1) + a4) << 2) + 0xC0D6284) + 0xA)));
    nlSysInitStripContextBG(0xC2AF388);
    nlSysInitStripContextVtx(0xC2B29C8);
    *(unsigned int *)0xC2B2FC8 = 0xC2B29C8;
    *(unsigned int *)0xC2B2FCC = 0x0;
    *(unsigned int *)0xC2B3180 = 0xFFFFFFFF;
    *(unsigned int *)0xC2B3188 = 0x0;
    *(unsigned int *)0xC2B3198 = 0x0;
    *(unsigned int *)0xC2B317C = 0x0;
    *(float *)0xC2B31AC = 0.0f;
    *(float *)0xC2B31B0 = 0.0f;
    *(float *)0xC2B31B4 = 0.0f;
    *(float *)0xC2B31B8 = 0.0f;
    *(unsigned int *)0xC2B319C = 0x0;
    *(unsigned int *)0xC2B31A0 = 0x0;
    *(unsigned int *)0xC2B31A4 = 0x0;
    *(unsigned int *)0xC2B31A8 = 0x0;
    *(float *)0xC2B7BE8 = 1.0f;
    *(unsigned int *)0xC2B7C04 = 0x0;
    t24 = *(short *)0xC2B3192;
    t25 = *(short *)0xC2B3190;
    if (0x0 != 0) {
        t30 = (short)t24;
        if ((*(short *)0xC2B3196) == 1) {
            t28 = ((short)t24 + (short)t24);
            if ((int)((short)t24 + (short)t24) > (int)0x1E0) {
                t28 = 0x1E0;
            }
            t30 = t28;
        }
        nlSetWindowSize(0.0f, 0.0f, (float)t25, (float)t30);
    } else {
        nlSetWindowSize(0.0f, 0.0f, (float)t25, (float)(short)t24);
    }
    kmSetCullingRegister((*(float *)0xC074A34));
    *(unsigned int *)0xFF000038 = 0xC;
    *(unsigned int *)0xFF00003C = 0xC;
    *(unsigned int *)0xC2AEDA0 = a6;
    kmSetWaitVsyncCount(a6);
    nl_system_config_init(0x200000);
    nlSetFatalErrorMode(0x0);
    *(unsigned int *)0xC2AEDC0 = 0x0;
    _builtin_set_imask(0x0);
}

int ADXSTM_OpenFname(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t7;
    int t14;
    int t11;
    int stk[8];

    *(unsigned int *)(((int)stk + 16)) = a5;
    t0 = gdFsOpen(a4, 0x0, a6, a7);
    if (t0 == 0) {
        ADXERR_CallErrFunc(0xC176454, a4);
        t14 = 0x0;
    } else {
        t2 = gdFsGetFileSize(t0, ((int)stk + 12));
        if (t2 == 0) {
            ADXERR_CallErrFunc(0xC176484);
            gdFsClose(t0);
            t11 = 0x0;
        } else {
            t7 = ADXSTMF_Create(t0, 0x0, (*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 16))));
            if (t7 != 0) {
                strncpy((t7 + 0x40), a4, 0x20);
            }
            t11 = t7;
        }
        t14 = t11;
    }
    return t14;
}

int ADXT_StartAfs(int a4, int a5, int a6)
{
    int t8;
    int stk[10];

    *(unsigned int *)(((int)stk + 24)) = a5;
    *(unsigned int *)(((int)stk + 28)) = a6;
    ADXT_Stop(a4);
    ADXCRS_Lock();
    ADXF_GetFileRange((*(int *)(((int)stk + 24))), (*(int *)(((int)stk + 28))), ((int)stk + 16), (((int)stk + 16) + 0x4));
    t8 = ADXSTM_OpenRange((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 20))), (*(int *)((a4 + 0x10))));
    *(unsigned int *)((a4 + 0x8)) = t8;
    if (t8 == 0) {
        ADXCRS_Unlock();
        ADXERR_CallErrFunc(0xC175458, ((*(int *)(((int)stk + 24)))), ((*(int *)(((int)stk + 28)))));
    } else {
        adxt_start_stm(a4);
    }
    return (ADXCRS_Unlock());
}
