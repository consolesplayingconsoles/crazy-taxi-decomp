/* Straight-line functions with calls and guards (batch gen_ma): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_ExecBlend(void);
float Drv_FacePsgFrame(int);
int Drv_StartAction(int, int, int);
int Drv_StartGetOn(void);
int FcvStoreBuffer(int, int, float);
int drvUpdatePartTracks(void);
int Drv_ExecGetOn(void);

int Drv_ExecGetOn(void)
{
    int t1;
    int t3;
    int t27;
    int t34;
    int t41;
    float u44;

    t1 = *(int *)0xC2AD018;
    if (((*(signed char *)0xC2AD1DF) & 128) != 0) {
        return Drv_ExecBlend();
    }
    t3 = *(int *)0xC2AD014;
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 2) {
                if (t3 != 3) {
                    return t3;
                }
                drvUpdatePartTracks();
                FcvStoreBuffer((*(int *)0xC2AD020), 0xC2AD028, (*(float *)0xC2AD024));
                *(float *)0xC2AD024 = ((*(float *)0xC2AD024) + 1.0f);
                if (!((float)((*(int *)(((*(int *)0xC2AD020) + 0x0))) - 1) > (*(float *)0xC2AD024))) {
                    return Drv_StartAction(0x0, 0x0, 0x0);
                }
                return 0x24;
            }
            drvUpdatePartTracks();
            FcvStoreBuffer((*(int *)0xC2AD020), 0xC2AD028, (*(float *)0xC2AD024));
            *(float *)0xC2AD024 = ((*(float *)0xC2AD024) + 1.5f);
            if (!((float)((*(int *)(((*(int *)0xC2AD020) + 0x0))) - 1) > (*(float *)0xC2AD024))) {
                *(float *)0xC2AD024 = (float)((*(int *)(((*(int *)0xC2AD020) + 0x0))) - 2);
            }
            t27 = *(int *)((t1 + 0x20));
            if (t27 == 3) {
                *(unsigned int *)0xC2AD014 = ((*(int *)0xC2AD014) + 0x1);
                return Drv_StartGetOn();
            }
            return t27;
        }
        *(float *)0xC2AD024 = (Drv_FacePsgFrame(t1));
        drvUpdatePartTracks();
        FcvStoreBuffer((*(int *)0xC2AD020), 0xC2AD028, (*(float *)0xC2AD024));
        t34 = *(int *)((t1 + 0x24));
        if (t34 == 2) {
            *(unsigned int *)0xC2AD014 = ((*(int *)0xC2AD014) + 0x1);
            return Drv_StartGetOn();
        }
        return t34;
    }
    drvUpdatePartTracks();
    FcvStoreBuffer((*(int *)0xC2AD020), 0xC2AD028, (*(float *)0xC2AD024));
    *(float *)0xC2AD024 = ((*(float *)0xC2AD024) + 1.0f);
    t41 = *(int *)0xC2AD01C;
    u44 = (float)t41;
    if ((int)t41 < 0) {
        u44 = ((float)t41 + 4.2949673e+09f);
    }
    if (u44 > (*(float *)0xC2AD024)) {
        return 0x24;
    }
    *(unsigned int *)0xC2AD014 = ((*(int *)0xC2AD014) + 0x1);
    return Drv_StartGetOn();
}
