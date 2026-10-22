/* Straight-line functions with calls and guards (batch gen_ae): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int VSklIpPlay(int, int, int, int, int, int, float);
float nlCeil(float);
float nlFloor(float);
float nlFraction(float);
float nlPow(float, float);
int pfSetFont(int a4);
int Money_Array(int a4, int a5, int a6);
int VSklSfPlay(int a4, int a5, int a6, float f4);

int pfSetFont(int a4)
{
    int t1;
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    float u7;
    float u8;
    float u9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t16;
    float u14;
    float u15;
    int t19;
    int t20;

    t1 = 0x0;
    if ((int)a4 >= 0) {
        t0 = a4;
        if ((int)a4 >= (int)0x4) {
            t0 = 0x0;
        }
        t1 = t0;
    }
    *(unsigned int *)0xC26E1EC = t1;
    t2 = *(int *)0xC2B3184;
    t3 = *(int *)(((t1 << 2) + 0xC0ED258));
    t4 = *(int *)0xC2AEC84;
    t5 = *(int *)(((t1 << 2) + 0xC0ED278));
    t6 = *(int *)((((((t3 + t2) << 2) << 1) + t4) + 0x4));
    *(unsigned int *)0xC26E1E8 = t5;
    u7 = *(float *)(((t1 << 2) + 0xC0ED288));
    *(float *)0xC26E20C = u7;
    u8 = *(float *)(((t1 << 2) + 0xC0ED298));
    *(float *)0xC26E208 = u8;
    u9 = *(float *)0xC26E1F8;
    *(float *)0xC26E204 = (u9 * u8);
    t10 = *(int *)0xC0ED1C8;
    *(unsigned int *)0xC0ED1C8 = (t10 & 0xFFFFFFC0);
    t11 = *(int *)0xC0ED1C8;
    t12 = *(int *)(((t1 << 2) + 0xC0ED268));
    *(unsigned int *)0xC0ED1C8 = (t11 | t12);
    t13 = *(int *)0xC26E1F0;
    t16 = 0xC0ED268;
    if (t13 != 0) {
        u14 = *(float *)0xC26E204;
        u15 = *(float *)0xC03112C;
        *(float *)0xC26E204 = (u14 * u15);
        t16 = 0xC03112C;
    }
    t19 = *(int *)0xC2B29C0;
    t20 = *(int *)((((t6 * 0x3C) + t19) + 0x34));
    *(unsigned int *)0xC0ED1CC = t20;
    return t16;
}

int Money_Array(int a4, int a5, int a6)
{
    float u0;
    int t6;
    int t1;
    int t2;
    float t3;
    int t4;
    int t5;

    u0 = *(float *)0xC0577D4;
    t6 = 0xC0577D4;
    if ((int)(a6 - 1) >= 0) {
        t1 = a5;
        t2 = (a6 - 1);
        do {
            t3 = nlPow(u0, (float)t2);
            t4 = (int)((int)t1 / (int)(int)t3);
            t5 = ((t2 << 2) + a4);
            t2 = (t2 - 1);
            *(unsigned int *)((t5 + 0x0)) = t4;
            t1 = (t1 - (t4 * (int)t3));
        } while ((int)t2 >= 0);
        t6 = t4;
    }
    return t6;
}


