/* Straight-line functions with calls and guards (batch gen_afd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_SetOutVol(int, int);
int ADXT_StartAfs(int, int, int);
int gdc_StopStreamSongAll(void);
int volumeToDb(int);
int gdc_PlayStreamSong(int a4);

int gdc_PlayStreamSong(int a4)
{
    *(unsigned int *)0xC26A0B8 = 0x0;
    *(unsigned char *)0xC1EE80C = (int)(((float)(unsigned char)(*(signed char *)0xC28A4EC) / 8.0f) * 76.0f);
    gdc_StopStreamSongAll();
    ADXT_StartAfs((*(int *)0xC1EE820), 0x1, a4);
    return ADXT_SetOutVol((*(int *)0xC1EE820), (volumeToDb((*(signed char *)0xC1EE80C))));
}
