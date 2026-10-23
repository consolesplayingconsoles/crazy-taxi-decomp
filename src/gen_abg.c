/* Straight-line functions with calls and guards (batch gen_abg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int vmsfs_getword_little(int a4, int a5);

int vmsfs_getword_little(int a4, int a5)
{
    return (unsigned short)(*(short *)(((a4 + a5) + 0x0)));
}
