/* Straight-line functions with calls and guards (batch gen_cc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXPD_SetCoef(int, int, int);
int ADX_DecodeInfo(int, int);
int ADX_DecodeInfoExADPCM2(int, int);
int ADX_DecodeInfoExLoop(int, int, int, int, int, int, int, int, int);
int CheckKyakuArea(int, int);
int num2char(int);
int char2num(int);
int PutRecords(int, int, int, int, int, int, float, float);
int SetTotalRecords(void);
int SeachRankTotal(int, int, int);
int CheckRanking(int);
int Start_Excellent(void);
int Start_Fault(int);
int Wobble_Record_Window(void);
int Put_Window_SpriteXtoY(int, int, int, int, float, float, float, float);
int Start_CrazyBox_Voice(int);
int pfTextPut(int, int);
int pfTextCenterPut(int, int);
int pfCrazyBoxRecordTimePut(int, int, int);
int pfCrazyBoxRecordDistPut(int, int, int, float);
int pfCrazyBoxRecordComboPut(int, int, int);
int nlsndSeqRequest(void);
int kmiExCallBackFunc(int);
int kmiEndOfRenderISR(void);
int kmiErrorISR04(void);
int kmiErrorISR08(void);
int kmiErrorISR02(void);
int mwRnaFinishCs(void);
int PutStringFixPfont(int, int, float, float, float, float);
int PutVM_Message(int, int, int, float, float);
extern void _builtin_ftrv(float *, float *);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };

int kmiExecuteDMAChain(void);
int kmiFatalErrorEntry(int);
int kmiFinalizeRender(void);
int memset(int, int, int);
int mwRnaDestroy(int);
int mwRnaStop(int);
int nlSprPut(int);
int pfColor(int, int, int, int);
int pfSetFont(int);
int pfSize(float, float);
int putString(int, int, float, float, float);
int thunk_callTryAgain(void);
void kmiPurgeCache(int a4);
void nlCalcVector(int a4, int a5);
int mwRnaFinish(void);
int Exec_Fault(void);
int ADXB_DecodeHeaderAdx(int a4, int a5, int a6);
int EditEntryName(int a4);
int kmiInterruptHandlerSH(void);
int Exec_Check_Point(void);
int Put_Record_Window(void);


int mwRnaFinish(void)
{
    int t0;
    int t1;
    int t2;
    int t5;
    int t6;
    int t7;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;

    t0 = 0xC2F605C;
    t1 = 0xC2F605C;
    do {
        t2 = *(signed char *)((t1 + 0x0));
        if ((unsigned char)t2 == 1) {
            mwRnaStop(t0);
        }
        t1 = (t1 + 0x90);
        t0 = (t0 + 0x90);
    } while ((unsigned int)t1 < (unsigned int)0xC2F64DC);
    t5 = 0xC2F605C;
    t6 = 0xC2F605C;
    do {
        t7 = *(signed char *)((t6 + 0x0));
        if ((unsigned char)t7 == 1) {
            mwRnaDestroy(t5);
        }
        t6 = (t6 + 0x90);
        t5 = (t5 + 0x90);
    } while ((unsigned int)t6 < (unsigned int)0xC2F64DC);
    memset(0xC2F605C, 0x0, 0x480);
    memset(0xC2F64DC, 0x0, 0x820);
    t12 = 0x0;
    t13 = 0xC2F6CFC;
    do {
        t12 = (t12 + 0x1);
        *(unsigned int *)((t13 + 0x0)) = 0x80808080;
        t13 = (t13 + 0x4);
    } while ((int)t12 < (int)0x200);
    t14 = *(int *)0xC178644;
    t15 = *(int *)((t14 + 0x10));
    t16 = ((int (*)(int, int, int, int))(t15))(t12, 0x80808080, 0x200, t13);
    return mwRnaFinishCs();
}


