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


int ADXF_GetFileRange(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t22;
    int t29;
    int t30;
    int t31;
    int t14;

    t0 = adxf_ChkPrmGfr(a4);
    if ((int)t0 < 0) {
        *(unsigned int *)((a6 + 0x0)) = 0xFFFFFFFF;
        *(unsigned int *)((a7 + 0x0)) = 0xFFFFFFFF;
    } else {
        t1 = *(int *)(((a4 << 2) + 0xC2B9F38));
        for (;;) {
            t2 = *(int *)((t1 + 0x0));
            if (t2 == 0) {
                t3 = *(short *)(((t1 + 0x14) + 0x0));
                if ((int)a5 > 0) {
                    t4 = (0x0 + ((t1 + 0x14) + 0x2));
                    t5 = 0x0;
                    t6 = (unsigned short)t3;
                    for (;;) {
                        t7 = *(short *)((t4 + 0x0));
                        t4 = (t4 + 0x2);
                        t5 = (t5 + 0x1);
                        t6 = (t6 + (unsigned short)t7);
                        if ((int)t5 >= (int)a5) {
                            break;
                        }
                    }
                    t8 = *(int *)((t1 + 0x8));
                    *(unsigned int *)((a6 + 0x0)) = (t6 + t8);
                    t9 = *(short *)((((t1 + 0x14) + 0x2) + (a5 << 1)));
                    *(unsigned int *)((a7 + 0x0)) = (unsigned short)t9;
                    return t0;
                }
                t10 = *(int *)((t1 + 0x8));
                *(unsigned int *)((a6 + 0x0)) = ((unsigned short)t3 + t10);
                t11 = *(short *)((((t1 + 0x14) + 0x2) + (a5 << 1)));
                *(unsigned int *)((a7 + 0x0)) = (unsigned short)t11;
                return t0;
            }
            t12 = (t1 + 0x14);
            t13 = t2;
            t15 = t1;
            t16 = a5;
            t17 = 0x0;
            for (;;) {
                t18 = *(short *)((t15 + 0x10));
                if ((int)t17 >= (int)(unsigned short)t18) {
                    t19 = *(int *)((t15 + 0x0));
                    t15 = t19;
                    t13 = *(int *)((t15 + 0x0));
                    if (t13 == 0) {
                        t16 = t15;
                        t16 = (t16 + 0x14);
                        t17 = *(short *)((t16 + 0x0));
                        t12 = t16;
                        t16 = 0x0;
                        t17 = (unsigned short)t17;
                        t12 = (t12 + 0x2);
                        if ((int)a5 > 0) {
                            t22 = (0x0 + t12);
                            for (;;) {
                                t14 = *(short *)((t22 + 0x0));
                                t22 = (t22 + 0x2);
                                t16 = (t16 + 0x1);
                                t14 = (unsigned short)t14;
                                t17 = (t17 + t14);
                                if ((int)t16 >= (int)a5) {
                                    break;
                                }
                            }
                            t14 = *(int *)((t15 + 0x8));
                            t17 = (t17 + t14);
                            *(unsigned int *)((a6 + 0x0)) = t17;
                            t14 = *(short *)((t12 + (a5 << 1)));
                            t14 = (unsigned short)t14;
                            *(unsigned int *)((a7 + 0x0)) = t14;
                            return t0;
                        }
                        t14 = *(int *)((t15 + 0x8));
                        t17 = (t17 + t14);
                        *(unsigned int *)((a6 + 0x0)) = t17;
                        t14 = *(short *)((t12 + (a5 << 1)));
                        t14 = (unsigned short)t14;
                        *(unsigned int *)((a7 + 0x0)) = t14;
                        return t0;
                    }
                    t12 = t15;
                    t12 = (t12 + 0x14);
                    t17 = 0x0;
                    continue;
                }
                t16 = t17;
                t16 = (t16 << 2);
                t16 = (t16 << 1);
                t16 = (t16 + t12);
                t14 = *(short *)((t16 + 0x0));
                t14 = (unsigned short)t14;
                if (t14 == a5) {
                    break;
                }
                t17 = (t17 + 0x1);
            }
            break;
        }
        t29 = *(int *)((t15 + 0x8));
        t30 = *(int *)((t16 + 0x4));
        *(unsigned int *)((a6 + 0x0)) = (t29 + t30);
        t31 = *(short *)((t16 + 0x2));
        *(unsigned int *)((a7 + 0x0)) = (unsigned short)t31;
    }
    return t0;
}


