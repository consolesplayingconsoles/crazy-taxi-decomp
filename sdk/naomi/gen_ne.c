/* Straight-line functions with calls and guards (batch gen_ne): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmGetCurrentScanline(int);
int nlGetCurrentScanLine(void);

int nlGetCurrentScanLine(void)
{
    int stk[3] = {0};

    kmGetCurrentScanline(((int)stk + 4));
    return (*(int *)(((int)stk + 4)));
}
