/* Straight-line functions with calls and guards (batch gen_oa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_StartAction(int, int, int);
int FcvStoreBuffer(int, int, float);
int nlSubVector3op(int, int, int);
void Drv_Init(void);

void Drv_Init(void)
{
    int t0;
    int t1;
    int t2;
    int t4;
    float u5;
    float u6;
    int t7;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t23;
    int t19;
    int stk[18] = {0};

    { struct mv12 { int w[12]; }; *(struct mv12 *)(((int)stk + 4)) = *(struct mv12 *)(0xC0D4C78); }
    t0 = *(int *)0xC179488;
    t1 = *(int *)((((int)stk + 4) + (t0 << 2)));
    *(unsigned int *)0xC2AD000 = t1;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD004) = *(struct mv3 *)(0xC0D5530); }
    *(unsigned int *)0xC2AD010 = 0x0;
    *(unsigned int *)0xC2AD014 = 0x0;
    *(unsigned int *)0xC2AD01C = 0x0;
    *(unsigned int *)0xC2AD018 = 0x0;
    *(unsigned int *)0xC2AD020 = 0xC8E2204;
    *(float *)0xC2AD024 = 0.0f;
    t2 = *(int *)0xC2AD020;
    FcvStoreBuffer(t2, 0xC2AD028, 0.0f);
    *(float *)0xC2AD0F4 = 0.0f;
    *(float *)0xC2AD0F8 = 0.0f;
    t4 = *(int *)0xC2AD020;
    *(unsigned int *)0xC2AD0FC = t4;
    u5 = *(float *)0xC2AD024;
    *(float *)0xC2AD100 = u5;
    u6 = *(float *)0xC2AD100;
    t7 = *(int *)0xC2AD0FC;
    FcvStoreBuffer(t7, 0xC2AD104, u6);
    *(unsigned int *)0xC2AD1D0 = 0xC0D44D8;
    *(unsigned int *)0xC2AD1D4 = 0xC0D44E0;
    *(unsigned int *)0xC2AD1D8 = 0x0;
    t9 = *(signed char *)0xC2AD1DF;
    *(unsigned char *)0xC2AD1DF = (t9 & 0x7F);
    t10 = *(signed char *)0xC2AD1DF;
    *(unsigned char *)0xC2AD1DF = (t10 | 0x40);
    t11 = *(signed char *)0xC2AD1DF;
    *(unsigned char *)0xC2AD1DF = (t11 & 0xDF);
    t12 = *(signed char *)0xC2AD1DF;
    *(unsigned char *)0xC2AD1DF = (t12 & 0xE7);
    t13 = *(signed char *)0xC2AD1DF;
    *(unsigned char *)0xC2AD1DF = (t13 & 0xFB);
    t14 = *(signed char *)0xC2AD1DF;
    *(unsigned char *)0xC2AD1DF = (t14 & 0xFD);
    t15 = *(int *)0xC2AD1DC;
    *(unsigned int *)0xC2AD1DC = ((t15 & 0xFF000000) | 0x0);
    t16 = *(int *)0xC179488;
    if ((int)t16 >= (int)0x4) {
        t17 = *(signed char *)0xC2AD1DF;
        t19 = (t17 | 0x1);
    } else {
        t18 = *(signed char *)0xC2AD1DF;
        t19 = (t18 & 0xFE);
    }
    *(unsigned char *)0xC2AD1DF = t19;
    Drv_StartAction(0x0, 0x0, 0x0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC13ED68) = *(struct mv3 *)(0xC179144); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC13ED74) = *(struct mv3 *)(0xC1791C8); }
    nlSubVector3op(0xC13ED80, 0xC1791C8, 0xC1791D4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC13ED8C) = *(struct mv3 *)(0xC13ED80); }
    t23 = 0x0;
    for (;;) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((short)(((t23 << 1) + t23) << 2) + 0xC2AD2BC)) = *(struct mv3 *)(0xC0D5530); }
        t23 = (t23 + 0x1);
        if ((int)t23 >= (int)0x23) {
            break;
        }
    }
    *(float *)0xC2AD52C = 0.0f;
    *(unsigned int *)0xC2AD530 = 0x0;
    *(unsigned int *)0xC2AD534 = 0x0;
    *(unsigned int *)0xC2AD538 = 0x0;
    *(unsigned int *)0xC2AD53C = 0x0;
    *(unsigned int *)0xC2AD540 = 0x0;
    *(unsigned int *)0xC2AD544 = 0x0;
}
