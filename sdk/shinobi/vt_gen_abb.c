/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_abb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
int ADXERR_CallErrFunc(int, ...);
int ADXSTMF_Create(int, int, int, int);
int cpuSglPointInit(void);
int cpuDblPointInit(int, int, int, int);
int btnGuideDrawB(int, Stk3, float);
int gdFsClose(int);
int gdFsGetFileSize(int, int);
int gdFsInitOvl(void);
int gdFsOpen(int, int);
int getID_Color(int, float);
int hudFontNumPut(int, Stk3, float);
int hudSignFirstPut(int, Stk3, float);
int infoPlayerDraw(int, int, int, int, Stk3, float, float, float);
int menuTextMsgPut(int, Stk3, float);
int menuTextNumPut(int, Stk3, float);
int menuTextTimePut(int, Stk3, Stk1, float);
int panelDrawB(Stk3, float);
int panelDrawC(Stk3, float);
int panelLogoPut(Stk3);
int resultBoxDraw(int, int, Stk3);
int resultSideDraw(int, Stk3, float);
int sprPutAtAlpha(int, Stk3, float);
int strncpy(int, int, int);
Stk3 vecMake(float, float, float);
int resultDraw(int a4, int a5, int a6, float f4);
int ADXSTM_OpenFname(int a4, int a5);
int infoPlayerDrawWrap(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5, float f6);
int nlObjPut_vtxcolbridge(void);
void sceneVecStub(void);
int gdFsReqDrvStat(void);
int gdFsLoadDir(void);
int gdFsGetDirInfo(void);
void gdFsExecServer(void);
void gdFsEntryErrFuncAll(void);
int cpuInitPoint(int a4, int a5, int a6, int a7);
void ADXERR_EntryErrFunc(int a4, int a5);
int gdFsInit(void);


int gdFsReqDrvStat(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0x0C177A98;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x58));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}


int gdFsLoadDir(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0x0C177A98;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x20));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}


int gdFsGetDirInfo(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0x0C177A98;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x2C));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}


void gdFsExecServer(void)
{
    register int t0;

    t0 = *(int *)0x0C177A98;
    if (t0 != 0) {
        ((int (*)(void))((*(int *)((t0 + 0x48)))))();
    return;
    }
}


void gdFsEntryErrFuncAll(void)
{
    register int t0;

    t0 = *(int *)0x0C177A98;
    if (t0 != 0) {
        ((int (*)(void))((*(int *)((t0 + 0x74)))))();
    return;
    }
}
