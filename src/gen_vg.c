/* Straight-line functions with calls and guards (batch gen_vg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float general_spline_point(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);

float general_spline_point(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    float u0;
    float u1;
    float u2;
    float u4;
    float u5;
    float u6;
    float u10;
    float u12;
    float u14;
    float u18;
    float u20;
    float u22;
    float u27;
    float u28;
    float u30;
    int stk[5];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    float F0;
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F7;
    float F8;
    float F9;
    float F10;
    float F11;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    F4 = f4;
    F5 = f5;
    F6 = f6;
    F7 = f7;
    F8 = f8;
    F9 = f9;
    F10 = f10;
    F11 = f11;
    L_C04D330:;
    u0 = 6.0f;
    u1 = (-2.0f);
    u2 = ((F4 + (-1.0f)) * (F4 + u1));
    u4 = ((F4 + 1.0f) * (F4 + (-1.0f)));
    u5 = ((((F4 + 1.0f) * (F4 + u1))) * F4);
    u6 = ((F4 + 1.0f) * (F4 + (-1.0f)));
    u10 = ((((u4 * (F4 + u1)) / (1.0f + 1.0f))) * (*(float *)(((R4 + 0xC) + 0x0))));
    u10 = u10 + ((-(u2 * F4)) / u0) * (*(float *)((R4 + 0x0)));
    u12 = u10;
    u12 = u12 + ((-(u5 * 1.0f)) / (1.0f + 1.0f)) * (*(float *)(((R4 + 0x18) + 0x0)));
    u14 = u12;
    u14 = u14 + ((u6 * F4) / u0) * (*(float *)(((R4 + 0x24) + 0x0)));
    *(float *)((((int)stk + 4) + 0x0)) = u14;
    u18 = ((((u4 * (F4 + u1)) / (1.0f + 1.0f))) * (*(float *)(((R4 + 0xC) + 0x4))));
    u18 = u18 + ((-(u2 * F4)) / u0) * (*(float *)((R4 + 0x4)));
    u20 = u18;
    u20 = u20 + ((-(u5 * 1.0f)) / (1.0f + 1.0f)) * (*(float *)(((R4 + 0x18) + 0x4)));
    u22 = u20;
    u22 = u22 + ((u6 * F4) / u0) * (*(float *)(((R4 + 0x24) + 0x4)));
    *(float *)((((int)stk + 4) + 0x4)) = u22;
    u27 = ((((u4 * (F4 + u1)) / (1.0f + 1.0f))) * (*(float *)(((R4 + 0xC) + 0x8))));
    u27 = u27 + ((-(u2 * F4)) / u0) * (*(float *)((R4 + 0x8)));
    u28 = u27;
    u28 = u28 + ((-(u5 * 1.0f)) / (1.0f + 1.0f)) * (*(float *)(((R4 + 0x18) + 0x8)));
    u30 = u28;
    u30 = u30 + ((u6 * F4) / u0) * (*(float *)(((R4 + 0x24) + 0x8)));
    *(float *)((((int)stk + 4) + 0x8)) = u30;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a8) = *(struct mv3 *)(((int)stk + 4)); }
    return ((u6 * F4) / u0);
}
