/* Straight-line functions with calls and guards (batch gen_aje): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlObjPutMvGetMode(void);

int nlObjPutMvGetMode(void)
{
    return ((int)(*(int *)0xC2B356C) >> 29);
}
