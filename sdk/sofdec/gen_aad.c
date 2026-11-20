/* Straight-line functions with calls and guards (batch gen_aad): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void ADXT_IsIbufSafety(int a4);

void ADXT_IsIbufSafety(int a4)
{
    int t1;

    if ((*(int *)((a4 + 0x14))) != 0) {
        t1 = *(int *)((a4 + 0x14));
        if ((int)(((int (*)(int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, 0x1)) >= (int)((((*(short *)((a4 + 0x3E))) << 8) << 2) << 1)) {
            return;
        }
        return;
    }
}
