/* Straight-line functions with calls and guards (batch gen_vt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Put_Adv_Logo_Sprite(void);
int nd_SprPut(int, int, float, float);
int pfColor(int, int, int, int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);
int execAdvSprite(void);

int execAdvSprite(void)
{
    int t0;
    int t5;
    int t6;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t15;
    int t16;
    int t18;
    int t19;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t27;
    int t29;
    int t31;
    int t33;
    int t35;
    int t37;
    float u41;
    float u42;

    t0 = *(int *)0xC2A931C;
    if (t0 == 1) {
        Put_Adv_Logo_Sprite();
    }
    t5 = *(int *)0xC2A9320;
    if ((int)t5 > 0) {
        t6 = *(int *)0xC2A9320;
        *(unsigned int *)0xC2A9320 = (t6 - 0x80);
    }
    *(unsigned int *)0xC2A9254 = 0x0;
    t9 = 0x0;
    t10 = 0xC130D80;
    t11 = 0xFFFFFF00;
    for (;;) {
        t12 = *(int *)0xC2A9320;
        t13 = *(int *)((t10 + 0x0));
        t10 = (t10 + 0x4);
        nd_SprPut(0xC2A922C, t13, (float)((t12 + t11) + 0x170), 208.0f);
        t9 = (t9 + 0x1);
        t11 = (t11 + 0x80);
        if ((int)t9 >= (int)0x4) {
            break;
        }
    }
    t15 = *(int *)0xC2A9320;
    t16 = *(int *)0xC130D90;
    nd_SprPut(0xC2A922C, t16, (float)(t15 + 0x250), 176.0f);
    t18 = *(int *)0xC2A9320;
    t19 = *(int *)0xC130D94;
    nd_SprPut(0xC2A922C, t19, (float)(t18 + 0x250), 240.0f);
    t21 = 0x0;
    t22 = 0xC130D98;
    t23 = 0xFFFFFF00;
    for (;;) {
        t24 = *(int *)0xC2A9320;
        t25 = *(int *)((t22 + 0x0));
        t22 = (t22 + 0x4);
        nd_SprPut(0xC2A922C, t25, (float)((t24 + t23) + 0x150), 304.0f);
        t21 = (t21 + 0x1);
        t23 = (t23 + 0x40);
        if ((int)t21 >= (int)0x7) {
            break;
        }
    }
    *(float *)0xC2A9240 = 0.25f;
    *(float *)0xC2A9248 = 0.0f;
    *(float *)0xC2A9250 = 0.25f;
    t27 = *(int *)0xC2A9320;
    nd_SprPut(0xC2A922C, 0xEC, (float)(t27 + 0x188), 440.0f);
    *(float *)0xC2A9248 = 0.25f;
    *(float *)0xC2A9250 = 0.5f;
    t29 = *(int *)0xC2A9320;
    nd_SprPut(0xC2A922C, 0xEC, (float)(t29 + 0x1C8), 440.0f);
    *(float *)0xC2A9248 = 0.5f;
    *(float *)0xC2A9250 = 0.75f;
    t31 = *(int *)0xC2A9320;
    nd_SprPut(0xC2A922C, 0xEC, (float)(t31 + 0x208), 440.0f);
    *(float *)0xC2A9248 = 0.75f;
    *(float *)0xC2A9250 = 1.0f;
    t33 = *(int *)0xC2A9320;
    nd_SprPut(0xC2A922C, 0xEC, (float)(t33 + 0x248), 440.0f);
    *(float *)0xC2A9248 = 0.0f;
    *(float *)0xC2A9250 = 1.0f;
    *(float *)0xC2A9240 = 1.0f;
    t35 = *(int *)0xC2A9324;
    if (t35 == 1) {
        t37 = *(int *)0xC2A9328;
        if (t37 != -1) {
            pfSetFont(0x1);
            pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
            pfSize(1.0f, 1.0f);
            u41 = 320.0f;
            u42 = 380.0f;
            pfLocate(u42, u41);
            return pfPuts(0xC0D0AA0);
        }
        return t37;
    }
    return t35;
}
