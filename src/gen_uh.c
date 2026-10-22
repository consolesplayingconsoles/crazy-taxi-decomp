/* Straight-line functions with calls and guards (batch gen_uh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Init_DCmini_Standard_Sprite(void);

int Init_DCmini_Standard_Sprite(void)
{
    *(float *)0xC2A989C = (*(float *)0xC05B8E4);
    *(float *)0xC2A98A0 = (*(float *)0xC05B8E8);
    *(float *)0xC2A98A4 = (*(float *)0xC05B8EC);
    *(float *)0xC2A98A8 = 1.0f;
    *(float *)0xC2A98AC = 1.0f;
    *(float *)0xC2A98B0 = 0.0f;
    *(float *)0xC2A98B4 = 0.0f;
    *(float *)0xC2A98B8 = 1.0f;
    *(float *)0xC2A98BC = 1.0f;
    *(unsigned int *)0xC2A98C0 = 0x0;
    *(unsigned int *)0xC2A98CC = 0x200A;
    *(float *)0xC2A98C4 = 1.0f;
    *(unsigned int *)0xC2A98C8 = 0x2;
    return 0x2C;
}
