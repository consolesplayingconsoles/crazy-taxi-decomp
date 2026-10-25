/* Straight-line functions with calls and guards (batch gen_aae): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXRNA_SetPlaySw(int, int);
int ADXRNA_SetTransSw(int, int);
int ADXSJD_Stop(int);
int ADXSTM_Close(int);
int ADXSTM_Stop(int);
int ADXT_Stop(int a4);

int ADXT_Stop(int a4)
{
    int t12;
    int t15;
    int t21;
    int t24;
    int t20;

    ADXCRS_Lock();
    ADXRNA_SetTransSw((*(int *)((a4 + 0xC))), 0x0);
    ADXRNA_SetPlaySw((*(int *)((a4 + 0xC))), 0x0);
    ADXSJD_Stop((*(int *)((a4 + 0x4))));
    if ((*(int *)((a4 + 0x8))) != 0) {
        ADXSTM_Stop((*(int *)((a4 + 0x8))));
        ADXSTM_Close((*(int *)((a4 + 0x8))));
        t12 = *(int *)((a4 + 0x14));
        t15 = ((int (*)(int))((*(int *)(((*(int *)((t12 + 0x0))) + 0x14)))))(t12);
        *(unsigned int *)((a4 + 0x8)) = 0x0;
    }
    if (((*(signed char *)((a4 + 0x2))) == 2) && (t20 = *(int *)((a4 + 0x14)), t20 != 0)) {
        t21 = *(int *)((a4 + 0x14));
        t24 = ((int (*)(int))((*(int *)(((*(int *)((t21 + 0x0))) + 0xC)))))(t21);
    }
    *(unsigned int *)((a4 + 0x14)) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = 0x0;
    return ADXCRS_Unlock();
}
