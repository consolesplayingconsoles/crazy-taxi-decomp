/* Straight-line functions with calls and guards (batch gen_and): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int extRand(void);
int courseCarType(int a4);

int courseCarType(int a4)
{
    int t0;
    int t1;

    t0 = extRand();
    t1 = *(int *)(((((0x7 & t0) << 2) + (0xC0C3E24 + (((a4 << 2) << 2) << 1))) + 0x0));
    return (((int)((int)((int)t0 >> 4) % (int)(*(int *)(((((t1 << 2) << 1) + 0xC0A21F8) + 0x4))))) + (*(int *)(((((t1 << 2) << 1) + 0xC0A21F8) + 0x0))));
}
