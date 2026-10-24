/* Straight-line functions with calls and guards (batch gen_alz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Init_sprCombo(void);

int Init_sprCombo(void)
{
    *(float *)0xC2A88E0 = 3.2e+02f;
    *(float *)0xC2A88E4 = 2.4e+02f;
    *(float *)0xC2A88E8 = 0.19999999f;
    *(float *)0xC2A88EC = 1.0f;
    *(float *)0xC2A88F0 = 1.0f;
    *(float *)0xC2A88F4 = 0.0f;
    *(float *)0xC2A88F8 = 0.0f;
    *(float *)0xC2A88FC = 1.0f;
    *(float *)0xC2A8900 = 1.0f;
    *(unsigned int *)0xC2A8904 = 0x0;
    *(unsigned int *)0xC2A8910 = 0x200A;
    *(float *)0xC2A8908 = 1.0f;
    *(unsigned int *)0xC2A890C = 0x2;
    return 0x2C;
}
