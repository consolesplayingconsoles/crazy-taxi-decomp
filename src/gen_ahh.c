/* Straight-line functions with calls and guards (batch gen_ahh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02d4ba(void);

int FUN_0c02d4ba(void)
{
    int t2;
    int t4;

    t2 = *(int *)(((((int)((int)(*(int *)0xC1EE238) % (int)0x10)) << 2) + 0xC08AE64));
    if (t2 == 0) {
        *(unsigned int *)0xC1EE238 = 0x0;
        t4 = 0xC08AE64;
    } else {
        t4 = (((int (*)(int))(t2))(0xC1EE238));
    }
    return t4;
}
