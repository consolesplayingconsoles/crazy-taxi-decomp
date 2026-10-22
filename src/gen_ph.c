/* Straight-line functions with calls and guards (batch gen_ph): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_StartAction(int, int, int);
int FUN_0c062da4(void);
int FUN_0c063dc6(void);
int FUN_0c064420(void);
int FcvStoreBuffer(int, int, float);
int FUN_0c063750(void);

int FUN_0c063750(void)
{
    int t0;
    int t1;
    float u3;
    int t4;
    int t6;
    int t19;
    float u7;
    int t8;
    float u9;
    int t10;
    int t12;
    int t11;
    int t26;
    int t27;
    int t33;
    int t28;
    int t29;
    int t31;
    float u32;
    int t55;
    int t47;
    int t39;

    t0 = *(signed char *)0xC2AD1DF;
    if ((t0 & 128) != 0) {
        t1 = FUN_0c063dc6();
        t47 = t1;
    } else {
        FUN_0c064420();
        u3 = *(float *)0xC2AD024;
        t4 = *(int *)0xC2AD020;
        FcvStoreBuffer(t4, 0xC2AD028, u3);
        t6 = *(int *)0xC2AD014;
        if (t6 != 0) {
            t19 = t6;
            if (t6 != 1) {
            } else {
                u7 = *(float *)0xC2AD024;
                *(float *)0xC2AD024 = (u7 + 1.0f);
                t8 = *(int *)0xC2AD020;
                u9 = *(float *)0xC2AD024;
                t10 = *(int *)((t8 + 0x0));
                t12 = 0x24;
                if (!((float)(t10 - 1) > u9)) {
                    t11 = Drv_StartAction(0x0, 0x0, 0x0);
                    t12 = t11;
                }
                t19 = t12;
            }
            t39 = t19;
        } else {
            t26 = *(int *)0xC2AD01C;
            t27 = *(int *)0xC2AD1DC;
            t33 = t6;
            if ((unsigned int)t26 <= (unsigned int)(t27 & 0xFFFFFF)) {
                t28 = *(int *)0xC2AD1DC;
                *(unsigned int *)0xC2AD1DC = ((t28 & 0xFF000000) | 0x0);
                t29 = *(int *)0xC2AD014;
                *(unsigned int *)0xC2AD014 = (t29 + 0x1);
                FUN_0c062da4();
                t31 = *(signed char *)0xC2AD1DF;
                *(unsigned char *)0xC2AD1DF = (t31 | 0x80);
                *(float *)0xC2AD0F4 = 0.0f;
                u32 = *(float *)0xC0638C0;
                *(float *)0xC2AD0F8 = u32;
                t33 = 0xF8;
            }
            t39 = t33;
        }
        t47 = t39;
    }
    t55 = *(int *)0xC2AD01C;
    *(unsigned int *)0xC2AD01C = (t55 - 1);
    return t47;
}
