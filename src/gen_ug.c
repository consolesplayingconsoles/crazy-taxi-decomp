/* Straight-line functions with calls and guards (batch gen_ug): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int selectInitTileSprite(void);

int selectInitTileSprite(void)
{
    *(float *)0xC2A7464 = 0.0f;
    *(float *)0xC2A7468 = 0.0f;
    *(float *)0xC2A746C = (*(float *)0xC051E1C);
    *(float *)0xC2A7470 = 1.0f;
    *(float *)0xC2A7474 = 1.0f;
    *(float *)0xC2A7478 = 0.0f;
    *(float *)0xC2A747C = 0.0f;
    *(float *)0xC2A7480 = 1.0f;
    *(float *)0xC2A7484 = 1.0f;
    *(unsigned int *)0xC2A7488 = 0x0;
    *(unsigned int *)0xC2A7494 = 0xA;
    *(float *)0xC2A748C = 1.0f;
    *(unsigned int *)0xC2A7490 = 0x2;
    return 0x2C;
}
