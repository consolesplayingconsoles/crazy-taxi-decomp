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
struct o0_float { float v; };
struct o0_uint { unsigned int v; };
struct o14_short { char p[0x14]; short v; };
struct o14_ushort { char p[0x14]; unsigned short v; };
struct o16_short { char p[0x16]; short v; };
struct o16_ushort { char p[0x16]; unsigned short v; };
struct o18_short { char p[0x18]; short v; };
struct o18_ushort { char p[0x18]; unsigned short v; };
struct o1A_short { char p[0x1A]; short v; };
struct o1A_ushort { char p[0x1A]; unsigned short v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int ADXSTM_OpenFname(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t14;
    int stk[5];

    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = gdFsOpen(a4, 0x0, a6, a7);
    if (t0 == 0) {
        ADXERR_CallErrFunc(0xC176454, a4);
        t14 = 0x0;
    } else {
        t2 = gdFsGetFileSize(t0, ((int)stk + 0));
        if (t2 == 0) {
            ADXERR_CallErrFunc(0xC176484);
            gdFsClose(t0);
            t14 = 0x0;
        } else {
            t14 = ADXSTMF_Create(t0, 0x0, (*(int *)(((int)stk + 0))), (*(int *)(((int)stk + 4))));
            if (t14 != 0) {
                strncpy((t14 + 0x40), a4, 0x20);
            }
        }
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
