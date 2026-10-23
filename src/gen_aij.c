/* Straight-line functions with calls and guards (batch gen_aij): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ndInitPeripheralPack(void);

int ndInitPeripheralPack(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        t1 = (t1 + 0x1);
        *(unsigned int *)((0xC2A9C9C + t0)) = 0x0;
        *(unsigned int *)((0xC2A9CE4 + t0)) = 0x0;
        t0 = (t0 + 0x4);
        if ((int)t1 >= (int)0x12) {
            break;
        }
    }
    return t0;
}
