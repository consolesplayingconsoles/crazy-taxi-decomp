/* Straight-line functions with calls and guards (batch gen_mm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_SetOutVol(int, int);
int gdc_GetStreamSongRemainTime(int);
int gdc_GetVolGainMute(int);
int gdc_PlayStreamSongDisk(void);
int gdc_ExecStreamSongDisk(void);

int gdc_ExecStreamSongDisk(void)
{
    int t1;
    int t18;
    int t51;
    int t35;
    int t23;
    int t40;
    int t44;
    int t32;

    t1 = *(signed char *)0xC1EE80C;
    if ((*(int *)0xC2A11B0) == 1) {
        ADXT_SetOutVol((*(int *)0xC1EE820), (gdc_GetVolGainMute(t1)));
        *(unsigned int *)0xC0E5348 = 0x1;
    } else {
        if ((*(int *)0xC0E5348) == 1) {
            ADXT_SetOutVol((*(int *)0xC1EE820), (gdc_GetVolGainMute(t1)));
            *(unsigned int *)0xC0E5348 = 0x0;
        }
    }
    t18 = *(int *)0xC26A0C8;
    t51 = t18;
    if ((t18 != -1) && (t18 != 0)) {
        if (t18 != 1) {
            t35 = t18;
            if (t18 != 2) {
            } else {
                t23 = *(int *)0xC26A0D8;
                if ((int)t23 < (int)0x3C) {
                    *(unsigned int *)0xC26A0CC = ((int)((int)((*(int *)0xC26A0CC) + 0x1) % (int)0x4));
                    t32 = (gdc_PlayStreamSongDisk());
                } else {
                    t32 = (ADXT_SetOutVol((*(int *)0xC1EE820), (gdc_GetVolGainMute((int)(((float)t23 / (*(float *)0xC02E614)) * (float)(*(signed char *)0xC1EE80C))))));
                }
                *(unsigned int *)0xC26A0D8 = ((*(int *)0xC26A0D8) - 1);
                t35 = t32;
            }
            t44 = t35;
        } else {
            t40 = gdc_GetStreamSongRemainTime(0x0);
            *(unsigned int *)0xC26A0D0 = t40;
            if ((int)t40 <= (int)0x78) {
                *(unsigned int *)0xC26A0C8 = 0x2;
                *(unsigned int *)0xC26A0D8 = 0x78;
            }
            t44 = t40;
        }
        t51 = t44;
    }
    return t51;
}
