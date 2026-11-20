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


void nlCalcVector(int a4, int a5)
{
    float u0;
    float u1;
    float u2;
    float u3[4];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x4) + 0x0));
    u2 = *(float *)((((a4 + 0x4) + 0x4) + 0x0));
    u3[0] = u0;
    u3[1] = u1;
    u3[2] = u2;
    u3[3] = 0.0f;
    _builtin_ftrv(u3, u3);
    *(float *)((((a5 + 0xC) - 0x4) + 0x0)) = u3[2];
    *(float *)(((((a5 + 0xC) - 0x4) - 0x4) + 0x0)) = u3[1];
    *(float *)((((((a5 + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[0];
}


