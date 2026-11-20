/* Straight-line functions with calls and guards (batch gen_dt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckColliWallBox(int, int, float);
int GetLightVector(int);
int ChangeObjGroup(int, int);
int Result_Money_Digit_Put(void);
int nlMvSetWorkBuffer(int, int);
int nlMvCalcEdgeA(int, int);
int nlMvCalcEdgeB(int, int, int);
int nlMvPutPolygon(int, int, int, int);
int nlMvPutStrip(int, int);
int nlMvEndList(void);
int nlMvSetShadowObjPutPol(int);
int nlMvNotShadowObjPutPol(int);
int nlsndSeqRequest(void);
int Sound_Request(int, int);
int adxf_ChkPrmGfr(int);
extern float getNearLineIndex();
int kmiCopyFromFrameBuffer(int, int, int);
int kmtex_GetTextureLevel(int, int);
float nlLength(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutSetVtxColorMode(int);
int nlSprPut(int);
int kmtex_ConvertSmallVQFromMem(int a4, int a5, int a6, int a7);
int lcdSetData(int a4, int a5, int a6, int a7, int a8);
int ADXF_GetFileRange(int a4, int a5, int a6, int a7);
int nd_StartWait_PutMessage(void);
int menuCursor(int a4, int a5, int a6);
int nlMvObjPutSub(int a4, int a5);
int Result_Money_Put(void);
int menuCursorBox(int a4, int a5, int a6);
int InitMV(void);
int kmiFBgetfreemem(int a4, int a5, int a6, int a7);
float navi_GetRouteTbl(int a4, int a5, int a6);
float ExecColliObj(int a4, int a5, float f4);
void navi_GetRouteYa(int a4);
struct o0_int { int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o4_int { char p[0x4]; int v; };


int kmtex_ConvertSmallVQFromMem(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t6;
    int t7;

    t0 = kmtex_GetTextureLevel(a6, a6);
    if ((a7 & 1) != 0) {
        t7 = *(int *)(((t0 << 2) + 0xC175DE0));
        t2 = *(int *)(((t0 << 2) + 0xC175ED8));
        t6 = (t2 + 0xA);
    } else {
        t7 = *(int *)(((t0 << 2) + 0xC175DC4));
        t6 = *(int *)(((t0 << 2) + 0xC175EAC));
    }
    kmiCopyFromFrameBuffer(a4, a5, t7);
    return kmiCopyFromFrameBuffer((a4 + t7), (a5 + 0x800), t6);
}


