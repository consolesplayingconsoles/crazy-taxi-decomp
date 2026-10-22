/* Straight-line functions with calls and guards (batch gen_fm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c011088(void);

int FUN_0c011088(void)
{
    int t0;
    int t1;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;

    t0 = *(int *)0xAC00F728;
    t1 = 0x10;
    for (;;) {
        *(volatile signed char *)(((0x8 + t0) + 0x0));
        *(volatile signed char *)(((0x10 + t0) + 0x0));
        t1 = (t1 - 0x1);
        *(volatile signed char *)(((0x14 + t0) + 0x0));
        if (t1 == 0) {
            break;
        }
    }
    *(unsigned char *)((t0 + 0x3C)) = 0xFFFFFFC0;
    t5 = *(int *)0xAC00F730;
    *(unsigned char *)((t5 + 0xC)) = 0x0;
    t6 = *(int *)0xAC00F730;
    *(unsigned char *)((t6 + 0x24)) = 0x0;
    t7 = *(int *)0xAC00F728;
    *(unsigned char *)((t7 + 0x14)) = 0x43;
    t8 = ((int (*)(int, int))(0xAC0118F8))(0xAC00F730, t1);
    t9 = *(int *)0xAC00F728;
    *(unsigned char *)((t9 + 0x3C)) = 0x0;
    return 0x3C;
}
