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


int Chat_DontPass(int a4)
{
    int t0;
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
    int t13;
    int t14;
    int t15;

    t0 = *(signed char *)0xC2AD1DF;
    if ((t0 & 2) == 0) {
        Voice_ShutUp(0x3);
        t2 = *(int *)(((0x148 + a4) + 0x0));
        t3 = (int)(((unsigned int)t2 >> 29) & 0x7);
        if ((unsigned int)t3 < (unsigned int)0x2) {
            t4 = *(signed char *)((a4 + 0x14A));
            t5 = 0xF;
            if ((t4 & 16) != 0) {
                t5 = 0xFFFFFFF1;
            }
            t6 = *(int *)(((0x148 + a4) + 0x0));
            t7 = (int)(((unsigned int)t6 >> 29) & 0x7);
            t13 = ((signed char)((((t7 << 1) << 1) + (t7 << 1)) << 2) + 0xC0D4460);
            t14 = 0x64;
            t15 = t5;
        } else {
            t8 = *(signed char *)((a4 + 0x14A));
            t9 = 0xF;
            if ((t8 & 16) != 0) {
                t9 = 0xFFFFFFF1;
            }
            t10 = *(int *)(((0x148 + a4) + 0x0));
            t11 = (int)(((unsigned int)t10 >> 29) & 0x7);
            t13 = ((signed char)((((t11 << 1) << 1) + (t11 << 1)) << 2) + 0xC0D4460);
            t14 = 0x50;
            t15 = t9;
        }
        return Voice_Request(t13, 0x3, t14, t15);
    }
    return t0;
}


