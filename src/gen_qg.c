/* Straight-line functions with calls and guards (batch gen_qg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int selectInitBarSprite(void);

int selectInitBarSprite(void)
{
    *(unsigned int *)0xC2A7370 = 0x62;
    *(float *)0xC2A737C = (*(float *)0xC051DF8);
    *(float *)0xC2A7374 = 0.0f;
    *(float *)0xC2A7378 = 0.0f;
    *(float *)0xC2A7380 = (*(float *)0xC051DFC);
    *(float *)0xC2A7384 = (*(float *)0xC051E00);
    *(float *)0xC2A7388 = 0.0f;
    *(float *)0xC2A738C = 0.0f;
    *(float *)0xC2A7390 = 1.0f;
    *(float *)0xC2A7394 = 1.0f;
    *(unsigned int *)0xC2A7398 = 0x0;
    *(unsigned int *)0xC2A73A4 = 0x5;
    *(float *)0xC2A739C = 1.0f;
    *(unsigned int *)0xC2A73A0 = 0x2;
    return 0x2C;
}
