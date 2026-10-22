/* Straight-line functions with calls and guards (batch gen_cf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Chat_PickSomeoneUp(void);
int FUN_0c0630a2(int, float);
int nlSqrt(int, int);
int FUN_0c158860(int, int, int);
int ResetFadeColor(void);
int SetColliObj(int, int);
extern void _builtin_prefetch(void *);
int nlAddVector(int, int);
float nlLength(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlScaleVector(int, int, float);
int pfColor(int, int, int, int);
int pfLocate(float, float);
int pfPutSEGALogo(void);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);
int set_event(int, int);
int FUN_0c062f84(void);
int FUN_0c062d26(void);
int Put_Adv_Rating(void);
void FUN_0c038a00(int a4);
int FUN_0c080ae0(int a4, int a5, int a6);
int FUN_0c022410(int a4);

int FUN_0c062f84(void)
{
    *(unsigned int *)0xC2AD1D0 = 0xC0D44D8;
    *(unsigned int *)0xC2AD1D4 = 0xC0D44E0;
    FUN_0c0630a2(0xC8D5798, 14.0f);
    *(float *)0xC2AD0F8 = (1.0f + 1.0f);
    return 0xF8;
}

int FUN_0c062d26(void)
{
    int t0;

    t0 = *(int *)0xC2AD018;
    if (t0 != 0) {
        if (t0 == 1) {
            FUN_0c0630a2(0xC8E3D50, 0.0f);
        }
    } else {
        FUN_0c0630a2(0xC8D62BC, 0.0f);
    }
    *(float *)0xC2AD0F8 = 10.0f;
    *(unsigned int *)0xC2AD1D0 = 0xC0D44D8;
    *(unsigned int *)0xC2AD1D4 = 0xC0D44E0;
    return Chat_PickSomeoneUp();
}

int Put_Adv_Rating(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    float u9;
    float u13;
    float u17;
    int t25;
    int stk[9] = {0};

    t0 = *(signed char *)0xC0D0AC6;
    *(unsigned char *)((((int)stk + 4) + 0x0)) = t0;
    t1 = *(signed char *)0xC0D0AC7;
    *(unsigned char *)((((int)stk + 4) + 0x1)) = t1;
    t2 = *(signed char *)0xC0D0AC8;
    *(unsigned char *)((((int)stk + 4) + 0x2)) = t2;
    t3 = *(signed char *)0xC0D0AC9;
    *(unsigned char *)((((int)stk + 4) + 0x3)) = t3;
    t4 = *(signed char *)0xC0D0ACA;
    *(unsigned char *)((((int)stk + 4) + 0x4)) = t4;
    t5 = *(signed char *)0xC0D0ACB;
    *(unsigned char *)((((int)stk + 4) + 0x5)) = t5;
    pfSetFont(0x1);
    pfColor(0xFF00FF00, 0xFF00FF00, 0xFF00FF00, 0xFF00FF00);
    pfSize(1.0f, 1.0f);
    u9 = *(float *)0xC2A96D4;
    pfLocate(u9, 70.0f);
    pfPuts(0xC0D0A54);
    pfSize(1.0f, 1.0f);
    u13 = *(float *)0xC2A96D8;
    pfLocate(u13, 200.0f);
    pfPuts(0xC0D0A70);
    pfSize(1.5f, 1.5f);
    u17 = *(float *)0xC2A96DC;
    pfLocate(u17, 250.0f);
    pfPuts(0xC0D0A88);
    pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
    pfSize(1.0f, 1.0f);
    pfLocate(239.0f, 386.0f);
    pfPutSEGALogo();
    nlObjPutSetFadeColor(0.0f, 0.0f, 1.0f);
    t25 = ResetFadeColor();
    return t25;
}


int FUN_0c080ae0(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t9;
    int t8;
    int t10;
    int t11;
    int t12;
    int t36;
    int t13;
    int t14;
    int t15;
    int t16;
    float u18;
    float u19;
    float u20;
    float u21;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t32;
    int t33;
    int t34;
    int t35;
    float u23;
    int stk[20] = {0};

    t0 = *(int *)0xC2AF370;
    t1 = *(int *)((t0 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = (t1 << 2);
    t2 = *(int *)0xC2AF368;
    t3 = *(int *)((t0 + 0x4));
    t4 = *(int *)(((t1 << 2) + t2));
    *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    *(unsigned int *)(((int)stk + 4)) = ((t4 & 0x3FFFFFF) | 0xE0000000);
    t5 = *(int *)0xC2AF36C;
    FUN_0c158860(((t4 & 0x3FFFFFF) | 0xE0000000), t5, t3);
    t7 = *(int *)(((int)stk + 4));
    _builtin_prefetch((void *)t7);
    t9 = t7;
    if (t3 == 64) {
        t8 = *(int *)(((int)stk + 4));
        _builtin_prefetch((void *)(t8 + 0x20));
        t9 = (t8 + 0x20);
    }
    t10 = *(int *)0xC2AF368;
    t11 = *(int *)(((int)stk + 8));
    t12 = *(int *)((t11 + t10));
    *(unsigned int *)((t11 + t10)) = (t12 + (((unsigned int)t3 >> 2) << 2));
    *(unsigned int *)(((int)stk + 12)) = 0xE0000000;
    *(unsigned int *)(((int)stk + 8)) = ((((a5 << 2) << 1) + 0xC0D6954) + 0x4);
    t36 = t10;
    if ((int)a4 > 0) {
        t13 = t9;
        t14 = a4;
        t15 = a6;
        do {
            if (t14 == 1) {
                t13 = 0xF0000000;
                *(unsigned int *)(((int)stk + 12)) = t13;
            }
            t16 = *(int *)0xC2B7944;
            if (t16 != 0) {
                nlSqrt(t15, (((int)stk + 4) + 0xC));
                u18 = *(float *)(((int)stk + 24));
                u23 = u18;
            } else {
                u19 = *(float *)((t15 + 0x0));
                *(float *)(((int)stk + 16)) = u19;
                u20 = *(float *)((t15 + 0x4));
                *(float *)(((int)stk + 20)) = u20;
                u21 = *(float *)((t15 + 0x8));
                u23 = u21;
            }
            t13 = 0xFF000038;
            *(float *)(((int)stk + 24)) = (1.0f / u23);
            t24 = *(int *)(((int)stk + 8));
            t25 = *(int *)((t24 + 0x0));
            t26 = *(int *)((t15 + (t25 << 2)));
            *(unsigned int *)(((int)stk + 28)) = t26;
            t27 = *(int *)0xC2AF370;
            t28 = *(int *)((t27 + 0x0));
            *(unsigned int *)(((int)stk + 4)) = (t28 << 2);
            t29 = *(int *)0xC2AF368;
            t30 = *(int *)(((t28 << 2) + t29));
            *(unsigned int *)((t13 + 0x0)) = ((unsigned int)((unsigned int)t30 >> 16) >> 8);
            *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t30 >> 16) >> 8);
            FUN_0c158860(((t30 & 0x3FFFFFF) | 0xE0000000), (((int)stk + 4) + 0x8), 0x20);
            _builtin_prefetch((void *)((t30 & 0x3FFFFFF) | 0xE0000000));
            t32 = *(int *)0xC2AF368;
            t14 = (t14 - 1);
            t33 = *(int *)(((int)stk + 4));
            t34 = *(int *)((t33 + t32));
            t13 = t34;
            t13 = (t13 + 0x20);
            *(unsigned int *)((t33 + t32)) = t13;
            t35 = *(int *)(((((a5 << 2) << 1) + 0xC0D6954) + 0x0));
            t15 = (t15 + (t35 << 2));
        } while ((int)t14 > 0);
        t36 = t32;
    }
    return t36;
}

