/* Straight-line functions with calls and guards (batch gen_ck): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nd_SprPut(int, int, float, float);
int FUN_0c077210(int, int);
int FUN_0c078750(void);
int FUN_0c07ab30(void);
int PutStringFixPfont(int, int, float, float, float, float);
int ResetFadeColor(void);
int SetFadeColorBaseMulti(float, float, float);
int Sound_Request(int, int);
extern float _builtin_fipr(float *, float *);
extern float _builtin_sqrtf(float);
int courseStatusGet(int, int, int, int);
int extRand(void);
int getNearLineIndex(int, int, int, int);
int getSteering(int);
static float iaFsrra(float x)
{
    return _builtin_fsrra(x);
}
int nlAddVector(int, int);
int nlFastSinCos(int, int, int);
int nlLocate(int, int);
int nlMultiMatrix(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
float nlScalor(int);
int nlSprPut(int);
int nlSubVector(int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
float pfLength(int);
int pfSetFont(int);
int putString(int, int, float, float, float);
float FUN_0c078de0(int a4, int a5);
float fcvHermite(int a4, int a5, float f4);
float carCalcInertia(int a4);
float BigOneKeyValue(int a4, int a5, float f4);
int sklRotate(int a4);
int PutNameEntryDrum(int a4, float f4);
void goiToolCamera(int a4);
int Put_Window_SpriteXandY(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);
int putRecordUnit(int a4, int a5, int a6, int a7, int a8, float f4, float f5);
int putCarModel(int a4, int a5);
int trainCarDrive(int a4, int a5, int a6, int a7);

float FUN_0c078de0(int a4, int a5)
{
    float u0;
    float u1;
    float u2;
    float u5;
    float u6;
    float u3[4];
    float u4[4];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x4) + 0x0));
    u2 = *(float *)((((a4 + 0x4) + 0x4) + 0x0));
    u3[0] = u0;
    u3[1] = u1;
    u3[2] = u2;
    u3[3] = 0.0f;
    u4[0] = u0;
    u4[1] = u1;
    u4[2] = u2;
    u4[3] = 0.0f;
    u5 = _builtin_fipr(u3, u4);
    u6 = iaFsrra(u5);
    *(float *)((((a5 + 0xC) - 0x4) + 0x0)) = (u2 * u6);
    *(float *)(((((a5 + 0xC) - 0x4) - 0x4) + 0x0)) = (u1 * u6);
    *(float *)((((((a5 + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = (u0 * u6);
    return _builtin_sqrtf(u5);
}

float fcvHermite(int a4, int a5, float f4)
{
    float u1;
    float u0;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;

    u1 = 1.0f;
    if (!(f4 > 1.0f)) {
        u0 = f4;
        if (0.0f > f4) {
            u0 = 0.0f;
        }
        u1 = u0;
    }
    u2 = *(float *)0xC067C10;
    u3 = *(float *)((a5 + 0x4));
    u4 = *(float *)((a4 + 0x4));
    u5 = *(float *)((a4 + 0xC));
    u6 = *(float *)((a5 + 0x8));
    return ((((u3 * (((u1 * u1) * u2) - ((u1 * (u1 * u1)) * (1.0f + 1.0f)))) + ((((u1 * (u1 * u1)) * (1.0f + 1.0f)) - ((u1 * u1) * u2)) + 1.0f) * u4) + ((u1 - ((u1 * u1) * (1.0f + 1.0f))) + (u1 * (u1 * u1))) * u5) + ((u1 * (u1 * u1)) - (u1 * u1)) * u6);
}

float carCalcInertia(int a4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;

    u0 = *(float *)((a4 + 0x140));
    u1 = *(float *)((a4 + 0x13C));
    u2 = *(float *)((a4 + 0x128));
    *(float *)((a4 + 0x14C)) = (1.0f / ((u2 * ((u1 * u1) + u0 * u0)) / 12.0f));
    u3 = *(float *)((a4 + 0x144));
    u4 = *(float *)((a4 + 0x13C));
    u5 = *(float *)((a4 + 0x128));
    *(float *)((a4 + 0x148)) = (1.0f / ((u5 * ((u4 * u4) + u3 * u3)) / 12.0f));
    u6 = *(float *)((a4 + 0x144));
    u7 = *(float *)((a4 + 0x140));
    u8 = *(float *)((a4 + 0x128));
    *(float *)((a4 + 0x150)) = (1.0f / ((u8 * ((u7 * u7) + u6 * u6)) / 12.0f));
    return u6;
}

float BigOneKeyValue(int a4, int a5, float f4)
{
    float u0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u11;
    float u12;
    float u14;
    float u15;
    float u17;
    float u16;
    float u18;
    float u19;
    float u20;
    float u21;

    u0 = *(float *)0xC0738F0;
    if ((int)(a5 - 1) > 0) {
        t1 = 0xC0738F0;
        t2 = ((0x0 + a4) + 0x10);
        t3 = (0x0 + a4);
        t4 = 0x0;
        t5 = ((0x0 + a4) + 0x10);
        for (;;) {
            u6 = *(float *)(((((t4 << 2) << 2) + a4) + 0x0));
            if (!(u6 > f4)) {
                t1 = 0x10;
                u7 = *(float *)(((((t4 << 2) << 2) + a4) + t1));
                if (u7 > f4) break;
                u8 = *(float *)((t2 + 0x0));
                if (u8 == f4) {
                    t1 = 0x4;
                    u9 = *(float *)((t5 + t1));
                    return u9;
                }
                t4 = (t4 + 0x1);
                t2 = (t2 + 0x10);
                t5 = (t5 + 0x10);
                t3 = (t3 + 0x10);
                if ((int)t4 >= (int)(a5 - 1)) {
                    return 0.0f;
                }
                continue;
            }
            u11 = *(float *)((t2 + 0x0));
            if (u11 == f4) {
                t1 = 0x4;
                u12 = *(float *)((t5 + t1));
                return u12;
            }
            t4 = (t4 + 0x1);
            t2 = (t2 + 0x10);
            t5 = (t5 + 0x10);
            t3 = (t3 + 0x10);
            if ((int)t4 >= (int)(a5 - 1)) {
                return 0.0f;
            }
        }
        u14 = *(float *)(((((t4 << 2) << 2) + a4) + t1));
        u15 = *(float *)(((((t4 << 2) << 2) + a4) + 0x0));
        u17 = 0.0f;
        if (!(0.0f > ((f4 - u15) / (u14 - u15)))) {
            u16 = ((f4 - u15) / (u14 - u15));
            if (((f4 - u15) / (u14 - u15)) > 1.0f) {
                u16 = 1.0f;
            }
            u17 = u16;
        }
        u18 = *(float *)((t3 + 0x14));
        u19 = *(float *)((t3 + 0x4));
        u20 = *(float *)((t3 + 0xC));
        u21 = *(float *)((t3 + 0x8));
        return ((((u18 * (((u17 * u17) * u0) - ((u17 * (u17 * u17)) * (1.0f + 1.0f)))) + ((((u17 * (u17 * u17)) * (1.0f + 1.0f)) - ((u17 * u17) * u0)) + 1.0f) * u19) + ((u17 - ((u17 * u17) * (1.0f + 1.0f))) + (u17 * (u17 * u17))) * u20) + ((u17 * (u17 * u17)) - (u17 * u17)) * u21);
    }
    return 0.0f;
}

int sklRotate(int a4)
{
    int t0;
    int t2;
    int t4;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19;
    float u20;
    float u21;
    float u22;
    float u23;
    float u24;
    float u25;
    float u26;
    float u27;
    float u28;
    float u29;
    float u30;
    float u31;
    float u32;
    float u33;
    float u34;
    int t35;
    int stk[10] = {0};

    t0 = *(short *)((a4 + 0x0));
    nlFastSinCos(t0, (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x10));
    t2 = *(short *)((a4 + 0x2));
    nlFastSinCos(t2, (((int)stk + 4) + 0x8), (((int)stk + 4) + 0x14));
    t4 = *(short *)((a4 + 0x4));
    nlFastSinCos(t4, ((int)stk + 4), (((int)stk + 4) + 0x4));
    u6 = *(float *)(((int)stk + 8));
    u7 = *(float *)(((int)stk + 24));
    *(float *)0xC13EE3C = (u7 * u6);
    u8 = *(float *)(((int)stk + 4));
    u9 = *(float *)(((int)stk + 24));
    *(float *)0xC13EE40 = (u8 * u9);
    u10 = *(float *)(((int)stk + 12));
    *(float *)0xC13EE44 = (-u10);
    u11 = *(float *)(((int)stk + 12));
    u12 = *(float *)(((int)stk + 16));
    u13 = *(float *)(((int)stk + 8));
    u14 = *(float *)(((int)stk + 20));
    u15 = *(float *)(((int)stk + 4));
    *(float *)0xC13EE4C = (((u12 * u11) * u13) - (u15 * u14));
    u16 = *(float *)(((int)stk + 12));
    u17 = *(float *)(((int)stk + 16));
    u18 = *(float *)(((int)stk + 8));
    u19 = *(float *)(((int)stk + 20));
    u20 = *(float *)(((int)stk + 4));
    *(float *)0xC13EE50 = ((u19 * u18) + u20 * (u17 * u16));
    u21 = *(float *)(((int)stk + 24));
    u22 = *(float *)(((int)stk + 16));
    *(float *)0xC13EE54 = (u22 * u21);
    u23 = *(float *)(((int)stk + 20));
    u24 = *(float *)(((int)stk + 12));
    u25 = *(float *)(((int)stk + 16));
    u26 = *(float *)(((int)stk + 4));
    u27 = *(float *)(((int)stk + 8));
    *(float *)0xC13EE5C = ((u25 * u26) + u27 * (u24 * u23));
    u28 = *(float *)(((int)stk + 12));
    u29 = *(float *)(((int)stk + 20));
    u30 = *(float *)(((int)stk + 4));
    u31 = *(float *)(((int)stk + 8));
    u32 = *(float *)(((int)stk + 16));
    *(float *)0xC13EE60 = (((u28 * u30) * u29) - (u32 * u31));
    u33 = *(float *)(((int)stk + 24));
    u34 = *(float *)(((int)stk + 20));
    *(float *)0xC13EE64 = (u34 * u33);
    t35 = nlMultiMatrix(0xC13EE3C);
    return t35;
}

int PutNameEntryDrum(int a4, float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    int t19;
    int stk[35] = {0};

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(float *)(((int)stk + 28)) = 420.0f;
    *(float *)(((int)stk + 32)) = 1.0f;
    *(float *)(((int)stk + 40)) = 1.0f;
    *(float *)(((int)stk + 36)) = 1.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 56)) = 1.0f;
    *(float *)(((int)stk + 52)) = 1.0f;
    *(unsigned int *)(((int)stk + 60)) = 0x0;
    *(float *)(((int)stk + 64)) = 1.0f;
    *(unsigned int *)(((int)stk + 72)) = 0x70E;
    *(unsigned int *)(((int)stk + 68)) = 0x2;
    *(float *)(((int)stk + 16)) = ((1.0f + 1.0f) - f4);
    *(float *)(((int)stk + 12)) = (32.0f - (f4 * 16.0f));
    *(float *)(((int)stk + 8)) = (f4 + 1.0f);
    t0 = 0xFFFFFFF6;
    do {
        t1 = *(int *)(((int)stk + 4));
        t2 = (int)((unsigned int)((t1 + t0) + 0x2D) % (unsigned int)0x2D);
        t3 = *(int *)((0xC0EE918 + (t2 << 2)));
        *(unsigned int *)(((int)stk + 20)) = t3;
        *(float *)(((int)stk + 24)) = (336.0f + 32.0f * ((float)t0 + f4));
        if (t0 == 0) {
            u4 = *(float *)(((int)stk + 24));
            *(float *)(((int)stk + 24)) = (u4 - (16.0f - (f4 * 16.0f)));
            u5 = *(float *)(((int)stk + 16));
            u6 = *(float *)0xC2864D4;
            *(float *)(((int)stk + 40)) = (u5 * u6);
            *(float *)(((int)stk + 36)) = (u5 * u6);
        } else {
            if (t0 == -1) {
                u7 = *(float *)(((int)stk + 12));
                u8 = *(float *)(((int)stk + 24));
                *(float *)(((int)stk + 24)) = (u8 - u7);
                u9 = *(float *)(((int)stk + 8));
                *(float *)(((int)stk + 40)) = u9;
                *(float *)(((int)stk + 36)) = u9;
            } else {
                *(float *)(((int)stk + 40)) = 1.0f;
                *(float *)(((int)stk + 36)) = 1.0f;
                if ((int)t0 < 0) {
                    u10 = *(float *)(((int)stk + 24));
                    *(float *)(((int)stk + 24)) = (u10 - 32.0f);
                }
            }
        }
        t19 = nlSprPut((((int)stk + 4) + 0x10));
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0xA);
    return t19;
}

void goiToolCamera(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t6;
    float u4;
    int t5;
    int t9;
    float u7;
    int t8;
    float u10;
    float u11;
    int t12;
    int t16;
    float u13;
    int t14;
    int t22;
    float u19;
    int t20;
    float u25;
    int t26;
    int t30;
    float u27;
    int t28;
    int t38;
    float u34;
    int t35;
    float u41;
    int t42;
    int t43;
    int t44;
    float u47;
    int t48;
    float u50;
    int t51;
    float u53;
    float t56;
    int t59;
    int t60;
    int t61;
    float u64;
    float u65;
    float u66;
    int stk[18] = {0};

    if (a4 == 0) {
        t0 = *(int *)0xC0A4790;
        *(unsigned int *)0xC2A62C8 = t0;
        t1 = *(int *)0xC0A478C;
        *(unsigned int *)0xC2A62C4 = t1;
        t2 = *(int *)0xC0A4788;
        *(unsigned int *)0xC2A62C0 = t2;
        *(float *)0xC2A62CC = 0.0f;
    } else {
        t3 = *(int *)0xC1EE24C;
        t6 = 0x0;
        if ((0x80 & t3) != 0) {
            u4 = *(float *)0xC2A62C4;
            t5 = 0x0;
            if (u4 > -0.0799999982f) {
                t5 = 0x1;
            }
            t6 = t5;
        }
        t9 = 0x0;
        if ((0x40 & t3) != 0) {
            u7 = *(float *)0xC2A62C4;
            t8 = 0x0;
            if (0.0799999982f > u7) {
                t8 = 0x1;
            }
            t9 = t8;
        }
        u10 = *(float *)0xC2A62C4;
        *(float *)0xC2A62C4 = (u10 - ((float)(t6 - t9) * 0.00399999972f));
        u11 = *(float *)0xC2A62C4;
        *(float *)0xC2A62C4 = (u11 * 0.799999952f);
        t12 = *(int *)0xC1EE24C;
        t16 = 0x0;
        if ((0x20 & t12) != 0) {
            u13 = *(float *)0xC2A62C0;
            t14 = 0x0;
            if (0.0599999987f > u13) {
                t14 = 0x1;
            }
            t16 = t14;
        }
        t22 = 0x0;
        if ((0x10 & t12) != 0) {
            u19 = *(float *)0xC2A62C0;
            t20 = 0x0;
            if (u19 > -0.0599999987f) {
                t20 = 0x1;
            }
            t22 = t20;
        }
        u25 = *(float *)0xC2A62C0;
        *(float *)0xC2A62C0 = ((u25 + 0.00399999972f * (float)(t16 - t22)) * 0.799999952f);
        t26 = *(int *)0xC1EE24C;
        t30 = 0x0;
        if ((0x4 & t26) != 0) {
            u27 = *(float *)0xC2A62CC;
            t28 = 0x0;
            if (8.0f > u27) {
                t28 = 0x1;
            }
            t30 = t28;
        }
        t38 = 0x0;
        if ((0x2 & t26) != 0) {
            u34 = *(float *)0xC2A62CC;
            t35 = 0x0;
            if (u34 > -8.0f) {
                t35 = 0x1;
            }
            t38 = t35;
        }
        u41 = *(float *)0xC2A62CC;
        *(float *)0xC2A62CC = ((u41 + 0.399999976f * (float)(t30 - t38)) * 0.799999952f);
        t42 = *(int *)0xC2A6284;
        *(unsigned int *)((((int)stk + 20) + 0x8)) = t42;
        t43 = *(int *)0xC2A6280;
        *(unsigned int *)((((int)stk + 20) + 0x4)) = t43;
        t44 = *(int *)0xC2A627C;
        *(unsigned int *)((((int)stk + 20) + 0x0)) = t44;
        nlSubVector(((int)stk + 20), 0xC179840);
        nlPushUnitMatrix();
        u47 = *(float *)0xC2A62C4;
        t48 = *(short *)0xC17985A;
        nlRotateAY(((unsigned short)t48 + ((int)(((u47 * 65536.0f) / 6.28318501f) + 0.5f) & 0xFFFF)));
        u50 = *(float *)0xC2A62C0;
        t51 = *(short *)0xC179858;
        nlRotateAX(((unsigned short)t51 + ((int)(((u50 * 65536.0f) / 6.28318501f) + 0.5f) & 0xFFFF)));
        *(float *)(((int)stk + 36)) = 0.0f;
        *(float *)(((int)stk + 32)) = 0.0f;
        u53 = *(float *)0xC2A62CC;
        *(float *)(((int)stk + 40)) = (-u53);
        FUN_0c077210((((int)stk + 20) + 0xC), (((int)stk + 20) + 0xC));
        nlAddVector(0xC179840, (((int)stk + 20) + 0xC));
        *(float *)(((int)stk + 36)) = 0.0f;
        *(float *)(((int)stk + 32)) = 0.0f;
        t56 = nlScalor(((int)stk + 20));
        *(float *)(((int)stk + 40)) = (-t56);
        FUN_0c077210((((int)stk + 20) + 0xC), (((int)stk + 20) + 0xC));
        nlAddVector((((int)stk + 20) + 0xC), 0xC179840);
        t59 = *(int *)(((((int)stk + 20) + 0xC) + 0x8));
        *(unsigned int *)0xC2A6284 = t59;
        t60 = *(int *)(((((int)stk + 20) + 0xC) + 0x4));
        *(unsigned int *)0xC2A6280 = t60;
        t61 = *(int *)(((((int)stk + 20) + 0xC) + 0x0));
        *(unsigned int *)0xC2A627C = t61;
        nlPopMatrix(0x1);
        nlLocate(0x1, 0x32);
        u64 = *(float *)0xC179848;
        *(float *)(((int)stk + 16)) = u64;
        u65 = *(float *)0xC179844;
        *(float *)(((int)stk + 12)) = u65;
        u66 = *(float *)0xC179840;
        *(float *)(((int)stk + 8)) = u66;
        nlPrintf(0xC0C3268, u66, u65, u64);
    }
}


int putRecordUnit(int a4, int a5, int a6, int a7, int a8, float f4, float f5)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    float t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t12;
    float u14;
    int t20;
    int t22;
    int t23;
    float t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t30;
    float u32;
    int t39;
    int t44;
    int t42;
    int t51;
    int t72;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t62;
    int t67;
    int t68;
    int t75;
    int t77;
    int t78;
    int t49;
    int t50;
    float u19;
    int t46;
    int t47;
    float u38;
    int t66;
    int t64;
    int stk[26] = {0};

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned char *)(((((int)stk + 4) + 0x2F) + 0x0)) = 0x0;
    t0 = *(int *)(((int)stk + 4));
    pfSetFont((t0 & 0x3));
    t2 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 12)) = (t2 & 0x4);
    t3 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 16)) = (t3 & 0x8);
    if (a7 == 3) {
        t4 = 0x2;
        t5 = (((int)stk + 4) + 0x2F);
        while (t4 != 0) {
            t4 = (t4 - 1);
            *(unsigned char *)(((t5 - 0x1) + 0x0)) = 0x20;
            t5 = (t5 - 0x1);
        }
        t6 = pfLength(0xC0A202C);
        t7 = *(int *)(((int)stk + 8));
        t8 = *(int *)(((int)stk + 12));
        if (t8 != 0) {
            t9 = (int)((unsigned int)((t7 + 0x2) * a8) + (unsigned int)0x0);
            t10 = (int)((unsigned int)t9 + ((((int)0x0 > (int)((t7 + 0x2) * a8))) ? 1u : 0u));
            u19 = ((((float)(t10 >> 1) - (float)(a8 << 1)) + 0.5f * t6) + f4);
        } else {
            t12 = *(int *)(((int)stk + 16));
            u14 = (((float)((t7 + 0x2) * a8) - (float)(a8 << 1)) + f4);
            if (t12 != 0) {
                u14 = ((f4 - (float)(a8 << 1)) + t6);
            }
            u19 = u14;
        }
        t20 = *(int *)(((int)stk + 4));
        putString(t20, 0xC0A202C, u19, f5, 1.0f);
        t49 = a5;
        t50 = t5;
    } else {
        if (a7 == 4) {
            t22 = 0x7;
            t23 = (((int)stk + 4) + 0x2F);
            while (t22 != 0) {
                t22 = (t22 - 1);
                *(unsigned char *)(((t23 - 0x1) + 0x0)) = 0x20;
                t23 = (t23 - 0x1);
            }
            t24 = pfLength(0xC0A2030);
            t25 = *(int *)(((int)stk + 8));
            t26 = *(int *)(((int)stk + 12));
            if (t26 != 0) {
                t27 = (int)((unsigned int)((t25 + 0x7) * a8) + (unsigned int)0x0);
                t28 = (int)((unsigned int)t27 + ((((int)0x0 > (int)((t25 + 0x7) * a8))) ? 1u : 0u));
                u38 = ((((float)(t28 >> 1) - (float)(((a8 << 2) << 1) - a8)) + 0.5f * t24) + f4);
            } else {
                t30 = *(int *)(((int)stk + 16));
                u32 = (((float)((t25 + 0x7) * a8) - (float)(((a8 << 2) << 1) - a8)) + f4);
                if (t30 != 0) {
                    u32 = ((f4 - (float)(((a8 << 2) << 1) - a8)) + t24);
                }
                u38 = u32;
            }
            t39 = *(int *)(((int)stk + 4));
            putString(t39, 0xC0A2030, u38, f5, 1.0f);
            t46 = a5;
            t47 = t23;
        } else {
            t44 = a5;
            if (a7 == 5) {
                t42 = a5;
                if (a5 != -1) {
                    t42 = (0x7A6 + ((((((unsigned int)((unsigned int)((unsigned int)a5 >> 16) >> 2) >> 2) & 0xF) * 0xF4240) + ((((unsigned int)a5 >> 15) & 0x1F) * 0x2710)) + (((unsigned int)((unsigned int)a5 >> 16) >> 8) & 0x7F)));
                }
                t44 = t42;
            }
            t46 = t44;
            t47 = (((int)stk + 4) + 0x2F);
        }
        t49 = t46;
        t50 = t47;
    }
    t51 = *(int *)(((int)stk + 8));
    t72 = t50;
    if ((int)t51 > 0) {
        t52 = t51;
        t53 = 0x0;
        t54 = a5;
        t55 = 0x1;
        t56 = t49;
        t57 = t50;
        do {
            if (a7 == 1) {
                if ((int)t53 < (int)0x3) {
                    t55 = 0x1;
                }
                if (t55 != 0) {
                    if (t53 != 2) {
                        if (t53 == 5) {
                            t54 = 0x2C;
                            *(unsigned char *)(((t57 - 0x1) + 0x0)) = t54;
                            t57 = (t57 - 0x1);
                        }
                    } else {
                        t54 = 0x2E;
                        *(unsigned char *)(((t57 - 0x1) + 0x0)) = t54;
                        t57 = (t57 - 0x1);
                    }
                } else if (t53 == 5) {
                    *(unsigned char *)(((t57 - 0x1) + 0x0)) = 0x20;
                    t57 = (t57 - 0x1);
                }
            } else {
                if (a7 == 2) {
                    t54 = 0x5;
                    if ((int)t53 < (int)t54) {
                        t55 = 0x1;
                    }
                    if (t53 == 2) {
                        t54 = 0x22;
                        *(unsigned char *)(((t57 - 0x1) + 0x0)) = t54;
                        t57 = (t57 - 0x1);
                    } else if (t53 == 4) {
                        t54 = 0x27;
                        *(unsigned char *)(((t57 - 0x1) + 0x0)) = t54;
                        t57 = (t57 - 0x1);
                    }
                } else {
                    if (a7 == 3) {
                        if ((int)t53 < (int)0x3) {
                            t55 = 0x1;
                        }
                        if (t53 == 2) {
                            t54 = 0x2E;
                            *(unsigned char *)(((t57 - 0x1) + 0x0)) = t54;
                            t57 = (t57 - 0x1);
                        }
                    } else {
                        if (a7 == 5) {
                            t52 = 0x8;
                            if ((int)t53 < (int)t52) {
                                t55 = 0x1;
                            }
                            if (t53 != 4) {
                                if (t53 == 6) {
                                    t54 = 0x2F;
                                    *(unsigned char *)(((t57 - 0x1) + 0x0)) = t54;
                                    t57 = (t57 - 0x1);
                                }
                            } else {
                                t54 = 0x2F;
                                *(unsigned char *)(((t57 - 0x1) + 0x0)) = t54;
                                t57 = (t57 - 0x1);
                            }
                        }
                    }
                }
            }
            t54 = 0xA;
            if (t55 != 0) {
                if (t56 != -1) {
                    t52 = 0xC081134;
                    t62 = (int)((unsigned int)t56 % (unsigned int)t54);
                    *(unsigned char *)(((t57 - 0x1) + 0x0)) = (t62 + 0x30);
                    t57 = (t57 - 0x1);
                    t64 = 0xC081134;
                } else {
                    *(unsigned char *)(((t57 - 0x1) + 0x0)) = 0x2D;
                    t57 = (t57 - 0x1);
                    t64 = t52;
                }
                t66 = t64;
            } else {
                *(unsigned char *)(((t57 - 0x1) + 0x0)) = 0x20;
                t57 = (t57 - 0x1);
                t66 = t52;
            }
            t52 = t66;
            if (t56 != -1) {
                t67 = (int)((unsigned int)t56 / (unsigned int)t54);
                t56 = t67;
                if (t56 != -1) {
                    if (t56 == 0) {
                        t55 = 0x0;
                    }
                } else {
                    t55 = 0x0;
                }
            } else {
                t55 = 0x0;
            }
            t68 = *(int *)(((int)stk + 8));
            t52 = t68;
            t53 = (t53 + 0x1);
        } while ((int)t53 < (int)t52);
        t72 = t57;
    }
    t75 = t72;
    if (a7 == 1) {
        *(unsigned char *)(((t72 - 0x1) + 0x0)) = 0x24;
        t75 = (t72 - 0x1);
    }
    t77 = *(int *)(((int)stk + 4));
    t78 = PutStringFixPfont(t77, t75, f4, f5, (float)a8, 1.0f);
    return t78;
}

int putCarModel(int a4, int a5)
{
    int t0;
    int t2;
    int t3;
    float u5;
    float u6;
    float u7;
    int t9;
    int t11;
    int t13;
    int t15;
    float u19;
    float u20;
    int t22;
    int t24;
    int t26;
    int t27;
    float u28;
    float u29;
    float u30;
    int t33;
    int t36;
    int t37;
    int t40;
    int t41;
    int t44;
    int t45;
    int t51;
    int t46;
    int t47;
    int t48;
    float u52;
    int t54;
    int t53;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t62;
    int t63;
    int t68;
    int t69;
    float u70;
    float u71;
    int t72;
    int t74;
    float u76;
    int t78;
    int t81;
    int t83;
    float u84;
    float u85;
    float u86;
    float u88;
    int t90;
    int t96;
    float u98;
    int t100;
    int t103;
    int t105;
    float u106;
    float u107;
    float u108;
    float u110;
    int t112;
    int t116;
    int t118;
    float u120;
    int t122;
    int t125;
    int t127;
    float u128;
    float u129;
    float u130;
    float u132;
    int t134;
    int t143;
    int stk[14] = {0};

    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = *(short *)((a4 + 0x78));
    nlPushMatrix(0x0);
    t2 = *(int *)(((int)stk + 4));
    t3 = *(int *)((((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x8) + (t2 << 2)) + 0x0));
    if (t3 != 0) {
        nlPushUnitMatrix();
        u5 = *(float *)((a4 + 0x94));
        u6 = *(float *)((a4 + 0x104));
        u7 = *(float *)((a4 + 0x8C));
        nlTranslate(u7, u6, u5);
        t9 = *(short *)((a4 + 0x10A));
        nlRotateAY((unsigned short)t9);
        t11 = *(short *)((a4 + 0x108));
        nlRotateAX((unsigned short)t11);
        t13 = *(short *)((a4 + 0x10C));
        nlRotateAZ((unsigned short)t13);
        t15 = *(int *)((((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x8) + (t2 << 2)) + 0x0));
        FUN_0c07ab30();
        nlPopMatrix(0x1);
    }
    u19 = *(float *)((a4 + 0xFC));
    u20 = *(float *)((a4 + 0xF8));
    nlTranslate(0.0f, (u20 + u19), 0.0f);
    t22 = *(short *)((a4 + 0xAA));
    nlRotateAX((unsigned short)t22);
    t24 = *(short *)((a4 + 0xAE));
    nlRotateAZ((unsigned short)t24);
    t26 = *(int *)((a4 + 0x7C));
    if ((int)t26 >= 0) {
        t27 = *(short *)((a4 + 0x7C));
        u28 = *(float *)((((short)(((t27 << 1) + t27) << 2) + 0xC0A3498) + 0x8));
        u29 = *(float *)((((short)(((t27 << 1) + t27) << 2) + 0xC0A3498) + 0x4));
        u30 = *(float *)((((short)(((t27 << 1) + t27) << 2) + 0xC0A3498) + 0x0));
        SetFadeColorBaseMulti(u30, u29, u28);
    }
    t33 = *(int *)(((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + (t2 << 2)) + 0x0));
    nlObjPutUseViewMatrix(t33);
    ResetFadeColor();
    t36 = *(int *)((a4 + 0x128));
    if (t36 != 0) {
        t37 = *(int *)((a4 + 0x128));
        nlObjPutUseViewMatrix(t37);
    }
    t40 = *(int *)((((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x10) + (t2 << 2)) + 0x0));
    if (t40 != 0) {
        t41 = *(int *)((((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x10) + (t2 << 2)) + 0x0));
        nlObjPutUseViewMatrix(t41);
    }
    t44 = *(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x1C));
    if (t44 != 0) {
        *(unsigned int *)(((int)stk + 8)) = 0x0;
        t45 = *(int *)0xC1EE330;
        t51 = 0x0;
        if ((t45 & 16) != 0) {
            t46 = *(int *)((a4 + 0x84));
            if ((t46 & 0x2400) != 0) {
                *(unsigned int *)(((int)stk + 8)) = 0x1;
            }
            t47 = *(int *)((a4 + 0x84));
            t48 = 0x0;
            if ((t47 & 0x4800) != 0) {
                t48 = 0x1;
            }
            t51 = t48;
        }
        u52 = *(float *)((a4 + 0xC8));
        t54 = t51;
        if (u52 > 0.00999999978f) {
            t53 = *(int *)(((int)stk + 8));
            *(unsigned int *)(((int)stk + 8)) = (t53 + 0x2);
            t54 = (t51 + 0x2);
        }
        t55 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 12)) = (t55 << 2);
        t56 = *(int *)(((int)stk + 8));
        if (t56 != 0) {
            t57 = *(int *)(((int)stk + 12));
            t58 = *(int *)(((int)stk + 8));
            t59 = *(int *)(((((t57 + t58) << 2) + (((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x18)) + 0x0));
            nlObjPutUseViewMatrix(t59);
        }
        if (t54 != 0) {
            t62 = *(int *)(((int)stk + 12));
            t63 = *(int *)(((((t62 + t54) << 2) + (((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x38)) + 0x0));
            nlObjPutUseViewMatrix(t63);
        }
    }
    t68 = *(int *)(((int)stk + 4));
    if (t68 == 0) {
        t69 = *(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x60));
        if (t69 != 0) {
            u70 = *(float *)((a4 + 0xB8));
            u71 = *(float *)(((0xCC + a4) + 0x0));
            *(float *)((a4 + 0xB8)) = (u70 + 0.199999988f * u71);
            t72 = *(int *)(((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x58) + 0x0));
            if (t72 != 0) {
                *(unsigned int *)(((int)stk + 4)) = (((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x70);
                nlPushMatrix(0x0);
                t74 = *(int *)(((int)stk + 4));
                nlTranslateV(t74);
                u76 = *(float *)((a4 + 0xB8));
                FUN_0c078750();
                t78 = *(int *)(((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x58) + 0x0));
                nlObjPutUseViewMatrix(t78);
                nlPopMatrix(0x1);
                t81 = *(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x5C));
                if (t81 != 0) {
                    nlPushMatrix(0x0);
                    t83 = *(int *)(((int)stk + 4));
                    u84 = *(float *)((t83 + 0x8));
                    u85 = *(float *)((t83 + 0x0));
                    u86 = *(float *)((t83 + 0x4));
                    nlTranslate((-u85), u86, u84);
                    u88 = *(float *)((a4 + 0xB8));
                    FUN_0c078750();
                    t90 = *(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x5C));
                    nlObjPutUseViewMatrix(t90);
                    nlPopMatrix(0x1);
                }
            }
            *(unsigned int *)(((int)stk + 4)) = (((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x7C);
            nlPushMatrix(0x0);
            t96 = *(int *)(((int)stk + 4));
            nlTranslateV(t96);
            u98 = *(float *)((a4 + 0xB8));
            FUN_0c078750();
            t100 = *(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x60));
            nlObjPutUseViewMatrix(t100);
            nlPopMatrix(0x1);
            t103 = *(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x64));
            if (t103 != 0) {
                nlPushMatrix(0x0);
                t105 = *(int *)(((int)stk + 4));
                u106 = *(float *)((t105 + 0x8));
                u107 = *(float *)((t105 + 0x0));
                u108 = *(float *)((t105 + 0x4));
                nlTranslate((-u107), u108, u106);
                u110 = *(float *)((a4 + 0xB8));
                FUN_0c078750();
                t112 = *(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x64));
                nlObjPutUseViewMatrix(t112);
                nlPopMatrix(0x1);
            }
            t116 = *(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x68));
            if (t116 != 0) {
                *(unsigned int *)(((int)stk + 4)) = ((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x70) + 0x18);
                nlPushMatrix(0x0);
                t118 = *(int *)(((int)stk + 4));
                nlTranslateV(t118);
                u120 = *(float *)((a4 + 0xB8));
                FUN_0c078750();
                t122 = *(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x68));
                nlObjPutUseViewMatrix(t122);
                nlPopMatrix(0x1);
                t125 = *(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x6C));
                if (t125 != 0) {
                    nlPushMatrix(0x0);
                    t127 = *(int *)(((int)stk + 4));
                    u128 = *(float *)((t127 + 0x8));
                    u129 = *(float *)((t127 + 0x0));
                    u130 = *(float *)((t127 + 0x4));
                    nlTranslate((-u129), u130, u128);
                    u132 = *(float *)((a4 + 0xB8));
                    FUN_0c078750();
                    t134 = *(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x6C));
                    nlObjPutUseViewMatrix(t134);
                    nlPopMatrix(0x1);
                }
            }
        }
    }
    t143 = nlPopMatrix(0x1);
    return t143;
}

