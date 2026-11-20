/* Straight-line functions with calls and guards (batch gen_atg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXRNA_SetOutPan(int, int, int);
int ADXSJD_GetNumChan(int);
int adxt_set_outpan(int a4);
struct o42_short { char p[0x42]; short v; };
struct o44_short { char p[0x44]; short v; };


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
        if (((((struct o42_short *)(a4))->v)) == -128) {
        } else {
            t8 = ((((struct o42_short *)(a4))->v));
        }
        t24 = (ADXRNA_SetOutPan(t6, 0x0, t8));
    } else {
        t13 = 0xFFFFFFF1;
        if (((((struct o42_short *)(a4))->v)) == -128) {
        } else {
            t13 = ((((struct o42_short *)(a4))->v));
        }
        ADXRNA_SetOutPan((*(int *)((a4 + 0xC))), 0x0, t13);
        t20 = 0xF;
        if (((((struct o44_short *)(a4))->v)) == -128) {
        } else {
            t20 = ((((struct o44_short *)(a4))->v));
        }
        t24 = (ADXRNA_SetOutPan((*(int *)((a4 + 0xC))), 0x1, t20));
    }
    return t24;
}
