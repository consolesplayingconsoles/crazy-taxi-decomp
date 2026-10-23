/* Straight-line functions with calls and guards (batch gen_bf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int nlSprPut();
int Put_TotalDrum_Money(int a4, int a5, int a6);

int Put_TotalDrum_Money(int a4, int a5, int a6)
{
    float u2;
    float u5;
    float u10;
    float u12;
    int t14;
    int t19;
    int t20;
    int t31;
    int t36;
    int t41;
    int t47;
    int t66;
    int t69;
    int t72;
    int t74;
    int t84;
    int t86;
    int stk[14];

    *(unsigned int *)0xC2A7EC0 = 0x6;
    *(unsigned int *)0xC2A7E8C = 0x128;
    *(float *)0xC2A7EA4 = 0.0f;
    *(float *)0xC2A7EAC = 1.0f;
    *(float *)0xC2A7E90 = 532.0f;
    u2 = 0.199999988f;
    if (0.199999988f > (*(float *)0xC2A8C8C)) {
    } else {
        u2 = (*(float *)0xC2A8C8C);
    }
    u5 = (float)((*(int *)0xC2A8D78) - 4);
    u5 = u5 + 20.0f * (u2 + -0.199999988f);
    *(float *)0xC2A7E94 = u5;
    *(float *)0xC2A7E98 = 0.049999997f;
    *(float *)0xC2A7E9C = 10.0f;
    u10 = 0.0f;
    if (0.0f > (*(float *)0xC2A8C8C)) {
    } else {
        u10 = ((*(float *)0xC2A8C8C) * 5.0f);
    }
    u12 = u10;
    if (u10 > 1.0f) {
        u12 = 1.0f;
    }
    *(float *)0xC2A7EA0 = (u12 * (1.0f + 1.0f));
    *(float *)0xC2A7EB8 = 0.699999988f;
    t14 = ((int (*)(int, int, int))(nlSprPut))(0xC2A7E8C, a5, a6);
    *(unsigned int *)0xC2A7EB4 = 0x0;
    *(float *)0xC2A7E9C = 1.0f;
    *(float *)0xC2A7EA0 = 1.0f;
    *(float *)0xC2A7EB8 = 1.0f;
    *(float *)0xC2A7E94 = (float)((*(int *)0xC2A8D78) + 0x2);
    *(float *)0xC2A7EA8 = 0.0f;
    if ((*(int *)0xC2A8C90) != 0) {
        *(float *)0xC2A7EB0 = 1.0f;
        *(float *)0xC2A7E90 = 532.0f;
        *(unsigned int *)0xC2A7EC0 = 0xB;
        *(unsigned int *)0xC2A7E8C = (*(int *)((((*(int *)0xC2A8CB4) << 2) + 0xC130A74)));
        *(float *)0xC2A7EA4 = 0.0f;
        t19 = *(int *)0xC2A8C90;
        *(float *)0xC2A7E9C = ((float)t19 * 0.049999997f);
        *(float *)0xC2A7EAC = ((float)t19 * 0.049999997f);
        *(float *)0xC2A7EB8 = 1.0f;
        *(float *)0xC2A7E98 = 0.099999994f;
        *(unsigned int *)0xC2A7EB4 = 0x0;
        t20 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
        if (0.0f > (*(float *)0xC2A8C8C)) {
            *(float *)(((int)stk + 4)) = 0.0f;
        } else {
            *(float *)(((int)stk + 4)) = ((*(float *)0xC2A8C8C) * 16.0f);
        }
        *(unsigned int *)0xC2A7E8C = (*(int *)((((*(int *)0xC2A8EA8) << 2) + 0xC130A80)));
        *(float *)0xC2A7E94 = (((float)(*(int *)0xC2A8D78) + (*(float *)(((int)stk + 4)))) + 19.0f);
        t31 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
        *(unsigned int *)0xC2A7E8C = (*(int *)((((*(int *)0xC2A8CB4) << 2) + 0xC130A74)));
        *(unsigned int *)0xC2A7EC0 = 0x9;
        *(float *)0xC2A7E94 = (float)((*(int *)0xC2A8D78) + 0x2);
        *(float *)0xC2A7EA4 = (1.0f - ((float)(*(int *)0xC2A8C90) * 0.049999997f));
        *(float *)0xC2A7E90 = 532.0f;
        *(float *)0xC2A7EAC = 1.0f;
        t36 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
        *(unsigned int *)0xC2A7E8C = (*(int *)((((*(int *)0xC2A8EA8) << 2) + 0xC130A80)));
        *(float *)0xC2A7E94 = (((float)(*(int *)0xC2A8D78) + (*(float *)(((int)stk + 4)))) + 19.0f);
        t41 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
        *(float *)0xC2A7E98 = 0.199999988f;
    }
    *(float *)0xC2A7E90 = 532.0f;
    *(float *)0xC2A7E94 = (float)((*(int *)0xC2A8D78) + 0x2);
    *(unsigned int *)0xC2A7EC0 = 0x6;
    *(float *)0xC2A7EA8 = 0.0f;
    *(unsigned int *)0xC2A7EB4 = 0x0;
    t47 = *(int *)0xC2A8CBC;
    if (t47 == 0) {
        *(float *)0xC2A7EA0 = 0.0f;
    } else {
        if (t47 == 1) {
            if (!(0.0f > (*(float *)0xC2A8C8C))) {
                *(float *)0xC2A7EA0 = (*(float *)0xC2A8C8C);
                *(float *)0xC2A7EA8 = (1.0f - (*(float *)0xC2A8C8C));
                *(float *)0xC2A7EB0 = 1.0f;
            } else {
                *(float *)0xC2A7EA0 = 0.0f;
                *(float *)0xC2A7EA8 = 0.0f;
                *(float *)0xC2A7EB0 = 0.0f;
            }
        } else {
            *(float *)0xC2A7EA0 = 1.0f;
            *(float *)0xC2A7EB0 = 1.0f;
        }
    }
    *(unsigned int *)0xC2A7EC0 = 0x2006;
    *(unsigned int *)0xC2A7E8C = 0x1B0;
    *(float *)0xC2A7EA4 = 0.0f;
    *(float *)0xC2A7EAC = 1.0f;
    *(float *)0xC2A7E90 = 460.0f;
    *(float *)0xC2A7E94 = (float)((*(int *)0xC2A8D78) + 0xB);
    *(float *)0xC2A7E9C = 1.0f;
    t66 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
    t69 = 0x1BD;
    if ((int)(*(int *)(((*(int *)0xC2A7600) + 0x0))) >= (int)0x186A0) {
        t69 = 0x1AF;
    }
    *(unsigned int *)0xC2A7E8C = t69;
    *(float *)0xC2A7E9C = 1.0f;
    *(float *)0xC2A7E90 = 520.0f;
    *(float *)0xC2A7E94 = (float)((*(int *)0xC2A8D78) + 0xB);
    t72 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
    *(unsigned int *)0xC2A7E8C = 0x1B1;
    *(float *)0xC2A7E9C = 1.0f;
    *(float *)0xC2A7E90 = 576.0f;
    *(float *)0xC2A7E94 = (float)((*(int *)0xC2A8D78) + 0xB);
    t74 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
    *(unsigned int *)0xC2A7E8C = 0x102;
    *(float *)0xC2A7EA4 = 0.0f;
    *(float *)0xC2A7EAC = 1.0f;
    *(float *)0xC2A7EB0 = 1.0f;
    *(float *)0xC2A7E90 = 450.0f;
    *(float *)0xC2A7E94 = (float)((*(int *)0xC2A8D78) + 0xB);
    *(float *)0xC2A7E98 = 0.289999992f;
    *(float *)0xC2A7E9C = 1.0f;
    if (!(0.0f > (*(float *)0xC2A8C8C))) {
        *(float *)0xC2A7EA0 = ((*(float *)0xC2A8C8C) * 0.5f);
        *(float *)0xC2A7EA8 = ((1.0f - (*(float *)0xC2A8C8C)) * 0.5f);
        *(float *)0xC2A7EB0 = 1.0f;
    }
    t84 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
    *(unsigned int *)0xC2A7EC0 = 0xE;
    *(float *)0xC2A7EA4 = 0.0f;
    *(float *)0xC2A7EAC = 1.0f;
    *(float *)0xC2A7E90 = 614.0f;
    *(float *)0xC2A7E94 = (float)((*(int *)0xC2A8D78) + 0xB);
    *(float *)0xC2A7E98 = 0.289999992f;
    *(float *)0xC2A7E9C = 1.0f;
    *(unsigned int *)0xC2A7EB4 = 0x8000;
    t86 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
    *(unsigned int *)0xC2A7EC0 = 0x6;
    *(unsigned int *)0xC2A7EB4 = 0x0;
    *(float *)0xC2A7EA0 = 1.0f;
    *(float *)0xC2A7EB0 = 1.0f;
    return 0x24;
}
