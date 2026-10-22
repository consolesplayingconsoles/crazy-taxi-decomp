/* Straight-line functions with calls and guards (batch gen_kh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern float _builtin_sqrtf(float);
float ReflectColliWallBox(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);

float ReflectColliWallBox(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7)
{
    int t1;
    float u2;
    float u5;
    float u6;
    float u68;
    int t76;
    float u9;
    float u14;
    float u15;
    float u16;
    float u22;
    float u23;
    float u28;
    float u35;
    float u36;
    int t39;
    float u40;
    float u41;
    float u42;
    float u43;
    float u44;
    float u45;
    float u46;
    float u52;
    float u55;
    float u59;
    float u32;
    float u33;
    int stk[22] = {0};

    t1 = *(int *)((a4 + 0x28));
    *(float *)(((((int)stk + 4) + 0x34) + 0x0)) = (*(float *)((a4 + 0xC)));
    u2 = *(float *)((a4 + 0x14));
    *(float *)(((((int)stk + 4) + 0x34) + 0x4)) = u2;
    u5 = *(float *)((a6 + 0x0));
    u6 = (u2 * (*(float *)((a6 + 0x4))));
    u6 = u6 + u5 * (*(float *)(((((int)stk + 4) + 0x34) + 0x0)));
    u68 = u5;
    t76 = 0;
    if (!(0.0f > u6)) {
        t76 = (0);
    } else {
        *(unsigned int *)(((int)stk + 4)) = (a7 * 0x1C);
        u9 = ((-((*(float *)(((a7 * 0x1C) + 0xC0ED44C))) * 0.199999988f)) + (-1.0f));
        *(float *)(((((int)stk + 4) + 0x34) + 0x0)) = ((*(float *)((a6 + 0x0))) * ((u6 * u9)));
        *(float *)(((((int)stk + 4) + 0x34) + 0x4)) = ((*(float *)((a6 + 0x4))) * ((u6 * u9)));
        *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = (*(float *)((t1 + 0x0)));
        u14 = *(float *)((t1 + 0x8));
        *(float *)(((((int)stk + 4) + 0xC) + 0x4)) = u14;
        u15 = *(float *)(((((int)stk + 4) + 0xC) + 0x0));
        u16 = (u14 * u14);
        u16 = u16 + u15 * u15;
        if (_builtin_sqrtf(u16) > 0.0f) {
            *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 4) + 0xC) + 0x0))) * (1.0f / _builtin_sqrtf(u16)));
            *(float *)(((((int)stk + 4) + 0xC) + 0x4)) = ((*(float *)(((((int)stk + 4) + 0xC) + 0x4))) * (1.0f / _builtin_sqrtf(u16)));
            { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 4) + 0x4)) = *(struct mv2 *)((((int)stk + 4) + 0xC)); }
            u22 = *(float *)(((((int)stk + 4) + 0xC) + 0x0));
            u23 = ((*(float *)(((((int)stk + 4) + 0x34) + 0x4))) * (*(float *)(((((int)stk + 4) + 0xC) + 0x4))));
            u23 = u23 + u22 * (*(float *)(((((int)stk + 4) + 0x34) + 0x0)));
            *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = (u22 * u23);
            *(float *)(((((int)stk + 4) + 0xC) + 0x4)) = ((*(float *)(((((int)stk + 4) + 0xC) + 0x4))) * u23);
            *(float *)(((((int)stk + 4) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 4) + 0x34) + 0x0))) - (*(float *)(((((int)stk + 4) + 0xC) + 0x0))));
            u28 = *(float *)(((((int)stk + 4) + 0xC) + 0x4));
            *(float *)(((((int)stk + 4) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 4) + 0x34) + 0x4))) - u28);
            u32 = u28;
            u33 = u23;
        } else {
            { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 4) + 0xC)) = *(struct mv2 *)((((int)stk + 4) + 0x34)); }
            *(float *)(((((int)stk + 4) + 0x14) + 0x4)) = 0.0f;
            *(float *)(((((int)stk + 4) + 0x14) + 0x0)) = 0.0f;
            { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 4) + 0x4)) = *(struct mv2 *)(a6); }
            u32 = _builtin_sqrtf(u16);
            u33 = _builtin_sqrtf(u16);
        }
        u35 = *(float *)((a5 + 0x0));
        u36 = *(float *)((a5 + 0x4));
        t39 = *(int *)(((int)stk + 4));
        u40 = (u36 * (*(float *)(((((int)stk + 4) + 0x4) + 0x4))));
        u40 = u40 + u35 * (*(float *)(((((int)stk + 4) + 0x4) + 0x0)));
        u41 = (u36 * u36);
        u41 = u41 + u35 * u35;
        u42 = *(float *)(((((int)stk + 4) + 0x14) + 0x0));
        u43 = *(float *)(((t39 + 0xC0ED440) + 0x4));
        u44 = *(float *)(((t39 + 0xC0ED440) + 0x14));
        u45 = *(float *)(((0x4 + a5) + 0x0));
        u46 = _builtin_sqrtf(((u40 * (-u40)) + u41));
        u52 = (*(float *)((t1 + 0x1C)));
        u52 = u52 + (*(float *)(((0x10 + (t39 + 0xC0ED440)) + 0x0))) * ((((u45 * u42) - (u35 * (*(float *)(((0x4 + (((int)stk + 4) + 0x14)) + 0x0)))))) * ((u46 * (u44 / u43))));
        *(float *)((t1 + 0x1C)) = u52;
        u55 = (*(float *)(((((int)stk + 4) + 0xC) + 0x0)));
        u55 = u55 + (1.0f - (u46 * (u44 / u43))) * (*(float *)(((((int)stk + 4) + 0x14) + 0x0)));
        *(float *)((a4 + 0xC)) = ((*(float *)((a4 + 0xC))) + u55);
        u59 = (*(float *)(((((int)stk + 4) + 0xC) + 0x4)));
        u59 = u59 + (1.0f - (u46 * (u44 / u43))) * (*(float *)(((((int)stk + 4) + 0x14) + 0x4)));
        *(float *)(((0x14 + a4) + 0x0)) = ((*(float *)(((0x14 + a4) + 0x0))) + u59);
        u68 = (1.0f - (u46 * (u44 / u43)));
        t76 = ((_builtin_sqrtf(u16) > 0.0f));
    }
    return u68;
}
