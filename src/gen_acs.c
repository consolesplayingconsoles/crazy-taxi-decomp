/* Straight-line functions with calls and guards (batch gen_acs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckClipping(int, float);
int breathMove(int, int);
int breathSteer(int, int);
int breathExecOne(int a4, int a5);

int breathExecOne(int a4, int a5)
{
    int t1;

    t1 = CheckClipping(a4, (*(float *)0xC072A18));
    if (t1 != 0) {
        breathSteer(a4, a5);
        breathMove(a4, a5);
        return ((int (*)(int))(0xC0727F4))(a4);
    }
    return t1;
}
