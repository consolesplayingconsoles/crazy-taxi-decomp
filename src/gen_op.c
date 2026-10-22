/* Straight-line functions with calls and guards (batch gen_op): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c078a70(int, int, int);
float nlScalor(int);
float colliBoxShapeInit(int a4, int a5);

float colliBoxShapeInit(int a4, int a5)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    int t14;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19;
    float u20;
    int t21;
    int t24;
    float t26;
    float u27;
    int t29;
    float u30;
    float u31;
    int stk[13] = {0};

    u0 = *(float *)((a5 + 0x0));
    *(float *)((((short)((short)a4 * (short)0x78) + 0xC26ED00) + 0x6C)) = u0;
    u1 = *(float *)((a5 + 0x4));
    *(float *)((((short)((short)a4 * (short)0x78) + 0xC26ED00) + 0x70)) = u1;
    u2 = *(float *)(((a5 + 0xC) + 0x0));
    u3 = *(float *)(((a5 + 0x8) + 0x0));
    u4 = *(float *)0xC032A14;
    *(float *)((((short)((short)a4 * (short)0x78) + 0xC26ED00) + 0x74)) = ((u3 - u2) * u4);
    *(float *)((((short)((short)a4 * (short)0x78) + 0xC26ED00) + 0x60)) = 0.0f;
    if (a4 == 0) {
        u5 = *(float *)0xC032A18;
        *(float *)((((short)((short)a4 * (short)0x78) + 0xC26ED00) + 0x64)) = u5;
    } else {
        *(float *)((((short)((short)a4 * (short)0x78) + 0xC26ED00) + 0x64)) = 0.0f;
    }
    u8 = *(float *)(((a5 + 0xC) + 0x0));
    u9 = *(float *)(((a5 + 0x8) + 0x0));
    *(float *)((((short)((short)a4 * (short)0x78) + 0xC26ED00) + 0x68)) = ((u9 + u8) * u4);
    u10 = *(float *)0xC032A1C;
    u11 = *(float *)((((short)((short)a4 * (short)0x78) + 0xC26ED00) + 0x6C));
    *(float *)(((int)stk + 8)) = (u11 + u10);
    u12 = *(float *)((((short)((short)a4 * (short)0x78) + 0xC26ED00) + 0x70));
    *(float *)(((int)stk + 12)) = u12;
    u13 = *(float *)((((short)((short)a4 * (short)0x78) + 0xC26ED00) + 0x74));
    *(float *)(((int)stk + 16)) = (u13 + u10);
    t14 = 0x0;
    for (;;) {
        u15 = *(float *)((((signed char)(((t14 << 1) + t14) << 2) + 0xC0902A0) + 0x0));
        u16 = *(float *)(((int)stk + 8));
        *(float *)(((((short)((short)a4 * (short)0x78) + 0xC26ED00) + (signed char)(((t14 << 1) + t14) << 2)) + 0x0)) = (u16 * u15);
        u17 = *(float *)((((signed char)(((t14 << 1) + t14) << 2) + 0xC0902A0) + 0x4));
        u18 = *(float *)(((int)stk + 12));
        *(float *)(((((short)((short)a4 * (short)0x78) + 0xC26ED00) + (signed char)(((t14 << 1) + t14) << 2)) + 0x4)) = (u18 * u17);
        u19 = *(float *)((((signed char)(((t14 << 1) + t14) << 2) + 0xC0902A0) + 0x8));
        u20 = *(float *)(((int)stk + 16));
        t21 = ((signed char)(((t14 << 1) + t14) << 2) + ((short)((short)a4 * (short)0x78) + 0xC26ED00));
        t14 = (t14 + 0x1);
        *(float *)((t21 + 0x8)) = (u20 * u19);
        if ((int)t14 >= (int)0x8) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 4)) = (short)((short)a4 * (short)0x1C);
    *(float *)((((short)((short)a4 * (short)0x1C) + 0xC0ED440) + 0x4)) = 0.0f;
    t24 = 0x0;
    for (;;) {
        FUN_0c078a70((((int)stk + 4) + 0x4), ((signed char)(((t24 << 1) + t24) << 2) + (0xC26ED00 + (short)((short)a4 * (short)0x78))), ((0xC26ED00 + (short)((short)a4 * (short)0x78)) + 0x60));
        t26 = nlScalor((((int)stk + 4) + 0x4));
        u27 = *(float *)((((short)((short)a4 * (short)0x1C) + 0xC0ED440) + 0x4));
        t24 = (t24 + 0x1);
        if (t26 > u27) {
            *(float *)((((short)((short)a4 * (short)0x1C) + 0xC0ED440) + 0x4)) = t26;
        }
        if ((int)t24 >= (int)0x8) {
            break;
        }
    }
    t29 = *(int *)(((int)stk + 4));
    u30 = *(float *)(((t29 + 0xC0ED440) + 0x10));
    u31 = *(float *)(((0x8 + (t29 + 0xC0ED440)) + 0x0));
    *(float *)(((t29 + 0xC0ED440) + 0x10)) = (u30 / u31);
    return t26;
}
