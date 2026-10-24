/* Straight-line functions with calls and guards (batch gen_lx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_ExecBlend(float, float, float, float, float);
int Drv_StartAction(int, int, int);
int Drv_StartReady(int);
int FcvStoreBuffer(int, int, float);
int drvUpdatePartTracks(void);
int Drv_ExecReady(float f4, float f5, float f6, float f7, float f8);

int Drv_ExecReady(float f4, float f5, float f6, float f7, float f8)
{
    int t6;
    int t21;
    int t14;
    int t35;
    int t31;
    int t49;
    int t41;

    if (((*(signed char *)0xC2AD1DF) & 128) != 0) {
        t49 = (Drv_ExecBlend(f4, f5, f6, f7, f8));
    } else {
        drvUpdatePartTracks();
        FcvStoreBuffer((*(int *)0xC2AD020), 0xC2AD028, (*(float *)0xC2AD024));
        t6 = *(int *)0xC2AD014;
        if (t6 != 0) {
            t21 = t6;
            if (t6 != 1) {
            } else {
                *(float *)0xC2AD024 = ((*(float *)0xC2AD024) + 1.0f);
                t14 = 0x24;
                if (!((float)((*(int *)(((*(int *)0xC2AD020) + 0x0))) - 1) > (*(float *)0xC2AD024))) {
                    t14 = (Drv_StartAction(0x0, 0x0, 0x0));
                }
                t21 = t14;
            }
            t41 = t21;
        } else {
            t35 = t6;
            if ((unsigned int)(*(int *)0xC2AD01C) <= (unsigned int)((*(int *)0xC2AD1DC) & 0xFFFFFF)) {
                *(unsigned int *)0xC2AD1DC = (((*(int *)0xC2AD1DC) & 0xFF000000) | 0x0);
                t31 = *(int *)0xC2AD014;
                *(unsigned int *)0xC2AD014 = (t31 + 0x1);
                Drv_StartReady((t31 + 0x1));
                *(unsigned char *)0xC2AD1DF = ((*(signed char *)0xC2AD1DF) | 0x80);
                *(float *)0xC2AD0F4 = 0.0f;
                *(float *)0xC2AD0F8 = 15.0f;
                t35 = 0xF8;
            }
            t41 = t35;
        }
        t49 = t41;
    }
    *(unsigned int *)0xC2AD01C = ((*(int *)0xC2AD01C) - 1);
    return t49;
}
