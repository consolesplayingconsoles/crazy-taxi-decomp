/* Straight-line functions with calls and guards (batch gen_so): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdFsExecServerG(void);
int gdFsHdlExecServer(int a4);

int gdFsHdlExecServer(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x20));
    if (t0 != 1) {
        return gdFsExecServerG();
    }
    return t0;
}
