/* Straight-line functions with calls and guards (batch gen_pm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int psgAllocIpBuff(int a4);

int psgAllocIpBuff(int a4)
{
    int t0;
    int t4;

    t0 = 0x0;
    for (;;) {
        if ((*(int *)((0xC2AD594 + (t0 << 2)))) != a4) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x9) {
                break;
            }
            continue;
        }
        *(unsigned int *)((0xC2AD594 + (t0 << 2))) = a4;
        *(unsigned int *)((a4 + 0x118)) = ((short)((short)t0 * (short)0xCC) + 0xC2AD5B8);
        return t0;
    }
    t4 = 0x0;
    for (;;) {
        if ((*(int *)((0xC2AD594 + (t4 << 2)))) == 0) {
            break;
        }
        t4 = (t4 + 0x1);
        if ((int)t4 >= (int)0x9) {
            return 0xFFFFFFFF;
        }
    }
    *(unsigned int *)((0xC2AD594 + (t4 << 2))) = a4;
    *(unsigned int *)((a4 + 0x118)) = ((short)((short)t4 * (short)0xCC) + 0xC2AD5B8);
    return t4;
}
