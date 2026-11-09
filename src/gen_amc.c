/* Straight-line functions with calls and guards (batch gen_amc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_SetOutVol(int, int);
int volumeToDb(int);
int gdc_VolStreamSong(int a4);
struct o0_uchar { unsigned char v; };
struct o14_int { char p[0x14]; int v; };


int gdc_VolStreamSong(int a4)
{
    float u1;

    u1 = 8.0f;
    (((struct o0_uchar *)0xC1EE80C)->v) = (int)((float)(signed char)a4 * ((float)(unsigned char)(*(signed char *)0xC28A4EC) / u1));
    ADXT_SetOutVol(((((struct o14_int *)0xC1EE80C)->v)), (volumeToDb((*(signed char *)0xC1EE80C))));
    (((struct o0_uchar *)0xC1EE80C)->v) = (int)(((float)(unsigned char)(*(signed char *)0xC28A4EC) / u1) * 76.0f);
    return 0xC02E3A8;
}
