/* Straight-line functions with calls and guards (batch gen_ou): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_Init(void);
int Drv_StartAction(int, int, int);
int FUN_0c060dfc(void);
int FcvStoreBuffer(int, int, float);
int Sound_Init(void);
int kmUnloadDevice(void);
int nlRand(void);
int rinRandomSeed(int);
int Act_Init(void);

int Act_Init(void)
{
    int t0;
    int t1;
    int t8;
    int t9;
    int t12;
    int t13;
    int t10;
    int t19;
    int t22;
    int t24;

    t0 = *(int *)0xC1EE234;
    if (t0 == 1) {
        t1 = nlRand();
        rinRandomSeed((t1 + 0x1));
    } else {
        rinRandomSeed(0x3039);
    }
    Drv_Init();
    FcvStoreBuffer(0xC8E2204, 0xC2AD460, 0.0f);
    t8 = *(int *)0xC1EE234;
    if (t8 == 1) {
        t9 = *(int *)0xC1EE210;
        t12 = 0x0;
        t13 = 0x0;
        if (t9 != 2) {
            t10 = *(int *)0xC1EE7F0;
            t12 = 0x6;
            t13 = t10;
        }
        Drv_StartAction(t12, 0x0, t13);
    }
    *(unsigned int *)0xC2AD590 = 0x0;
    t19 = 0x0;
    for (;;) {
        *(unsigned int *)((0xC2AD594 + (t19 << 2))) = 0x0;
        FcvStoreBuffer(0xC9726F4, ((short)((short)t19 * (short)0xCC) + 0xC2AD5B8), 0.0f);
        t19 = (t19 + 0x1);
        if ((int)t19 >= (int)0x9) {
            break;
        }
    }
    t22 = 0x0;
    for (;;) {
        FcvStoreBuffer(0xC9726F4, ((short)((short)t22 * (short)0xCC) + 0xC2ADCE4), 0.0f);
        t24 = ((unsigned short)t22 * (unsigned short)0x1C);
        t22 = (t22 + 0x1);
        *(float *)((((unsigned char)t24 + 0xC2AE278) + 0x0)) = 0.0f;
        *(unsigned int *)((((unsigned char)t24 + 0xC2AE278) + 0x4)) = 0x0;
        *(unsigned int *)((((unsigned char)t24 + 0xC2AE278) + 0x10)) = 0x0;
        *(unsigned int *)((((unsigned char)t24 + 0xC2AE278) + 0xC)) = 0x0;
        *(unsigned int *)((((unsigned char)t24 + 0xC2AE278) + 0x8)) = 0x0;
        *(unsigned int *)((((unsigned char)t24 + 0xC2AE278) + 0x18)) = 0x0;
        *(unsigned int *)((((unsigned char)t24 + 0xC2AE278) + 0x14)) = 0x0;
        if ((int)t22 >= (int)0x7) {
            break;
        }
    }
    Sound_Init();
    FUN_0c060dfc();
    *(unsigned int *)0xC0E49E0 = 0x0;
    return kmUnloadDevice();
}
