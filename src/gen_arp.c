/* Straight-line functions with calls and guards (batch gen_arp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int syCfgInit(int);
int CfgInit(void);

int CfgInit(void)
{
    return syCfgInit(0xC2864E8);
}
