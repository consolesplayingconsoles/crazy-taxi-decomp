/* Straight-line functions with calls and guards (batch gen_ow): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c045058(int a4, int a5, int a6, int a7, int a8, float f4);

float FUN_0c045058(int a4, int a5, int a6, int a7, int a8, float f4)
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
    int stk[5] = {0};

    u0 = *(float *)0xC0451B0;
    u1 = *(float *)0xC0451B4;
    u2 = (f4 * (f4 + (-1.0f)));
    u3 = (f4 * (f4 + (-1.0f)));
    u4 = (f4 * ((f4 + (-1.0f)) + (-1.0f)));
    u5 = ((f4 + (-1.0f)) * ((f4 + (-1.0f)) + (-1.0f)));
    u6 = (u2 * ((f4 + (-1.0f)) + (-1.0f)));
    u7 = (u4 * ((f4 + (-1.0f)) + (1.0f + 1.0f)));
    u8 = (u5 * ((f4 + (-1.0f)) + (1.0f + 1.0f)));
    u9 = (u3 * ((f4 + (-1.0f)) + (1.0f + 1.0f)));
    u10 = *(float *)(((a4 + 0xC) + 0x0));
    u11 = (u8 * u1);
    u12 = *(float *)((a4 + 0x0));
    u13 = (u11 * u10);
    u13 = u13 + (-(u6 * u0)) * u12;
    u14 = *(float *)(((a4 + 0x18) + 0x0));
    u15 = u13;
    u15 = u15 + (-(u7 * u1)) * u14;
    u16 = *(float *)(((a4 + 0x24) + 0x0));
    u17 = u15;
    u17 = u17 + (u9 * u0) * u16;
    *(float *)((((int)stk + 4) + 0x0)) = u17;
    u18 = *(float *)(((a4 + 0xC) + 0x4));
    u19 = (u8 * u1);
    u20 = *(float *)((a4 + 0x4));
    u21 = (u19 * u18);
    u21 = u21 + (-(u6 * u0)) * u20;
    u22 = *(float *)(((a4 + 0x18) + 0x4));
    u23 = u21;
    u23 = u23 + (-(u7 * u1)) * u22;
    u24 = *(float *)(((a4 + 0x24) + 0x4));
    u25 = u23;
    u25 = u25 + (u9 * u0) * u24;
    *(float *)((((int)stk + 4) + 0x4)) = u25;
    u26 = *(float *)(((a4 + 0xC) + 0x8));
    u27 = *(float *)((a4 + 0x8));
    u28 = (u8 * u1);
    u29 = *(float *)(((a4 + 0x18) + 0x8));
    u30 = (u28 * u26);
    u30 = u30 + (-(u6 * u0)) * u27;
    u31 = u30;
    u31 = u31 + (-(u7 * u1)) * u29;
    u32 = *(float *)(((a4 + 0x24) + 0x8));
    u33 = u31;
    u33 = u33 + (u9 * u0) * u32;
    *(float *)((((int)stk + 4) + 0x8)) = u33;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a8) = *(struct mv3 *)(((int)stk + 4)); }
    return (u9 * u0);
}
