/* Straight-line functions with calls and guards (batch gen_adl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float general_spline_point(int a4, int a5, int a6, int a7, int a8, float f4);

float general_spline_point(int a4, int a5, int a6, int a7, int a8, float f4)
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
    int stk[5] = {0};

    u0 = 6.0f;
    u1 = -2.0f;
    u2 = ((f4 + (-1.0f)) * (f4 + u1));
    u4 = ((f4 + 1.0f) * (f4 + (-1.0f)));
    u5 = ((((f4 + 1.0f) * (f4 + u1))) * f4);
    u6 = ((f4 + 1.0f) * (f4 + (-1.0f)));
    u10 = ((((u4 * (f4 + u1)) / (1.0f + 1.0f))) * (*(float *)(((a4 + 0xC) + 0x0))));
    u10 = u10 + ((-(u2 * f4)) / u0) * (*(float *)((a4 + 0x0)));
    u12 = u10;
    u12 = u12 + ((-(u5 * 1.0f)) / (1.0f + 1.0f)) * (*(float *)(((a4 + 0x18) + 0x0)));
    u14 = u12;
    u14 = u14 + ((u6 * f4) / u0) * (*(float *)(((a4 + 0x24) + 0x0)));
    *(float *)((((int)stk + 4) + 0x0)) = u14;
    u18 = ((((u4 * (f4 + u1)) / (1.0f + 1.0f))) * (*(float *)(((a4 + 0xC) + 0x4))));
    u18 = u18 + ((-(u2 * f4)) / u0) * (*(float *)((a4 + 0x4)));
    u20 = u18;
    u20 = u20 + ((-(u5 * 1.0f)) / (1.0f + 1.0f)) * (*(float *)(((a4 + 0x18) + 0x4)));
    u22 = u20;
    u22 = u22 + ((u6 * f4) / u0) * (*(float *)(((a4 + 0x24) + 0x4)));
    *(float *)((((int)stk + 4) + 0x4)) = u22;
    u27 = ((((u4 * (f4 + u1)) / (1.0f + 1.0f))) * (*(float *)(((a4 + 0xC) + 0x8))));
    u27 = u27 + ((-(u2 * f4)) / u0) * (*(float *)((a4 + 0x8)));
    u28 = u27;
    u28 = u28 + ((-(u5 * 1.0f)) / (1.0f + 1.0f)) * (*(float *)(((a4 + 0x18) + 0x8)));
    u30 = u28;
    u30 = u30 + ((u6 * f4) / u0) * (*(float *)(((a4 + 0x24) + 0x8)));
    *(float *)((((int)stk + 4) + 0x8)) = u30;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a8) = *(struct mv3 *)(((int)stk + 4)); }
    return ((u6 * f4) / u0);
}
