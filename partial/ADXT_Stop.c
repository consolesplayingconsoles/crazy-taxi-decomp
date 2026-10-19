/* Draft: generated C that the check did not accept (DIFFERS case 1: calls). Not proven equivalent. */

int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXRNA_SetPlaySw(void);
int ADXRNA_SetTransSw(void);
int ADXSJD_Stop(int);
int ADXSTM_Close(int);
int ADXSTM_Stop(int);

int ADXT_Stop(int a4)
{
    int t1;
    int t3;
    int t5;
    int t7;
    int t8;
    int t10;
    int t12;
    int t13;
    int t14;
    int t15;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;

    ADXCRS_Lock();
    t1 = *(int *)((a4 + 0xC));
    ADXRNA_SetTransSw();
    t3 = *(int *)((a4 + 0xC));
    ADXRNA_SetPlaySw();
    t5 = *(int *)((a4 + 0x4));
    ADXSJD_Stop(t5);
    t7 = *(int *)((a4 + 0x8));
    if (t7 != 0) {
        t8 = *(int *)((a4 + 0x8));
        ADXSTM_Stop(t8);
        t10 = *(int *)((a4 + 0x8));
        ADXSTM_Close(t10);
        t12 = *(int *)((a4 + 0x14));
        t13 = *(int *)((t12 + 0x0));
        t14 = *(int *)((t13 + 0x14));
        t15 = ((int (*)(int))(t14))(t12);
        *(unsigned int *)((a4 + 0x8)) = 0x0;
    }
    t17 = *(signed char *)((a4 + 0x2));
    if (t17 == 2) {
        t18 = *(int *)((a4 + 0x14));
        if (t18 != 0) {
            t19 = *(int *)((a4 + 0x14));
            t20 = *(int *)((t19 + 0x0));
            t21 = *(int *)((t20 + 0xC));
            t22 = ((int (*)(int))(t21))(t19);
        }
    }
    *(unsigned int *)((a4 + 0x14)) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = 0x0;
    return ADXCRS_Unlock();
}

