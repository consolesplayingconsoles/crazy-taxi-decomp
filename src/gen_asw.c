/* Straight-line functions with calls and guards (batch gen_asw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int memset(int, int, int);
int ADXSJD_Finish(void);

int ADXSJD_Finish(void)
{
    return memset(0xC2F4F1C, 0x0, 0x4C0);
}
