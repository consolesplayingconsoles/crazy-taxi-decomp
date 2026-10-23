/* Straight-line functions with calls and guards (batch gen_amx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_SetOutVol(int, int);
int adxStartAfs1(int, int);
int gdc_GetStreamSongRemainTime(int);
int gdc_GetVolGainMute(int);
int gdc_StopStreamSongAll(void);
int gdc_PlayStreamSongDisk(void);

int gdc_PlayStreamSongDisk(void)
{
    gdc_StopStreamSongAll();
    *(unsigned int *)0xC26A0D4 = 0x0;
    adxStartAfs1(0x0, (*(int *)((((*(int *)0xC26A0CC) << 2) + 0xC08C410))));
    *(unsigned int *)0xC26A0D0 = (gdc_GetStreamSongRemainTime((*(int *)0xC26A0D4)));
    *(unsigned int *)0xC26A0C8 = 0x1;
    return ADXT_SetOutVol((*(int *)0xC1EE820), (gdc_GetVolGainMute((*(signed char *)0xC1EE80C))));
}
