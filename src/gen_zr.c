/* Straight-line functions with calls and guards (batch gen_zr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Put_Adv_Logo_Sprite(float);
int nd_SprPut(int, int, float, float);
int pfColor(int, int, int, int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);
int execAdvSprite(float f4);

int execAdvSprite(float f4)
{
    int t9;
    int t10;
    int t11;
    int t13;
    int t21;
    int t22;
    int t23;
    int t25;
    int t35;
    int t37;

    if ((*(int *)0xC2A931C) == 1) {
        Put_Adv_Logo_Sprite(f4);
    }
    if ((int)(*(int *)0xC2A9320) > 0) {
        *(unsigned int *)0xC2A9320 = ((*(int *)0xC2A9320) - 0x80);
    }
    *(unsigned int *)0xC2A9254 = 0x0;
    t9 = 0x0;
    t10 = 0xC130D80;
    t11 = 0xFFFFFF00;
    for (;;) {
        t13 = *(int *)((t10 + 0x0));
        t10 = (t10 + 0x4);
        nd_SprPut(0xC2A922C, t13, (float)(((*(int *)0xC2A9320) + t11) + 0x170), 208.0f);
        t9 = (t9 + 0x1);
        t11 = (t11 + 0x80);
        if ((int)t9 >= (int)0x4) {
            break;
        }
    }
    nd_SprPut(0xC2A922C, (*(int *)0xC130D90), (float)((*(int *)0xC2A9320) + 0x250), 176.0f);
    nd_SprPut(0xC2A922C, (*(int *)0xC130D94), (float)((*(int *)0xC2A9320) + 0x250), 240.0f);
    t21 = 0x0;
    t22 = 0xC130D98;
    t23 = 0xFFFFFF00;
    for (;;) {
        t25 = *(int *)((t22 + 0x0));
        t22 = (t22 + 0x4);
        nd_SprPut(0xC2A922C, t25, (float)(((*(int *)0xC2A9320) + t23) + 0x150), 304.0f);
        t21 = (t21 + 0x1);
        t23 = (t23 + 0x40);
        if ((int)t21 >= (int)0x7) {
            break;
        }
    }
    *(float *)0xC2A9240 = 0.25f;
    *(float *)0xC2A9248 = 0.0f;
    *(float *)0xC2A9250 = 0.25f;
    nd_SprPut(0xC2A922C, 0xEC, (float)((*(int *)0xC2A9320) + 0x188), 440.0f);
    *(float *)0xC2A9248 = 0.25f;
    *(float *)0xC2A9250 = 0.5f;
    nd_SprPut(0xC2A922C, 0xEC, (float)((*(int *)0xC2A9320) + 0x1C8), 440.0f);
    *(float *)0xC2A9248 = 0.5f;
    *(float *)0xC2A9250 = 0.75f;
    nd_SprPut(0xC2A922C, 0xEC, (float)((*(int *)0xC2A9320) + 0x208), 440.0f);
    *(float *)0xC2A9248 = 0.75f;
    *(float *)0xC2A9250 = 1.0f;
    nd_SprPut(0xC2A922C, 0xEC, (float)((*(int *)0xC2A9320) + 0x248), 440.0f);
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
            pfLocate((*(float *)0xC057F68), (*(float *)0xC057F64));
            return pfPuts(0xC0D0AA0);
        }
        return t37;
    }
    return t35;
}
