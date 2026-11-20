/* Straight-line functions with calls and guards (batch gen_auc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o71_uchar { char p[0x71]; unsigned char v; };
int ADXSJD_SetInSj(int, int);
int ADXSJD_Start(int);
int buIsFormat(int);
int get_fat(int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int vmsfs_sysdiskfree(int a4);
int adxt_start_sj(int a4, int a5, int a6, int a7);


int adxt_start_sj(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t6;
    register int t0;

    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        t0 = t1;
        t0 = (t0 << 2);
        t0 = (t0 + (a4 + 0x18));
        t0 = (*(int *)((t0 + 0x0)));
        t6 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x14)))))(t0, a5, a6, a7);
        t1 = (t1 + 0x1);
    }
    ADXSJD_SetInSj((*(int *)((a4 + 0x4))), a5);
    *(unsigned int *)((a4 + 0x14)) = a5;
    ADXSJD_Start((*(int *)((a4 + 0x4))));
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    (((struct o4C_uint *)(a4))->v) = 0x0;
    (((struct o71_uchar *)(a4))->v) = 0x0;
    return 0x71;
}
