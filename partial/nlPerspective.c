/* Draft: generated C that the check did not accept (DIFFERS case 1: out). Not proven equivalent. */

int FUN_0c079f10(void);
int nlArcTan(float);
float nlCos(int);
int nlMultiMatrix(int);
float nlSin(int);
float nlTan(int);

int nlPerspective(int a4, float f4, float f5, float f6)
{
    int t0;
    float t1;
    float u2;
    float u3;
    int t4;
    float t5;
    float u6;
    int t7;
    float t8;
    int t9;
    float t10;
    float u12;
    int t17;
    float t13;
    float u14;
    int t15;
    float t18;
    float u19;
    float u20;
    float u21;
    float u22;
    float u23;
    float u24;
    float u25;
    float u26;
    float u27;
    float t28;
    float u29;
    int t30;
    float u31;
    float t32;
    int t33;
    float t34;
    float t35;
    float t36;
    float u37;
    float u38;
    int t40;
    int stk[34];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(float *)(((int)stk + 12)) = f4;
    t0 = *(int *)(((int)stk + 8));
    t1 = nlTan((t0 >> 1));
    *(float *)(((int)stk + 4)) = (1.0f / t1);
    u2 = *(float *)(((int)stk + 12));
    u3 = *(float *)0xC14A81C;
    if (u3 != 0.0f) {
        t4 = nlArcTan((u2 / (1.0f / t1)));
        *(unsigned int *)(((int)stk + 8)) = t4;
        t5 = nlTan(t4);
        u6 = *(float *)0xC14A81C;
        t7 = nlArcTan((t5 * (u6 + 1.0f)));
        t8 = nlCos(t7);
        *(float *)(((int)stk + 24)) = (1.0f / t8);
    } else {
        t9 = nlArcTan((u2 / (1.0f / t1)));
        t10 = nlCos(t9);
        *(float *)(((int)stk + 24)) = (1.0f / t10);
    }
    u12 = *(float *)0xC14A820;
    t17 = (t0 >> 1);
    if (u12 != 0.0f) {
        t13 = nlTan((t0 >> 1));
        u14 = *(float *)0xC14A820;
        t15 = nlArcTan((t13 * (u14 + 1.0f)));
        t17 = t15;
    }
    t18 = nlCos(t17);
    *(float *)0xC14A81C = 0.0f;
    *(float *)0xC14A820 = 0.0f;
    u19 = *(float *)(((int)stk + 4));
    u20 = *(float *)(((int)stk + 12));
    *(float *)(((int)stk + 20)) = (u19 / u20);
    u21 = *(float *)(((int)stk + 24));
    *(float *)0xC14A810 = (((u19 / u20) * u21) * 0.5f);
    u22 = *(float *)(((int)stk + 4));
    *(float *)0xC14A814 = ((u22 * (1.0f / t18)) * 0.5f);
    u23 = *(float *)0xC14A810;
    u24 = *(float *)0xC14A824;
    *(float *)0xC2B3490 = (u24 * u23);
    u25 = *(float *)0xC14A814;
    u26 = *(float *)0xC14A828;
    *(float *)0xC2B3494 = (u26 * u25);
    u27 = *(float *)0xC2B3490;
    if (u27 > (u26 * u25)) {
        *(float *)0xC14A818 = u27;
    } else {
        *(float *)0xC14A818 = (u26 * u25);
    }
    t28 = nlTan((t0 >> 1));
    u29 = *(float *)(((int)stk + 12));
    t30 = nlArcTan((t28 * u29));
    *(float *)(((int)stk + 16)) = (float)t30;
    *(float *)0xC2B3464 = 0.0f;
    *(float *)0xC2B3454 = 0.0f;
    *(float *)0xC2B3480 = 0.0f;
    *(float *)0xC2B3470 = 0.0f;
    u31 = *(float *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 8)) = (int)u31;
    t32 = nlCos((int)u31);
    *(float *)0xC2B3450 = t32;
    *(float *)0xC2B3460 = (-t32);
    t33 = *(int *)(((int)stk + 8));
    t34 = nlSin(t33);
    *(float *)0xC2B3468 = t34;
    *(float *)0xC2B3458 = t34;
    t35 = nlCos((t0 >> 1));
    *(float *)0xC2B3474 = t35;
    *(float *)0xC2B3484 = (-t35);
    t36 = nlSin((t0 >> 1));
    *(float *)0xC2B3488 = t36;
    *(float *)0xC2B3478 = t36;
    *(float *)0xC2B346C = 0.0f;
    *(float *)0xC2B345C = 0.0f;
    *(float *)0xC2B348C = 0.0f;
    *(float *)0xC2B347C = 0.0f;
    u37 = *(float *)(((int)stk + 20));
    *(float *)(((int)stk + 28)) = u37;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    u38 = *(float *)(((int)stk + 4));
    *(float *)(((int)stk + 48)) = u38;
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    *(float *)(((int)stk + 64)) = 0.0f;
    *(float *)(((int)stk + 68)) = ((f5 + f6) / (f5 - f6));
    *(float *)(((int)stk + 72)) = (-1.0f);
    *(float *)(((int)stk + 76)) = 0.0f;
    *(float *)(((int)stk + 80)) = 0.0f;
    *(float *)(((int)stk + 84)) = (((f5 * f6) * (1.0f + 1.0f)) / (f5 - f6));
    *(float *)(((int)stk + 88)) = 0.0f;
    *(float *)0xC2B7BDC = f5;
    *(float *)0xC2B7BE0 = f6;
    *(float *)0xC2B7BE4 = (1.0f / f5);
    *(float *)0xC2B3174 = f5;
    *(float *)0xC2B315C = (-f5);
    *(float *)0xC2B3178 = f6;
    *(float *)0xC2B3170 = (1.0f / f5);
    nlMultiMatrix((((int)stk + 4) + 0x18));
    t40 = FUN_0c079f10();
    return t40;
}

