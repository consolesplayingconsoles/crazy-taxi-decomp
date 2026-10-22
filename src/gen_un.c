/* Straight-line functions with calls and guards (batch gen_un): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Init_Time_Count(void);

int Init_Time_Count(void)
{
    *(float *)0xC2A7F30 = 0.0f;
    *(float *)0xC2A7F34 = 0.0f;
    *(float *)0xC2A7F38 = (*(float *)0xC05266C);
    *(float *)0xC2A7F3C = 1.0f;
    *(float *)0xC2A7F40 = 1.0f;
    *(float *)0xC2A7F44 = 0.0f;
    *(float *)0xC2A7F48 = 0.0f;
    *(float *)0xC2A7F4C = 1.0f;
    *(float *)0xC2A7F50 = 1.0f;
    *(unsigned int *)0xC2A7F54 = 0x0;
    *(unsigned int *)0xC2A7F60 = 0xA;
    *(float *)0xC2A7F58 = 1.0f;
    *(unsigned int *)0xC2A7F5C = 0x2;
    return 0x2C;
}
