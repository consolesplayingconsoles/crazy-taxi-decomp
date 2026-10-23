/* Straight-line functions with calls and guards (batch gen_aga): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int selectInitIconSprite(void);

int selectInitIconSprite(void)
{
    float u0;
    int t1;

    u0 = 500.8f;
    t1 = 0x3;
    for (;;) {
        *(float *)0xC2A7414 = 0.0f;
        *(float *)0xC2A7418 = 0.0f;
        *(float *)0xC2A741C = u0;
        *(float *)0xC2A7420 = 1.0f;
        *(float *)0xC2A7424 = 1.0f;
        *(float *)0xC2A7428 = 0.0f;
        *(float *)0xC2A742C = 0.0f;
        *(float *)0xC2A7430 = 1.0f;
        *(float *)0xC2A7434 = 1.0f;
        t1 = (t1 - 0x1);
        *(unsigned int *)0xC2A7438 = 0x0;
        *(unsigned int *)0xC2A7444 = 0xA;
        *(float *)0xC2A743C = 1.0f;
        *(unsigned int *)0xC2A7440 = 0x2;
        if (t1 == 0) {
            break;
        }
    }
    return 0x2C;
}
