/* Straight-line functions with calls and guards (batch gen_adw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c079f10(void);
int nlArcTan(float);
float nlCos(int);
int nlMultiMatrix(int);
float nlSin(int);
float nlTan(int);
int nlPerspective(int a4, float f4, float f5, float f6);

int nlPerspective(int a4, float f4, float f5, float f6)
{
    int t0;
    float t1;
    float u2;
    int t4;
    int t20;
    float t25;
    float u26;
    float u27;
    float u28;
    float u35;
    float u36;
    float u37;
    float u42;
    float t43;
    float t45;
    float t46;
    float t47;
    int stk[34] = {0};

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(float *)(((int)stk + 12)) = f4;
    t0 = *(int *)(((int)stk + 8));
    t1 = nlTan((t0 >> 1));
    *(float *)(((int)stk + 4)) = (1.0f / t1);
    u2 = *(float *)(((int)stk + 12));
    if ((*(float *)0xC14A81C) != 0.0f) {
        t4 = nlArcTan((u2 / (1.0f / t1)));
        *(unsigned int *)(((int)stk + 8)) = t4;
        *(float *)(((int)stk + 24)) = (1.0f / (nlCos((nlArcTan(((nlTan(t4)) * ((*(float *)0xC14A81C) + 1.0f)))))));
    } else {
        *(float *)(((int)stk + 24)) = (1.0f / (nlCos((nlArcTan((u2 / (1.0f / t1)))))));
    }
    t20 = (t0 >> 1);
    if ((*(float *)0xC14A820) != 0.0f) {
        t20 = (nlArcTan(((nlTan((t0 >> 1))) * ((*(float *)0xC14A820) + 1.0f))));
    }
    t25 = nlCos(t20);
    *(float *)0xC14A81C = 0.0f;
    *(float *)0xC14A820 = 0.0f;
    u26 = 0.5f;
    u27 = *(float *)(((int)stk + 4));
    u28 = *(float *)(((int)stk + 12));
    *(float *)(((int)stk + 20)) = (u27 / u28);
    *(float *)0xC14A810 = ((((u27 / u28) * (*(float *)(((int)stk + 24))))) * u26);
    *(float *)0xC14A814 = ((((*(float *)(((int)stk + 4))) * (1.0f / t25))) * u26);
    *(float *)0xC2B3490 = ((*(float *)0xC14A824) * (*(float *)0xC14A810));
    u35 = *(float *)0xC14A814;
    u36 = *(float *)0xC14A828;
    *(float *)0xC2B3494 = (u36 * u35);
    u37 = *(float *)0xC2B3490;
    if (u37 > (u36 * u35)) {
        *(float *)0xC14A818 = u37;
    } else {
        *(float *)0xC14A818 = (u36 * u35);
    }
    *(float *)(((int)stk + 16)) = (float)(nlArcTan(((nlTan((t0 >> 1))) * (*(float *)(((int)stk + 12))))));
    *(float *)0xC2B3464 = 0.0f;
    *(float *)0xC2B3454 = 0.0f;
    *(float *)0xC2B3480 = 0.0f;
    *(float *)0xC2B3470 = 0.0f;
    u42 = *(float *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 8)) = (int)u42;
    t43 = nlCos((int)u42);
    *(float *)0xC2B3450 = t43;
    *(float *)0xC2B3460 = (-t43);
    t45 = nlSin((*(int *)(((int)stk + 8))));
    *(float *)0xC2B3468 = t45;
    *(float *)0xC2B3458 = t45;
    t46 = nlCos((t0 >> 1));
    *(float *)0xC2B3474 = t46;
    *(float *)0xC2B3484 = (-t46);
    t47 = nlSin((t0 >> 1));
    *(float *)0xC2B3488 = t47;
    *(float *)0xC2B3478 = t47;
    *(float *)0xC2B346C = 0.0f;
    *(float *)0xC2B345C = 0.0f;
    *(float *)0xC2B348C = 0.0f;
    *(float *)0xC2B347C = 0.0f;
    *(float *)(((int)stk + 28)) = (*(float *)(((int)stk + 20)));
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = (*(float *)(((int)stk + 4)));
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    *(float *)(((int)stk + 64)) = 0.0f;
    *(float *)(((int)stk + 68)) = ((f5 + f6) / (f5 - f6));
    *(float *)(((int)stk + 72)) = (-1.0f);
    *(float *)(((int)stk + 76)) = 0.0f;
    *(float *)(((int)stk + 80)) = 0.0f;
    *(float *)(((int)stk + 84)) = ((((f5 * f6)) * (1.0f + 1.0f)) / (f5 - f6));
    *(float *)(((int)stk + 88)) = 0.0f;
    *(float *)0xC2B7BDC = f5;
    *(float *)0xC2B7BE0 = f6;
    *(float *)0xC2B7BE4 = (1.0f / f5);
    *(float *)0xC2B3174 = f5;
    *(float *)0xC2B315C = (-f5);
    *(float *)0xC2B3178 = f6;
    *(float *)0xC2B3170 = (1.0f / f5);
    nlMultiMatrix((((int)stk + 4) + 0x18));
    return (FUN_0c079f10());
}
