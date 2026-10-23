/* Straight-line functions with calls and guards (batch gen_cu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int windowOpenStep(void);
int windowEnterStep(void);
int Current_to_Target_angleY(int, ...);
int Start_Excellent(void);
int Start_Fault(int);
int Count_Remain_Drop(void);
int Exec_Remain_Arrow(void);
int Put_Remain_Icon(void);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlMatrixMode(int);
int nlRotateAxe(int, int);
int nlAddVector3op(int, int, int);
int nlSetWindowSize(float, float, float, float);
int nl_set_cnv_proj_pers(void);
int SetCameraMode(int);
int camRestore(void);
int camSetEye(int, int);
int camSetTarget(int, int);
int kmRenderTexture(int);
int memmove(int, int, int);
int menuCursor(int, int, int);
int menuPutSprites(int, int, int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlScaleVector(int, int, float);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
float nlUnitVector(int);
int nlPow(float f4, float f5);
int bootDevCommand(void);
int nlRenderTextureEnd(void);
int windowNameSelect(void);
int Exec_DCmini_Game9(int a4);
int camGetOffShot3(void);

int nlPow(float f4, float f5)
{
    if (f4 == 0.0f) {
        if (!(f5 > 0.0f)) {
            return ((int (*)(int, float, float))(0xC075F60))((int)f5, f4, f5);
        }
        return ((int (*)(int, float, float))(0xC075F46))((int)f5, f4, f5);
    }
    return ((int (*)(int, float, float))(0xC075EF0))((int)f5, f4, f5);
}

int bootDevCommand(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)0xAC00F728;
    *(unsigned char *)((t0 + 0x3C)) = 0xFFFFFFC0;
    t1 = *(int *)0xAC00F730;
    *(unsigned char *)((t1 + 0xC)) = 0xFFFFFF80;
    t2 = *(int *)0xAC00F730;
    *(unsigned char *)((t2 + 0x24)) = 0xFFFFFF80;
    t3 = *(int *)0xAC00F728;
    *(unsigned char *)((t3 + 0x14)) = 0x43;
    t4 = ((int (*)(int, int))(0xC0118F8))(0xFFFFFF80, 0xAC00F730);
    t5 = *(int *)0xAC00F728;
    *(unsigned char *)((t5 + 0x3C)) = 0x0;
    return 0x3C;
}

int nlRenderTextureEnd(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t11;
    int t12;
    float u13;
    float u14;
    float u15;
    float u16;
    int t18;

    t0 = *(int *)0xC2B31C4;
    t1 = *(int *)0xC2B31BC;
    if ((int)t0 >= 0) {
        t2 = *(int *)0xC2B29C0;
        t3 = *(int *)(((t1 + ((t0 << 2) << 2)) + 0x4));
        t4 = *(int *)((((t3 * 0x3C) + t2) + 0x28));
        if (t4 == 0) {
            kmRenderTexture(((t3 * 0x3C) + t2));
        }
        t11 = *(short *)(((t1 + ((t0 << 2) << 2)) + 0xC));
        *(unsigned int *)0xA05F8068 = ((t11 - 1) << 16);
        t12 = *(short *)(((t1 + ((t0 << 2) << 2)) + 0xE));
        *(unsigned int *)0xA05F806C = ((t12 - 1) << 16);
        *(unsigned int *)0xC2B31C4 = 0xFFFFFFFF;
        u13 = *(float *)0xC2B31D4;
        u14 = *(float *)0xC2B31D0;
        u15 = *(float *)0xC2B31CC;
        u16 = *(float *)0xC2B31C8;
        nlSetWindowSize(u16, u15, u14, u13);
        t18 = *(signed char *)0xC2B31D8;
        nlMatrixMode(0x3);
        nl_set_cnv_proj_pers();
        return nlMatrixMode(t18);
    }
    return ((int (*)(int))(0xC077004))(t0);
}



