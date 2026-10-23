/* Straight-line functions with calls and guards (batch gen_apo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void ADX_DecodeSteFloat(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6);

void ADX_DecodeSteFloat(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t7;
    int t8;
    int t9;
    int t10;
    float u14;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19;
    float u20;
    float u21;
    int t24;
    int t25;
    int t26;
    float u27;
    float u29;
    float u30;
    float u32;
    int t33;
    int t35;
    int t36;
    float u37;
    float u40;
    float u41;
    float u43;
    int t11;
    float u12;
    float u13;
    int stk[13];

    t0 = *(short *)((a7 + 0x0));
    *(unsigned int *)(((int)stk + 20)) = (a7 + 0x2);
    t1 = *(short *)(((a7 + 0x2) + 0x0));
    t2 = *(short *)((a9 + 0x0));
    *(unsigned int *)(((int)stk + 24)) = (a9 + 0x2);
    t3 = *(short *)(((a9 + 0x2) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    *(unsigned int *)(((int)stk + 12)) = 0x1;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = (((int)((unsigned int)((int)((unsigned int)a5 + (unsigned int)0x0)) + ((((int)0x0 > (int)a5)) ? 1u : 0u))) >> 1);
    t7 = 0x0;
    t8 = a6;
    t9 = a4;
    t10 = a8;
    u14 = (float)(t1 << 16);
    u15 = (float)((((short)(a11 >> 0)) << 2) << 2);
    u16 = 65536.0f;
    u17 = f5;
    u18 = f6;
    u19 = (float)(t0 << 16);
    u20 = (float)(t2 << 16);
    u21 = (float)(t3 << 16);
    for (;;) {
        if ((int)(*(int *)(((int)stk + 4))) < (int)(*(int *)(((int)stk + 16)))) {
            t24 = *(short *)((t9 + 0x0));
            if (((short)((unsigned char)((int)t24 >> 8) | ((t24 << 8) & 0xFFFFFF00)) & 0x8000) != 0) {
                break;
            }
            t9 = (t9 + 0x2);
            u15 = (float)(((short)((unsigned char)((int)t24 >> 8) | ((t24 << 8) & 0xFFFFFF00)) & 0x1FFF) + 0x1);
            u18 = u15;
            t25 = 0x0;
            for (;;) {
                u15 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u15 = (u15 * u14);
                t26 = *(signed char *)((t9 + 0x0));
                t9 = (t9 + 0x1);
                u12 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t7 = 0xC177278;
                u27 = u15;
                u27 = u27 + u12 * u19;
                u15 = u27;
                u16 = (*(float *)((((unsigned char)t26 << 2) + t7)));
                t11 = ((unsigned char)t26 << 2);
                u12 = u18;
                u17 = u19;
                u29 = u15;
                u29 = u29 + u12 * u16;
                u15 = u29;
                u12 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t7 = 0xC177678;
                u13 = u15;
                u15 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u15 = (u15 * u17);
                u14 = u13;
                u30 = u15;
                u30 = u30 + u12 * u13;
                u15 = u30;
                u12 = u18;
                *(unsigned short *)((t8 + 0x0)) = ((unsigned int)(int)u13 >> 16);
                t8 = (t8 + 0x2);
                u16 = (*(float *)((t11 + t7)));
                u32 = u15;
                u32 = u32 + u12 * u16;
                u15 = u32;
                u16 = u15;
                u19 = u15;
                t25 = (t25 + 0x2);
                *(unsigned short *)((t8 + 0x0)) = (short)((unsigned int)(int)u16 >> 16);
                t8 = (t8 + 0x2);
                if ((int)t25 >= (int)0x20) {
                    break;
                }
            }
            t33 = *(short *)((t9 + 0x0));
            t11 = t33;
            t11 = ((int)t11 >> 8);
            t11 = (unsigned char)t11;
            t11 = (t11 | ((t33 << 8) & 0xFFFFFF00));
            if ((0x8000 & (short)t11) != 0) {
                t7 = (*(int *)(((int)stk + 12)));
                return;
            }
            t9 = (t9 + 0x2);
            u15 = (float)(((short)t11 & 0x1FFF) + 0x1);
            u18 = u15;
            t35 = 0x0;
            for (;;) {
                u15 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u15 = (u15 * u21);
                t36 = *(signed char *)((t9 + 0x0));
                t9 = (t9 + 0x1);
                u12 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t7 = 0xC177278;
                u37 = u15;
                u37 = u37 + u12 * u20;
                u15 = u37;
                u16 = (*(float *)((((unsigned char)t36 << 2) + t7)));
                t11 = ((unsigned char)t36 << 2);
                u12 = u18;
                u17 = u20;
                u40 = u15;
                u40 = u40 + u12 * u16;
                u15 = u40;
                u12 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t7 = 0xC177678;
                u13 = u15;
                u15 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u15 = (u15 * u17);
                u21 = u13;
                u41 = u15;
                u41 = u41 + u12 * u13;
                u15 = u41;
                u12 = u18;
                *(unsigned short *)((t10 + 0x0)) = ((unsigned int)(int)u13 >> 16);
                t10 = (t10 + 0x2);
                u16 = (*(float *)((t11 + t7)));
                u43 = u15;
                u43 = u43 + u12 * u16;
                u15 = u43;
                u16 = u15;
                u20 = u15;
                t35 = (t35 + 0x2);
                *(unsigned short *)((t10 + 0x0)) = (short)((unsigned int)(int)u16 >> 16);
                t10 = (t10 + 0x2);
                if ((int)t35 >= (int)0x20) {
                    break;
                }
            }
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
            *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x2);
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x2);
            continue;
        }
        t7 = a5;
        *(unsigned short *)((a7 + 0x0)) = ((unsigned int)(int)u19 >> 16);
        *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x0)) = ((unsigned int)(int)u14 >> 16);
        *(unsigned short *)((a9 + 0x0)) = (short)((unsigned int)(int)u20 >> 16);
        *(unsigned short *)(((*(int *)(((int)stk + 24))) + 0x0)) = ((unsigned int)(int)u21 >> 16);
        return;
    }
    *(volatile int *)(((int)stk + 8));
}
