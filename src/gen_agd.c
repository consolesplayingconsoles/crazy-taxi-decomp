/* Straight-line functions with calls and guards (batch gen_agd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Init_TimeUp(void);

int Init_TimeUp(void)
{
    *(float *)0xC2A8980 = (320.0f);
    *(float *)0xC2A8984 = (240.0f);
    *(float *)0xC2A8988 = (0.19999999f);
    *(float *)0xC2A898C = 1.0f;
    *(float *)0xC2A8990 = 1.0f;
    *(float *)0xC2A8994 = 0.0f;
    *(float *)0xC2A8998 = 0.0f;
    *(float *)0xC2A899C = 1.0f;
    *(float *)0xC2A89A0 = 1.0f;
    *(unsigned int *)0xC2A89A4 = 0x0;
    *(unsigned int *)0xC2A89B0 = 0x200A;
    *(unsigned int *)0xC2A89AC = 0x2;
    *(unsigned int *)0xC2A8FC0 = 0xFFFFFE20;
    *(unsigned int *)0xC2A8FC4 = 0x0;
    *(float *)0xC2A89A8 = 1.0f;
    *(unsigned int *)0xC2A8FC8 = 0x0;
    return 0x2C;
}
