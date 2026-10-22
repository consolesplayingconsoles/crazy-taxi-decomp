/* Straight-line functions with calls and guards (batch gen_ga): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSqrt(int, int);
int FUN_0c077210(int, int);
int FUN_0c078a70(int, int, int);
int GetCollision(int, int, float, float);
int GetCollisionFirst(int, int);
int PutCollisionEffect(int, int, int);
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
    int t1;
    int t3;
    int t5;
    int t11;
    int t13;
    int t15;
    int t17;
    int t18;
    int t19;
    int t20;
    int t26;
    int t28;
    int t30;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    float u37;
    int t38;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    float u50;
    int t71;
    int t63;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t76;
    int t78;
    float u98;
    float u99;
    float u104;
    float u100;
    float u101;
    int t112;
    int t114;
    int t116;
    float t121;
    float u122;
    int t134;
    int t135;
    int t140;
    int t142;
    int t144;
    int t147;
    float u148;
    float u149;
    float u150;
    float u151;
    float u152;
    float u153;
    float u154;
    int t155;
    float u156;
    float u157;
    float u158;
    float u159;
    float u163;
    float u164;
    float u165;
    float u166;
    float u167;
    int t179;
    int t180;
    float u181;
    float u182;
    int t183;
    float u184;
    int t187;
    int t189;
    int t191;
    float u193;
    float u194;
    int t197;
    int t198;
    float u199;
    float u200;
    float u201;
    int t202;
    int t210;
    int t213;
    int t214;
    float u217;
    float u218;
    float u219;
    float u220;
    float u221;
    float u236;
    float u223;
    float u224;
    float u225;
    float u226;
    float u227;
    float u228;
    float u229;
    float u230;
    float u231;
    float u232;
    float u233;
    float u238;
    float u239;
    float u240;
    int t241;
    float u242;
    float u243;
    float u244;
    float u245;
    float u246;
    float u247;
    float u252;
    float u253;
    float u255;
    int t256;
    float u257;
    float u258;
    float u259;
    float u260;
    float u261;
    float u262;
    float u267;
    float u268;
    float u270;
    int t273;
    float u275;
    float u276;
    float u277;
    float u278;
    float u279;
    float u280;
    float u281;
    float u282;
    float u283;
    float u284;
    float u285;
    float u286;
    float u288;
    float u289;
    int t295;
    int t297;
    int t299;
    float u302;
    float u303;
    float u304;
    float u305;
    float u308;
    float u309;
    float u310;
    float u311;
    float u312;
    float u313;
    float u314;
    float u315;
    float u316;
    float u317;
    float u318;
    float u319;
    float u320;
    float u321;
    float u322;
    int t323;
    float u324;
    float u325;
    float u326;
    int t327;
    int t328;
    float u329;
    float u330;
    float u331;
    float u332;
    int t333;
    float u334;
    float u335;
    float u336;
    int t337;
    int t338;
    int t146;
    float u161;
    int t203;
    int t212;
    float u215;
    float u216;
    int stk[37] = {0};

    *(float *)(((int)stk + 12)) = 0.0f;
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    nlPushMatrix(0x0);
    t1 = *(short *)((a4 + 0x86));
    nlRotateAY((unsigned short)t1);
    t3 = *(short *)((a4 + 0x84));
    nlRotateAX((unsigned short)t3);
    t5 = *(short *)((a4 + 0x88));
    nlRotateAZ((unsigned short)t5);
    *(float *)0xC1EE150 = 0.0f;
    *(float *)0xC1EE148 = 0.0f;
    *(float *)0xC1EE14C = -0.109999999f;
    FUN_0c077210(0xC1EE148, (((int)stk + 4) + 0x30));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlSetTranslate((0x8C + a4));
    t11 = *(short *)((a4 + 0x9A));
    nlRotateAY((unsigned short)t11);
    t13 = *(short *)((a4 + 0x98));
    nlRotateAX((unsigned short)t13);
    t15 = *(short *)((a4 + 0x9C));
    nlRotateAZ((unsigned short)t15);
    t17 = *(int *)((a4 + 0x70));
    t18 = 0x0;
    t19 = (0x1A0 + a4);
    t20 = t17;
    for (;;) {
        nlSqrt(t20, (t19 + 0x68));
        t18 = (t18 + 0x1);
        t19 = (t19 + 0x84);
        t20 = (t20 + 0xC);
        if ((int)t18 >= (int)0x4) {
            break;
        }
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c078a70(0xC1EE148, (a4 + 0x78), (0xFC + a4));
    nlSetTranslate(0xC1EE148);
    t26 = *(short *)((a4 + 0x86));
    nlRotateAY((unsigned short)t26);
    t28 = *(short *)((a4 + 0x84));
    nlRotateAX((unsigned short)t28);
    t30 = *(short *)((a4 + 0x88));
    nlRotateAZ((unsigned short)t30);
    t32 = *(int *)0xC08AD9C;
    *(unsigned int *)(((((int)stk + 4) + 0x24) + 0x8)) = t32;
    t33 = *(int *)0xC08AD98;
    *(unsigned int *)(((((int)stk + 4) + 0x24) + 0x4)) = t33;
    t34 = *(int *)0xC08AD94;
    *(unsigned int *)(((((int)stk + 4) + 0x24) + 0x0)) = t34;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t35 = *(int *)((a4 + 0x70));
    *(unsigned int *)(((int)stk + 4)) = t35;
    t36 = (0x1A0 + a4);
    u37 = 0.0f;
    for (;;) {
        t38 = *(int *)(((int)stk + 4));
        nlSqrt(t38, 0xC1EE154);
        nlSubVector3op((((int)stk + 4) + 0x48), 0xC1EE154, (t36 + 0x68));
        t41 = *(int *)(((t36 + 0x68) + 0x8));
        *(unsigned int *)(((((int)stk + 4) + 0x54) + 0x8)) = t41;
        t42 = *(int *)(((t36 + 0x68) + 0x4));
        *(unsigned int *)(((((int)stk + 4) + 0x54) + 0x4)) = t42;
        t43 = *(int *)(((t36 + 0x68) + 0x0));
        *(unsigned int *)(((((int)stk + 4) + 0x54) + 0x0)) = t43;
        t44 = *(int *)(((((int)stk + 4) + 0x48) + 0x8));
        *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x8)) = t44;
        t45 = *(int *)(((((int)stk + 4) + 0x48) + 0x4));
        *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x4)) = t45;
        t46 = *(int *)(((((int)stk + 4) + 0x48) + 0x0));
        *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x0)) = t46;
        t47 = *(int *)((t36 + 0x0));
        *(unsigned int *)((t36 + 0x4)) = t47;
        t48 = GetCollision((((int)stk + 4) + 0x54), (((int)stk + 4) + 0x48), 1.0f, 4.0f);
        t49 = *(int *)((t48 + 0x40));
        *(unsigned int *)(((int)stk + 20)) = t49;
        u50 = *(float *)((t48 + 0x18));
        t71 = t48;
        if (0.0f > u50) {
            t63 = t48;
            if ((t49 & 0x54) == 0) {
                t51 = *(int *)(((t36 + 0x68) + 0x8));
                *(unsigned int *)(((((int)stk + 4) + 0x54) + 0x8)) = t51;
                t52 = *(int *)(((t36 + 0x68) + 0x4));
                *(unsigned int *)(((((int)stk + 4) + 0x54) + 0x4)) = t52;
                t53 = *(int *)(((t36 + 0x68) + 0x0));
                *(unsigned int *)(((((int)stk + 4) + 0x54) + 0x0)) = t53;
                t54 = *(int *)(((((int)stk + 4) + 0x3C) + 0x8));
                *(unsigned int *)(((((int)stk + 4) + 0x48) + 0x8)) = t54;
                t55 = *(int *)(((((int)stk + 4) + 0x3C) + 0x4));
                *(unsigned int *)(((((int)stk + 4) + 0x48) + 0x4)) = t55;
                t56 = *(int *)(((((int)stk + 4) + 0x3C) + 0x0));
                *(unsigned int *)(((((int)stk + 4) + 0x48) + 0x0)) = t56;
                t57 = GetCollision((((int)stk + 4) + 0x54), (((int)stk + 4) + 0x48), 1.0f, 0.0f);
                t58 = *(int *)((t57 + 0x40));
                t59 = *(int *)(((int)stk + 20));
                *(unsigned int *)((t57 + 0x40)) = (t58 | t59);
                t63 = t57;
            }
            t71 = t63;
        }
        t76 = *(int *)((t71 + 0x40));
        if ((t76 & 0x3C57) != 0) {
            PutCollisionEffect((((int)stk + 4) + 0x54), (0xFC + a4), 0x0);
        } else {
            t78 = *(int *)((t71 + 0x40));
            if ((t78 & 0x3A8) != 0) {
                PutCollisionEffect((((int)stk + 4) + 0x54), (0xFC + a4), 0x1);
            }
        }
        u98 = *(float *)(((((int)stk + 4) + 0x3C) + 0x4));
        if (0.0f > u98) {
            u99 = *(float *)(((int)stk + 80));
            u104 = 0.0f;
            if (!(0.0f > u99)) {
                u100 = *(float *)((a4 + 0x100));
                u101 = u37;
                u101 = u101 + 0.049999997f * _builtin_fabsf(u100);
                u37 = u101;
                u104 = _builtin_fabsf(u100);
            }
        }
        nlPushUnitMatrix();
        t112 = *(short *)((a4 + 0x88));
        nlRotateAZ((-(unsigned short)t112));
        t114 = *(short *)((a4 + 0x84));
        nlRotateAX((-(unsigned short)t114));
        t116 = *(short *)((a4 + 0x86));
        nlRotateAY((-(unsigned short)t116));
        nlSubVector3op(0xC1EE148, 0xC1EE154, (((int)stk + 4) + 0x54));
        FUN_0c077210(0xC1EE148, (t36 + 0x74));
        nlPopMatrix(0x1);
        t121 = nlScalor((t36 + 0x74));
        u122 = *(float *)(((int)stk + 24));
        if (!(u122 > t121)) {
            if (20.0f > t121) {
                nlSubVector3op((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x54), (t36 + 0x68));
                *(float *)(((int)stk + 24)) = t121;
            }
        }
        t134 = *(int *)(((int)stk + 8));
        t36 = (t36 + 0x84);
        *(unsigned int *)(((int)stk + 8)) = (t134 + 0x1);
        t135 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t135 + 0xC);
        if ((int)(t134 + 0x1) < (int)0x4) continue;
        break;
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c078a70(0xC1EE148, (a4 + 0x78), (((int)stk + 4) + 0x24));
    nlSetTranslate(0xC1EE148);
    t140 = *(short *)((a4 + 0x86));
    nlRotateAY((unsigned short)t140);
    t142 = *(short *)((a4 + 0x84));
    nlRotateAX((unsigned short)t142);
    t144 = *(short *)((a4 + 0x88));
    nlRotateAZ((unsigned short)t144);
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t147 = (0x1A0 + a4);
    for (;;) {
        u148 = *(float *)(((0x34 + t147) + 0x0));
        u149 = *(float *)((t147 + 0x30));
        *(float *)((t147 + 0x30)) = (u149 + u148);
        *(float *)((t147 + 0x3C)) = 0.0f;
        u150 = *(float *)((t147 + 0x30));
        u151 = *(float *)0xC1794C0;
        if (u150 > u151) {
            *(float *)((t147 + 0x30)) = u151;
            u152 = *(float *)((t147 + 0x34));
            *(float *)((t147 + 0x34)) = (u152 * -0.049999997f);
        } else {
            u153 = *(float *)((t147 + 0x30));
            u154 = *(float *)0xC1794C8;
            if (u154 > u153) {
                t155 = *(int *)(((int)stk + 4));
                if ((int)t155 < (int)0x2) {
                    u156 = *(float *)0xC1794C8;
                    t146 = 0xC1794B0;
                    u157 = *(float *)(((0x30 + t147) + 0x0));
                    u161 = (u156 - u157);
                } else {
                    u158 = *(float *)0xC1794C8;
                    t146 = 0xC1794B4;
                    u159 = *(float *)(((0x30 + t147) + 0x0));
                    u161 = (u158 - u159);
                }
                u163 = *(float *)((t146 + 0x0));
                u164 = *(float *)((t147 + 0x3C));
                u165 = u164;
                u165 = u165 + 0.099999994f * (u161 * u163);
                *(float *)((t147 + 0x3C)) = u165;
                u166 = *(float *)((t147 + 0x34));
                *(float *)((t147 + 0x34)) = (u166 * -0.099999994f);
                u167 = *(float *)0xC1794C8;
                *(float *)((t147 + 0x30)) = u167;
            }
        }
        t179 = *(int *)(((int)stk + 4));
        t180 = *(int *)((a4 + 0x6C));
        t146 = t180;
        t146 = (t146 + (((t179 << 1) + t179) << 2));
        u181 = *(float *)((t146 + 0x0));
        *(float *)0xC1EE148 = u181;
        u182 = *(float *)((a4 + 0x12C));
        *(float *)0xC1EE14C = (u182 + 3.29999995f);
        t183 = *(int *)((a4 + 0x6C));
        u184 = *(float *)((((((t179 << 1) + t179) << 2) + t183) + 0x8));
        *(float *)0xC1EE150 = u184;
        nlSqrt(0xC1EE148, (((int)stk + 4) + 0x54));
        t146 = 0xC0782E0;
        nlPushUnitMatrix();
        t187 = *(short *)((a4 + 0x86));
        nlRotateAY((unsigned short)t187);
        t189 = *(short *)((a4 + 0x84));
        nlRotateAX((unsigned short)t189);
        t191 = *(short *)((a4 + 0x88));
        nlRotateAZ((unsigned short)t191);
        *(float *)0xC1EE148 = 0.0f;
        u193 = *(float *)((t147 + 0x30));
        u194 = *(float *)((a4 + 0x12C));
        *(float *)0xC1EE14C = (((-u193) - u194) + -5.0f);
        *(float *)0xC1EE150 = 0.0f;
        FUN_0c077210(0xC1EE148, (((int)stk + 4) + 0x48));
        t146 = 0xC078200;
        nlPopMatrix(0x1);
        t197 = GetCollisionFirst((((int)stk + 4) + 0x54), (((int)stk + 4) + 0x48));
        t198 = *(int *)((t197 + 0x1C));
        if (t198 != -1) {
            u199 = *(float *)((t147 + 0x30));
            u200 = *(float *)((a4 + 0x12C));
            u201 = *(float *)((t197 + 0x18));
            *(float *)((t147 + 0x38)) = ((((((u199 + u200) + 5.0f) * u201) - u200) - u199) + -4.0f);
            t202 = *(int *)((t197 + 0x1C));
            t203 = t202;
        } else {
            *(float *)((t147 + 0x38)) = 0.0f;
            t203 = 0xFFFFFFFF;
        }
        *(unsigned int *)((t147 + 0x0)) = t203;
        t210 = *(int *)(((int)stk + 4));
        t146 = 0x84;
        t147 = (t147 + t146);
        *(unsigned int *)(((int)stk + 4)) = (t210 + 0x1);
        if ((int)(t210 + 0x1) < (int)0x4) continue;
        break;
    }
    nlPopMatrix(0x1);
    t213 = (0x1A0 + a4);
    t214 = 0x0;
    u217 = f5;
    u218 = u37;
    for (;;) {
        u219 = *(float *)(((0x38 + t213) + 0x0));
        u220 = *(float *)((t213 + 0x30));
        *(float *)((t213 + 0x30)) = (u220 + u219);
        u221 = *(float *)0xC1794C8;
        u236 = u221;
        if (u221 > (u220 + u219)) {
            if ((int)t214 < (int)0x2) {
                t212 = 0xC1794B0;
            } else {
                t212 = 0xC1794B4;
            }
            u223 = *(float *)((t212 + 0x0));
            u224 = *(float *)((t213 + 0x3C));
            u216 = u224;
            u225 = *(float *)(((0x38 + t213) + 0x0));
            u216 = (u216 - ((u225 * u223) * 0.5f));
            *(float *)((t213 + 0x3C)) = u216;
            u226 = *(float *)0xC1794C8;
            u217 = u226;
            u227 = *(float *)((t213 + 0x30));
            u217 = (u217 - u227);
            u228 = *(float *)(((int)stk + 16));
            u215 = u217;
            u229 = u218;
            u229 = u229 + u215 * 0.25f;
            u218 = u229;
            *(float *)(((int)stk + 16)) = (u228 + u217);
            u230 = *(float *)((t213 + 0x78));
            u231 = u230;
            u231 = u231 + u215 * 1.0f;
            *(float *)((t213 + 0x78)) = u231;
            u232 = *(float *)0xC1794C8;
            *(float *)((t213 + 0x30)) = u232;
            u233 = *(float *)((t213 + 0x34));
            *(float *)((t213 + 0x34)) = (_builtin_fabsf(u233) * 0.099999994f);
            u236 = (_builtin_fabsf(u233) * 0.099999994f);
        }
        t212 = 0xC1794B4;
        u238 = *(float *)0xC1794B0;
        u239 = *(float *)0xC1794C4;
        u240 = *(float *)((t212 + 0x0));
        u217 = u240;
        if ((int)t214 < (int)0x2) {
            t241 = *(int *)((t213 + 0x0));
            if (t241 != -1) {
                u215 = u238;
                u242 = *(float *)(((0x30 + t213) + 0x0));
                u243 = *(float *)((t213 + 0x8));
                t212 = 0x34;
                t212 = (t212 + t213);
                u244 = u243;
                u244 = u244 + u215 * (u242 - u239);
                u245 = *(float *)((t212 + 0x0));
                *(float *)((t212 + 0x0)) = (u245 - (u244 / u238));
            } else {
                u246 = *(float *)(((0x30 + t213) + 0x0));
                u247 = *(float *)((t213 + 0x34));
                *(float *)((t213 + 0x34)) = (u247 - (((u246 - u239) * u238) / u238));
            }
            u252 = *(float *)((t213 + 0x34));
            u253 = *(float *)0xC1794B8;
            u217 = u253;
            if (!(0.0f > u252)) {
                u217 = (u217 * 0.799999952f);
            }
            u255 = *(float *)((t213 + 0x34));
            *(float *)((t213 + 0x34)) = (u255 * u217);
        } else {
            t256 = *(int *)((t213 + 0x0));
            if (t256 != -1) {
                u215 = u217;
                u257 = *(float *)(((0x30 + t213) + 0x0));
                u258 = *(float *)((t213 + 0x8));
                t212 = 0x34;
                t212 = (t212 + t213);
                u259 = u258;
                u259 = u259 + u215 * (u257 - u239);
                u260 = *(float *)((t212 + 0x0));
                *(float *)((t212 + 0x0)) = (u260 - (u259 / u217));
            } else {
                u261 = *(float *)(((0x30 + t213) + 0x0));
                u262 = *(float *)((t213 + 0x34));
                *(float *)((t213 + 0x34)) = (u262 - (((u261 - u239) * u217) / u217));
            }
            u267 = *(float *)((t213 + 0x34));
            u268 = *(float *)0xC1794BC;
            u217 = u268;
            if (!(0.0f > u267)) {
                u217 = (u217 * 0.799999952f);
            }
            u270 = *(float *)((t213 + 0x34));
            *(float *)((t213 + 0x34)) = (u270 * u217);
        }
        t273 = *(int *)((t213 + 0x0));
        if (t273 != -1) {
            if ((int)t214 < (int)0x2) {
                t212 = 0xC1794B0;
            } else {
                t212 = 0xC1794B4;
            }
            u275 = *(float *)((t213 + 0x3C));
            u276 = *(float *)((t212 + 0x0));
            u215 = u276;
            u277 = *(float *)(((0x34 + t213) + 0x0));
            u278 = u275;
            u278 = u278 + u215 * u277;
            u215 = 0.25f;
            *(float *)((t213 + 0x3C)) = u278;
            u279 = *(float *)((t213 + 0x34));
            u280 = u218;
            u280 = u280 + u215 * u279;
            u218 = u280;
        } else {
            u281 = *(float *)(((int)stk + 12));
            *(float *)(((int)stk + 12)) = (u281 - 0.0274999999f);
            u282 = *(float *)(((((int)stk + 4) + 0x34) + 0x0));
            u283 = *(float *)((t213 + 0x34));
            u216 = u283;
            u216 = (u216 - (u282 * 0.899999976f));
            *(float *)((t213 + 0x34)) = u216;
            u284 = *(float *)(((int)stk + 56));
            u217 = u284;
            if ((int)t214 < (int)0x2) {
                u285 = *(float *)(((0x128 + a4) + 0x0));
                u215 = u285;
                u217 = (u217 * u215);
                u215 = 0.3125f;
            } else {
                u286 = *(float *)(((0x128 + a4) + 0x0));
                u215 = u286;
                u217 = (u217 * u215);
                u215 = 0.25f;
            }
            u288 = *(float *)((t213 + 0x3C));
            u289 = u288;
            u289 = u289 + u215 * u217;
            *(float *)((t213 + 0x3C)) = u289;
        }
        t214 = (t214 + 0x1);
        t212 = 0x84;
        t213 = (t213 + t212);
        if ((int)t214 < (int)0x4) continue;
        break;
    }
    nlPushMatrix(0x0);
    t295 = *(short *)((a4 + 0x86));
    nlRotateAY((unsigned short)t295);
    t297 = *(short *)((a4 + 0x84));
    nlRotateAX((unsigned short)t297);
    t299 = *(short *)((a4 + 0x88));
    nlRotateAZ((unsigned short)t299);
    *(float *)0xC1EE150 = 0.0f;
    *(float *)0xC1EE148 = 0.0f;
    *(float *)0xC1EE14C = u218;
    FUN_0c077210(0xC1EE148, (((int)stk + 4) + 0x48));
    u302 = *(float *)((a4 + 0x100));
    u303 = *(float *)(((((int)stk + 4) + 0x4C) + 0x0));
    *(float *)((a4 + 0x100)) = (u302 + u303);
    u304 = *(float *)0xC1EE14C;
    u305 = *(float *)(((((int)stk + 4) + 0xC) + 0x0));
    *(float *)0xC1EE14C = (u304 + u305);
    FUN_0c077210(0xC1EE148, (((int)stk + 4) + 0x48));
    nlPopMatrix(0x1);
    u308 = *(float *)((a4 + 0x100));
    u309 = *(float *)(((((int)stk + 4) + 0x8) + 0x0));
    *(float *)((a4 + 0x100)) = (u308 + u309);
    u310 = *(float *)(((((int)stk + 4) + 0x48) + 0x0));
    u311 = *(float *)(((((int)stk + 4) + 0x24) + 0x0));
    u312 = *(float *)((a4 + 0x78));
    *(float *)((a4 + 0x78)) = (u312 + (u311 + u310));
    u313 = *(float *)(((((int)stk + 4) + 0x50) + 0x0));
    u314 = *(float *)(((((int)stk + 4) + 0x2C) + 0x0));
    u315 = *(float *)((a4 + 0x80));
    *(float *)((a4 + 0x80)) = (u315 + (u314 + u313));
    u316 = *(float *)(((((int)stk + 4) + 0x4C) + 0x0));
    u317 = *(float *)(((((int)stk + 4) + 0x28) + 0x0));
    u318 = *(float *)((a4 + 0x7C));
    *(float *)((a4 + 0x7C)) = (u318 + (u317 + u316));
    u319 = *(float *)(((0x1A0 + a4) + 0x3C));
    u320 = *(float *)(((0x84 + (0x1A0 + a4)) + 0x3C));
    u321 = *(float *)(((0x18C + (0x1A0 + a4)) + 0x3C));
    u322 = *(float *)(((0x108 + (0x1A0 + a4)) + 0x3C));
    t323 = *(int *)((a4 + 0x6C));
    *(unsigned int *)(((int)stk + 4)) = t323;
    u324 = *(float *)(((t323 + 0x24) + 0x8));
    u325 = *(float *)((t323 + 0x14));
    u326 = *(float *)((a4 + 0x148));
    t327 = *(short *)((a4 + 0x19C));
    *(unsigned short *)((a4 + 0x19C)) = (int)((float)t327 - ((((((u320 + u319) - (u321 + u322)) * (u325 - u324)) * u326) / 6.28317976f) * 65535.0f));
    t328 = *(short *)((a4 + 0x19C));
    *(unsigned short *)((a4 + 0x19C)) = (int)((float)t328 * 0.729999959f);
    u329 = *(float *)(((0x18C + (0x1A0 + a4)) + 0x3C));
    u330 = *(float *)(((0x84 + (0x1A0 + a4)) + 0x3C));
    u331 = *(float *)(((0x1A0 + a4) + 0x3C));
    u332 = *(float *)(((0x108 + (0x1A0 + a4)) + 0x3C));
    t333 = *(int *)((a4 + 0x6C));
    u334 = *(float *)((t333 + 0xC));
    u335 = *(float *)((t333 + 0x0));
    u336 = *(float *)((a4 + 0x150));
    t337 = *(short *)((a4 + 0x19A));
    *(unsigned short *)((a4 + 0x19A)) = (int)((float)t337 - ((((((u330 + u329) - (u331 + u332)) * (u335 - u334)) * u336) / 6.28317976f) * 65535.0f));
    t338 = *(short *)((a4 + 0x19A));
    *(unsigned short *)((a4 + 0x19A)) = (int)((float)t338 * 0.75999999f);
    return 0x19A;
}
