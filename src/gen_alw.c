/* Straight-line functions with calls and guards (batch gen_alw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int selectInitPanelSprite(void);

int selectInitPanelSprite(void)
{
    *(float *)0xC2A73C8 = (*(float *)0xC051E08);
    *(float *)0xC2A73CC = (*(float *)0xC051E0C);
    *(float *)0xC2A73D0 = 1.0f;
    *(float *)0xC2A73D4 = 1.0f;
    *(float *)0xC2A73D8 = 0.0f;
    *(float *)0xC2A73DC = 0.0f;
    *(float *)0xC2A73E0 = 1.0f;
    *(float *)0xC2A73E4 = 1.0f;
    *(unsigned int *)0xC2A73E8 = 0x0;
    *(unsigned int *)0xC2A73F4 = 0xA;
    *(float *)0xC2A73EC = 1.0f;
    *(unsigned int *)0xC2A73F0 = 0x2;
    return 0x2C;
}
