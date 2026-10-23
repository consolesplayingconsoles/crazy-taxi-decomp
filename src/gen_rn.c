/* Straight-line functions with calls and guards (batch gen_rn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetCollision2D(int, float);
int HomingAngle1(int, int, float);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlCalcVector(int, int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlProjectScreen3D(int, int);
int nlPushUnitMatrix(void);
int nlRand(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScaleVector(int, int, float);
int nlTranslateV(int);
float ShallWeHaveSomeRelaxation(int a4, float f4);

float ShallWeHaveSomeRelaxation(int a4, float f4)
{
    int t0;
    int t1;
    int t3;
    float u8;
    int t48;
    int t49;
    float u88;
    float u111;
    int t2;
    float u4;
    float u5;
    float u6;
    float u7;
    int t176;
    float u177;
    float u178;
    float u179;
    float u180;
    float u181;
    float u57;
    float u58;
    float u59;
    int t19;
    float u20;
    float u21;
    int t27;
    int t45;
    float u46;
    float u47;
    int t35;
    float u36;
    float u37;
    float u41;
    float u42;
    int t128;
    float u129;
    float u130;
    float u131;
    int t96;
    float u97;
    float u98;
    float u99;
    int t91;
    float u121;
    float u122;
    float u123;
    float u168;
    float u169;
    float u170;
    float u171;
    float u162;
    float u163;
    float u164;
    float u158;
    int stk[36];

    *(float *)(((int)stk + 8)) = f4;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0xC1790CC;
    t0 = 0xC072A4C;
    t1 = a4;
    t3 = 0x0;
    u8 = f4;
    for (;;) {
        if ((*(int *)((((short)((((t3 << 2) << 1) + t3) << 2) + 0xC2AE788) + 0x18))) == 0) {
            if ((int)(*(int *)(((int)stk + 12))) >= (int)0x5) {
                u57 = u4;
                u58 = u5;
                u59 = u8;
            } else {
                t0 = (nlPushUnitMatrix());
                t0 = (nlRand());
                t1 = 0x3FFF;
                t1 = (t1 & t0);
                *(unsigned int *)(((int)stk + 16)) = t0;
                t1 = (t1 - 8192);
                t0 = (nlRotateAY(t1));
                t0 = (nlRand());
                t1 = 0xFFFFE000;
                t0 = (t0 & 0x3FFF);
                t1 = (t1 + t0);
                t0 = (nlRotateAX(t1));
                t1 = 0xC2AD1F8;
                t0 = (nlCalcVector(t1, (((int)stk + 4) + 0x10)));
                t2 = t3;
                t2 = (t2 << 2);
                t0 = 0x120;
                t2 = (t2 << 1);
                t2 = (t2 + t3);
                t2 = (t2 << 2);
                t2 = (short)t2;
                if (((*(int *)(((*(int *)(((int)stk + 4))) + t0))) == 0) && (t0 = 0xC072D28, t19 = *(int *)(((int)stk + 4)), u20 = *(float *)((t0 + 0x0)), u7 = u20, t0 = 0x15C, u21 = *(float *)((t19 + t0)), u6 = u21, u7 > u6)) {
                    t0 = 0xC072D2C;
                    u8 = (*(float *)((t0 + 0x0)));
                    t1 = ((int)stk + 4);
                    t1 = (t1 + 0x10);
                    t0 = (nlScaleVector(t1, (((int)stk + 4) + 0x10), u8));
                    t27 = 0xC179840;
                } else {
                    t0 = 0xC072D38;
                    u8 = (*(float *)((t0 + 0x0)));
                    t1 = ((int)stk + 4);
                    t1 = (t1 + 0x10);
                    t0 = (nlScaleVector(t1, (((int)stk + 4) + 0x10), u8));
                    t27 = ((*(int *)(((int)stk + 4))) + 0x78);
                }
                t1 = t2;
                t1 = (t1 + 0xC2AE788);
                t0 = (nlAddVector3op(t1, t27, (((int)stk + 4) + 0x10)));
                t1 = 0x1;
                t0 = (nlPopMatrix(t1));
                t0 = 0x4;
                u7 = (*(float *)((((int)stk + 4) + t0)));
                t0 = 0x4;
                u6 = (*(float *)(((t2 + 0xC2AE788) + t0)));
                if (u6 > u7) {
                    t0 = 0x4;
                    u7 = (*(float *)((((int)stk + 4) + t0)));
                    t0 = 0x4;
                    *(float *)(((t2 + 0xC2AE788) + t0)) = u7;
                    u46 = u6;
                    u47 = u7;
                } else {
                    t1 = t2;
                    u8 = 0.0f;
                    t1 = (t1 + 0xC2AE788);
                    t0 = (GetCollision2D(t1, u8));
                    t1 = t0;
                    t0 = (*(int *)((t1 + 0x1C)));
                    if ((t0 != -1) && (t35 = (t0 == -1), t0 = 0x4, u36 = *(float *)((t1 + t0)), u7 = u36, u37 = *(float *)(((t2 + 0xC2AE788) + t0)), u6 = u37, u7 > u6)) {
                        u7 = (*(float *)((t1 + t0)));
                        u7 = (u7 + 2.5f);
                        *(float *)(((t2 + 0xC2AE788) + t0)) = u7;
                        u41 = u6;
                        u42 = u7;
                    }
                    t45 = t1;
                    u46 = u41;
                    u47 = u42;
                }
                t48 = *(int *)(((int)stk + 16));
                u6 = u46;
                u7 = u47;
                t1 = t45;
                t1 = t2;
                t0 = 0xC13F514;
                t1 = (t1 + 0xC2AE788);
                *(unsigned int *)((t1 + 0x10)) = (unsigned short)t48;
                *(unsigned int *)((t1 + 0xC)) = (unsigned short)t48;
                t49 = *(int *)((t0 + 0x0));
                t0 = 0x7;
                t0 = ((int)((unsigned int)t49 % (unsigned int)t0));
                t0 = (t0 << 2);
                *(unsigned int *)((t1 + 0x18)) = (*(int *)((0xC13F4F8 + t0)));
                *(unsigned int *)((t1 + 0x1C)) = 0x0;
                *(unsigned int *)((t1 + 0x20)) = 0x0;
                *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
                t0 = (*(int *)0xC13F514);
                t0 = (t0 + 0x1);
                *(unsigned int *)0xC13F514 = t0;
            }
            t176 = t1;
            u177 = u57;
            u178 = u58;
            u179 = u6;
            u180 = u7;
            u181 = u59;
        } else {
            t0 = (nlPushUnitMatrix());
            t2 = t3;
            t2 = (t2 << 2);
            t2 = (t2 << 1);
            t2 = (t2 + t3);
            t2 = (t2 << 2);
            t2 = (short)t2;
            t2 = (t2 + 0xC2AE788);
            t1 = t2;
            t0 = (nlTranslateV(t1));
            t1 = (*(int *)((t2 + 0xC)));
            t0 = (nlRotateAY(t1));
            t1 = (*(int *)((t2 + 0x18)));
            t0 = (nlObjPutUseViewMatrix(t1));
            t1 = 0x1;
            t0 = (nlPopMatrix(t1));
            t0 = (*(int *)((t2 + 0x1C)));
            if (t0 != 0) {
                if (t0 == 1) {
                    t0 = t3;
                    t0 = (t0 << 2);
                    t0 = (t0 << 1);
                    t0 = (t0 + t3);
                    t0 = (t0 << 2);
                    t0 = (short)t0;
                    t0 = (t0 + 0xC2AE788);
                    t0 = (*(int *)((t0 + 0x20)));
                    if (t0 == 1) {
                        t2 = t3;
                        t2 = (t2 << 2);
                        t2 = (t2 << 1);
                        t2 = (t2 + t3);
                        t2 = (t2 << 2);
                        t2 = (short)t2;
                        t2 = (t2 + 0xC2AE788);
                        t0 = (nlRand());
                        t0 = (t0 & ((*(int *)((t2 + 0xC))) + 0x3FFF));
                        *(unsigned int *)((t2 + 0x10)) = t0;
                    }
                    t2 = t3;
                    t2 = (t2 << 2);
                    t2 = (t2 << 1);
                    t2 = (t2 + t3);
                    t2 = (t2 << 2);
                    t2 = (short)t2;
                    t2 = (t2 + 0xC2AE788);
                    t1 = (*(int *)((t2 + 0x10)));
                    t0 = 0xC072C28;
                    u8 = (*(float *)((t0 + 0x0)));
                    t0 = (HomingAngle1(t1, (t2 + 0xC), u8));
                    t0 = (nlPushUnitMatrix());
                    t1 = (*(int *)((t2 + 0xC)));
                    t0 = (nlRotateAY(t1));
                    t1 = 0xC0D5554;
                    t0 = (nlCalcVector(t1, (((int)stk + 4) + 0x10)));
                    t1 = 0x1;
                    t0 = (nlPopMatrix(t1));
                    t0 = 0x14;
                    u8 = (*(float *)((t2 + t0)));
                    t1 = ((int)stk + 4);
                    t1 = (t1 + 0x10);
                    t0 = (nlScaleVector(t1, (((int)stk + 4) + 0x10), u8));
                    t1 = t2;
                    t0 = (nlAddVector(t1, (((int)stk + 4) + 0x10)));
                    t0 = 0x14;
                    u4 = 0.0749999955f;
                    u7 = (*(float *)(((t0 + t2) + 0x0)));
                    u6 = (*(float *)((t2 + t0)));
                    u7 = (-u7);
                    u7 = (u7 + 0.5f);
                    u88 = u6;
                    u88 = u88 + u4 * u7;
                    u6 = u88;
                    *(float *)((t2 + t0)) = u6;
                    if ((int)(*(int *)((t2 + 0x20))) > (int)0x1E) {
                        t1 = t3;
                        t1 = (t1 << 2);
                        t1 = (t1 << 1);
                        t1 = (t1 + t3);
                        t1 = (t1 << 2);
                        t1 = (short)t1;
                        t1 = (t1 + 0xC2AE788);
                        *(unsigned int *)((t1 + 0x1C)) = 0x0;
                        *(unsigned int *)((t1 + 0x20)) = 0x0;
                        t91 = t1;
                    }
                    t96 = t91;
                    u97 = u4;
                    u98 = u6;
                    u99 = u7;
                }
                t128 = t96;
                u129 = u97;
                u130 = u98;
                u131 = u99;
            } else {
                t0 = (nlPushUnitMatrix());
                t2 = t3;
                t2 = (t2 << 2);
                t2 = (t2 << 1);
                t2 = (t2 + t3);
                t2 = (t2 << 2);
                t2 = (short)t2;
                t2 = (t2 + 0xC2AE788);
                t1 = (*(int *)((t2 + 0xC)));
                t0 = (nlRotateAY(t1));
                t1 = 0xC0D5554;
                t0 = (nlCalcVector(t1, (((int)stk + 4) + 0x10)));
                t1 = 0x1;
                t0 = (nlPopMatrix(t1));
                t0 = 0x14;
                u8 = (*(float *)((t2 + t0)));
                t1 = ((int)stk + 4);
                t1 = (t1 + 0x10);
                t0 = (nlScaleVector(t1, (((int)stk + 4) + 0x10), u8));
                t1 = t2;
                t0 = (nlAddVector(t1, (((int)stk + 4) + 0x10)));
                t0 = 0x14;
                u7 = (*(float *)(((t0 + t2) + 0x0)));
                u6 = (*(float *)((t2 + t0)));
                u4 = 0.199999988f;
                u7 = (-u7);
                u7 = (u7 + u4);
                u4 = 0.0749999955f;
                u111 = u6;
                u111 = u111 + u4 * u7;
                u6 = u111;
                *(float *)((t2 + t0)) = u6;
                if ((int)(*(int *)((t2 + 0x20))) <= (int)0x3C) {
                    u121 = u4;
                    u122 = u6;
                    u123 = u7;
                } else {
                    t0 = (nlRand());
                    if ((t0 & 1) != 0) {
                        *(unsigned int *)((((short)((((t3 << 2) << 1) + t3) << 2) + 0xC2AE788) + 0x1C)) = 0x1;
                    }
                    *(unsigned int *)((((short)((((t3 << 2) << 1) + t3) << 2) + 0xC2AE788) + 0x20)) = 0x0;
                }
                u129 = u121;
                u130 = u122;
                u131 = u123;
            }
            u4 = u129;
            u6 = u130;
            u7 = u131;
            t2 = t3;
            t1 = t128;
            t2 = (t2 << 2);
            t2 = (t2 << 1);
            t2 = (t2 + t3);
            t2 = (t2 << 2);
            t2 = (short)t2;
            t2 = (t2 + 0xC2AE788);
            *(unsigned int *)((t2 + 0x20)) = ((*(int *)((t2 + 0x20))) + 0x1);
            t1 = t2;
            t0 = (nlProjectScreen3D(t1, (((int)stk + 4) + 0x10)));
            t0 = 0x18;
            u8 = (*(float *)((((int)stk + 4) + t0)));
            if (!(-300.0f > u8)) {
                t0 = 0xC072C44;
                u7 = (*(float *)((t0 + 0x0)));
                if (!(u8 > u7)) {
                    t0 = 0xC072C48;
                    u6 = (*(float *)((t0 + 0x0)));
                    t0 = 0x10;
                    u5 = (*(float *)((((int)stk + 4) + t0)));
                    if (!(u6 > u5)) {
                        t0 = 0xC072C4C;
                        u5 = (*(float *)((t0 + 0x0)));
                        t0 = 0x10;
                        u4 = (*(float *)((((int)stk + 4) + t0)));
                        if (!(u4 > u5)) {
                        } else {
                            *(unsigned int *)((((short)((((t3 << 2) << 1) + t3) << 2) + 0xC2AE788) + 0x18)) = 0x0;
                        }
                        u158 = u4;
                    } else {
                        *(unsigned int *)((((short)((((t3 << 2) << 1) + t3) << 2) + 0xC2AE788) + 0x18)) = 0x0;
                    }
                    u162 = u158;
                    u163 = u5;
                    u164 = u6;
                } else {
                    *(unsigned int *)((((short)((((t3 << 2) << 1) + t3) << 2) + 0xC2AE788) + 0x18)) = 0x0;
                }
                u168 = u162;
                u169 = u163;
                u170 = u164;
                u171 = u7;
            } else {
                *(unsigned int *)((((short)((((t3 << 2) << 1) + t3) << 2) + 0xC2AE788) + 0x18)) = 0x0;
            }
            u177 = u168;
            u178 = u169;
            u179 = u170;
            u180 = u171;
            u181 = u8;
        }
        u4 = u177;
        u5 = u178;
        u6 = u179;
        u7 = u180;
        u8 = u181;
        t1 = t176;
        t3 = (t3 + 0x1);
        if ((int)t3 < (int)0x1E) continue;
        break;
    }
    return u4;
}
