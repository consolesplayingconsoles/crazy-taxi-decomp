/* Straight-line functions with calls and guards (batch gen_ud): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Chat_Init(void);
int Drv_Init(void);
int Drv_StartAction(int, int, int);
int FcvStoreBuffer(int, int, float);
int RinAqua_Init(void);
int Sound_Init(void);
int nlRand(void);
int rinRandomSeed(int);
int Act_Init(void);

int Act_Init(void)
{
    int t13;
    int t14;
    int t20;
    int t23;
    int t25;

    if ((*(int *)0xC1EE234) == 1) {
        rinRandomSeed(((nlRand()) + 0x1));
    } else {
        rinRandomSeed(0x3039);
    }
    Drv_Init();
    FcvStoreBuffer(0xC8E2204, 0xC2AD460, 0.0f);
    if ((*(int *)0xC1EE234) == 1) {
        t13 = 0x0;
        t14 = 0x0;
        if ((*(int *)0xC1EE210) != 2) {
            t13 = 0x6;
            t14 = (*(int *)0xC1EE7F0);
        }
        Drv_StartAction(t13, 0x0, t14);
    }
    *(unsigned int *)0xC2AD590 = 0x0;
    t20 = 0x0;
    for (;;) {
        *(unsigned int *)((0xC2AD594 + (t20 << 2))) = 0x0;
        FcvStoreBuffer(0xC9726F4, ((short)((short)t20 * (short)0xCC) + 0xC2AD5B8), 0.0f);
        t20 = (t20 + 0x1);
        if ((int)t20 >= (int)0x9) {
            break;
        }
    }
    t23 = 0x0;
    for (;;) {
        FcvStoreBuffer(0xC9726F4, ((short)((short)t23 * (short)0xCC) + 0xC2ADCE4), 0.0f);
        t25 = ((unsigned short)t23 * (unsigned short)0x1C);
        t23 = (t23 + 0x1);
        *(float *)((((unsigned char)t25 + 0xC2AE278) + 0x0)) = 0.0f;
        *(unsigned int *)((((unsigned char)t25 + 0xC2AE278) + 0x4)) = 0x0;
        *(unsigned int *)((((unsigned char)t25 + 0xC2AE278) + 0x10)) = 0x0;
        *(unsigned int *)((((unsigned char)t25 + 0xC2AE278) + 0xC)) = 0x0;
        *(unsigned int *)((((unsigned char)t25 + 0xC2AE278) + 0x8)) = 0x0;
        *(unsigned int *)((((unsigned char)t25 + 0xC2AE278) + 0x18)) = 0x0;
        *(unsigned int *)((((unsigned char)t25 + 0xC2AE278) + 0x14)) = 0x0;
        if ((int)t23 >= (int)0x7) {
            break;
        }
    }
    Sound_Init();
    Chat_Init();
    *(unsigned int *)0xC0E49E0 = 0x0;
    return RinAqua_Init();
}
