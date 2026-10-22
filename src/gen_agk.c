/* Straight-line functions with calls and guards (batch gen_agk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int InitRenderTexture2nd(int a4, int a5, int a6, float f4);

int InitRenderTexture2nd(int a4, int a5, int a6, float f4)
{
    float u5;
    int t6;
    int t7;
    int t15;
    int t23;
    float u16;
    int t17;
    int t18;

    *(unsigned int *)0xC0EE7FC = (*(int *)(((((*(int *)(((((((*(int *)0xC2B3184) + 0x78) << 2) << 1) + (*(int *)0xC2AEC84)) + 0x4))) * 0x3C) + (*(int *)0xC2B29C0)) + 0x34)));
    if (a4 != 0) {
        u5 = *(float *)0xC0393A8;
        t6 = 0xC0EE810;
        t7 = 0x0;
        for (;;) {
            t7 = (t7 + 0x1);
            *(float *)((t6 + 0x4)) = ((*(float *)((t6 + 0x4))) * u5);
            *(float *)((t6 + 0x10)) = ((*(float *)((t6 + 0x10))) * u5);
            t6 = (t6 + 0x14);
            if ((int)t7 >= (int)0x4) {
                break;
            }
        }
    }
    t15 = *(int *)0xC1EE228;
    t23 = t15;
    if (t15 == 2) {
        u16 = *(float *)0xC0393B8;
        t17 = 0x0;
        t18 = 0x0;
        for (;;) {
            t18 = (t18 + 0x1);
            *(float *)(((t17 + 0xC0EE810) + 0x10)) = ((*(float *)(((t17 + 0xC0EE810) + 0x10))) * u16);
            *(float *)(((t17 + 0xC0EE860) + 0x10)) = ((*(float *)(((t17 + 0xC0EE860) + 0x10))) * u16);
            *(float *)(((t17 + 0xC0EE8B0) + 0x10)) = ((*(float *)(((t17 + 0xC0EE8B0) + 0x10))) * u16);
            t17 = (t17 + 0x14);
            if ((int)t18 >= (int)0x4) {
                break;
            }
        }
        t23 = 0x10;
    }
    return t23;
}
