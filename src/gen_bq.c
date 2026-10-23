/* Straight-line functions with calls and guards (batch gen_bq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlObjPutFreeTextureOnce_Sub(int, int, int);
int nlObjPutFreeTextureOnce(int a4);
int syBtFlGetInfo(int a4, int a5, int a6);
int kbCfgIni_sub(int a4, int a5, int a6);
int kbCfgGetId(int a4, int a5, int a6);
int syBtFlRead(int a4, int a5, int a6);
int syBtFlWrite(int a4, int a5, int a6);
int syBtFlDeleteSct(int a4, int a5, int a6);
int gdGdcInitSystem(int a4, int a5);
int gdGdcGetCmdStat(int a4, int a5);
int gdGdcExecServer(int a4, int a5);
int gdGdcReqCmd(int a4, int a5);
int gdGdcGetDrvStat(int a4, int a5);

int nlObjPutFreeTextureOnce(int a4)
{
    return nlObjPutFreeTextureOnce_Sub(a4, 0x0, 0x0);
}

int syBtFlGetInfo(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x0);
}

int kbCfgIni_sub(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B0;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x0);
}

int kbCfgGetId(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B0;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x3);
}

int syBtFlRead(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x1);
}

int syBtFlWrite(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x2);
}

int syBtFlDeleteSct(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x3);
}

int gdGdcInitSystem(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x3);
}

int gdGdcGetCmdStat(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x1);
}

int gdGdcExecServer(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x2);
}

int gdGdcReqCmd(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x0);
}

int gdGdcGetDrvStat(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x4);
}
