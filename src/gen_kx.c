/* Straight-line functions with calls and guards (batch gen_kx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern float _builtin_sqrtf(float);
float CheckColliPoleEdge(int a4, int a5, int a6, float f4);

float CheckColliPoleEdge(int a4, int a5, int a6, float f4)
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

    u0 = *(float *)(((a6 + 0xC) + 0x0));
    u1 = *(float *)((a6 + 0x0));
    u2 = *(float *)(((a6 + 0xC) + 0x8));
    u3 = *(float *)((a6 + 0x8));
    u4 = ((u2 - u3) * (u2 - u3));
    u4 = u4 + (u0 - u1) * (u0 - u1);
    u5 = *(float *)((a6 + 0x0));
    u6 = *(float *)((a5 + 0x8));
    u7 = *(float *)((a6 + 0x8));
    u8 = *(float *)((a5 + 0xC));
    u9 = ((u8 - u7) * (u2 - u3));
    u9 = u9 + (u0 - u1) * (u6 - u5);
    if (!((u9 * (1.0f / _builtin_sqrtf(u4))) > 0.0f)) {
        u10 = *(float *)((a6 + 0x0));
        u11 = *(float *)((a5 + 0x8));
        u12 = *(float *)((a5 + 0xC));
        u13 = *(float *)((a6 + 0x8));
        u14 = *(float *)((a5 + 0x10));
        u15 = ((u13 - u12) * (u13 - u12));
        u15 = u15 + (u10 - u11) * (u10 - u11);
        *(float *)((a4 + 0xC)) = ((u14 + f4) - _builtin_sqrtf(u15));
        if (((u14 + f4) - _builtin_sqrtf(u15)) > 0.0f) {
            *(float *)((a4 + 0x4)) = ((1.0f / _builtin_sqrtf(u15)) * (u10 - u11));
            *(float *)((a4 + 0x8)) = ((1.0f / _builtin_sqrtf(u15)) * (u13 - u12));
            return (u10 - u11);
        }
        return (u10 - u11);
    }
    if (!(_builtin_sqrtf(u4) > (u9 * (1.0f / _builtin_sqrtf(u4))))) {
        u16 = *(float *)((a5 + 0x8));
        u17 = *(float *)(((a6 + 0xC) + 0x0));
        u18 = *(float *)((a5 + 0xC));
        u19 = *(float *)(((a6 + 0xC) + 0x8));
        u20 = *(float *)((a5 + 0x10));
        u21 = ((u19 - u18) * (u19 - u18));
        u21 = u21 + (u17 - u16) * (u17 - u16);
        *(float *)((a4 + 0xC)) = ((u20 + f4) - _builtin_sqrtf(u21));
        if (((u20 + f4) - _builtin_sqrtf(u21)) > 0.0f) {
            *(float *)((a4 + 0x4)) = ((1.0f / _builtin_sqrtf(u21)) * (u17 - u16));
            *(float *)((a4 + 0x8)) = ((1.0f / _builtin_sqrtf(u21)) * (u19 - u18));
            return (u17 - u16);
        }
        return (u17 - u16);
    }
    u22 = *(float *)((a5 + 0xC));
    u23 = *(float *)((a5 + 0x8));
    u24 = *(float *)((a6 + 0x8));
    u25 = ((u2 - u3) * (1.0f / _builtin_sqrtf(u4)));
    u26 = ((u0 - u1) * (1.0f / _builtin_sqrtf(u4)));
    u27 = ((u0 - u1) * (1.0f / _builtin_sqrtf(u4)));
    u28 = *(float *)((a6 + 0x0));
    u29 = ((u22 * u26) - (u23 * u25));
    u29 = u29 + ((u2 - u3) * (1.0f / _builtin_sqrtf(u4))) * u28;
    if (0.0f > (u29 - (u24 * u27))) {
        u30 = *(float *)((a5 + 0x10));
        if ((u29 - (u24 * u27)) > ((-u30) - f4)) {
            u31 = *(float *)((a5 + 0x10));
            *(float *)((a4 + 0xC)) = ((u31 + f4) + (u29 - (u24 * u27)));
            *(float *)((a4 + 0x4)) = (-((u2 - u3) * (1.0f / _builtin_sqrtf(u4))));
            *(float *)((a4 + 0x8)) = ((u0 - u1) * (1.0f / _builtin_sqrtf(u4)));
            return ((u2 - u3) * (1.0f / _builtin_sqrtf(u4)));
        }
        return ((u2 - u3) * (1.0f / _builtin_sqrtf(u4)));
    }
    u32 = *(float *)((a5 + 0x10));
    if ((u32 + f4) > (u29 - (u24 * u27))) {
        u33 = *(float *)((a5 + 0x10));
        *(float *)((a4 + 0xC)) = ((u33 + f4) - (u29 - (u24 * u27)));
        *(float *)((a4 + 0x4)) = ((u2 - u3) * (1.0f / _builtin_sqrtf(u4)));
        *(float *)((a4 + 0x8)) = (-((u0 - u1) * (1.0f / _builtin_sqrtf(u4))));
        return ((u2 - u3) * (1.0f / _builtin_sqrtf(u4)));
    }
    return ((u2 - u3) * (1.0f / _builtin_sqrtf(u4)));
}
