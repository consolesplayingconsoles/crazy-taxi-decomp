/* Straight-line functions with calls and guards (batch gen_aes): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_StartAction(int, int, int);
int FcvStoreBuffer(int, int, float);
int nlSubVector3op(int, int, int);
void Drv_Init(void);

void Drv_Init(void)
{
    int t23;
    int t19;
    int stk[18] = {0};

    { struct mv12 { int w[12]; }; *(struct mv12 *)(((int)stk + 4)) = *(struct mv12 *)(0xC0D4C78); }
    *(unsigned int *)0xC2AD000 = (*(int *)((((int)stk + 4) + ((*(int *)0xC179488) << 2))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD004) = *(struct mv3 *)(0xC0D5530); }
    *(unsigned int *)0xC2AD010 = 0x0;
    *(unsigned int *)0xC2AD014 = 0x0;
    *(unsigned int *)0xC2AD01C = 0x0;
    *(unsigned int *)0xC2AD018 = 0x0;
    *(unsigned int *)0xC2AD020 = 0xC8E2204;
    *(float *)0xC2AD024 = 0.0f;
    FcvStoreBuffer((*(int *)0xC2AD020), 0xC2AD028, 0.0f);
    *(float *)0xC2AD0F4 = 0.0f;
    *(float *)0xC2AD0F8 = 0.0f;
    *(unsigned int *)0xC2AD0FC = (*(int *)0xC2AD020);
    *(float *)0xC2AD100 = (*(float *)0xC2AD024);
    FcvStoreBuffer((*(int *)0xC2AD0FC), 0xC2AD104, (*(float *)0xC2AD100));
    *(unsigned int *)0xC2AD1D0 = 0xC0D44D8;
    *(unsigned int *)0xC2AD1D4 = 0xC0D44E0;
    *(unsigned int *)0xC2AD1D8 = 0x0;
    *(unsigned char *)0xC2AD1DF = ((*(signed char *)0xC2AD1DF) & 0x7F);
    *(unsigned char *)0xC2AD1DF = ((*(signed char *)0xC2AD1DF) | 0x40);
    *(unsigned char *)0xC2AD1DF = ((*(signed char *)0xC2AD1DF) & 0xDF);
    *(unsigned char *)0xC2AD1DF = ((*(signed char *)0xC2AD1DF) & 0xE7);
    *(unsigned char *)0xC2AD1DF = ((*(signed char *)0xC2AD1DF) & 0xFB);
    *(unsigned char *)0xC2AD1DF = ((*(signed char *)0xC2AD1DF) & 0xFD);
    *(unsigned int *)0xC2AD1DC = (((*(int *)0xC2AD1DC) & 0xFF000000) | 0x0);
    if ((int)(*(int *)0xC179488) >= (int)0x4) {
        t19 = ((*(signed char *)0xC2AD1DF) | 0x1);
    } else {
        t19 = ((*(signed char *)0xC2AD1DF) & 0xFE);
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
