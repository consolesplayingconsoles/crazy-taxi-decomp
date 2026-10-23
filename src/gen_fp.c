/* Straight-line functions with calls and guards (batch gen_fp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSetPaletteData(int a4, int a5, int a6);

int nlSetPaletteData(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;

    t0 = *(signed char *)(((int)_builtin_get_gbr() + 1));
    if (t0 != 3) {
        t1 = (a4 << 2);
        t2 = a5;
        t3 = a6;
        for (;;) {
            t4 = *(short *)((t2 + 0x0));
            t2 = (t2 + 0x2);
            t3 = (t3 - 0x1);
            *(unsigned short *)((t1 + 0xC2B7C40)) = t4;
            t1 = (t1 + 0x4);
            if (t3 == 0) {
                break;
            }
        }
        *(unsigned char *)(((int)_builtin_get_gbr() + 0)) = 0x1;
        return 0x1;
    }
    t5 = (a4 << 2);
    t6 = a5;
    t7 = a6;
    for (;;) {
        t8 = *(int *)((t6 + 0x0));
        t6 = (t6 + 0x4);
        t7 = (t7 - 0x1);
        *(unsigned int *)((t5 + 0xC2B7C40)) = t8;
        t5 = (t5 + 0x4);
        if (t7 == 0) {
            break;
        }
    }
    *(unsigned char *)(((int)_builtin_get_gbr() + 0)) = 0x1;
    return 0x1;
}
