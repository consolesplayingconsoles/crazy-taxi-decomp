/* Straight-line functions with calls and guards (batch gen_pk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Psg_CheckCharaBit4(int a4);

int Psg_CheckCharaBit4(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x0));
    if ((t0 != 1) && ((t0 != 3) && ((t0 != 4) && ((t0 != 23) && ((t0 != 24) && ((t0 != 30) && ((t0 != 32) && ((t0 != 33) && ((t0 != 35) && ((t0 != 37) && ((t0 != 39) && ((t0 != 40) && ((t0 != 42) && ((t0 != 43) && ((t0 != 44) && ((t0 != 45) && ((t0 != 48) && ((t0 != 49) && ((t0 != 50) && ((t0 != 52) && ((t0 != 53) && ((t0 != 56) && (t0 != 57))))))))))))))))))))))) {
        return 0x0;
    }
    return 0x1;
}
