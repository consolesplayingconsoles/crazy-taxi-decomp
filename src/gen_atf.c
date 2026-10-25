/* Straight-line functions with calls and guards (batch gen_atf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXRNA_SetPlaySw(int, int);
int ADXRNA_SetTransSw(int, int);
int ADXSJD_Stop(int);
int ADXSTM_Seek(int, int);
int ADXSTM_Start(int);
int ADXSTM_Stop(int);
int adxt_start_sj(int, int);
int adxt_RcvrReplay(int a4);

int adxt_RcvrReplay(int a4)
{
    int t10;
    int t13;
    int t18;
    int t24;
    int t17;

    ADXCRS_Lock();
    ADXRNA_SetTransSw((*(int *)((a4 + 0xC))), 0x0);
    ADXRNA_SetPlaySw((*(int *)((a4 + 0xC))), 0x0);
    ADXSJD_Stop((*(int *)((a4 + 0x4))));
    if ((*(int *)((a4 + 0x8))) != 0) {
        ADXSTM_Stop((*(int *)((a4 + 0x8))));
        t10 = *(int *)((a4 + 0x14));
        t13 = ((int (*)(int))((*(int *)(((*(int *)((t10 + 0x0))) + 0x14)))))(t10);
    }
    t18 = 0x0;
    for (;;) {
        if ((int)t18 >= (int)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        t17 = t18;
        t17 = (t17 << 2);
        t17 = (t17 + (a4 + 0x18));
        t17 = (*(int *)((t17 + 0x0)));
        t24 = ((int (*)(int))((*(int *)(((*(int *)((t17 + 0x0))) + 0x14)))))(t17);
        t18 = (t18 + 0x1);
    }
    if ((*(int *)((a4 + 0x8))) != 0) {
        ADXSTM_Seek((*(int *)((a4 + 0x8))), 0x0);
        ADXSTM_Start((*(int *)((a4 + 0x8))));
    }
    adxt_start_sj(a4, (*(int *)((a4 + 0x14))));
    return ADXCRS_Unlock();
}
