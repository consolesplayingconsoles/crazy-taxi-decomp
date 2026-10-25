/* Straight-line functions with calls and guards (batch gen_atc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXRNA_GetTime(int, int, int, int);
int ADXSJD_GetOutBps(int);
int ADXSJD_GetSfreq(int);
int ADXSJD_GetTotalNumSmpl(int);
void ADXT_GetTime(int a4, int a5, int a6, int a7);

void ADXT_GetTime(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x1));
    if ((t0 != 3) && (t0 != 4)) {
        if ((*(signed char *)((a4 + 0x1))) == 5) {
            *(unsigned int *)((a5 + 0x0)) = (ADXSJD_GetTotalNumSmpl((*(int *)((a4 + 0x4)))));
            *(unsigned int *)((a6 + 0x0)) = (ADXSJD_GetSfreq((*(int *)((a4 + 0x4)))));
            *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a5 + 0x0))) * ((int)((int)0x10 / (int)(ADXSJD_GetOutBps((*(int *)((a4 + 0x4))))))));
        } else {
            *(unsigned int *)((a5 + 0x0)) = 0x0;
            *(unsigned int *)((a6 + 0x0)) = 0x1;
        }
    } else {
        ADXRNA_GetTime((*(int *)((a4 + 0xC))), a5, a6, a7);
    }
    *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a5 + 0x0))) + (*(int *)((a4 + 0x88))));
}
