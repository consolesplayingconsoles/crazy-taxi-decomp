/* Straight-line functions with calls and guards (batch gen_wt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int DispVector(int, int, int, float);
float FUN_0c089de0(int);
float FUN_0c089de8(int);
int nlLocate(int, int);
int nlObjPutSetGlobalAmbience(float);
int nlObjPutSetLightDirectionV(int);
int nlPrintf(int, ...);
int goiToolLight(int a4);

int goiToolLight(int a4)
{
    int t1;
    int t2;
    int t4;
    int t9;
    float u13;
    float u14;
    float u15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t32;
    float t33;
    int t34;
    float t35;
    int t36;
    float t37;
    int t38;
    float t39;
    int t40;
    float t41;
    float u43;
    float u45;
    float u46;
    float u49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    float u3;
    float u8;
    int stk[18] = {0};

    if (a4 == 0) {
        *(unsigned int *)0xC2A5AF0 = 0x2200;
        *(unsigned int *)0xC2A5AF4 = 0x2900;
        *(float *)0xC2A5AF8 = 0.649999976f;
        t55 = 0xC04AB74;
    } else {
        t1 = *(int *)0xC1EE24C;
        if ((t1 & 4) != 0) {
            *(unsigned int *)(((int)stk + 20)) = 0xC1EE24C;
            t2 = *(int *)0xC1EE24C;
            t4 = 0x0;
            if (((0x10 & t2) != 0) && (u3 = *(float *)0xC2A5AF8, 1.0f > u3)) {
                t4 = 0x1;
            }
            t9 = 0x0;
            if (((0x20 & t2) != 0) && (u8 = *(float *)0xC2A5AF8, u8 > 0.0f)) {
                t9 = 0x1;
            }
            u13 = *(float *)0xC2A5AF8;
            u14 = 0.01f;
            u15 = u13;
            u15 = u15 + u14 * (float)(t4 - t9);
            *(float *)0xC2A5AF8 = u15;
        } else {
            t16 = *(int *)0xC1EE24C;
            t17 = *(int *)0xC2A5AF0;
            *(unsigned int *)0xC2A5AF0 = (t17 + ((((((((((0x10 & t16) == 0)) ? 1 : 0) ^ 0x1) - (-(((((0x20 & t16) == 0)) ? 1 : 0) - 1))) << 2) << 2) << 2) << 1));
            t18 = *(int *)0xC1EE24C;
            t19 = *(int *)0xC2A5AF4;
            *(unsigned int *)0xC2A5AF4 = (t19 + ((((((((((0x80 & t18) == 0)) ? 1 : 0) ^ 0x1) - (-(((((0x40 & t18) == 0)) ? 1 : 0) - 1))) << 2) << 2) << 2) << 1));
            t20 = *(int *)0xC2A5AF0;
            *(unsigned int *)0xC2A5AF0 = (unsigned short)t20;
            t21 = *(int *)0xC2A5AF4;
            *(unsigned int *)0xC2A5AF4 = (unsigned short)t21;
        }
        t32 = *(int *)0xC2A5AF0;
        t33 = FUN_0c089de8(t32);
        t34 = *(int *)0xC2A5AF4;
        t35 = FUN_0c089de0(t34);
        *(float *)(((int)stk + 36)) = (t33 * t35);
        t36 = *(int *)0xC2A5AF0;
        t37 = FUN_0c089de0(t36);
        *(float *)(((int)stk + 40)) = t37;
        t38 = *(int *)0xC2A5AF0;
        t39 = FUN_0c089de8(t38);
        t40 = *(int *)0xC2A5AF4;
        t41 = FUN_0c089de8(t40);
        *(float *)(((int)stk + 44)) = (t39 * t41);
        nlObjPutSetLightDirectionV((((int)stk + 20) + 0x10));
        u43 = *(float *)0xC2A5AF8;
        nlObjPutSetGlobalAmbience(u43);
        *(float *)(((int)stk + 24)) = 0.0f;
        u45 = 20.0f;
        *(float *)(((int)stk + 28)) = u45;
        u46 = -50.0f;
        *(float *)(((int)stk + 32)) = u46;
        DispVector((((int)stk + 20) + 0x10), (((int)stk + 20) + 0x4), 0x1, 1.0f);
        nlLocate(0x1E, 0x28);
        u49 = *(float *)0xC2A5AF8;
        *(float *)(((int)stk + 16)) = u49;
        t50 = *(int *)0xC2A5AF4;
        t51 = t50;
        t52 = *(int *)0xC2A5AF0;
        t53 = t52;
        t54 = nlPrintf(0xC0C324C, t53, t51, u49);
        t55 = t54;
    }
    return t55;
}
