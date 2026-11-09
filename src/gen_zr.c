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
struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };


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

    if (((((struct o0_int *)0xC2A931C)->v)) == 1) {
        Put_Adv_Logo_Sprite(f4);
    }
    if ((int)((((struct o4_int *)0xC2A931C)->v)) > 0) {
        (((struct o4_uint *)0xC2A931C)->v) = (((((struct o4_int *)0xC2A931C)->v)) - 0x80);
    }
    (((struct o14_uint *)0xC2A9240)->v) = 0x0;
    t9 = 0x0;
    t10 = 0xC130D80;
    t11 = 0xFFFFFF00;
    for (;;) {
        t13 = *(int *)((t10 + 0x0));
        t10 = (t10 + 0x4);
        nd_SprPut(0xC2A922C, t13, (float)((((((struct o4_int *)0xC2A931C)->v)) + t11) + 0x170), 208.0f);
        t9 = (t9 + 0x1);
        t11 = (t11 + 0x80);
        if ((int)t9 >= (int)0x4) {
            break;
        }
    }
    nd_SprPut(0xC2A922C, ((((struct o0_int *)0xC130D90)->v)), (float)(((((struct o4_int *)0xC2A931C)->v)) + 0x250), 176.0f);
    nd_SprPut(0xC2A922C, ((((struct o4_int *)0xC130D90)->v)), (float)(((((struct o4_int *)0xC2A931C)->v)) + 0x250), 240.0f);
    t21 = 0x0;
    t22 = 0xC130D98;
    t23 = 0xFFFFFF00;
    for (;;) {
        t25 = *(int *)((t22 + 0x0));
        t22 = (t22 + 0x4);
        nd_SprPut(0xC2A922C, t25, (float)((((((struct o4_int *)0xC2A931C)->v)) + t23) + 0x150), 304.0f);
        t21 = (t21 + 0x1);
        t23 = (t23 + 0x40);
        if ((int)t21 >= (int)0x7) {
            break;
        }
    }
    (((struct o0_float *)0xC2A9240)->v) = 0.25f;
    (((struct o8_float *)0xC2A9240)->v) = 0.0f;
    (((struct o10_float *)0xC2A9240)->v) = 0.25f;
    nd_SprPut(0xC2A922C, 0xEC, (float)(((((struct o4_int *)0xC2A931C)->v)) + 0x188), 440.0f);
    (((struct o8_float *)0xC2A9240)->v) = 0.25f;
    (((struct o10_float *)0xC2A9240)->v) = 0.5f;
    nd_SprPut(0xC2A922C, 0xEC, (float)(((((struct o4_int *)0xC2A931C)->v)) + 0x1C8), 440.0f);
    (((struct o8_float *)0xC2A9240)->v) = 0.5f;
    (((struct o10_float *)0xC2A9240)->v) = 0.75f;
    nd_SprPut(0xC2A922C, 0xEC, (float)(((((struct o4_int *)0xC2A931C)->v)) + 0x208), 440.0f);
    (((struct o8_float *)0xC2A9240)->v) = 0.75f;
    (((struct o10_float *)0xC2A9240)->v) = 1.0f;
    nd_SprPut(0xC2A922C, 0xEC, (float)(((((struct o4_int *)0xC2A931C)->v)) + 0x248), 440.0f);
    (((struct o8_float *)0xC2A9240)->v) = 0.0f;
    (((struct o10_float *)0xC2A9240)->v) = 1.0f;
    (((struct o0_float *)0xC2A9240)->v) = 1.0f;
    t35 = (((struct o8_int *)0xC2A931C)->v);
    if (t35 == 1) {
        t37 = (((struct oC_int *)0xC2A931C)->v);
        if (t37 != -1) {
            pfSetFont(0x1);
            pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
            pfSize(1.0f, 1.0f);
            pfLocate(3.8e+02f, 3.2e+02f);
            return pfPuts(0xC0D0AA0);
        }
        return t37;
    }
    return t35;
}
