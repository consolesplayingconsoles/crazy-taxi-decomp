/* Straight-line functions with calls and guards (batch gen_qc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlLineFog(int a4);

int nlLineFog(int a4)
{
    if (a4 == 1) {
        *(unsigned int *)0xC14AA50 = ((*(int *)0xC14AA50) & 0xFF3FFFFF);
        *(unsigned int *)0xC14AA70 = ((*(int *)0xC14AA70) & 0xFF3FFFFF);
        return a4;
    }
    *(unsigned int *)0xC14AA50 = ((*(int *)0xC14AA50) & 0xFF3FFFFF);
    *(unsigned int *)0xC14AA70 = ((*(int *)0xC14AA70) & 0xFF3FFFFF);
    *(unsigned int *)0xC14AA50 = ((*(int *)0xC14AA50) | 0x800000);
    *(unsigned int *)0xC14AA70 = ((*(int *)0xC14AA70) | 0x800000);
    return a4;
}
