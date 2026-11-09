extern int setObjGroupExec();
/* Straight-line functions with calls and guards (batch gen_ac): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckClipping(int, float);
int Drv_Init(void);
int Drv_StartAction(int, int, int);
int ExecArrow(int, float);
float carSlipRatio(int, float, float);
float carGripCurve(float);
int gdc_CarSoundLoad(void);
int gdc_SpriteSetMBox(void);
int NextWindow(int);
int windowOpenStep(int);
int windowEnterStep(int);
int callSaveData(int);
int GetNowLanguage(int);
int CheckRanking(int);
int CourseTableSet(int);
int Init_Adv_Sprite(void);
int Move_Balloon(int);
int Chat_Init(void);
int psgFaceBoyFriend(int);
int psgUpdatePartTracks(int);
int psgPutMarker(int, int);
int Voice_Clear(void);
int nlCalcVector(int, int);
int memcmp(int, int, int);
int FcvStoreBuffer(int, int, float);
int GetRotVec(int);
int InitArrow(int, int, int);
int IsBoyFriend(int, int);
int KillColliObj(int);
int PcarInit(int, int, int);
int PutStringFixPfont(int, int, float, float, float, float);
int PutVM_Message(int, int, int, float, float);
int ResetFadeColor(void);
int MultiRot4Vec(int);
int SetObjFly(int);
int Sound_Init(void);
int Sound_Request(int, int);
int Start_Fog(int);
int courseCarType(int);
int courseStatusGet(int, int, int, int);
int frameFlip(void);
int gdc_FileLoad(int, int, int);
int gdc_SpriteSetGame(void);
int gdc_StopStreamSongAll(void);
float getNearLineIndex(int, int, int, int, int);
int humanDraw(int, int, int, int);
int kmFreeTexture(int);
int kmProcessVertexRenderState(int);
int kmSetVertexRenderState(int);
int RinAqua_Init(void);
int loadCity(int, int);
int memmove(int, int, int);
int menuCursor(int, int, int);
int menuEnterStep(void);
int menuOpenStep(void);
int menuPutFrame(void);
int menuPutHelpBar(int, float, float);
int nlCloseEvent(int);
int nlCommonTextureClearTextureIndex(int);
float nlCos(int);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
float nlLength(int, int);
int nlLineBlendFunc(int, int, int, int);
int nlLineSetDiv(float);
int nlLineSetThickness(float);
int nlMalloc(int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutSetFadeColorBase(float, float, float);
int nlObjPutUseViewMatrix(int);
int nlObjPutUseViewMatrixTrnsl(int, float);
int nlPopMatrix(int);
float nlPow(float, float);
int nlPushMatrix(int);
int nlRand(void);
int nlRotate(int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
float nlRoundUp(float);
int nlScale(float, float, float);
int nlScaleVector(int, int, float);
float nlScalor(int);
int nlSetScaleFactor(float);
float nlTan(int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int pfColor(int, int, int, int);
float pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);
int psgFaceTaxi(int);
int psgPutShadow(int);
int putLevelCTFontAssist(int, int, int, int, int);
int putString(int, int, float, float, float);
int rinRandomSeed(int);
int setObjGroupOpen(int);
int setObjPlace(int, int);
int set_event(int, int);
int stopingCarSpawn(int, int);
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o90_int { char p[0x90]; int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o38_int { char p[0x38]; int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };






















int EndPsg_ClearIpBuff(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        *(unsigned int *)((0xC2AD594 + (t0 << 2))) = 0x0;
        t1 = FcvStoreBuffer(0xC9726F4, ((short)((short)t0 * (short)0xCC) + 0xC2AD5B8), 0.0f);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x9);
    return t1;
}


float nlCot(int a4)
{
    float t0;

    if ((unsigned short)a4 != 0) {
        if ((unsigned short)a4 != 0x4000) {
            if ((unsigned short)a4 == 0x8000) {
                return 3.40282347e+38f;
            }
            if ((unsigned short)a4 == 0xC000) {
                return 0.0f;
            }
            t0 = nlTan((unsigned short)a4);
            return (1.0f / t0);
        }
        return 0.0f;
    }
    return 3.40282347e+38f;
}

float nlSec(int a4)
{
    float t0;

    if ((unsigned short)a4 != 0x4000) {
        if ((unsigned short)a4 == 0xC000) {
            return 3.40282347e+38f;
        }
        t0 = nlCos((unsigned short)a4);
        return (1.0f / t0);
    }
    return 3.40282347e+38f;
}

void nlLocate(int a4, int a5)
{
    int t0;
    int t1;
    float u2;
    int t3;
    float u4;
    float u5;
    int t6;
    int t7;
    float u8;
    float u9;

    t0 = (((struct o8_int *)0xC2AF0C0)->v);
    t1 = *(int *)0xC14A7B8;
    if (t1 == 0) {
        u2 = (((struct o8_float *)0xC14A824)->v);
        (((struct o0_uint *)0xC2AF0C0)->v) = (int)((float)(t0 * a4) + u2);
        (((struct o10_uint *)0xC2AF0C0)->v) = (int)((float)(t0 * a4) + u2);
        t3 = (((struct oC_int *)0xC2AF0C0)->v);
        u4 = (((struct oC_float *)0xC14A824)->v);
        (((struct o4_uint *)0xC2AF0C0)->v) = (int)((float)(t3 * a5) + u4);
    } else {
        u5 = (((struct oC_float *)0xC14A824)->v);
        (((struct o0_uint *)0xC2AF0C0)->v) = (int)((float)(t0 * a4) + u5);
        (((struct o10_uint *)0xC2AF0C0)->v) = (int)((float)(t0 * a4) + u5);
        t6 = (((struct oC_int *)0xC2AF0C0)->v);
        t7 = *(short *)0xC2B3190;
        u8 = (((struct o0_float *)0xC14A824)->v);
        u9 = (((struct o8_float *)0xC14A824)->v);
        (((struct o4_uint *)0xC2AF0C0)->v) = (int)(((float)((t6 * a5) + t7) - u9) - u8);
    }
}

void nlRenderTextureFree(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t16;
    int t17;
    int t18;

    t0 = (((struct o3C_int *)0xC2B3184)->v);
    t1 = (((struct o38_int *)0xC2B3184)->v);
    if ((unsigned int)a4 <= (unsigned int)t0) {
        t2 = *(int *)(((t1 + ((a4 << 2) << 2)) + 0x0));
        if ((int)t2 >= 0) {
            *(unsigned int *)(((t1 + ((a4 << 2) << 2)) + 0x0)) = 0xFFFFFFFF;
            *(unsigned int *)(((t1 + ((a4 << 2) << 2)) + 0x4)) = 0xFFFFFFFF;
            t3 = (((struct o0_int *)0xC2B3184)->v);
            t4 = *(int *)0xC2AEC84;
            t5 = *(int *)((((((t2 + t3) << 2) << 1) + t4) + 0x0));
            if (t5 != 0) {
                *(unsigned int *)(((t4 + (((t2 + t3) << 2) << 1)) + 0x0)) = 0x0;
                t6 = *(int *)0xC2AEC84;
                t7 = *(int *)(((t6 + (((t2 + t3) << 2) << 1)) + 0x4));
                *(unsigned int *)(((t6 + (((t2 + t3) << 2) << 1)) + 0x4)) = 0xFFFFFFFF;
                nlCommonTextureClearTextureIndex(t7);
                t9 = *(int *)0xC2B29C0;
                t10 = *(int *)(((t9 + (t7 * 0x3C)) + 0x2C));
                if (t10 != 0) {
                    t11 = *(int *)0xC2B29C0;
                    t12 = *(int *)(((t11 + (t7 * 0x3C)) + 0x28));
                    if (t12 == 0) {
                        t13 = *(int *)0xC2B29C0;
                        kmFreeTexture((t13 + (t7 * 0x3C)));
                    }
                    t16 = *(int *)0xC2B29C0;
                    *(unsigned int *)(((t16 + (t7 * 0x3C)) + 0x28)) = 0xFFFFFFFF;
                    t17 = *(int *)0xC2B29C0;
                    *(unsigned int *)(((t17 + (t7 * 0x3C)) + 0x2C)) = 0x0;
                    t18 = *(int *)0xC2B29C0;
                    *(unsigned int *)(((t18 + (t7 * 0x3C)) + 0x38)) = 0xFFFFFFFF;
                }
            }
        }
    }
}

int nlstripSetVertexContextTex(int a4, int a5)
{
    int t0;
    int t1;
    int t88;
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
    int t14;
    int t15;
    int t16;
    int t17;
    int t45;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t74;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t84;
    int t85;
    int t86;
    int t73;
    int t39;
    int t67;

    t0 = *(int *)0xC2AEC84;
    t1 = *(int *)(((((a5 << 2) << 1) + t0) + 0x0));
    t88 = 0x1;
    if (t1 != 0) {
        t2 = *(int *)(((((a5 << 2) << 1) + t0) + 0x4));
        t3 = *(int *)0xC2B29C0;
        t4 = *(int *)0xC2B2FC8;
        (((struct o6C_uint *)(t4))->v) = (t3 + (t2 * 0x3C));
        t5 = *(int *)0xC2B2FC8;
        *(unsigned int *)((t5 + 0x0)) = 0x600608;
        t6 = *(int *)((a4 + 0x0));
        t7 = *(int *)0xC2B2FC8;
        *(unsigned int *)((t7 + 0x8)) = t6;
        t8 = *(int *)(((a4 + 0x4) + 0x0));
        t9 = *(int *)0xC2B2FC8;
        *(unsigned int *)((t9 + 0xC)) = t8;
        t10 = *(int *)((((a4 + 0x4) + 0x4) + 0x0));
        t11 = *(int *)0xC2B2FC8;
        *(unsigned int *)((t11 + 0x20)) = t10;
        t12 = *(int *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x0));
        t13 = *(int *)0xC2B2FC8;
        (((struct o44_uint *)(t13))->v) = t12;
        t14 = *(int *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        t15 = *(int *)0xC2B2FC8;
        (((struct o40_uint *)(t15))->v) = t14;
        t16 = *(int *)0xC2B29C0;
        t17 = *(int *)(((t16 + (t2 * 0x3C)) + 0x34));
        if ((((int)t17 >> 27) & 0x7) != 5) {
            t45 = t2;
            if ((((int)t17 >> 27) & 0x7) == 6) {
                t18 = *(int *)0xC2B2FC8;
                t19 = *(int *)((t18 + 0x0));
                *(unsigned int *)((t18 + 0x0)) = (t19 | 0x80000);
                t20 = *(int *)0xC14A644;
                t21 = (((struct o0_int *)0xC2B7940)->v);
                if (t20 != 0) {
                    t22 = *(int *)0xC2B2FC8;
                    (((struct o68_uint *)(t22))->v) = t21;
                    t39 = t2;
                } else {
                    t23 = (((struct o0_short *)0xC2B7BC4)->v);
                    if ((int)t21 < (int)t23) {
                        t24 = (((struct o14_int *)0xC2B7BC4)->v);
                        t25 = *(short *)(((((t21 << 2) << 1) + t24) + 0x4));
                        if (t25 != 0) {
                            t26 = *(short *)(((((t21 << 2) << 1) + t24) + 0x0));
                            t27 = *(int *)0xC2B2FC8;
                            (((struct o68_uint *)(t27))->v) = t26;
                        }
                    }
                    t39 = 0xC2B7BC0;
                }
                t45 = t39;
            }
            t73 = t45;
        } else {
            t46 = *(int *)0xC2B2FC8;
            t47 = *(int *)((t46 + 0x0));
            *(unsigned int *)((t46 + 0x0)) = (t47 | 0x80000);
            t48 = *(int *)0xC14A644;
            t49 = (((struct o0_int *)0xC2B7940)->v);
            if (t48 != 0) {
                t50 = *(int *)0xC2B2FC8;
                (((struct o68_uint *)(t50))->v) = t49;
                t67 = t2;
            } else {
                t51 = (((struct o0_short *)0xC2B7BC4)->v);
                if ((int)t49 < (int)t51) {
                    t52 = (((struct o14_int *)0xC2B7BC4)->v);
                    t53 = *(short *)(((((t49 << 2) << 1) + t52) + 0x4));
                    if (t53 != 0) {
                        t54 = *(short *)(((((t49 << 2) << 1) + t52) + 0x0));
                        t55 = *(int *)0xC2B2FC8;
                        (((struct o68_uint *)(t55))->v) = t54;
                    }
                }
                t67 = 0xC2B7BC0;
            }
            t73 = t67;
        }
        t74 = *(int *)0xC2B2FC8;
        kmProcessVertexRenderState(t74);
        t76 = *(int *)0xC2B2FC8;
        t77 = (((struct o90_int *)(t76))->v);
        (((struct o90_uint *)(t76))->v) = (t77 & 0xFFFCFF3F);
        t78 = *(int *)0xC2B2FC8;
        t79 = (((struct o8_int *)0xC2B7940)->v);
        t80 = (((struct o90_int *)(t78))->v);
        (((struct o90_uint *)(t78))->v) = (t80 | t79);
        t81 = *(int *)0xC2B2FC8;
        t82 = (((struct o98_int *)(t81))->v);
        (((struct o98_uint *)(t81))->v) = (t82 & 0x31FF0FF);
        t83 = *(int *)0xC2B2FC8;
        t84 = (((struct oC_int *)0xC2B7940)->v);
        t85 = (((struct o98_int *)(t83))->v);
        (((struct o98_uint *)(t83))->v) = (t85 | (0x98000000 | t84));
        t86 = *(int *)0xC2B2FC8;
        kmSetVertexRenderState(t86);
        t88 = 0x0;
    }
    return t88;
}
