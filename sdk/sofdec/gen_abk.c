/* Straight-line functions with calls and guards (batch gen_abk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int memset(int, int, int);
int mwSbInit(void);

int mwSbInit(void)
{
    memset(0xC2FAF54, 0x0, 0x800);
    memset(0xC2FB754, 0x0, 0x40);
    return (memset(0xC2FAC14, 0x0, 0x340));
}
