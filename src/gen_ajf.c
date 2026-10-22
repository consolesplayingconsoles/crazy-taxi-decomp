/* Straight-line functions with calls and guards (batch gen_ajf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c07b1a0(int a4);

int FUN_0c07b1a0(int a4)
{
    int t2;
    int t3;
    int t1;

    if (((int)(*(int *)((a4 + 0x0))) >= 0) && (t1 = *(int *)((a4 + 0x18)), t1 != 0)) {
        t2 = (a4 + 0x18);
        for (;;) {
            t3 = *(int *)((t2 + 0x4C));
            t2 = (t2 + 0x50);
            t2 = (t2 + t3);
            if ((*(int *)((t2 + 0x0))) == 0) {
                break;
            }
        }
        return (*(int *)((t2 + 0x4)));
    }
    return 0x0;
}
