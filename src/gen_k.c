/* Straight-line functions with calls and guards (batch gen_k): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_CallActionStart(int, int);
int Drv_StartAction(int a4, int a5, int a6);

int Drv_StartAction(int a4, int a5, int a6)
{
    int t4;

    *(unsigned int *)0xC2AD010 = a4;
    *(unsigned int *)0xC2AD018 = a5;
    *(unsigned int *)0xC2AD01C = a6;
    *(unsigned int *)0xC2AD014 = 0x0;
    *(float *)0xC2AD0F4 = 0.0f;
    Drv_CallActionStart(a4, 0x0);
    *(unsigned int *)0xC2AD1DC = (((*(int *)0xC2AD1DC) & 0x7FFFFFFF) | ((unsigned int)((int)((unsigned int)((((*(float *)0xC2AD0F8) > 0.0f)) ? 1 : 0) & 0x1)) << 31));
    t4 = *(signed char *)0xC2AD1DF;
    *(unsigned char *)0xC2AD1DF = (t4 & 0xBF);
    return (t4 & 0xBF);
}
