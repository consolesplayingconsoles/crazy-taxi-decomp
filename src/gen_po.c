/* Straight-line functions with calls and guards (batch gen_po): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Init_Adv_Standard(void);

int Init_Adv_Standard(void)
{
    float u0;

    *(float *)0xC2A92D0 = 0.0f;
    *(float *)0xC2A92D4 = 0.0f;
    u0 = *(float *)0xC057A60;
    *(float *)0xC2A92D8 = u0;
    *(float *)0xC2A92DC = 1.0f;
    *(float *)0xC2A92E0 = 1.0f;
    *(float *)0xC2A92E4 = 0.0f;
    *(float *)0xC2A92E8 = 0.0f;
    *(float *)0xC2A92EC = 1.0f;
    *(float *)0xC2A92F0 = 1.0f;
    *(unsigned int *)0xC2A92F4 = 0x0;
    *(unsigned int *)0xC2A9300 = 0xA;
    *(float *)0xC2A92F8 = 1.0f;
    *(unsigned int *)0xC2A92FC = 0x2;
    return 0x2C;
}
