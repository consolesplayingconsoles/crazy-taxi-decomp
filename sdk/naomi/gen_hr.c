/* Straight-line functions with calls and guards (batch gen_hr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
float nlLdexpf(int, float);
float nlExp(float f4);

float nlExp(float f4)
{
    register float u0;
    register float u7;
    register int t8;
    register float u9;
    register int t10;
    register float u11;
    register float u4;

    u0 = (((struct o0_float *)0xC075DB4)->v);
    if (!(0.0f > f4)) {
        u4 = ((((struct o4_float *)0xC075DB4)->v));
    } else {
        u4 = ((((struct o8_float *)0xC075DB4)->v));
    }
    u7 = ((float)(int)(u4 + (f4 / u0)) * u0);
    t8 = 0xA;
    u9 = (((f4 - u7) * (f4 - u7)) / ((((struct oC_float *)0xC075DB4)->v)));
    for (;;) {
        t10 = t8;
        t8 = (t8 - 4);
        u11 = ((float)t10 + u9);
        u9 = ((f4 - u7) * (f4 - u7));
        u9 = (u9 / u11);
        if ((int)t8 < (int)0x6) {
            break;
        }
    }
    return nlLdexpf((int)(u4 + (f4 / u0)), ((((f4 - u7) + u9) + (1.0f + 1.0f)) / ((u9 - (f4 - u7)) + (1.0f + 1.0f))));
}
