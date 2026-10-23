/* Straight-line functions with calls and guards (batch gen_g): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXRNA_GetNumData(void);
int ADXRNA_SetPlaySw(void);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int, int);
int Result_Class_Shadow_Put(void);
int nlObjPutSetLightDirectionV(int a4);
int adxt_stat_decend(int a4);


int nlObjPutSetLightDirectionV(int a4)
{
    float u0;
    float u1;
    float u2;

    u0 = *(float *)((a4 + 0x8));
    u1 = *(float *)((a4 + 0x0));
    u2 = *(float *)((a4 + 0x4));
    *(float *)0xC14A918 = u1;
    *(float *)0xC14A91C = u2;
    *(float *)0xC14A920 = u0;
    *(float *)0xC14A924 = (u0 + 1.0f);
    *(float *)0xC14A928 = u1;
    *(float *)0xC14A92C = u2;
    *(float *)0xC14A930 = (u0 + 1.0f);
    *(float *)0xC14A938 = 0.0f;
    *(float *)0xC14A93C = 0.0f;
    *(float *)0xC14A940 = 1.0f;
    return 0x8;
}

int adxt_stat_decend(int a4)
{
    int t0;
    int t1;
    int t4;
    int t2;

    t0 = *(int *)((a4 + 0xC));
    t1 = ADXRNA_GetNumData();
    t4 = t1;
    if ((int)t1 <= 0) {
        t2 = *(int *)((a4 + 0xC));
        ADXRNA_SetPlaySw();
        *(unsigned char *)((a4 + 0x1)) = 0x5;
        t4 = 0x5;
    }
    return t4;
}

