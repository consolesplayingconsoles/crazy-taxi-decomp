/* Straight-line functions with calls and guards (batch gen_xw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Psg_IsMotionSetA(int a4);

int Psg_IsMotionSetA(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x0));
    if ((t0 != 1) && ((t0 != 2) && ((t0 != 3) && ((t0 != 24) && ((t0 != 26) && ((t0 != 31) && ((t0 != 32) && ((t0 != 33) && ((t0 != 35) && ((t0 != 36) && ((t0 != 38) && ((t0 != 41) && ((t0 != 42) && ((t0 != 44) && ((t0 != 46) && ((t0 != 48) && ((t0 != 49) && ((t0 != 51) && ((t0 != 52) && ((t0 != 55) && (t0 != 57))))))))))))))))))))) {
        return 0x0;
    }
    return 0x1;
}
