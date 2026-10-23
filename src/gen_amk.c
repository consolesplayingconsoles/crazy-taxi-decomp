/* Straight-line functions with calls and guards (batch gen_amk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlInnerProduct(int, int);
int drvAccelDot(void);

int drvAccelDot(void)
{
    return nlInnerProduct(0xC2AD288, 0xC2AD1F8);
}
