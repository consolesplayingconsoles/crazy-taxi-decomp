/* Straight-line functions with calls and guards (batch gen_amd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_SetMotion(int, float);
void Drv_StartSeated(void);

void Drv_StartSeated(void)
{
    int t3;

    if (((*(signed char *)(((*(int *)0xC2AD018) + 0x14A))) & 128) != 0) {
        *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
        *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
        t3 = 0xC8EAF88;
    } else {
        *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
        *(unsigned int *)0xC2AD1D4 = 0xC0D3068;
        t3 = 0xC8D2EEC;
    }
    Drv_SetMotion(t3, 20.0f);
    *(unsigned char *)0xC2AD1DF = ((*(signed char *)0xC2AD1DF) | 0x80);
    *(float *)0xC2AD0F4 = 0.0f;
    *(float *)0xC2AD0F8 = 20.0f;
}
