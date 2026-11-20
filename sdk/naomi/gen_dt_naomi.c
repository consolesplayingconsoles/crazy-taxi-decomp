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


int nlMvObjPutSub(int a4, int a5)
{
    int t0;
    int t2;
    int t4;
    int t5;
    int t8;
    int t9;
    int t10;
    float u12;
    float u13;
    int t14;
    int t16;
    float u17;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    float u28;
    float u29;
    float u30;
    int t31;
    int t32;
    int t35;
    int t36;
    int t37;
    int t39;
    int t40;
    float u25;
    float u26;

    t0 = *(short *)((a4 + 0xE));
    t5 = (((struct o0_int *)0xC2B766C)->v);
    t2 = ((unsigned int)t0 >> 2);
    if ((t0 & 0x3) != 0) {
        t2 = (((unsigned int)t0 >> 2) + 0x1);
    }
    if ((int)t2 > 0) {
        t4 = 0x0;
        for (;;) {
            t4 = (t4 + 0x1);
            *(unsigned int *)((t5 + 0x0)) = 0x0;
            t5 = (t5 + 0x4);
            if ((int)t4 >= (int)t2) {
                break;
            }
        }
    }
    t8 = *(int *)((a5 + 0x0));
    if ((t8 & 1) == 0) {
        t9 = *(short *)((a4 + 0xC));
        t10 = *(int *)((a4 + 0x0));
        nlMvCalcEdgeA(t10, t9);
    } else {
        u12 = (((struct o20_float *)0xC2B766C)->v);
        u13 = (((struct o24_float *)0xC2B766C)->v);
        t14 = *(short *)((a4 + 0x10));
        t23 = *(int *)((a4 + 0x8));
        t16 = *(int *)((a4 + 0x0));
        u17 = (((struct o1C_float *)0xC2B766C)->v);
        t22 = (((struct o4_int *)0xC2B766C)->v);
        t19 = t14;
        t20 = (t14 + 0x1);
        t21 = 0xC2B7670;
        t24 = 0xC2B7688;
        for (;;) {
            t20 = (t20 - 0x1);
            if (t20 == 0) {
                break;
            }
            t19 = *(short *)((t23 + 0xC));
            t24 = t16;
            u25 = u17;
            t23 = (t23 + 0x18);
            t21 = t19;
            t19 = (t19 << 1);
            t19 = (t19 + t21);
            t19 = (t19 << 2);
            t24 = (t24 + t19);
            u28 = *(float *)((t24 + 0x0));
            u26 = u28;
            t19 = 0x4;
            u25 = (u25 - u26);
            *(float *)((t22 + 0x0)) = u25;
            u29 = *(float *)((t24 + t19));
            u26 = u29;
            u25 = u12;
            u25 = (u25 - u26);
            *(float *)((t22 + t19)) = u25;
            t19 = 0x8;
            u30 = *(float *)((t24 + t19));
            u26 = u30;
            u25 = u13;
            u25 = (u25 - u26);
            *(float *)((t22 + t19)) = u25;
            t22 = (t22 + 0xC);
        }
        t31 = *(short *)((a4 + 0xC));
        t32 = *(int *)((a4 + 0x0));
        nlMvCalcEdgeB(t32, t31, a5);
    }
    t35 = *(short *)((a4 + 0x10));
    t36 = *(int *)((a4 + 0x4));
    t37 = *(int *)((a4 + 0x8));
    nlMvPutPolygon(t37, t35, t36, a5);
    t39 = *(short *)((a4 + 0xE));
    t40 = *(int *)((a4 + 0x4));
    nlMvPutStrip(t40, t39);
    return nlMvEndList();
}


