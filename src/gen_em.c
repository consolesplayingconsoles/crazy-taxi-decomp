/* Straight-line functions with calls and guards (batch gen_em): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0200aa(int);
int FUN_0c077210(int, int);
int GetAverageAngle(int, int, float);
int Psg_SetMoveSpeed(int, float);
int Psg_SetPosPtr(int, int);
int Sound_Request(int, int);
int kmiFlipVertexBuffer(int);
int kmiWriteRegister(int, int);
int kyakuTaskStart(int, int);
int nd_CarSelMain(int);
int nlArcTan2(float, float);
int nlGetAverageVector(int, int, int, float, float);
float nlLength(int, int);
int nlLocate(int, int);
int nlPopMatrix(int);
int nlPrintColor(int);
int nlPrintf(int, ...);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlSubVector3op(int, int, int);
float nlUnitVector(int);
int exec_KyakuMain(float f4);
int kmiStartRenderTextureEntry(int a4);
float psgRunToPoint(int a4, int a5);


int kmiStartRenderTextureEntry(int a4)
{
    int t0;
    int t1;
    int t10;
    int t12;
    int t14;
    int t16;
    int t18;
    int t20;
    int t22;
    int t24;
    int t47;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t33;
    int t35;
    int t37;
    int t39;
    int t40;
    int t42;
    int t44;
    int t49;
    int t51;
    int t53;
    int t55;
    int t57;
    int t58;
    int t60;
    int t62;

    *(unsigned int *)0xC2EA888 = 0x1;
    t0 = *(int *)0xC2EA9E4;
    t1 = *(int *)0xC2EA684;
    if ((t1 & 16) != 0) {
        kmiWriteRegister(0x8, 0x2);
        kmiWriteRegister(0x8, 0x0);
    }
    t10 = *(int *)((((((t0 & 0x1) << 2) << 2) << 1) + 0xC2EAAF0));
    kmiWriteRegister(0x2C, t10);
    t12 = *(int *)(((0xC2EAAEC + ((((t0 & 0x1) << 2) << 2) << 1)) + 0x18));
    kmiWriteRegister(0x20, t12);
    t14 = *(int *)((a4 + 0x8));
    kmiWriteRegister(0x60, t14);
    t16 = *(int *)((a4 + 0x0));
    kmiWriteRegister(0x48, t16);
    t18 = *(int *)((a4 + 0x4));
    kmiWriteRegister(0x4C, t18);
    t20 = *(int *)((a4 + 0xC));
    kmiWriteRegister(0x68, t20);
    t22 = *(int *)((a4 + 0x10));
    kmiWriteRegister(0x6C, t22);
    *(unsigned int *)0xC2EA9F0 = 0x0;
    t24 = *(int *)0xC2EA88C;
    t47 = 0x0;
    if (t24 != 0) {
        for (;;) {
            t25 = *(int *)0xC2EA8E8;
            t26 = *(int *)0xC2EA8EC;
            t27 = ((int (*)(int))(t25))(t26);
            t28 = *(int *)0xC2EA8A8;
            t29 = *(int *)0xC2EA9F0;
            if ((unsigned int)t29 > (unsigned int)t28) {
                break;
            }
            t30 = *(int *)0xC2EA88C;
            if (t30 == 0) {
                if (0x0 != 0) {
                    t31 = *(int *)0xC2EA94C;
                    kmiWriteRegister(0x48, t31);
                    t33 = *(int *)0xC2EA944;
                    kmiWriteRegister(0x4C, t33);
                    t35 = *(int *)0xC2EA934;
                    kmiWriteRegister(0x68, t35);
                    t37 = *(int *)0xC2EA938;
                    kmiWriteRegister(0x6C, t37);
                    *(unsigned int *)0xC2EA88C = 0x0;
                    *(unsigned int *)0xC2EA9F8 = 0x0;
                    t39 = *(int *)0xC178274;
                    return kmiFlipVertexBuffer(t39);
                }
                t40 = *(int *)0xC2EA834;
                kmiWriteRegister(0x8C, t40);
                t42 = *(int *)0xC2EA830;
                kmiWriteRegister(0x88, (t42 & 0xFFFFFFF0));
                t44 = kmiWriteRegister(0x14, 0xFFFFFFFF);
                return t44;
            }
        }
        t47 = 0x1;
    }
    if (t47 != 0) {
        t49 = *(int *)0xC2EA94C;
        kmiWriteRegister(0x48, t49);
        t51 = *(int *)0xC2EA944;
        kmiWriteRegister(0x4C, t51);
        t53 = *(int *)0xC2EA934;
        kmiWriteRegister(0x68, t53);
        t55 = *(int *)0xC2EA938;
        kmiWriteRegister(0x6C, t55);
        *(unsigned int *)0xC2EA88C = 0x0;
        *(unsigned int *)0xC2EA9F8 = 0x0;
        t57 = *(int *)0xC178274;
        return kmiFlipVertexBuffer(t57);
    }
    t58 = *(int *)0xC2EA834;
    kmiWriteRegister(0x8C, t58);
    t60 = *(int *)0xC2EA830;
    kmiWriteRegister(0x88, (t60 & 0xFFFFFFF0));
    t62 = kmiWriteRegister(0x14, 0xFFFFFFFF);
    return t62;
}

float psgRunToPoint(int a4, int a5)
{
    float t1;
    float u17;
    float u12;
    float u7;
    float u4;
    float u2;
    float u21;
    float u22;
    int t23;
    int t24;
    int t25;
    float u26;
    float u27;
    float u28;
    float u29;
    int t36;
    float u39;
    int stk[13] = {0};

    nlSubVector3op((((int)stk + 4) + 0x10), a5, (a4 + 0x4));
    *(float *)(((int)stk + 24)) = 0.0f;
    t1 = nlUnitVector((((int)stk + 4) + 0x10));
    u17 = 0.0f;
    if (50.0f > t1) {
    } else {
        u12 = 0.849999964f;
        if (70.5f > t1) {
        } else {
            u7 = 0.875f;
            if (100.0f > t1) {
            } else {
                u4 = 0.924999952f;
                if (125.0f > t1) {
                } else {
                    u2 = *(float *)0xC071438;
                    u4 = u2;
                }
                u7 = u4;
            }
            u12 = u7;
        }
        u17 = u12;
    }
    u21 = *(float *)(((int)stk + 28));
    u22 = *(float *)(((int)stk + 20));
    t23 = nlArcTan2(u22, u21);
    *(unsigned int *)(((int)stk + 4)) = t23;
    t24 = *(int *)((a4 + 0x10));
    t25 = GetAverageAngle(t24, t23, u17);
    *(unsigned int *)((a4 + 0x10)) = (short)t25;
    u26 = *(float *)0xC071444;
    u27 = *(float *)((a4 + 0x11C));
    if (u26 > u27) {
        u28 = *(float *)0xC071448;
        u29 = *(float *)((a4 + 0x11C));
        Psg_SetMoveSpeed(a4, (u29 + u28));
    }
    nlPushUnitMatrix();
    t36 = *(int *)((a4 + 0x10));
    nlRotateAY((t36 + 0x8000));
    FUN_0c077210(0xC0D5578, (((int)stk + 4) + 0x10));
    u39 = *(float *)((a4 + 0x11C));
    nlGetAverageVector((a4 + 0x4), (((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4), 1.0f, u39);
    Psg_SetPosPtr(a4, (((int)stk + 4) + 0x4));
    nlPopMatrix(0x1);
    return t1;
}
