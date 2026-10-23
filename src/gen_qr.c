/* Straight-line functions with calls and guards (batch gen_qr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_Create(int, int, int);
int ADXT_SetAutoRcvr(int, int);
int ADXT_SetReloadSct(int, int);
int gdc_InitStreamSongDisk(void);
int gdc_SetStreamAFS(void);
int gdc_StreamInit(void);

int gdc_StreamInit(void)
{
    int t4;

    *(unsigned int *)0xC1EE810 = (ADXT_Create(0x1, 0xC1EE824, 0x10884));
    *(unsigned int *)0xC1EE814 = (ADXT_Create(0x1, 0xC1FF0A8, 0x10884));
    *(unsigned int *)0xC1EE818 = (ADXT_Create(0x1, 0xC20F92C, 0x10884));
    *(unsigned int *)0xC1EE81C = (ADXT_Create(0x1, 0xC2201B0, 0x10884));
    t4 = ADXT_Create(0x2, 0xC230A34, 0x390C4);
    *(unsigned int *)0xC1EE820 = t4;
    ADXT_SetReloadSct(t4, 0x19);
    ADXT_SetAutoRcvr((*(int *)0xC1EE820), 0x2);
    gdc_SetStreamAFS();
    return gdc_InitStreamSongDisk();
}
