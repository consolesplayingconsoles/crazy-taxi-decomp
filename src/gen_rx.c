/* Straight-line functions with calls and guards (batch gen_rx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c07f690(int a4, int a5, int a6);

int FUN_0c07f690(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t3;

    if ((unsigned int)a4 >= (unsigned int)0x8) {
        return 0xFFFFFF80;
    }
    if ((int)(a5 - 1) < 0) {
        return 0xFFFFFF80;
    }
    if ((int)(a5 - 1) >= (int)0x10) {
        return 0xFFFFFF80;
    }
    t0 = *(int *)0xC2B76E4;
    t2 = *(int *)(((((*(int *)((t0 + 0x4))) + 0xA0800000) + ((((a4 << 2) << 2) + (a5 - 1)) << 2)) + 0x0));
    if ((unsigned char)t2 == 0xFF) {
        return 0xFFFFFF7F;
    }
    t3 = *(int *)((t0 + 0x8));
    if (a6 != 0x1B0) {
        if (a6 != 0x2B0) {
            if (a6 != 0x27B0) {
                if (a6 != 0x2AB0) {
                    return 0xFFFFFF80;
                }
                return (*(signed char *)(((signed char)((unsigned int)((unsigned int)((*(int *)(((((t3 + 0xA0800000) + (((((unsigned char)t2 & 0x3F) << 2) << 2) << 2)) + 0x8) + 0x0))) & 0x1F000000) >> 16) >> 8) + 0xC0D6919)));
            }
            return (short)((unsigned int)((*(int *)(((((t3 + 0xA0800000) + (((((unsigned char)t2 & 0x3F) << 2) << 2) << 2)) + 0x8) + 0x0))) & 0x7F0000) >> 16);
        }
        return ((int)((*(int *)(((((t3 + 0xA0800000) + (((((unsigned char)t2 & 0x3F) << 2) << 2) << 2)) + 0x14) + 0x0))) & 0x7F00) >> 8);
    }
    return ((*(int *)(((((t3 + 0xA0800000) + (((((unsigned char)t2 & 0x3F) << 2) << 2) << 2)) + 0x14) + 0x0))) & 0x7F);
}
