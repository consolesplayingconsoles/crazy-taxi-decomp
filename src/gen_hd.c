/* Straight-line functions with calls and guards (batch gen_hd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckColliWall(int, float);
int SetCameraPosVelocity(int);
float GetCameraDistance(void);
int nlSqrt(int, int);
int FUN_0c077210(int, int);
int GetCollision(int, int, float, float);
int GetCollision2D(int, float);
int ResetSpark(void);
int SetCameraMode(int);
int SetCameraPosRatio(float, float);
int MultiRot4Vec(int);
int camSetAngles(int, int, int, int);
int camSetEye(int, int);
int camSetTarget(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
float nlRandom(void);
int nlScaleVector(int, int, float);
int nlTranslateV(int);
void ExecAdvCameraRandom(void);

void ExecAdvCameraRandom(void)
{
    float t3;
    int t5;
    float t7;
    float t8;
    float t9;
    float u10;
    float t13;
    int t18;
    int t19;
    int t20;
    int t33;
    int t34;
    float u35;
    float u36;
    float u37;
    float u40;
    float u41;
    float u42;
    int t54;
    int t55;
    int t56;
    float u57;
    int t58;
    float u59;
    int t67;
    int t68;
    int t69;
    int t70;
    int t71;
    int t72;
    int t82;
    int t83;
    int t84;
    int t94;
    int t96;
    float u97;
    float u98;
    float u99;
    float u101;
    float u102;
    float u103;
    int stk[16] = {0};

    nlPushUnitMatrix();
    nlTranslateV(0xC179144);
    MultiRot4Vec(0xC1790FC);
    t3 = GetCameraDistance();
    if (t3 > 500.0f) {
        *(unsigned int *)0xC179974 = 0x1;
    }
    t5 = *(int *)0xC179974;
    if (t5 != 0) {
        *(float *)0xC179980 = 0.0f;
        *(float *)0xC179978 = 0.0f;
        *(float *)0xC17997C = 5.0f;
        nlSqrt(0xC179978, 0xC179978);
        t7 = nlRandom();
        *(float *)0xC179984 = ((t7 + -0.5f) * 68.0f);
        t8 = nlRandom();
        *(float *)0xC179988 = ((t8 + -0.5f) * 16.0f);
        t9 = nlRandom();
        u10 = 27.0f;
        u10 = u10 + 27.0f * t9;
        *(float *)0xC17998C = u10;
        FUN_0c077210(0xC179984, 0xC179984);
        GetCollision(0xC179978, 0xC179984, 1.0f, 5.0f);
        t13 = nlRandom();
        nlScaleVector(0xC179984, 0xC1791C8, (t13 + (1.0f + 1.0f)));
        camSetEye(0xC179978, 0x0);
        SetCameraPosVelocity(0xC179984);
        SetCameraPosRatio(0.899999976f, 0.199999988f);
        t18 = nlRand();
        *(unsigned int *)0xC179990 = ((int)((t18 << 16) << 1) >> 19);
        t19 = nlRand();
        *(unsigned int *)0xC179994 = ((int)((t19 << 16) << 1) >> 25);
        t20 = nlRand();
        *(unsigned int *)0xC179998 = (t20 & 0x3);
        SetCameraMode(0x1);
        ResetSpark();
        *(unsigned int *)0xC179974 = 0x0;
    }
    nlScaleVector(0xC179984, 0xC179984, 0.979999959f);
    GetCollision(0xC179978, 0xC179984, 0.0f, 5.0f);
    CheckColliWall(0xC179978, 5.0f);
    t33 = GetCollision2D(0xC179978, 5.0f);
    t34 = *(int *)((t33 + 0x1C));
    if (t34 != -1) {
        u35 = *(float *)0xC17997C;
        u36 = *(float *)((t33 + 0x18));
        if (u36 > (u35 + -5.0f)) {
            u37 = *(float *)((t33 + 0x18));
            *(float *)0xC17997C = (u37 + 5.0f);
        }
        u40 = *(float *)0xC17997C;
        u41 = *(float *)((t33 + 0x18));
        if ((u40 + -100.0f) > u41) {
            u42 = *(float *)((t33 + 0x18));
            *(float *)0xC17997C = (u42 + 100.0f);
        }
    } else {
        *(unsigned int *)0xC179974 = 0x1;
    }
    camSetEye(0xC179978, 0x2);
    t54 = *(int *)0xC0965F8;
    t55 = *(int *)0xC0965F4;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t54;
    t56 = *(int *)0xC0965F0;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t55;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t56;
    u57 = *(float *)(((int)stk + 8));
    *(float *)(((int)stk + 8)) = (u57 + 5.0f);
    t58 = *(int *)0xC179998;
    if ((t58 & 2) != 0) {
        u59 = *(float *)(((int)stk + 12));
        *(float *)(((int)stk + 12)) = (u59 + 50.0f);
    }
    nlSqrt(((int)stk + 4), ((int)stk + 4));
    camSetTarget(((int)stk + 4), 0x2);
    nlPopMatrix(0x1);
    t67 = *(int *)0xC179990;
    t68 = *(int *)0xC179994;
    *(unsigned int *)0xC179990 = (t67 + t68);
    if ((int)(t67 + t68) >= (int)0xFFFFE800) {
        t69 = *(int *)0xC179990;
        if ((int)t69 > (int)0x1800) {
            t70 = *(int *)0xC179994;
            if ((int)t70 < 0) {
                t71 = *(int *)0xC179994;
                *(unsigned int *)0xC179994 = (t71 + 0x1);
            } else {
                if ((int)t70 > 0) {
                    t72 = *(int *)0xC179994;
                    *(unsigned int *)0xC179994 = (t72 - 1);
                }
            }
        }
    } else {
        t82 = *(int *)0xC179994;
        if ((int)t82 < 0) {
            t83 = *(int *)0xC179994;
            *(unsigned int *)0xC179994 = (t83 + 0x1);
        } else {
            if ((int)t82 > 0) {
                t84 = *(int *)0xC179994;
                *(unsigned int *)0xC179994 = (t84 - 1);
            }
        }
    }
    t94 = *(int *)0xC179990;
    camSetAngles(0x0, 0x0, t94, 0x0);
    t96 = *(int *)0xC179998;
    if ((0x1 & t96) != 0) {
        u97 = *(float *)0xC0290DC;
        u98 = *(float *)0xC0290E0;
        u99 = ((u97 - t3) / u98);
        if (0.0f > ((u97 - t3) / u98)) {
            u99 = 0.0f;
        }
        u101 = *(float *)0xC0290E4;
        u102 = 27.0f;
        u102 = u102 + u101 * u99;
        *(float *)0xC1798A4 = u102;
    } else {
        u103 = *(float *)0xC0290E8;
        *(float *)0xC1798A4 = u103;
    }
}
