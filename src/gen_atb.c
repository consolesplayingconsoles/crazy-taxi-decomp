/* Straight-line functions with calls and guards (batch gen_atb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int memset(int, int, int);
int ADXPD_Init(void);

int ADXPD_Init(void)
{
    return memset(0xC2FD29C, 0x0, 0x1A0);
}
