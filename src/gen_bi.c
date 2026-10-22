/* Straight-line functions with calls and guards (batch gen_bi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int carSpreadWheelLoad(float, float, float);
int Drv_CallActionStart(int, int);
int Drv_SetMotion(int, float);
int rinRand(void);
int psgStepBlend(int);
int psgUpdatePartTracks(int);
int nlSqrt(int, int);
int FcvPlayBuffer(int, int);
int FcvStoreBuffer(int, int, float);
int GetAverageAngle(int, int, float);
int GetCollision2D(int, float);
int InitHomingVector(int, int);
int PcarEvInit(int);
int carBalance(int);
int Sound_Request(int, int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int calcCheckExec(int, int);
int camSnapToCar(int);
int extRand(void);
int ndPuru2Start(int, int, int);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlCloseEvent(int);
int nlGetAverageVector(int, int, int, float, float);
int nlGetMatrix(int);
int nlInvertMatrix(int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int psgEnterState2(int);
int psgPutShadow(int);
float psgRunToPoint(int);
int set_event(int, int);
int Chat_HeyTaxi(int a4);
int Drv_StartAction(int a4, int a5, int a6);
int Chat_DamnIt(int a4);
int Chat_DontPass(int a4);
int Chat_Choin(int a4, int a5);
void initCamera(int a4);
int nlTriPutSetAttrib(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int StopingCarInit(int a4, int a5, int a6);
int psgFrameState2(int a4);
int Drv_StartGetOff(void);

int Chat_HeyTaxi(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(signed char *)0xC2AD1DF;
    if ((t0 & 2) == 0) {
        t1 = *(int *)(((a4 + 0x148) + 0x0));
        t2 = (int)(((unsigned int)t1 >> 29) & 0x7);
        t3 = *(int *)(((t2 << 2) + 0xC13ED50));
        return Sound_Request(t3, 0x1);
    }
    return t0;
}

int Drv_StartAction(int a4, int a5, int a6)
{
    float u1;
    int t2;
    int t3;
    int t4;

    *(unsigned int *)0xC2AD010 = a4;
    *(unsigned int *)0xC2AD018 = a5;
    *(unsigned int *)0xC2AD01C = a6;
    *(unsigned int *)0xC2AD014 = 0x0;
    *(float *)0xC2AD0F4 = 0.0f;
    Drv_CallActionStart(a4, 0x0);
    u1 = *(float *)0xC2AD0F8;
    t2 = *(int *)0xC2AD1DC;
    t3 = (int)((unsigned int)(((u1 > 0.0f)) ? 1 : 0) & 0x1);
    *(unsigned int *)0xC2AD1DC = ((t2 & 0x7FFFFFFF) | ((unsigned int)t3 << 31));
    t4 = *(signed char *)0xC2AD1DF;
    *(unsigned char *)0xC2AD1DF = (t4 & 0xBF);
    return (t4 & 0xBF);
}





int nlTriPutSetAttrib(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
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
    int t20;
    int t21;
    int t26;
    int t29;
    int t32;
    int t33;
    int t36;
    int t37;
    int t41;
    int t40;
    int t5;

    if (a12 == 0) {
        *(unsigned int *)(((a4 + 0x18) + 0x54)) = a13;
        t0 = *(signed char *)((((a4 + 0x18) + 0x50) + 0x0));
        *(unsigned char *)((((a4 + 0x18) + 0x50) + 0x0)) = (t0 | 0x10);
        t1 = *(signed char *)((((a4 + 0x18) + 0x50) + 0x0));
        t5 = (t1 & 0xF7);
    } else {
        t2 = (int)((int)a13 / (int)0x3);
        *(unsigned int *)(((0x54 + (a4 + 0x18)) + 0x0)) = t2;
        t3 = *(signed char *)((((a4 + 0x18) + 0x50) + 0x0));
        *(unsigned char *)((((a4 + 0x18) + 0x50) + 0x0)) = (t3 & 0xEF);
        t4 = *(signed char *)((((a4 + 0x18) + 0x50) + 0x0));
        t5 = (t4 | 0x8);
    }
    *(unsigned char *)((((a4 + 0x18) + 0x50) + 0x0)) = t5;
    t6 = (((a13 << 2) << 2) << 1);
    if ((int)(((a13 << 2) << 2) << 1) < 0) {
        t6 = ((((a13 << 2) << 2) << 1) + 0x3);
    }
    *(unsigned int *)((((((t6 >> 1) >> 1) << 2) + ((a4 + 0x18) + 0x58)) + 0x0)) = 0x0;
    *(unsigned int *)(((((a4 + 0x18) + 0x58) + (((t6 >> 1) >> 1) << 2)) + 0x4)) = a13;
    *(unsigned int *)(((a4 + 0x18) + 0x4C)) = ((((a13 << 2) << 2) << 1) + 0x8);
    t7 = *(int *)((((a4 + 0x18) + 0x50) + 0x0));
    t8 = (int)((unsigned int)a6 & 0x1);
    *(unsigned int *)((((a4 + 0x18) + 0x50) + 0x0)) = ((t7 & 0xFFFFFFBF) | ((unsigned int)t8 << 6));
    t9 = *(int *)((((a4 + 0x18) + 0x50) + 0x0));
    t10 = (int)((unsigned int)a5 & 0x3);
    *(unsigned int *)((((a4 + 0x18) + 0x50) + 0x0)) = ((t9 & 0xFFFFFFFC) | ((unsigned int)t10 << 0));
    *(float *)(((a4 + 0x18) + 0x28)) = f4;
    *(unsigned int *)(((a4 + 0x18) + 0x24)) = a7;
    *(float *)((((a4 + 0x18) + 0x2C) + 0x0)) = f5;
    *(float *)((((a4 + 0x18) + 0x30) + 0x0)) = f6;
    *(float *)((((a4 + 0x18) + 0x34) + 0x0)) = f7;
    *(float *)((((a4 + 0x18) + 0x38) + 0x0)) = f8;
    *(float *)((((a4 + 0x18) + 0x40) + 0x0)) = f9;
    *(float *)((((a4 + 0x18) + 0x44) + 0x0)) = f10;
    *(float *)((((a4 + 0x18) + 0x48) + 0x0)) = f11;
    t11 = *(int *)(((a4 + 0x18) + 0x8));
    *(unsigned int *)(((a4 + 0x18) + 0x8)) = (((t11 & 0x1FFFFFFF) | 0x20000000) & 0xE3FFFFFF);
    t12 = *(int *)(((a4 + 0x18) + 0x0));
    *(unsigned int *)(((a4 + 0x18) + 0x0)) = (t12 & 0xF8FFFFFF);
    t13 = *(int *)(((a4 + 0x18) + 0x8));
    *(unsigned int *)(((a4 + 0x18) + 0x8)) = ((t13 & 0xFFEFFFFF) | 0x80000);
    if (!(1.0f > f5)) {
        if (a8 != 0) {
            t14 = *(int *)(((a4 + 0x18) + 0x0));
            *(unsigned int *)(((a4 + 0x18) + 0x0)) = (t14 | 0x2000000);
            t15 = *(int *)(((a4 + 0x18) + 0x8));
            *(unsigned int *)(((a4 + 0x18) + 0x8)) = ((((t15 & 0x1FFFFFFF) | 0x80000000) | 0x14000000) | 0xC0);
        }
    } else {
        t20 = *(int *)(((a4 + 0x18) + 0x0));
        *(unsigned int *)(((a4 + 0x18) + 0x0)) = (t20 | 0x2000000);
        t21 = *(int *)(((a4 + 0x18) + 0x8));
        *(unsigned int *)(((a4 + 0x18) + 0x8)) = ((((t21 & 0x1FFFFFFF) | 0x80000000) | 0x14000000) | 0xC0);
    }
    if (1.0f > f5) {
        t26 = *(int *)(((a4 + 0x18) + 0x8));
        *(unsigned int *)(((a4 + 0x18) + 0x8)) = (t26 | 0x100000);
    }
    if (a8 != 0) {
        t29 = *(int *)(((a4 + 0x18) + 0x8));
        *(unsigned int *)(((a4 + 0x18) + 0x8)) = (t29 & 0xFFF7FFFF);
    }
    t32 = *(int *)(((a4 + 0x18) + 0x8));
    *(unsigned int *)(((a4 + 0x18) + 0x8)) = (t32 & 0xFFFF9FFF);
    if (a11 != 0) {
        t33 = *(int *)(((a4 + 0x18) + 0x8));
        *(unsigned int *)(((a4 + 0x18) + 0x8)) = (t33 | 0x2000);
    }
    t36 = *(int *)(((a4 + 0x18) + 0x8));
    *(unsigned int *)(((a4 + 0x18) + 0x8)) = (t36 & 0xFFF9FFFF);
    if (a9 != 0) {
        t37 = *(int *)(((a4 + 0x18) + 0x8));
        *(unsigned int *)(((a4 + 0x18) + 0x8)) = (t37 | 0x40000);
    }
    t41 = (t36 & 0xFFF9FFFF);
    if (a10 != 0) {
        t40 = *(int *)(((a4 + 0x18) + 0x8));
        *(unsigned int *)(((a4 + 0x18) + 0x8)) = (t40 | 0x20000);
        t41 = (t40 | 0x20000);
    }
    return t41;
}


