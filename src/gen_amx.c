/* Straight-line functions with calls and guards (batch gen_amx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_SetOutVol(int, int);
int adxStartAfs1(int, int);
int gdc_GetStreamSongRemainTime(int);
int gdc_GetVolGainMute(int);
int gdc_StopStreamSongAll(void);
int gdc_PlayStreamSongDisk(void);
struct o0_uint { unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int gdc_PlayStreamSongDisk(void)
{
    gdc_StopStreamSongAll();
    (((struct oC_uint *)0xC26A0C8)->v) = 0x0;
    adxStartAfs1(0x0, (*(int *)(((((((struct o4_int *)0xC26A0C8)->v)) << 2) + 0xC08C410))));
    (((struct o8_uint *)0xC26A0C8)->v) = (gdc_GetStreamSongRemainTime(((((struct oC_int *)0xC26A0C8)->v))));
    (((struct o0_uint *)0xC26A0C8)->v) = 0x1;
    return ADXT_SetOutVol((*(int *)0xC1EE820), (gdc_GetVolGainMute((*(signed char *)0xC1EE80C))));
}
