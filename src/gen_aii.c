/* Straight-line functions with calls and guards (batch gen_aii): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c059d18(void);

int FUN_0c059d18(void)
{
    float u5;
    float u8;

    *(unsigned int *)0xC2A972C = 0xE;
    *(float *)0xC2A970C = (((*(float *)0xC2A9758) - ((float)(*(int *)0xC2A978C) * 0.25f)) + 1.0f);
    *(float *)0xC2A9714 = ((float)(*(int *)0xC2A978C) * 0.25f);
    *(float *)0xC2A971C = 1.0f;
    *(unsigned int *)0xC2A972C = 0x6;
    u5 = (*(float *)0xC2A9758);
    u5 = u5 + 0.25f * (float)(*(int *)0xC2A978C);
    *(float *)0xC2A970C = u5;
    *(float *)0xC2A9714 = 0.0f;
    u8 = (*(float *)0xC2A9758);
    u8 = u8 + 0.25f * (float)(*(int *)0xC2A978C);
    *(float *)0xC2A971C = u8;
    return 0x24;
}
