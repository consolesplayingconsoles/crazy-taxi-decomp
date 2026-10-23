/* Straight-line functions with calls and guards (batch gen_amc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_SetOutVol(int, int);
int volumeToDb(int);
int gdc_VolStreamSong(int a4);

int gdc_VolStreamSong(int a4)
{
    float u1;

    u1 = *(float *)0xC02E394;
    *(unsigned char *)0xC1EE80C = (int)((float)(signed char)a4 * ((float)(unsigned char)(*(signed char *)0xC28A4EC) / u1));
    ADXT_SetOutVol((*(int *)0xC1EE820), (volumeToDb((*(signed char *)0xC1EE80C))));
    *(unsigned char *)0xC1EE80C = (int)(((float)(unsigned char)(*(signed char *)0xC28A4EC) / u1) * (*(float *)0xC02E3A8));
    return 0xC02E3A8;
}