void initCamera(int a4)
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
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t23;
    int t25;
    int t27;
    int t33;
    int t34;
    int t35;
    int stk[8];

    t0 = *(int *)0xC08AA60;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t0;
    t1 = *(int *)0xC08AA5C;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t1;
    t2 = *(int *)0xC08AA58;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t2;
    *(unsigned int *)0xC1798A8 = 0x7;
    *(float *)0xC1798A4 = 60.0f;
    *(unsigned int *)0xC179860 = 0x0;
    *(unsigned int *)0xC0E4A14 = 0x1;
    t3 = *(int *)(((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x78) + 0x8));
    *(unsigned int *)0xC179848 = t3;
    t4 = *(int *)(((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x78) + 0x4));
    *(unsigned int *)0xC179844 = t4;
    t5 = *(int *)(((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x78) + 0x0));
    *(unsigned int *)0xC179840 = t5;
    t6 = *(signed char *)(((0x84 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC)) + 0x0));
    *(unsigned char *)0xC179858 = t6;
    t7 = *(signed char *)(((0x84 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC)) + 0x1));
    *(unsigned char *)0xC179859 = t7;
    t8 = *(signed char *)(((0x84 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC)) + 0x2));
    *(unsigned char *)0xC17985A = t8;
    t9 = *(signed char *)(((0x84 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC)) + 0x3));
    *(unsigned char *)0xC17985B = t9;
    t10 = *(signed char *)(((0x84 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC)) + 0x4));
    *(unsigned char *)0xC17985C = t10;
    t11 = *(signed char *)(((0x84 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC)) + 0x5));
    *(unsigned char *)0xC17985D = t11;
    t12 = *(signed char *)0xC08ADAC;
    *(unsigned char *)0xC1798AC = t12;
    t13 = *(signed char *)0xC08ADAD;
    *(unsigned char *)0xC1798AD = t13;
    t14 = *(signed char *)0xC08ADAE;
    *(unsigned char *)0xC1798AE = t14;
    t15 = *(signed char *)0xC08ADAF;
    *(unsigned char *)0xC1798AF = t15;
    t16 = *(signed char *)0xC08ADB0;
    *(unsigned char *)0xC1798B0 = t16;
    t17 = *(signed char *)0xC08ADB1;
    *(unsigned char *)0xC1798B1 = t17;
    *(float *)0xC1798B4 = 0.0f;
    *(float *)0xC179958 = 0.0f;
    t18 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x86));
    *(unsigned short *)0xC17995C = t18;
    *(unsigned int *)0xC179960 = 0x0;
    *(unsigned int *)0xC179964 = 0x0;
    *(float *)0xC0E49F4 = 1.33333325f;
    *(unsigned int *)0xC1798B8 = 0x1;
    *(float *)0xC0E4A04 = 60.0f;
    *(unsigned int *)0xC0E49F8 = (((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x78);
    *(unsigned int *)0xC0E49FC = (0x84 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC));
    *(unsigned int *)0xC0E4A00 = 0x0;
    *(float *)0xC1798BC = 0.0f;
    *(float *)0xC1798C0 = 5.0f;
    *(float *)0xC1798C4 = 0.0f;
    *(unsigned short *)0xC1798C8 = 0x0;
    *(unsigned short *)0xC1798CA = 0x0;
    *(unsigned short *)0xC1798CC = 0x0;
    camSnapToCar(a4);
    InitHomingVector(0xC1798D0, 0xC0965F0);
    nlPushUnitMatrix();
    nlTranslateV(0xC179840);
    t23 = *(short *)0xC17985A;
    nlRotateAY((unsigned short)t23);
    t25 = *(short *)0xC179858;
    nlRotateAX((unsigned short)t25);
    t27 = *(short *)0xC17985C;
    nlRotateAZ((unsigned short)t27);
    nlSqrt(((int)stk + 4), 0xC1798D0);
    nlInvertMatrix(0x0);
    nlGetMatrix(0xC179864);
    nlPopMatrix(0x1);
    t33 = *(int *)0xC1798D8;
    *(unsigned int *)0xC1798F0 = t33;
    t34 = *(int *)0xC1798D4;
    *(unsigned int *)0xC1798EC = t34;
    t35 = *(int *)0xC1798D0;
    *(unsigned int *)0xC1798E8 = t35;
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

int StopingCarInit(int a4, int a5, int a6)
{
    int t0;
    int t64;
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
    int t14;
    int t15;
    int t18;
    int t19;
    int t20;
    int t21;
    int t23;
    int t29;
    int t30;
    int t31;
    int t32;
    int t36;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    float u45;
    int t46;
    int t47;
    int t48;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t61;
    int t62;
    int t63;
    int t60;
    int stk[10];

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    t0 = set_event(0x12C, 0xC0468A8);
    t64 = t0;
    if (t0 != 0) {
        t1 = *(int *)0xC2A1B1C;
        *(unsigned int *)0xC2A1B1C = (t1 + 0x1);
        *(unsigned int *)((t0 + 0x74)) = ((t1 + 0x1) - 1);
        t2 = *(int *)0xC2A44A8;
        *(unsigned int *)0xC2A44A8 = (t2 + 0x1);
        t3 = *(int *)(((int)stk + 12));
        *(unsigned int *)((t0 + 0x78)) = t3;
        t4 = *(int *)(((int)stk + 8));
        *(unsigned int *)((t0 + 0x80)) = t4;
        t5 = *(int *)(((int)stk + 4));
        if (t5 == 0) {
            t6 = *(int *)((t0 + 0x80));
            t7 = *(int *)0xC2A6690;
            t8 = *(int *)((((((t6 << 1) + t6) << 2) + t7) + 0x0));
            t9 = *(int *)((t8 + 0x8));
            *(unsigned int *)(((0x8C + t0) + 0x8)) = t9;
            t10 = *(int *)((t8 + 0x4));
            *(unsigned int *)(((0x8C + t0) + 0x4)) = t10;
            t11 = *(int *)((t8 + 0x0));
            *(unsigned int *)(((0x8C + t0) + 0x0)) = t11;
        } else {
            t12 = *(int *)(((int)stk + 4));
            t13 = *(int *)((t12 + 0x8));
            *(unsigned int *)(((0x8C + t0) + 0x8)) = t13;
            t14 = *(int *)((t12 + 0x4));
            *(unsigned int *)(((0x8C + t0) + 0x4)) = t14;
            t15 = *(int *)((t12 + 0x0));
            *(unsigned int *)(((0x8C + t0) + 0x0)) = t15;
        }
        PcarEvInit(t0);
        t18 = *(int *)((t0 + 0x84));
        *(unsigned int *)((t0 + 0x84)) = (t18 | 0x10);
        t19 = *(int *)0xC0A4790;
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x8)) = t19;
        t20 = *(int *)0xC0A478C;
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = t20;
        t21 = *(int *)0xC0A4788;
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t21;
        *(float *)(((int)stk + 16)) = -50.0f;
        nlPushUnitMatrix();
        t23 = *(short *)((t0 + 0xA6));
        nlRotateAY((unsigned short)t23);
        nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
        nlAddVector((0x8C + t0), (((int)stk + 4) + 0xC));
        nlAddVector((0xE0 + t0), (((int)stk + 4) + 0xC));
        nlPopMatrix(0x1);
        t29 = extRand();
        if ((t29 & 3) != 0) {
            t30 = *(int *)((t0 + 0x78));
            if ((int)t30 < (int)0x8) {
                t31 = *(short *)((t0 + 0xA6));
                *(unsigned short *)((t0 + 0xA6)) = (t31 + 0x2000);
            } else {
                t32 = *(int *)((t0 + 0x84));
                *(unsigned int *)((t0 + 0x84)) = (t32 | 0xC00);
            }
        } else {
            t36 = *(int *)((t0 + 0x84));
            *(unsigned int *)((t0 + 0x84)) = (t36 | 0xC00);
        }
        *(float *)((t0 + 0xC8)) = 0.00999999978f;
        t40 = GetCollision2D((0x8C + t0), 30.0f);
        t41 = *(int *)((t40 + 0x1C));
        if (t41 != -1) {
            if (t41 != 12) {
                t42 = *(int *)(((t40 + 0xC) + 0x8));
                *(unsigned int *)(((0xEC + t0) + 0x8)) = t42;
                t43 = *(int *)(((t40 + 0xC) + 0x4));
                *(unsigned int *)(((0xEC + t0) + 0x4)) = t43;
                t44 = *(int *)(((t40 + 0xC) + 0x0));
                *(unsigned int *)(((0xEC + t0) + 0x0)) = t44;
                *(unsigned int *)((t0 + 0x110)) = 0xA;
                u45 = *(float *)((t40 + 0x18));
                *(float *)((t0 + 0x104)) = u45;
                *(float *)((t0 + 0x90)) = u45;
                t46 = *(int *)0xC0A4790;
                *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x8)) = t46;
                t47 = *(int *)0xC0A478C;
                *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = t47;
                t48 = *(int *)0xC0A4788;
                *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t48;
                carBalance(t0);
                t50 = *(signed char *)(((0x108 + t0) + 0x0));
                *(unsigned char *)(((0xA4 + t0) + 0x0)) = t50;
                t51 = *(signed char *)(((0x108 + t0) + 0x1));
                *(unsigned char *)(((0xA4 + t0) + 0x1)) = t51;
                t52 = *(signed char *)(((0x108 + t0) + 0x2));
                *(unsigned char *)(((0xA4 + t0) + 0x2)) = t52;
                t53 = *(signed char *)(((0x108 + t0) + 0x3));
                *(unsigned char *)(((0xA4 + t0) + 0x3)) = t53;
                t54 = *(signed char *)(((0x108 + t0) + 0x4));
                *(unsigned char *)(((0xA4 + t0) + 0x4)) = t54;
                t55 = *(signed char *)(((0x108 + t0) + 0x5));
                *(unsigned char *)(((0xA4 + t0) + 0x5)) = t55;
                t56 = *(int *)((t0 + 0x84));
                t57 = calcCheckExec(t0, t56);
                t60 = t57;
            } else {
                t58 = nlCloseEvent(t0);
                t59 = *(int *)0xC2A44A8;
                *(unsigned int *)0xC2A44A8 = (t59 - 1);
                t60 = t58;
            }
            t63 = t60;
        } else {
            t61 = nlCloseEvent(t0);
            t62 = *(int *)0xC2A44A8;
            *(unsigned int *)0xC2A44A8 = (t62 - 1);
            t63 = t61;
        }
        t64 = t63;
    }
    return t64;
}


