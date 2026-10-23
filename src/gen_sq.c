/* Straight-line functions with calls and guards (batch gen_sq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int nd_SprPut();
int Put_Window_SpriteXandY(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9);

int Put_Window_SpriteXandY(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int t48;
    float u7;
    float u8;
    int t3;
    float u16;
    int t17;
    float u18;
    int t19;
    int t20;
    float u21;
    int t22;
    int t23;
    float u42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t30;
    float u32;
    float u33;

    t48 = 0xFFFFFFFF;
    if (((int)a7 > 0) && ((int)a7 <= (int)0x3)) {
        u7 = f6;
        u8 = f5;
        if ((int)(*(int *)((0xC2A9B5C + ((a7 - 1) << 2)))) < (int)a6) {
            t3 = *(int *)(((((a7 - 1) << 2) + 0xC2A9B5C) + 0x0));
            *(unsigned int *)(((((a7 - 1) << 2) + 0xC2A9B5C) + 0x0)) = (t3 + 0x1);
            u7 = ((f6 / (float)a6) * (float)(t3 + 0x1));
            u8 = ((float)(t3 + 0x1) * (f5 / (float)a6));
        }
        *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0xC)) = f4;
        *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x2C)) = f7;
        *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x10)) = 1.0f;
        *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x14)) = 1.0f;
        if (!(u8 > 0.0f) && !(u7 > 0.0f)) {
            u16 = *(float *)0xC05E674;
            t30 = ((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C);
            u32 = (u7 + u16);
            u33 = (u8 + u16);
        } else {
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x10)) = (u8 * (1.0f + 1.0f));
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x14)) = (u7 * (1.0f + 1.0f));
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x18)) = 0.899999976f;
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x20)) = 0.899999976f;
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x1C)) = 0.899999976f;
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x24)) = 0.899999976f;
            t17 = ((int (*)(int, int, int, float, float))(nd_SprPut))(((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C), 0x77, ((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C), (float)a4, (float)a5);
            u18 = (-1.0f);
            u18 = u18 + (1.0f + 1.0f) * (u8 + 0.5f);
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x10)) = u18;
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x14)) = 1.0f;
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x18)) = 1.0f;
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x20)) = 1.0f;
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x1C)) = 0.0f;
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x24)) = 1.0f;
            t19 = ((int (*)(int, int, float, float))(nd_SprPut))(((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C), 0x77, (float)a4, ((float)a5 - ((u7 + 0.5f) * 8.0f)));
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x1C)) = 1.0f;
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x24)) = 0.0f;
            t20 = ((int (*)(int, int, float, float))(nd_SprPut))(((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C), 0x77, (float)a4, (((u7 + 0.5f) * 8.0f) + (float)a5));
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x10)) = 1.0f;
            u21 = (-1.0f);
            u21 = u21 + (1.0f + 1.0f) * (u7 + 0.5f);
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x14)) = u21;
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x18)) = 0.0f;
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x20)) = 1.0f;
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x1C)) = 1.0f;
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x24)) = 1.0f;
            t22 = ((int (*)(int, int, float, float))(nd_SprPut))(((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C), 0x77, ((float)a4 - ((u8 + 0.5f) * 8.0f)), (float)a5);
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x18)) = 1.0f;
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x20)) = 0.0f;
            t23 = ((int (*)(int, int, float, float))(nd_SprPut))(((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C), 0x77, (((u8 + 0.5f) * 8.0f) + (float)a4), (float)a5);
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x18)) = 0.0f;
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x20)) = 1.0f;
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x1C)) = 0.0f;
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x24)) = 1.0f;
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x10)) = 1.0f;
            *(float *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x14)) = 1.0f;
            u32 = (u7 + 0.5f);
            u33 = (u8 + 0.5f);
        }
        u42 = *(float *)0xC05E678;
        t43 = ((int (*)(int, int, int, float, float))(nd_SprPut))(((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C), 0x77, t30, ((float)a4 - (u33 * u42)), ((float)a5 - (u32 * u42)));
        *(unsigned int *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x28)) = 0xC000;
        t44 = ((int (*)(int, int, float, float))(nd_SprPut))(((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C), 0x77, ((u33 * u42) + (float)a4), ((float)a5 - (u32 * u42)));
        *(unsigned int *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x28)) = 0x4000;
        t45 = ((int (*)(int, int, float, float))(nd_SprPut))(((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C), 0x77, ((float)a4 - (u33 * u42)), ((u32 * u42) + (float)a5));
        *(unsigned int *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x28)) = 0x8000;
        t46 = ((int (*)(int, int, float, float))(nd_SprPut))(((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C), 0x77, ((u33 * u42) + (float)a4), ((u32 * u42) + (float)a5));
        *(unsigned int *)((((unsigned char)(((((0xFF + a7) << 2) + (0xFF + a7)) << 2) << 2) + 0xC2A9A6C) + 0x28)) = 0x0;
        t48 = ((((int)(*(int *)((0xC2A9B5C + ((a7 - 1) << 2)))) >= (int)a6)) ? 1 : 0);
    }
    return t48;
}
