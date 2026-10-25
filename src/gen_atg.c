/* Straight-line functions with calls and guards (batch gen_atg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXRNA_SetOutPan(int, int, int);
int ADXSJD_GetNumChan(int);
int adxt_set_outpan(int a4);

int adxt_set_outpan(int a4)
{
    int t1;
    int t6;
    int t8;
    int t13;
    int t20;
    int t24;

    t1 = ADXSJD_GetNumChan((*(int *)((a4 + 0x4))));
    if (t1 == 1) {
        t6 = *(int *)((a4 + 0xC));
        t8 = 0x0;
        if ((*(short *)(((a4 + 0x42) + 0x0))) == -128) {
        } else {
            t8 = (*(short *)(((a4 + 0x42) + 0x0)));
        }
        t24 = (ADXRNA_SetOutPan(t6, 0x0, t8));
    } else {
        t13 = 0xFFFFFFF1;
        if ((*(short *)(((a4 + 0x42) + 0x0))) == -128) {
        } else {
            t13 = (*(short *)(((a4 + 0x42) + 0x0)));
        }
        ADXRNA_SetOutPan((*(int *)((a4 + 0xC))), 0x0, t13);
        t20 = 0xF;
        if ((*(short *)((a4 + 0x44))) == -128) {
        } else {
            t20 = (*(short *)((a4 + 0x44)));
        }
        t24 = (ADXRNA_SetOutPan((*(int *)((a4 + 0xC))), 0x1, t20));
    }
    return t24;
}
