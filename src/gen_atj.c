/* Straight-line functions with calls and guards (batch gen_atj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXRNA_SetTransSw(int, int);
int ADXSJD_GetNumChan(int);
int ADXSJD_GetStat(int);
int adxt_stat_playing(int a4);

int adxt_stat_playing(int a4)
{
    int t1;
    int t16;
    int t3;
    int t9;
    int t4;
    int t5;
    int t8;
    int t14;
    int t11;

    t1 = ADXSJD_GetStat((*(int *)((a4 + 0x4))));
    t16 = t1;
    if (t1 == 3) {
        t3 = ADXSJD_GetNumChan((*(int *)((a4 + 0x4))));
        t9 = t3;
        if ((int)t3 > 0) {
            t4 = 0x0;
            for (;;) {
                t5 = *(int *)((((t4 << 2) + (a4 + 0x18)) + 0x0));
                t8 = ((int (*)(int, int))((*(int *)(((*(int *)((t5 + 0x0))) + 0x24)))))(t5, 0x1);
                if ((int)t8 < (int)0x20) {
                    t4 = (t4 + 0x1);
                    if ((int)t4 >= (int)t3) {
                        break;
                    }
                    continue;
                }
                break;
            }
            t9 = t8;
            t11 = t4;
        } else {
            t11 = 0x0;
        }
        t14 = t9;
        if (t11 == t3) {
            ADXRNA_SetTransSw((*(int *)((a4 + 0xC))), 0x0);
            *(unsigned char *)((a4 + 0x1)) = 0x4;
            t14 = 0x4;
        }
        t16 = t14;
    }
    return t16;
}
