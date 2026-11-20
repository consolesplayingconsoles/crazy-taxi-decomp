/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_rk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADX_DecodeMonoFloat(int a4, int a5, int a6, int a7, int a8, int a9);


int ADX_DecodeMonoFloat(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t15;
    int t21;
    float u22;
    float u24;
    float u25;
    float u27;
    int t28;
    int stk[9];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    float F0;
    float F1;
    float F3;
    float F4;
    float F5;
    float F6;
    float F7;
    float F8;
    float F9;
    float F10;
    int T_;
    int R1004;
    int R1008;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    t0 = *(short *)((R7 + 0x0));
    R1008 = (R7 + 0x2);
    R10 = (0x0);
    R11 = (0x20);
    R12 = (0x0);
    R13 = (R4);
    R8 = (0xFFFFFF00);
    R9 = (0x1FFF);
    F6 = ((float)(t0 << 16));
    F7 = ((float)((*(short *)(((R7 + 0x2) + 0x0))) << 16));
    F8 = (((float)((((short)(a9 >> 0)) << 2) << 2) / 65536.0f));
    F9 = (((float)((((short)(a8 >> 0)) << 2) << 2) / 65536.0f));
    L_8C2090FA:;
    if (((int)R12 < (int)R5)) goto L_8C20907A;
    *(unsigned short *)((R7 + 0x0)) = ((unsigned int)(int)F6 >> 16);
    *(unsigned short *)(((R1008) + 0x0)) = ((unsigned int)(int)F7 >> 16);
    R0 = (R5);
    L_8C209112:;
    return R0;
    L_8C20907A:;
    t15 = *(short *)((R13 + 0x0));
    R4 = ((short)((unsigned char)((int)t15 >> 8) | ((t15 << 8) & R8)));
    if (((0x8000 & (short)((unsigned char)((int)t15 >> 8) | ((t15 << 8) & R8))) == 0)) goto L_8C209098;
    R0 = (R12);
    goto L_8C209112;
    L_8C209098:;
    R1004 = R10;
    R13 = ((R13 + 0x2));
    F10 = ((float)((R4 & R9) + 0x1));
    L_8C2090A6:;
    t21 = *(signed char *)((R13 + 0x0));
    u22 = (F8 * F7);
    u22 = u22 + F9 * F6;
    u24 = u22;
    u24 = u24 + F10 * (*(float *)((((unsigned char)t21 << 2) + 0x8C20B9F8)));
    u25 = (F8 * F6);
    u25 = u25 + F9 * u24;
    *(unsigned short *)((R6 + 0x0)) = ((unsigned int)(int)u24 >> 16);
    u27 = u25;
    u27 = u27 + F10 * (*(float *)((((unsigned char)t21 << 2) + 0x8C20BDF8)));
    *(unsigned short *)(((R6 + 0x2) + 0x0)) = (short)((unsigned int)(int)u27 >> 16);
    t28 = R1004;
    R1004 = (t28 + 0x2);
    R13 = ((R13 + 0x1));
    R6 = (((R6 + 0x2) + 0x2));
    F0 = (F10);
    F1 = (u24);
    F6 = (u27);
    F7 = (u24);
    if (((int)(t28 + 0x2) < (int)R11)) goto L_8C2090A6;
    R12 = ((R12 + 0x1));
    goto L_8C2090FA;
}
