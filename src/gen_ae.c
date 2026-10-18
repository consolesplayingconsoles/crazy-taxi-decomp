/* Straight-line functions with calls and guards (batch gen_ae): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int VSklIpPlay(int, int, int, int, int, int, float);
float nlCeil(float);
float nlFloor(int, int, int, int, float);
float nlFraction(float);
float nlPow(int, int, int, int, float, float);

void pfSetFont(int a4)
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
    float u14;
    int t17;
    int t18;

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
    if (t13 != 0) {
        u14 = *(float *)0xC26E204;
        *(float *)0xC26E204 = (u14 * 0.5f);
    }
    t17 = *(int *)0xC2B29C0;
    t18 = *(int *)((((t6 * 0x3C) + t17) + 0x34));
    *(unsigned int *)0xC0ED1CC = t18;
}

void FUN_0c057728(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    float t4;
    int t5;

    if ((int)(a6 - 1) >= 0) {
        t0 = a4;
        t1 = a5;
        t2 = a5;
        t3 = (a6 - 1);
        do {
            t4 = nlPow(t0, t1, a6, a7, 10.0f, (float)t3);
            t1 = t3;
            t1 = (t1 << 2);
            t1 = (t1 + a4);
            t0 = (int)t4;
            t5 = (int)((int)t2 / (int)t0);
            t3 = (t3 - 1);
            *(unsigned int *)((t1 + 0x0)) = t5;
            t0 = (t5 * t0);
            t2 = (t2 - t0);
        } while ((int)t3 >= 0);
    }
}

int VSklSfPlay(int a4, int a5, int a6, int a7, float f4)
{
    float t0;
    float t1;
    float t2;
    int t3;

    t0 = nlFloor(a4, a5, a6, a7, f4);
    t1 = nlCeil(f4);
    t2 = nlFraction(f4);
    t3 = VSklIpPlay(a4, (int)t0, a4, (int)t1, a5, a6, t2);
    return t3;
}
