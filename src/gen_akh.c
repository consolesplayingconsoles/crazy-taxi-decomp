/* Straight-line functions with calls and guards (batch gen_akh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_IsEndcode(int a4, int a5, int a6);

int ADXT_IsEndcode(int a4, int a5, int a6)
{
    int t0;

    if ((int)a5 >= (int)0x2) {
        t0 = *(short *)((a4 + 0x0));
        if ((unsigned short)((unsigned char)((int)(unsigned short)t0 >> 8) | (((unsigned short)t0 << 8) & 0xFF00)) != 0x8001) {
            return 0x0;
        }
        *(unsigned int *)((a6 + 0x0)) = a5;
        return 0x1;
    }
    return 0x0;
}
