/* Straight-line functions with calls and guards (batch gen_abl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int memset(int, int, int);
int FUN_0c1718a0(void);

int FUN_0c1718a0(void)
{
    memset(0xC2FAF54, 0x0, 0x800);
    memset(0xC2FB754, 0x0, 0x40);
    return (memset(0xC2FAC14, 0x0, 0x340));
}
