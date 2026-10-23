/* Straight-line functions with calls and guards (batch gen_aet): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetCollision(int, int, float, float);
int GetCollisionFirst(int, int, float);
int PutCollisionEffect(int, int, int);
int nlAddVector3op(int, int, int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
float nlScalor(int);
int nlSetTranslate(int);
int nlSubVector3op(int, int, int);
int carWheelCollision(int a4, float f4, float f5);

int carWheelCollision(int a4, float f4, float f5)
{
    int t18;
    int t19;
    int t20;
    int t33;
    float u34;
    int t39;
    int t40;
    int t48;
    int t42;
    float u82;
    float u77;
    float u78;
    float t93;
    int t98;
    int t111;
    float u115;
    float u120;
    float u134;
    float u136;
    int t149;
    int t167;
    float u169;
    float u170;
    int t180;
    int t183;
    int t184;
    float u187;
    float u188;
    float u189;
    float u190;
    float u191;
    float u207;
    float u200;
    float u202;
    float u204;
    float u209;
    float u210;
    float u217;
    float u232;
    float u251;
    float u253;
    float u262;
    float u292;
    float u293;
    float u294;
    float u295;
    int t296;
    int t308;
    float u76;
    int t110;
    float u130;
    int t173;
    int t182;
    float u185;
    float u186;
    int stk[37];

    *(float *)(((int)stk + 12)) = 0.0f;
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    nlPushMatrix(0x0);
    nlRotateAY((unsigned short)(*(short *)((a4 + 0x86))));
    nlRotateAX((unsigned short)(*(short *)((a4 + 0x84))));
    nlRotateAZ((unsigned short)(*(short *)((a4 + 0x88))));
    *(float *)0xC1EE150 = 0.0f;
    *(float *)0xC1EE148 = 0.0f;
    *(float *)0xC1EE14C = -0.109999999f;
    nlCalcVector(0xC1EE148, (((int)stk + 4) + 0x30));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlSetTranslate((0x8C + a4));
    nlRotateAY((unsigned short)(*(short *)((a4 + 0x9A))));
    nlRotateAX((unsigned short)(*(short *)((a4 + 0x98))));
    nlRotateAZ((unsigned short)(*(short *)((a4 + 0x9C))));
    t18 = 0x0;
    t19 = (0x1A0 + a4);
    t20 = (*(int *)((a4 + 0x70)));
    for (;;) {
        nlCalcPoint(t20, (t19 + 0x68));
        t18 = (t18 + 0x1);
        t19 = (t19 + 0x84);
        t20 = (t20 + 0xC);
        if ((int)t18 >= (int)0x4) {
            break;
        }
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlAddVector3op(0xC1EE148, (a4 + 0x78), (0xFC + a4));
    nlSetTranslate(0xC1EE148);
    nlRotateAY((unsigned short)(*(short *)((a4 + 0x86))));
    nlRotateAX((unsigned short)(*(short *)((a4 + 0x84))));
    nlRotateAZ((unsigned short)(*(short *)((a4 + 0x88))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x24)) = *(struct mv3 *)(0xC08AD94); }
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x70)));
    t33 = (0x1A0 + a4);
    u34 = 0.0f;
    for (;;) {
        nlCalcPoint((*(int *)(((int)stk + 4))), 0xC1EE154);
        nlSubVector3op((((int)stk + 4) + 0x48), 0xC1EE154, (t33 + 0x68));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x54)) = *(struct mv3 *)((t33 + 0x68)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x3C)) = *(struct mv3 *)((((int)stk + 4) + 0x48)); }
        *(unsigned int *)((t33 + 0x4)) = (*(int *)((t33 + 0x0)));
        t39 = GetCollision((((int)stk + 4) + 0x54), (((int)stk + 4) + 0x48), 1.0f, 4.0f);
        t40 = *(int *)((t39 + 0x40));
        *(unsigned int *)(((int)stk + 20)) = t40;
        t48 = t39;
        if ((0.0f > (*(float *)((t39 + 0x18)))) && ((t40 & 0x54) == 0)) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x54)) = *(struct mv3 *)((t33 + 0x68)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x48)) = *(struct mv3 *)((((int)stk + 4) + 0x3C)); }
            t42 = GetCollision((((int)stk + 4) + 0x54), (((int)stk + 4) + 0x48), 1.0f, 0.0f);
            *(unsigned int *)((t42 + 0x40)) = ((*(int *)((t42 + 0x40))) | (*(int *)(((int)stk + 20))));
            t48 = t42;
        }
        if (((*(int *)((t48 + 0x40))) & 0x3C57) != 0) {
            PutCollisionEffect((((int)stk + 4) + 0x54), (0xFC + a4), 0x0);
        } else {
            if (((*(int *)((t48 + 0x40))) & 0x3A8) != 0) {
                PutCollisionEffect((((int)stk + 4) + 0x54), (0xFC + a4), 0x1);
            }
        }
        u82 = 0.0f;
        if ((0.0f > (*(float *)(((((int)stk + 4) + 0x3C) + 0x4)))) && (u76 = *(float *)(((int)stk + 80)), !(0.0f > u76))) {
            u77 = *(float *)((a4 + 0x100));
            u78 = u34;
            u78 = u78 + 0.049999997f * _builtin_fabsf(u77);
            u34 = u78;
            u82 = _builtin_fabsf(u77);
        }
        nlPushUnitMatrix();
        nlRotateAZ((-(unsigned short)(*(short *)((a4 + 0x88)))));
        nlRotateAX((-(unsigned short)(*(short *)((a4 + 0x84)))));
        nlRotateAY((-(unsigned short)(*(short *)((a4 + 0x86)))));
        nlSubVector3op(0xC1EE148, 0xC1EE154, (((int)stk + 4) + 0x54));
        nlCalcVector(0xC1EE148, (t33 + 0x74));
        nlPopMatrix(0x1);
        t93 = nlScalor((t33 + 0x74));
        if (!((*(float *)(((int)stk + 24))) > t93) && (20.0f > t93)) {
            nlSubVector3op((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x54), (t33 + 0x68));
            *(float *)(((int)stk + 24)) = t93;
        }
        t98 = *(int *)(((int)stk + 8));
        t33 = (t33 + 0x84);
        *(unsigned int *)(((int)stk + 8)) = (t98 + 0x1);
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0xC);
        if ((int)(t98 + 0x1) < (int)0x4) continue;
        break;
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlAddVector3op(0xC1EE148, (a4 + 0x78), (((int)stk + 4) + 0x24));
    nlSetTranslate(0xC1EE148);
    nlRotateAY((unsigned short)(*(short *)((a4 + 0x86))));
    nlRotateAX((unsigned short)(*(short *)((a4 + 0x84))));
    nlRotateAZ((unsigned short)(*(short *)((a4 + 0x88))));
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t111 = (0x1A0 + a4);
    for (;;) {
        *(float *)((t111 + 0x30)) = ((*(float *)((t111 + 0x30))) + (*(float *)(((0x34 + t111) + 0x0))));
        *(float *)((t111 + 0x3C)) = 0.0f;
        u115 = *(float *)0xC1794C0;
        if ((*(float *)((t111 + 0x30))) > u115) {
            *(float *)((t111 + 0x30)) = u115;
            u120 = (*(float *)((t111 + 0x34)));
            u120 *= -0.049999997f;
            *(float *)((t111 + 0x34)) = u120;
        } else {
            if ((*(float *)0xC1794C8) > (*(float *)((t111 + 0x30)))) {
                if ((int)(*(int *)(((int)stk + 4))) < (int)0x2) {
                    t110 = 0xC1794B0;
                    u130 = ((*(float *)0xC1794C8) - (*(float *)(((0x30 + t111) + 0x0))));
                } else {
                    t110 = 0xC1794B4;
                    u130 = ((*(float *)0xC1794C8) - (*(float *)(((0x30 + t111) + 0x0))));
                }
                u134 = (*(float *)((t111 + 0x3C)));
                u134 = u134 + 0.099999994f * (u130 * (*(float *)((t110 + 0x0))));
                *(float *)((t111 + 0x3C)) = u134;
                u136 = (*(float *)((t111 + 0x34)));
                u136 *= -0.099999994f;
                *(float *)((t111 + 0x34)) = u136;
                *(float *)((t111 + 0x30)) = (*(float *)0xC1794C8);
            }
        }
        t149 = *(int *)(((int)stk + 4));
        t110 = (*(int *)((a4 + 0x6C)));
        t110 = (t110 + (((t149 << 1) + t149) << 2));
        *(float *)0xC1EE148 = (*(float *)((t110 + 0x0)));
        *(float *)0xC1EE14C = ((*(float *)((a4 + 0x12C))) + 3.29999995f);
        *(float *)0xC1EE150 = (*(float *)((((((t149 << 1) + t149) << 2) + (*(int *)((a4 + 0x6C)))) + 0x8)));
        nlCalcPoint(0xC1EE148, (((int)stk + 4) + 0x54));
        t110 = 0xC0782E0;
        nlPushUnitMatrix();
        nlRotateAY((unsigned short)(*(short *)((a4 + 0x86))));
        nlRotateAX((unsigned short)(*(short *)((a4 + 0x84))));
        nlRotateAZ((unsigned short)(*(short *)((a4 + 0x88))));
        *(float *)0xC1EE148 = 0.0f;
        *(float *)0xC1EE14C = (((-(*(float *)((t111 + 0x30)))) - (*(float *)((a4 + 0x12C)))) + -5.0f);
        *(float *)0xC1EE150 = 0.0f;
        nlCalcVector(0xC1EE148, (((int)stk + 4) + 0x48));
        t110 = 0xC078200;
        nlPopMatrix(0x1);
        t167 = GetCollisionFirst((((int)stk + 4) + 0x54), (((int)stk + 4) + 0x48), 0.0f);
        if ((*(int *)((t167 + 0x1C))) != -1) {
            u169 = *(float *)((t111 + 0x30));
            u170 = *(float *)((a4 + 0x12C));
            *(float *)((t111 + 0x38)) = ((((((u169 + u170) + 5.0f) * (*(float *)((t167 + 0x18)))) - u170) - u169) + -4.0f);
            t173 = (*(int *)((t167 + 0x1C)));
        } else {
            *(float *)((t111 + 0x38)) = 0.0f;
            t173 = 0xFFFFFFFF;
        }
        *(unsigned int *)((t111 + 0x0)) = t173;
        t180 = *(int *)(((int)stk + 4));
        t110 = 0x84;
        t111 = (t111 + t110);
        *(unsigned int *)(((int)stk + 4)) = (t180 + 0x1);
        if ((int)(t180 + 0x1) < (int)0x4) continue;
        break;
    }
    nlPopMatrix(0x1);
    t183 = (0x1A0 + a4);
    t184 = 0x0;
    u187 = f5;
    u188 = u34;
    for (;;) {
        u189 = *(float *)(((0x38 + t183) + 0x0));
        u190 = *(float *)((t183 + 0x30));
        *(float *)((t183 + 0x30)) = (u190 + u189);
        u191 = *(float *)0xC1794C8;
        u207 = u191;
        if (u191 > (u190 + u189)) {
            if ((int)t184 < (int)0x2) {
                t182 = 0xC1794B0;
            } else {
                t182 = 0xC1794B4;
            }
            u186 = (*(float *)((t183 + 0x3C)));
            u186 = (u186 - ((((*(float *)(((0x38 + t183) + 0x0))) * (*(float *)((t182 + 0x0))))) * 0.5f));
            *(float *)((t183 + 0x3C)) = u186;
            u187 = (*(float *)0xC1794C8);
            u187 = (u187 - (*(float *)((t183 + 0x30))));
            u185 = u187;
            u200 = u188;
            u200 = u200 + u185 * 0.25f;
            u188 = u200;
            *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + u187);
            u202 = (*(float *)((t183 + 0x78)));
            u202 = u202 + u185 * 1.0f;
            *(float *)((t183 + 0x78)) = u202;
            *(float *)((t183 + 0x30)) = (*(float *)0xC1794C8);
            u204 = *(float *)((t183 + 0x34));
            *(float *)((t183 + 0x34)) = (_builtin_fabsf(u204) * 0.099999994f);
            u207 = (_builtin_fabsf(u204) * 0.099999994f);
        }
        t182 = 0xC1794B4;
        u209 = *(float *)0xC1794B0;
        u210 = *(float *)0xC1794C4;
        u187 = (*(float *)((t182 + 0x0)));
        if ((int)t184 < (int)0x2) {
            if ((*(int *)((t183 + 0x0))) != -1) {
                u185 = u209;
                t182 = 0x34;
                t182 = (t182 + t183);
                u217 = (*(float *)((t183 + 0x8)));
                u217 = u217 + u185 * ((*(float *)(((0x30 + t183) + 0x0))) - u210);
                *(float *)((t182 + 0x0)) = ((*(float *)((t182 + 0x0))) - (u217 / u209));
            } else {
                *(float *)((t183 + 0x34)) = ((*(float *)((t183 + 0x34))) - ((((*(float *)(((0x30 + t183) + 0x0))) - u210) * u209) / u209));
            }
            u187 = (*(float *)0xC1794B8);
            if (!(0.0f > (*(float *)((t183 + 0x34))))) {
                u187 = (u187 * 0.799999952f);
            }
            *(float *)((t183 + 0x34)) = ((*(float *)((t183 + 0x34))) * u187);
        } else {
            if ((*(int *)((t183 + 0x0))) != -1) {
                u185 = u187;
                t182 = 0x34;
                t182 = (t182 + t183);
                u232 = (*(float *)((t183 + 0x8)));
                u232 = u232 + u185 * ((*(float *)(((0x30 + t183) + 0x0))) - u210);
                *(float *)((t182 + 0x0)) = ((*(float *)((t182 + 0x0))) - (u232 / u187));
            } else {
                *(float *)((t183 + 0x34)) = ((*(float *)((t183 + 0x34))) - ((((*(float *)(((0x30 + t183) + 0x0))) - u210) * u187) / u187));
            }
            u187 = (*(float *)0xC1794BC);
            if (!(0.0f > (*(float *)((t183 + 0x34))))) {
                u187 = (u187 * 0.799999952f);
            }
            *(float *)((t183 + 0x34)) = ((*(float *)((t183 + 0x34))) * u187);
        }
        if ((*(int *)((t183 + 0x0))) != -1) {
            if ((int)t184 < (int)0x2) {
                t182 = 0xC1794B0;
            } else {
                t182 = 0xC1794B4;
            }
            u185 = (*(float *)((t182 + 0x0)));
            u251 = (*(float *)((t183 + 0x3C)));
            u251 = u251 + u185 * (*(float *)(((0x34 + t183) + 0x0)));
            u185 = 0.25f;
            *(float *)((t183 + 0x3C)) = u251;
            u253 = u188;
            u253 = u253 + u185 * (*(float *)((t183 + 0x34)));
            u188 = u253;
        } else {
            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - 0.0274999999f);
            u186 = (*(float *)((t183 + 0x34)));
            u186 = (u186 - ((*(float *)(((((int)stk + 4) + 0x34) + 0x0))) * 0.899999976f));
            *(float *)((t183 + 0x34)) = u186;
            u187 = (*(float *)(((int)stk + 56)));
            if ((int)t184 < (int)0x2) {
                u185 = (*(float *)(((0x128 + a4) + 0x0)));
                u187 = (u187 * u185);
                u185 = 0.3125f;
            } else {
                u185 = (*(float *)(((0x128 + a4) + 0x0)));
                u187 = (u187 * u185);
                u185 = 0.25f;
            }
            u262 = (*(float *)((t183 + 0x3C)));
            u262 = u262 + u185 * u187;
            *(float *)((t183 + 0x3C)) = u262;
        }
        t184 = (t184 + 0x1);
        t182 = 0x84;
        t183 = (t183 + t182);
        if ((int)t184 < (int)0x4) continue;
        break;
    }
    nlPushMatrix(0x0);
    nlRotateAY((unsigned short)(*(short *)((a4 + 0x86))));
    nlRotateAX((unsigned short)(*(short *)((a4 + 0x84))));
    nlRotateAZ((unsigned short)(*(short *)((a4 + 0x88))));
    *(float *)0xC1EE150 = 0.0f;
    *(float *)0xC1EE148 = 0.0f;
    *(float *)0xC1EE14C = u188;
    nlCalcVector(0xC1EE148, (((int)stk + 4) + 0x48));
    *(float *)((a4 + 0x100)) = ((*(float *)((a4 + 0x100))) + (*(float *)(((((int)stk + 4) + 0x4C) + 0x0))));
    *(float *)0xC1EE14C = ((*(float *)0xC1EE14C) + (*(float *)(((((int)stk + 4) + 0xC) + 0x0))));
    nlCalcVector(0xC1EE148, (((int)stk + 4) + 0x48));
    nlPopMatrix(0x1);
    *(float *)((a4 + 0x100)) = ((*(float *)((a4 + 0x100))) + (*(float *)(((((int)stk + 4) + 0x8) + 0x0))));
    *(float *)((a4 + 0x78)) = ((*(float *)((a4 + 0x78))) + ((*(float *)(((((int)stk + 4) + 0x24) + 0x0))) + (*(float *)(((((int)stk + 4) + 0x48) + 0x0)))));
    *(float *)((a4 + 0x80)) = ((*(float *)((a4 + 0x80))) + ((*(float *)(((((int)stk + 4) + 0x2C) + 0x0))) + (*(float *)(((((int)stk + 4) + 0x50) + 0x0)))));
    *(float *)((a4 + 0x7C)) = ((*(float *)((a4 + 0x7C))) + ((*(float *)(((((int)stk + 4) + 0x28) + 0x0))) + (*(float *)(((((int)stk + 4) + 0x4C) + 0x0)))));
    u292 = *(float *)(((0x1A0 + a4) + 0x3C));
    u293 = *(float *)(((0x84 + (0x1A0 + a4)) + 0x3C));
    u294 = *(float *)(((0x18C + (0x1A0 + a4)) + 0x3C));
    u295 = *(float *)(((0x108 + (0x1A0 + a4)) + 0x3C));
    t296 = *(int *)((a4 + 0x6C));
    *(unsigned int *)(((int)stk + 4)) = t296;
    *(unsigned short *)((a4 + 0x19C)) = (int)((float)(*(short *)((a4 + 0x19C))) - ((((((((u293 + u292) - (u294 + u295)) * ((*(float *)((t296 + 0x14))) - (*(float *)(((t296 + 0x24) + 0x8)))))) * (*(float *)((a4 + 0x148)))) / 6.28317976f)) * 65535.0f));
    *(unsigned short *)((a4 + 0x19C)) = (int)((float)(*(short *)((a4 + 0x19C))) * 0.729999959f);
    t308 = *(int *)((a4 + 0x6C));
    *(unsigned short *)((a4 + 0x19A)) = (int)((float)(*(short *)((a4 + 0x19A))) - (((((((((*(float *)(((0x84 + (0x1A0 + a4)) + 0x3C))) + (*(float *)(((0x18C + (0x1A0 + a4)) + 0x3C)))) - ((*(float *)(((0x1A0 + a4) + 0x3C))) + (*(float *)(((0x108 + (0x1A0 + a4)) + 0x3C))))) * ((*(float *)((t308 + 0x0))) - (*(float *)((t308 + 0xC)))))) * (*(float *)((a4 + 0x150)))) / 6.28317976f)) * 65535.0f));
    *(unsigned short *)((a4 + 0x19A)) = (int)((float)(*(short *)((a4 + 0x19A))) * 0.75999999f);
    return 0x19A;
}
