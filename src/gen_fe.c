/* Straight-line functions with calls and guards (batch gen_fe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlArcTan(float);
float nlCos(int);
int nlMultiMatrix(int);
float nlSin(int);
float nlTan(int);
int nl_set_cnv_proj_pers(void);
int nlPerspectiveX(int a4, float f4, float f5, float f6);

int nlPerspectiveX(int a4, float f4, float f5, float f6)
{
    int t0;
    float t3;
    int t5;
    float u13;
    float u14;
    float u23;
    int t15;
    int t25;
    float t26;
    float u34;
    float u35;
    float u36;
    float t38;
    float t41;
    float t42;
    float u43;
    float t44;
    float t46;
    float u48;
    int stk[34];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(float *)(((int)stk + 16)) = f4;
    *(float *)(((int)stk + 4)) = f6;
    t0 = *(int *)(((int)stk + 8));
    *(float *)(((int)stk + 12)) = (1.0f / (nlTan((t0 >> 1))));
    if ((*(float *)0xC14A81C) != 0.0f) {
        t3 = nlTan((t0 >> 1));
        t5 = nlArcTan((t3 * ((*(float *)0xC14A81C) + 1.0f)));
        *(float *)(((int)stk + 24)) = (1.0f / (nlCos(t5)));
    } else {
        *(float *)(((int)stk + 24)) = (1.0f / (nlCos((t0 >> 1))));
    }
    u13 = *(float *)(((int)stk + 12));
    u14 = *(float *)(((int)stk + 16));
    u23 = (1.0f / (u14 * u13));
    if ((*(float *)0xC14A820) != 0.0f) {
        t15 = nlArcTan((1.0f / (u14 * u13)));
        *(unsigned int *)(((int)stk + 8)) = t15;
        u23 = ((nlTan(t15)) * ((*(float *)0xC14A820) + 1.0f));
    }
    t25 = nlArcTan(u23);
    t26 = nlCos(t25);
    *(float *)0xC14A81C = 0.0f;
    *(float *)0xC14A820 = 0.0f;
    *(float *)0xC14A810 = ((((*(float *)(((int)stk + 12))) * (*(float *)(((int)stk + 24))))) * 0.5f);
    *(float *)0xC14A814 = (((((u14 * u13)) * (1.0f / t26))) * 0.5f);
    *(float *)0xC2B3490 = ((*(float *)0xC14A824) * (*(float *)0xC14A810));
    u34 = *(float *)0xC14A814;
    u35 = *(float *)0xC14A828;
    *(float *)0xC2B3494 = (u35 * u34);
    u36 = *(float *)0xC2B3490;
    if (u36 > (u35 * u34)) {
        *(float *)0xC14A818 = u36;
    } else {
        *(float *)0xC14A818 = (u35 * u34);
    }
    t38 = nlTan((t0 >> 1));
    *(float *)(((int)stk + 20)) = (float)(nlArcTan((t38 / (*(float *)(((int)stk + 16))))));
    *(float *)0xC2B3464 = 0.0f;
    *(float *)0xC2B3454 = 0.0f;
    *(float *)0xC2B3480 = 0.0f;
    *(float *)0xC2B3470 = 0.0f;
    t41 = nlCos((t0 >> 1));
    *(float *)0xC2B3450 = t41;
    *(float *)0xC2B3460 = (-t41);
    t42 = nlSin((t0 >> 1));
    *(float *)0xC2B3468 = t42;
    *(float *)0xC2B3458 = t42;
    u43 = *(float *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 8)) = (int)u43;
    t44 = nlCos((int)u43);
    *(float *)0xC2B3474 = t44;
    *(float *)0xC2B3484 = (-t44);
    t46 = nlSin((*(int *)(((int)stk + 8))));
    *(float *)0xC2B3488 = t46;
    *(float *)0xC2B3478 = t46;
    *(float *)0xC2B346C = 0.0f;
    *(float *)0xC2B345C = 0.0f;
    *(float *)0xC2B348C = 0.0f;
    *(float *)0xC2B347C = 0.0f;
    *(float *)(((int)stk + 28)) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = (u14 * u13);
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    *(float *)(((int)stk + 64)) = 0.0f;
    u48 = *(float *)(((int)stk + 4));
    *(float *)(((int)stk + 68)) = ((f5 + u48) / (f5 - u48));
    *(float *)(((int)stk + 72)) = (-1.0f);
    *(float *)(((int)stk + 76)) = 0.0f;
    *(float *)(((int)stk + 80)) = 0.0f;
    *(float *)(((int)stk + 84)) = ((((f5 * (*(float *)(((int)stk + 4))))) * (1.0f + 1.0f)) / (f5 - u48));
    *(float *)(((int)stk + 88)) = 0.0f;
    *(float *)0xC2B7BDC = f5;
    *(float *)0xC2B7BE0 = (*(float *)(((int)stk + 4)));
    *(float *)0xC2B7BE4 = (1.0f / f5);
    *(float *)0xC2B3174 = f5;
    *(float *)0xC2B315C = (-f5);
    *(float *)0xC2B3178 = (*(float *)(((int)stk + 4)));
    *(float *)0xC2B3170 = (1.0f / f5);
    nlMultiMatrix((((int)stk + 4) + 0x18));
    return (nl_set_cnv_proj_pers());
}
