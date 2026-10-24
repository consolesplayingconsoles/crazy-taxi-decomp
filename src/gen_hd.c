/* Straight-line functions with calls and guards (batch gen_hd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetNowLanguage(int);
int PutStringFixPfont(int, int, float, float, float, float);
int menuPutSprites(int, int, int, int);
int PutVM_Message(int a4, int a5, int a6, float f4, float f5);

int PutVM_Message(int a4, int a5, int a6, float f4, float f5)
{
    float u0;
    int t1;
    int t2;
    int t38;
    int t4;
    int t14;
    int t17;
    int t18;
    int t31;
    float u24;
    int t26;
    int stk[15];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    u0 = *(float *)0xC2A1AD4;
    *(float *)0xC2A1AD4 = 0.099999994f;
    t1 = *(int *)(((int)stk + 4));
    t2 = GetNowLanguage(0x0);
    t38 = (signed char)(((t2 << 1) + t2) << 2);
    if ((*(int *)(((((short)((short)t1 * (short)0x3C) + 0xC0A1238) + (signed char)(((t2 << 1) + t2) << 2)) + 0x0))) == 0) {
    } else {
        t4 = GetNowLanguage(0x0);
        *(unsigned short *)(((int)stk + 12)) = (*(int *)((((short)((short)t1 * (short)0x3C) + 0xC0A1238) + (signed char)(((t4 << 1) + t4) << 2))));
        *(unsigned char *)(((int)stk + 14)) = 0x0;
        if ((0x10 & a4) != 0) {
            *(unsigned char *)(((int)stk + 14)) = 0x8;
        } else {
            if ((0x20 & a4) != 0) {
                *(unsigned char *)(((int)stk + 14)) = 0x7;
            } else {
                if ((0x40 & a4) != 0) {
                    *(unsigned char *)(((int)stk + 14)) = 0xA;
                }
            }
        }
        *(unsigned char *)(((int)stk + 15)) = 0x1;
        *(unsigned int *)(((int)stk + 4)) = ((short)((short)t1 * (short)0x3C) + 0xC0A1238);
        t14 = GetNowLanguage(0x0);
        *(unsigned short *)(((int)stk + 16)) = (*(short *)((((signed char)(((t14 << 1) + t14) << 2) + ((short)((short)t1 * (short)0x3C) + 0xC0A1238)) + 0x4)));
        *(unsigned short *)(((int)stk + 18)) = 0x0;
        *(unsigned int *)0xC2A1AB8 = 0x3009;
        menuPutSprites((((int)stk + 4) + 0x8), 0xC2A1A84, (int)f4, (int)f5);
        *(unsigned int *)0xC2A1AB8 = 0x300A;
        t17 = GetNowLanguage(0x0);
        t18 = *(int *)(((int)stk + 4));
        t31 = ((signed char)(((t17 << 1) + t17) << 2) + t18);
        if ((*(int *)((((signed char)(((t17 << 1) + t17) << 2) + t18) + 0x8))) != 0) {
            u24 = 6.0f;
            if ((*(int *)0xC2A11C0) == 0) {
            } else {
                u24 = 8.0f;
            }
            t26 = GetNowLanguage(0x0);
            t31 = (PutStringFixPfont((a4 & 0x73), (*(int *)(((int)stk + 8))), (f4 + (float)(*(int *)(((((short)((short)t1 * (short)0x3C) + 0xC0A1238) + (signed char)(((t26 << 1) + t26) << 2)) + 0x8)))), (f5 - u24), 14.0f, 1.0f));
        }
        *(float *)0xC2A1AD4 = u0;
        t38 = t31;
    }
    return t38;
}
