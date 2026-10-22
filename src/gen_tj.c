/* Straight-line functions with calls and guards (batch gen_tj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c078a70(int, int, int);
float nlScalor(int);
float colliBoxShapeInit(int a4, int a5);

float colliBoxShapeInit(int a4, int a5)
{
    float u4;
    float u10;
    int t14;
    float u19;
    int t21;
    int t24;
    float t26;
    int t29;
    int stk[13] = {0};

    *(float *)((((short)((short)a4 * (short)0x78) + 0xC26ED00) + 0x6C)) = (*(float *)((a5 + 0x0)));
    *(float *)((((short)((short)a4 * (short)0x78) + 0xC26ED00) + 0x70)) = (*(float *)((a5 + 0x4)));
    u4 = *(float *)0xC032A14;
    *(float *)((((short)((short)a4 * (short)0x78) + 0xC26ED00) + 0x74)) = (((*(float *)(((a5 + 0x8) + 0x0))) - (*(float *)(((a5 + 0xC) + 0x0)))) * u4);
    *(float *)((((short)((short)a4 * (short)0x78) + 0xC26ED00) + 0x60)) = 0.0f;
    if (a4 == 0) {
        *(float *)((((short)((short)a4 * (short)0x78) + 0xC26ED00) + 0x64)) = (*(float *)0xC032A18);
    } else {
        *(float *)((((short)((short)a4 * (short)0x78) + 0xC26ED00) + 0x64)) = 0.0f;
    }
    *(float *)((((short)((short)a4 * (short)0x78) + 0xC26ED00) + 0x68)) = (((*(float *)(((a5 + 0x8) + 0x0))) + (*(float *)(((a5 + 0xC) + 0x0)))) * u4);
    u10 = *(float *)0xC032A1C;
    *(float *)(((int)stk + 8)) = ((*(float *)((((short)((short)a4 * (short)0x78) + 0xC26ED00) + 0x6C))) + u10);
    *(float *)(((int)stk + 12)) = (*(float *)((((short)((short)a4 * (short)0x78) + 0xC26ED00) + 0x70)));
    *(float *)(((int)stk + 16)) = ((*(float *)((((short)((short)a4 * (short)0x78) + 0xC26ED00) + 0x74))) + u10);
    t14 = 0x0;
    for (;;) {
        *(float *)(((((short)((short)a4 * (short)0x78) + 0xC26ED00) + (signed char)(((t14 << 1) + t14) << 2)) + 0x0)) = ((*(float *)(((int)stk + 8))) * (*(float *)((((signed char)(((t14 << 1) + t14) << 2) + 0xC0902A0) + 0x0))));
        *(float *)(((((short)((short)a4 * (short)0x78) + 0xC26ED00) + (signed char)(((t14 << 1) + t14) << 2)) + 0x4)) = ((*(float *)(((int)stk + 12))) * (*(float *)((((signed char)(((t14 << 1) + t14) << 2) + 0xC0902A0) + 0x4))));
        u19 = *(float *)((((signed char)(((t14 << 1) + t14) << 2) + 0xC0902A0) + 0x8));
        t21 = ((signed char)(((t14 << 1) + t14) << 2) + ((short)((short)a4 * (short)0x78) + 0xC26ED00));
        t14 = (t14 + 0x1);
        *(float *)((t21 + 0x8)) = ((*(float *)(((int)stk + 16))) * u19);
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
        t24 = (t24 + 0x1);
        if (t26 > (*(float *)((((short)((short)a4 * (short)0x1C) + 0xC0ED440) + 0x4)))) {
            *(float *)((((short)((short)a4 * (short)0x1C) + 0xC0ED440) + 0x4)) = t26;
        }
        if ((int)t24 >= (int)0x8) {
            break;
        }
    }
    t29 = *(int *)(((int)stk + 4));
    *(float *)(((t29 + 0xC0ED440) + 0x10)) = ((*(float *)(((t29 + 0xC0ED440) + 0x10))) / (*(float *)(((0x8 + (t29 + 0xC0ED440)) + 0x0))));
    return t26;
}
