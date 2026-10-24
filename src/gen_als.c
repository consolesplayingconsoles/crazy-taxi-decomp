/* Straight-line functions with calls and guards (batch gen_als): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int selectInitFrontSprite(void);

int selectInitFrontSprite(void)
{
    *(float *)0xC2A74BC = 499.5f;
    *(float *)0xC2A74C0 = 1.0f;
    *(float *)0xC2A74C4 = 1.0f;
    *(float *)0xC2A74C8 = 0.0f;
    *(float *)0xC2A74CC = 0.0f;
    *(float *)0xC2A74D0 = 1.0f;
    *(float *)0xC2A74D4 = 1.0f;
    *(unsigned int *)0xC2A74D8 = 0x0;
    *(unsigned int *)0xC2A74E4 = 0xA;
    *(float *)0xC2A74DC = 1.0f;
    *(unsigned int *)0xC2A74E0 = 0x2;
    return 0x2C;
}
