/* Straight-line functions with calls and guards (batch gen_alj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int nd_SprPut();
int Put_Window_SpriteXtoY(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7);

int Put_Window_SpriteXtoY(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7)
{
    int t75;
    float u8;
    int t5;
    int t12;
    int t15;
    float u20;
    float u21;
    int t17;
    int t46;
    float u47;
    int t48;
    int t49;
    float u50;
    int t51;
    int t52;
    int t70;
    int t71;
    int t72;
    int t73;
    float u39;
    float u40;
    float u28;
    float u29;
    int t60;

    t75 = 0xFFFFFFFF;
    if (((int)a8 > 0) && ((int)a8 <= (int)0x3)) {
        if (a7 == 0) {
            u8 = f5;
            if ((int)(*(int *)(((((a8 - 1) << 2) + 0xC2A9B5C) + 0x0))) < (int)a6) {
                t5 = *(int *)(((((a8 - 1) << 2) + 0xC2A9B5C) + 0x0));
                *(unsigned int *)(((((a8 - 1) << 2) + 0xC2A9B5C) + 0x0)) = (t5 + 0x1);
                u8 = ((f5 / (float)a6) * (float)(t5 + 0x1));
            }
            u39 = f6;
            u40 = u8;
        } else {
            t12 = *(int *)(((((a8 - 1) << 2) + 0xC2A9B5C) + 0x0));
            if (((int)t12 >= (int)a6) && ((int)t12 < (int)(a6 + a7))) {
                t15 = *(int *)(((((a8 - 1) << 2) + 0xC2A9B5C) + 0x0));
                *(unsigned int *)(((((a8 - 1) << 2) + 0xC2A9B5C) + 0x0)) = (t15 + 0x1);
                u28 = ((float)((t15 + 0x1) - a6) * (f6 / (float)a7));
                u29 = f5;
            } else {
                u20 = f6;
                u21 = f5;
                if ((int)(*(int *)(((((a8 - 1) << 2) + 0xC2A9B5C) + 0x0))) < (int)a6) {
                    t17 = *(int *)(((((a8 - 1) << 2) + 0xC2A9B5C) + 0x0));
                    *(unsigned int *)(((((a8 - 1) << 2) + 0xC2A9B5C) + 0x0)) = (t17 + 0x1);
                    u20 = 0.0f;
                    u21 = ((f5 / (float)a6) * (float)(t17 + 0x1));
                }
                u28 = u20;
                u29 = u21;
            }
            u39 = u28;
            u40 = u29;
        }
        *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0xC)) = f4;
        *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x2C)) = f7;
        *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x10)) = 1.0f;
        *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x14)) = 1.0f;
        if (!(u40 > 0.0f) && !(u39 > 0.0f)) {
            t60 = ((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C);
        } else {
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x10)) = (u40 * (1.0f + 1.0f));
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x14)) = (u39 * (1.0f + 1.0f));
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x18)) = 0.899999976f;
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x20)) = 0.899999976f;
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x1C)) = 0.899999976f;
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x24)) = 0.899999976f;
            t46 = ((int (*)(int, int, int, float, float))(nd_SprPut))(((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C), 0x77, ((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C), (float)a4, (float)a5);
            u47 = (-1.0f);
            u47 = u47 + (1.0f + 1.0f) * (u40 + 0.5f);
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x10)) = u47;
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x14)) = 1.0f;
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x18)) = 1.0f;
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x20)) = 1.0f;
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x1C)) = 0.0f;
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x24)) = 1.0f;
            t48 = ((int (*)(int, int, float, float))(nd_SprPut))(((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C), 0x77, (float)a4, ((float)a5 - ((u39 + 0.5f) * 8.0f)));
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x1C)) = 1.0f;
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x24)) = 0.0f;
            t49 = ((int (*)(int, int, float, float))(nd_SprPut))(((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C), 0x77, (float)a4, (((u39 + 0.5f) * 8.0f) + (float)a5));
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x10)) = 1.0f;
            u50 = (-1.0f);
            u50 = u50 + (1.0f + 1.0f) * (u39 + 0.5f);
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x14)) = u50;
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x18)) = 0.0f;
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x20)) = 1.0f;
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x1C)) = 1.0f;
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x24)) = 1.0f;
            t51 = ((int (*)(int, int, float, float))(nd_SprPut))(((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C), 0x77, ((float)a4 - ((u40 + 0.5f) * 8.0f)), (float)a5);
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x18)) = 1.0f;
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x20)) = 0.0f;
            t52 = ((int (*)(int, int, float, float))(nd_SprPut))(((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C), 0x77, (((u40 + 0.5f) * 8.0f) + (float)a4), (float)a5);
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x18)) = 0.0f;
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x20)) = 1.0f;
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x1C)) = 0.0f;
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x24)) = 1.0f;
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x10)) = 1.0f;
            *(float *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x14)) = 1.0f;
        }
        t70 = ((int (*)(int, int, int, float, float))(nd_SprPut))(((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C), 0x77, t60, ((float)a4 - ((u40 + 0.5f) * 8.0f)), ((float)a5 - ((u39 + 0.5f) * 8.0f)));
        *(unsigned int *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x28)) = 0xC000;
        t71 = ((int (*)(int, int, float, float))(nd_SprPut))(((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C), 0x77, (((u40 + 0.5f) * 8.0f) + (float)a4), ((float)a5 - ((u39 + 0.5f) * 8.0f)));
        *(unsigned int *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x28)) = 0x4000;
        t72 = ((int (*)(int, int, float, float))(nd_SprPut))(((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C), 0x77, ((float)a4 - ((u40 + 0.5f) * 8.0f)), (((u39 + 0.5f) * 8.0f) + (float)a5));
        *(unsigned int *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x28)) = 0x8000;
        t73 = ((int (*)(int, int, float, float))(nd_SprPut))(((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C), 0x77, (((u40 + 0.5f) * 8.0f) + (float)a4), (((u39 + 0.5f) * 8.0f) + (float)a5));
        *(unsigned int *)((((unsigned char)(((((a8 + 0xFF) << 2) + (a8 + 0xFF)) << 2) << 2) + 0xC2A9A6C) + 0x28)) = 0x0;
        t75 = ((((int)(*(int *)((((a8 - 1) << 2) + 0xC2A9B5C))) >= (int)(a6 + a7))) ? 1 : 0);
    }
    return t75;
}
