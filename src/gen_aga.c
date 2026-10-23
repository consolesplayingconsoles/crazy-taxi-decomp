/* Straight-line functions with calls and guards (batch gen_aga): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Init_Standard(void);

int Init_Standard(void)
{
    *(float *)0xC2A7EE0 = (*(float *)0xC052664);
    *(float *)0xC2A7EE4 = (*(float *)0xC052668);
    *(float *)0xC2A7EE8 = (*(float *)0xC05266C);
    *(float *)0xC2A7EEC = 1.0f;
    *(float *)0xC2A7EF0 = 1.0f;
    *(float *)0xC2A7EFC = 1.0f;
    *(float *)0xC2A7F00 = 1.0f;
    *(float *)0xC2A7F08 = 1.0f;
    *(float *)0xC2A7EF4 = 0.0f;
    *(float *)0xC2A7EF8 = 0.0f;
    *(unsigned int *)0xC2A7F04 = 0x0;
    *(unsigned int *)0xC2A7F10 = 0xA;
    *(unsigned int *)0xC2A7F0C = 0x2;
    return 0x1C;
}
