/* Straight-line functions with calls and guards (batch gen_aac): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void ADXT_GetNumSctIbuf(int a4);

void ADXT_GetNumSctIbuf(int a4)
{
    int t1;
    int t4;

    if ((*(int *)((a4 + 0x14))) != 0) {
        t1 = *(int *)((a4 + 0x14));
        t4 = ((int (*)(int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, 0x1);
        
    }
}
