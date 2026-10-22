/* Straight-line functions with calls and guards (batch gen_dw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckClipping(float);
int CourseSplineNumGet(int);
int CourseSplineGet(int);
int gdc_VolStreamSong(int);
int gdc_CoursePut(int, int, float);
int menuChangeValue(int, int, int);
int PutCourse_Sky(void);
int Exec_FogDensity(void);
int Exec_FogColor(void);
int Check_FogArea(void);
int Chat_Iraira(void);
int Chat_DamnIt(int);
int Voice_Init(void);
float FUN_0c089de0(int);
int PutCourse_CheckPiece(int, int, int, int, float, float, float);
int Put_Build_Patch(void);
int Put_Course_Obj_Dist(void);
int SetSEvolume(void);
int extRand(void);
int findSplineSection(int, int, int);
int getAreaFromPos(int, int);
int getNearLineIndex(int, int, int, int);
int getPieceWindow(int, int, int);
int menuPutSprites(int, int, int, int);
float nlInnerProduct(int, int);
float nlLength(int, int);
int nlProjectScreen3D(int);
int nlRand(void);
int nlSubVector3op(int, int, int);
int nlUnitVector(int);
int putString(int, int, float, float, float);
int menuItemVolume(int a4, int a5);
int psgEnterState5(int a4, int a5);
int psgEnterState6(int a4, int a5);
int Exec_Fog(void);
int PutCourse(void);

int menuItemVolume(int a4, int a5)
{
    int t0;
    int t3;
    float u5;
    float u6;
    int t10;
    int t11;
    int t12;
    int t28;
    int t35;
    int t29;
    int t30;
    int t31;
    int t33;
    int stk[12] = {0};

    t0 = *(int *)0xC2A1ADC;
    t3 = 0xC28A4ED;
    u5 = 290.0f;
    u6 = (float)(t0 + 0x1DE);
    if (a5 == 4) {
        t3 = 0xC28A4EC;
        u5 = 256.0f;
        u6 = (float)(0x1DE - t0);
    }
    t10 = *(signed char *)((t3 + 0x0));
    *(unsigned int *)(((int)stk + 4)) = (unsigned char)t10;
    if (a4 != 0) {
        t11 = menuChangeValue(0x0, ((int)stk + 4), 0x9);
        if (t11 == 1) {
            t12 = *(int *)(((int)stk + 4));
            *(unsigned char *)((t3 + 0x0)) = t12;
            SetSEvolume();
            Voice_Init();
            gdc_VolStreamSong(0x7F);
        }
    }
    putString(0x28, 0xC0A2058, (u6 + -82.0f), (u5 + -7.0f), 1.0f);
    t28 = putString(0x20, 0xC0A205C, (u6 + 82.0f), (u5 + -7.0f), 1.0f);
    t35 = t28;
    if ((int)0x8 > 0) {
        t29 = 0x0;
        for (;;) {
            t30 = *(int *)(((int)stk + 4));
            t31 = 0xC0A0868;
            if ((int)t29 < (int)t30) {
                t31 = 0xC0A0858;
            }
            t33 = menuPutSprites(t31, 0xC2A1A84, (int)((float)(((((t29 - 3) << 2) + (t29 - 3)) << 2) - 10) + u6), (int)u5);
            t29 = (t29 + 0x1);
            if ((int)t29 >= (int)0x8) {
                break;
            }
        }
        t35 = t33;
    }
    return t35;
}




