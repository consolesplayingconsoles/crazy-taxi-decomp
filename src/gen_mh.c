/* Straight-line functions with calls and guards (batch gen_mh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_SetMotion(int, float);
int Drv_StartBikeReverse(void);

int Drv_StartBikeReverse(void)
{
    *(unsigned int *)0xC2AD1D0 = 0xC0D3080;
    *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
    Drv_SetMotion(0xC13BB20, 0.0f);
    *(float *)0xC2AD0F8 = (15.0f);
    return 0xF8;
}