int Drv_StartGetOff(void)
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
    int t14;
    int t118;
    int t15;
    int t16;
    int t17;
    int t24;
    int t18;
    int t25;
    int t26;
    int t27;
    int t28;
    int t36;
    int t64;
    int t65;
    int t72;
    int t66;
    int t73;
    int t74;
    int t75;
    int t76;
    int t84;
    int t122;
    int t123;
    int t124;
    int t127;
    int t134;
    int t135;
    int t138;
    int t146;
    int t147;
    int t150;
    int t158;
    int t159;
    int t162;
    int t169;
    int t170;
    int t173;
    int t181;
    int t182;
    int t185;
    int t192;
    int t193;
    int t196;
    int t204;
    int t205;
    int t208;
    int t215;
    int t216;
    int t219;
    int t227;
    int t228;
    int t231;
    int t252;
    int t238;
    int t239;
    int t242;
    int t253;
    int t254;
    int t257;
    int t322;
    int t323;
    int t324;
    int t115;
    int t61;
    int t33;
    int t20;
    int t56;
    int t52;
    int t48;
    int t44;
    int t40;
    int t108;
    int t81;
    int t68;
    int t103;
    int t99;
    int t95;
    int t91;
    int t87;
    int t320;
    int t133;
    int t130;
    int t317;
    int t145;
    int t141;
    int t314;
    int t157;
    int t153;
    int t311;
    int t168;
    int t165;
    int t308;
    int t180;
    int t176;
    int t305;
    int t191;
    int t188;
    int t302;
    int t203;
    int t199;
    int t299;
    int t214;
    int t211;
    int t296;
    int t226;
    int t222;
    int t293;
    int t237;
    int t234;
    int t290;
    int t287;
    int t284;
    int t281;
    int t278;
    int t275;
    int t272;
    int t269;
    int t266;
    int t249;
    int t245;
    int t263;
    int t260;
    int stk[17];

    t0 = *(int *)0xC0D50F8;
    *(unsigned int *)(((((int)stk + 4) + 0x28) + 0x4)) = t0;
    t1 = *(int *)0xC0D50F4;
    *(unsigned int *)(((((int)stk + 4) + 0x28) + 0x0)) = t1;
    t2 = *(int *)0xC0D5100;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x4)) = t2;
    t3 = *(int *)0xC0D50FC;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x0)) = t3;
    t4 = *(int *)0xC0D5108;
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x4)) = t4;
    t5 = *(int *)0xC0D5104;
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x0)) = t5;
    t6 = *(int *)0xC0D5110;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x4)) = t6;
    t7 = *(int *)0xC0D510C;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = t7;
    t8 = *(int *)0xC0D5118;
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x4)) = t8;
    t9 = *(int *)0xC0D5114;
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = t9;
    t10 = *(int *)0xC0D5120;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t10;
    t11 = *(int *)0xC0D511C;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t11;
    t12 = *(int *)0xC2AD018;
    t13 = rinRand();
    t14 = *(int *)0xC2AD014;
    if (t14 != 0) {
        t118 = t14;
        if (t14 == 1) {
            t15 = *(signed char *)((t12 + 0x14B));
            if ((t15 & 4) == 0) {
                t16 = *(int *)(((0x148 + t12) + 0x0));
                t17 = (int)(((unsigned int)t16 >> 21) & 0x3);
                if (t17 != 0) {
                    if (t17 != 1) {
                        t24 = 0xC2AE348;
                        if (t17 == 2) {
                            t18 = *(int *)0xC2AE34C;
                            if (t18 == 0xC98B054) {
                                *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                *(unsigned int *)0xC2AD1D4 = 0xC0D3068;
                                t20 = 0xC8A9A10;
                            } else {
                                *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                *(unsigned int *)0xC2AD1D4 = 0xC0D4BE0;
                                t20 = 0xC8E82F8;
                            }
                            t24 = t20;
                        }
                        t33 = t24;
                    } else {
                        t25 = (int)((unsigned int)t13 % (unsigned int)0x2);
                        t26 = *(int *)((((((int)stk + 4) + 0x8) + (t25 << 2)) + 0x0));
                        t27 = *(int *)((((t25 << 2) + (((int)stk + 4) + 0x10)) + 0x0));
                        *(unsigned int *)0xC2AD1D0 = t26;
                        t28 = *(int *)((((t25 << 2) + ((int)stk + 4)) + 0x0));
                        *(unsigned int *)0xC2AD1D4 = t28;
                        t33 = t27;
                    }
                    t61 = t33;
                } else {
                    t36 = *(int *)0xC2AE34C;
                    if (t36 != 0xC9A0194) {
                        if (t36 != 0xC9ABE04) {
                            if (t36 != 0xC9AF81C) {
                                if (t36 != 0xC9B38F4) {
                                    if (t36 != 0xC9C8C54) {
                                        *(unsigned int *)0xC2AD1D0 = 0xC0D4AF0;
                                        *(unsigned int *)0xC2AD1D4 = 0xC0D4B08;
                                        t40 = 0xC8EA2F4;
                                    } else {
                                        *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                        *(unsigned int *)0xC2AD1D4 = 0xC0D3068;
                                        t40 = 0xC8AE048;
                                    }
                                    t44 = t40;
                                } else {
                                    *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                    *(unsigned int *)0xC2AD1D4 = 0xC0D4B90;
                                    t44 = 0xC8D7F34;
                                }
                                t48 = t44;
                            } else {
                                *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                *(unsigned int *)0xC2AD1D4 = 0xC0D4B90;
                                t48 = 0xC8D7F34;
                            }
                            t52 = t48;
                        } else {
                            *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                            *(unsigned int *)0xC2AD1D4 = 0xC0D4B90;
                            t52 = 0xC8D7F34;
                        }
                        t56 = t52;
                    } else {
                        *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                        *(unsigned int *)0xC2AD1D4 = 0xC0D3068;
                        t56 = 0xC8B0BA0;
                    }
                    t61 = t56;
                }
                t115 = t61;
            } else {
                t64 = *(int *)(((0x148 + t12) + 0x0));
                t65 = (int)(((unsigned int)t64 >> 21) & 0x3);
                if (t65 != 0) {
                    if (t65 != 1) {
                        t72 = 0xC2AE348;
                        if (t65 == 2) {
                            t66 = *(int *)0xC2AE34C;
                            if (t66 == 0xC9891B0) {
                                *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                *(unsigned int *)0xC2AD1D4 = 0xC0D3068;
                                t68 = 0xC8A8C6C;
                            } else {
                                *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                *(unsigned int *)0xC2AD1D4 = 0xC0D4BC8;
                                t68 = 0xC8E77E4;
                            }
                            t72 = t68;
                        }
                        t81 = t72;
                    } else {
                        t73 = (int)((unsigned int)t13 % (unsigned int)0x2);
                        t74 = *(int *)((((((int)stk + 4) + 0x20) + (t73 << 2)) + 0x0));
                        t75 = *(int *)((((t73 << 2) + (((int)stk + 4) + 0x28)) + 0x0));
                        *(unsigned int *)0xC2AD1D0 = t74;
                        t76 = *(int *)((((t73 << 2) + (((int)stk + 4) + 0x18)) + 0x0));
                        *(unsigned int *)0xC2AD1D4 = t76;
                        t81 = t75;
                    }
                    t108 = t81;
                } else {
                    t84 = *(int *)0xC2AE34C;
                    if (t84 != 0xC99EB80) {
                        if (t84 != 0xC9A9D40) {
                            if (t84 != 0xC9ADEC8) {
                                if (t84 != 0xC9B1170) {
                                    if (t84 != 0xC9C6C40) {
                                        *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                        *(unsigned int *)0xC2AD1D4 = 0xC0D4AC8;
                                        t87 = 0xC8E96A0;
                                    } else {
                                        *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                        *(unsigned int *)0xC2AD1D4 = 0xC0D3068;
                                        t87 = 0xC8D37E0;
                                    }
                                    t91 = t87;
                                } else {
                                    *(unsigned int *)0xC2AD1D0 = 0xC0D4B78;
                                    *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
                                    t91 = 0xC8D7120;
                                }
                                t95 = t91;
                            } else {
                                *(unsigned int *)0xC2AD1D0 = 0xC0D4B78;
                                *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
                                t95 = 0xC8D7120;
                            }
                            t99 = t95;
                        } else {
                            *(unsigned int *)0xC2AD1D0 = 0xC0D4B78;
                            *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
                            t99 = 0xC8D7120;
                        }
                        t103 = t99;
                    } else {
                        *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                        *(unsigned int *)0xC2AD1D4 = 0xC0D3068;
                        t103 = 0xC8AF7FC;
                    }
                    t108 = t103;
                }
                t115 = t108;
            }
            *(unsigned int *)0xC2AD020 = t115;
            *(float *)0xC2AD024 = 0.0f;
            *(float *)0xC2AD0F4 = 0.0f;
            *(float *)0xC2AD0F8 = 0.0f;
            t118 = 0xF8;
        }
        t324 = t118;
    } else {
        t122 = *(int *)0xC2AE348;
        if (t122 == 0xC8EBF3C) {
            t123 = *(int *)(((0x148 + t12) + 0x0));
            t124 = (int)(((unsigned int)t123 >> 21) & 0x3);
            if (t124 != 0) {
                if (t124 != 1) {
                    t127 = 0xC2AE348;
                    if (t124 == 2) {
                        *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                        *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
                        t127 = 0xC8D1824;
                    }
                    t130 = t127;
                } else {
                    *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                    *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
                    t130 = 0xC8A7AB4;
                }
                t133 = t130;
            } else {
                *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
                t133 = 0xC8E2978;
            }
            t320 = t133;
        } else {
            if (t122 == 0xC8EE1B0) {
                t134 = *(int *)(((0x148 + t12) + 0x0));
                t135 = (int)(((unsigned int)t134 >> 21) & 0x3);
                if (t135 != 0) {
                    if (t135 != 1) {
                        t138 = 0xC2AE348;
                        if (t135 == 2) {
                            *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                            *(unsigned int *)0xC2AD1D4 = 0xC0D4AB8;
                            t138 = 0xC8D2488;
                        }
                        t141 = t138;
                    } else {
                        *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                        *(unsigned int *)0xC2AD1D4 = 0xC0D4AA8;
                        t141 = 0xC8A8378;
                    }
                    t145 = t141;
                } else {
                    *(unsigned int *)0xC2AD1D0 = 0xC0D4A88;
                    *(unsigned int *)0xC2AD1D4 = 0xC0D4A98;
                    t145 = 0xC8E32AC;
                }
                t317 = t145;
            } else {
                if (t122 == 0xC8F0424) {
                    t146 = *(int *)(((0x148 + t12) + 0x0));
                    t147 = (int)(((unsigned int)t146 >> 21) & 0x3);
                    if (t147 != 0) {
                        if (t147 != 1) {
                            t150 = 0xC2AE348;
                            if (t147 == 2) {
                                *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                *(unsigned int *)0xC2AD1D4 = 0xC0D4AB8;
                                t150 = 0xC8D2488;
                            }
                            t153 = t150;
                        } else {
                            *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                            *(unsigned int *)0xC2AD1D4 = 0xC0D4AA8;
                            t153 = 0xC8A8378;
                        }
                        t157 = t153;
                    } else {
                        *(unsigned int *)0xC2AD1D0 = 0xC0D4A88;
                        *(unsigned int *)0xC2AD1D4 = 0xC0D4A98;
                        t157 = 0xC8E32AC;
                    }
                    t314 = t157;
                } else {
                    if (t122 == 0xC94AA20) {
                        t158 = *(int *)(((0x148 + t12) + 0x0));
                        t159 = (int)(((unsigned int)t158 >> 21) & 0x3);
                        if (t159 != 0) {
                            if (t159 != 1) {
                                t162 = 0xC2AE348;
                                if (t159 == 2) {
                                    *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                    *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
                                    t162 = 0xC8D1824;
                                }
                                t165 = t162;
                            } else {
                                *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
                                t165 = 0xC8A7AB4;
                            }
                            t168 = t165;
                        } else {
                            *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                            *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
                            t168 = 0xC8E2978;
                        }
                        t311 = t168;
                    } else {
                        if (t122 == 0xC94C2D4) {
                            t169 = *(int *)(((0x148 + t12) + 0x0));
                            t170 = (int)(((unsigned int)t169 >> 21) & 0x3);
                            if (t170 != 0) {
                                if (t170 != 1) {
                                    t173 = 0xC2AE348;
                                    if (t170 == 2) {
                                        *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                        *(unsigned int *)0xC2AD1D4 = 0xC0D4AB8;
                                        t173 = 0xC8D2488;
                                    }
                                    t176 = t173;
                                } else {
                                    *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                    *(unsigned int *)0xC2AD1D4 = 0xC0D4AA8;
                                    t176 = 0xC8A8378;
                                }
                                t180 = t176;
                            } else {
                                *(unsigned int *)0xC2AD1D0 = 0xC0D4A88;
                                *(unsigned int *)0xC2AD1D4 = 0xC0D4A98;
                                t180 = 0xC8E32AC;
                            }
                            t308 = t180;
                        } else {
                            if (t122 == 0xC94DB88) {
                                t181 = *(int *)(((0x148 + t12) + 0x0));
                                t182 = (int)(((unsigned int)t181 >> 21) & 0x3);
                                if (t182 != 0) {
                                    if (t182 != 1) {
                                        t185 = 0xC2AE348;
                                        if (t182 == 2) {
                                            *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                            *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
                                            t185 = 0xC8D1824;
                                        }
                                        t188 = t185;
                                    } else {
                                        *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                        *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
                                        t188 = 0xC8A7AB4;
                                    }
                                    t191 = t188;
                                } else {
                                    *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                    *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
                                    t191 = 0xC8E2978;
                                }
                                t305 = t191;
                            } else {
                                if (t122 == 0xC94F70C) {
                                    t192 = *(int *)(((0x148 + t12) + 0x0));
                                    t193 = (int)(((unsigned int)t192 >> 21) & 0x3);
                                    if (t193 != 0) {
                                        if (t193 != 1) {
                                            t196 = 0xC2AE348;
                                            if (t193 == 2) {
                                                *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                                *(unsigned int *)0xC2AD1D4 = 0xC0D4AB8;
                                                t196 = 0xC8D2488;
                                            }
                                            t199 = t196;
                                        } else {
                                            *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                            *(unsigned int *)0xC2AD1D4 = 0xC0D4AA8;
                                            t199 = 0xC8A8378;
                                        }
                                        t203 = t199;
                                    } else {
                                        *(unsigned int *)0xC2AD1D0 = 0xC0D4A88;
                                        *(unsigned int *)0xC2AD1D4 = 0xC0D4A98;
                                        t203 = 0xC8E32AC;
                                    }
                                    t302 = t203;
                                } else {
                                    if (t122 == 0xC951290) {
                                        t204 = *(int *)(((0x148 + t12) + 0x0));
                                        t205 = (int)(((unsigned int)t204 >> 21) & 0x3);
                                        if (t205 != 0) {
                                            if (t205 != 1) {
                                                t208 = 0xC2AE348;
                                                if (t205 == 2) {
                                                    *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                                    *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
                                                    t208 = 0xC8D1824;
                                                }
                                                t211 = t208;
                                            } else {
                                                *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                                *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
                                                t211 = 0xC8A7AB4;
                                            }
                                            t214 = t211;
                                        } else {
                                            *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                            *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
                                            t214 = 0xC8E2978;
                                        }
                                        t299 = t214;
                                    } else {
                                        if (t122 == 0xC952FF4) {
                                            t215 = *(int *)(((0x148 + t12) + 0x0));
                                            t216 = (int)(((unsigned int)t215 >> 21) & 0x3);
                                            if (t216 != 0) {
                                                if (t216 != 1) {
                                                    t219 = 0xC2AE348;
                                                    if (t216 == 2) {
                                                        *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                                        *(unsigned int *)0xC2AD1D4 = 0xC0D4AB8;
                                                        t219 = 0xC8D2488;
                                                    }
                                                    t222 = t219;
                                                } else {
                                                    *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                                    *(unsigned int *)0xC2AD1D4 = 0xC0D4AA8;
                                                    t222 = 0xC8A8378;
                                                }
                                                t226 = t222;
                                            } else {
                                                *(unsigned int *)0xC2AD1D0 = 0xC0D4A88;
                                                *(unsigned int *)0xC2AD1D4 = 0xC0D4A98;
                                                t226 = 0xC8E32AC;
                                            }
                                            t296 = t226;
                                        } else {
                                            if (t122 == 0xC954D58) {
                                                t227 = *(int *)(((0x148 + t12) + 0x0));
                                                t228 = (int)(((unsigned int)t227 >> 21) & 0x3);
                                                if (t228 != 0) {
                                                    if (t228 != 1) {
                                                        t231 = 0xC2AE348;
                                                        if (t228 == 2) {
                                                            *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                                            *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
                                                            t231 = 0xC8D1824;
                                                        }
                                                        t234 = t231;
                                                    } else {
                                                        *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                                        *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
                                                        t234 = 0xC8A7AB4;
                                                    }
                                                    t237 = t234;
                                                } else {
                                                    *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                                    *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
                                                    t237 = 0xC8E2978;
                                                }
                                                t293 = t237;
                                            } else {
                                                if (t122 != 0xC956FCC) {
                                                    if (t122 != 0xC95A230) {
                                                        if (t122 != 0xC95D7C4) {
                                                            if (t122 != 0xC960308) {
                                                                if (t122 != 0xC962F0C) {
                                                                    if (t122 != 0xC9659C0) {
                                                                        if (t122 != 0xC9684A4) {
                                                                            if (t122 != 0xC96B138) {
                                                                                if (t122 != 0xC96DE8C) {
                                                                                    t252 = 0xC2AE348;
                                                                                    if (t122 == 0xC9702C0) {
                                                                                        t238 = *(int *)(((0x148 + t12) + 0x0));
                                                                                        t239 = (int)(((unsigned int)t238 >> 21) & 0x3);
                                                                                        if (t239 != 0) {
                                                                                            if (t239 != 1) {
                                                                                                t242 = 0xC2AE348;
                                                                                                if (t239 == 2) {
                                                                                                    *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                                                                                    *(unsigned int *)0xC2AD1D4 = 0xC0D4AB8;
                                                                                                    t242 = 0xC8D2488;
                                                                                                }
                                                                                                t245 = t242;
                                                                                            } else {
                                                                                                *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                                                                                *(unsigned int *)0xC2AD1D4 = 0xC0D4AA8;
                                                                                                t245 = 0xC8A8378;
                                                                                            }
                                                                                            t249 = t245;
                                                                                        } else {
                                                                                            *(unsigned int *)0xC2AD1D0 = 0xC0D4A88;
                                                                                            *(unsigned int *)0xC2AD1D4 = 0xC0D4A98;
                                                                                            t249 = 0xC8E32AC;
                                                                                        }
                                                                                        t252 = t249;
                                                                                    }
                                                                                    t266 = t252;
                                                                                } else {
                                                                                    t253 = *(int *)(((0x148 + t12) + 0x0));
                                                                                    t254 = (int)(((unsigned int)t253 >> 21) & 0x3);
                                                                                    if (t254 != 0) {
                                                                                        if (t254 != 1) {
                                                                                            t257 = 0xC2AE348;
                                                                                            if (t254 == 2) {
                                                                                                *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                                                                                *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
                                                                                                t257 = 0xC8D1824;
                                                                                            }
                                                                                            t260 = t257;
                                                                                        } else {
                                                                                            *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                                                                            *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
                                                                                            t260 = 0xC8A7AB4;
                                                                                        }
                                                                                        t263 = t260;
                                                                                    } else {
                                                                                        *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                                                                        *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
                                                                                        t263 = 0xC8E2978;
                                                                                    }
                                                                                    t266 = t263;
                                                                                }
                                                                                t269 = t266;
                                                                            } else {
                                                                                *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                                                                *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
                                                                                t269 = 0xC8E0DA0;
                                                                            }
                                                                            t272 = t269;
                                                                        } else {
                                                                            *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                                                            *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
                                                                            t272 = 0xC8DF93C;
                                                                        }
                                                                        t275 = t272;
                                                                    } else {
                                                                        *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                                                        *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
                                                                        t275 = 0xC8DE4D8;
                                                                    }
                                                                    t278 = t275;
                                                                } else {
                                                                    *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                                                    *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
                                                                    t278 = 0xC8DD074;
                                                                }
                                                                t281 = t278;
                                                            } else {
                                                                *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                                                *(unsigned int *)0xC2AD1D4 = 0xC0D4A70;
                                                                t281 = 0xC8DBDC0;
                                                            }
                                                            t284 = t281;
                                                        } else {
                                                            *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                                            *(unsigned int *)0xC2AD1D4 = 0xC0D4A70;
                                                            t284 = 0xC8DAB0C;
                                                        }
                                                        t287 = t284;
                                                    } else {
                                                        *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                                        *(unsigned int *)0xC2AD1D4 = 0xC0D4A58;
                                                        t287 = 0xC8D8EF8;
                                                    }
                                                    t290 = t287;
                                                } else {
                                                    *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                                                    *(unsigned int *)0xC2AD1D4 = 0xC0D4A58;
                                                    t290 = 0xC8D8EF8;
                                                }
                                                t293 = t290;
                                            }
                                            t296 = t293;
                                        }
                                        t299 = t296;
                                    }
                                    t302 = t299;
                                }
                                t305 = t302;
                            }
                            t308 = t305;
                        }
                        t311 = t308;
                    }
                    t314 = t311;
                }
                t317 = t314;
            }
            t320 = t317;
        }
        Drv_SetMotion(t320, 0.0f);
        t322 = *(signed char *)0xC2AD1DF;
        *(unsigned char *)0xC2AD1DF = (t322 | 0x80);
        *(float *)0xC2AD0F4 = 0.0f;
        *(float *)0xC2AD0F8 = 15.0f;
        t323 = *(signed char *)0xC2AD1DF;
        *(unsigned char *)0xC2AD1DF = (t323 & 0xFD);
        t324 = (t323 & 0xFD);
    }
    return t324;
}
