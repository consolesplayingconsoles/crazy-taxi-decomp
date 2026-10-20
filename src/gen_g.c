/* Straight-line functions with calls and guards (batch gen_g): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXRNA_GetNumData(void);
int ADXRNA_SetPlaySw(void);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int, int);
int FUN_0c05a742(void);
int nlObjPutSetLightDirectionV(int a4);
int adxt_stat_decend(int a4);

int FUN_0c05a742(void)
{
    float u1;
    int t2;
    float u3;
    float u4;

    nlObjPutSetFadeColor(0.0f, 0.0f, 0.0f);
    *(unsigned int *)0xC2A972C = 0x200A;
    *(unsigned int *)0xC2A96F8 = 0x13E;
    u1 = *(float *)0xC05A7D0;
    *(float *)0xC2A96FC = u1;
    t2 = *(int *)0xC2A9748;
    *(float *)0xC2A9700 = (float)(t2 + 0x18C);
    u3 = *(float *)0xC2A9758;
    *(float *)0xC2A9708 = (u3 + 1.0f);
    u4 = *(float *)0xC2A9758;
    *(float *)0xC2A970C = (u4 + 1.0f);
    *(float *)0xC2A9714 = 0.0f;
    *(float *)0xC2A971C = 1.0f;
    *(unsigned int *)0xC2A9720 = 0x0;
    return nlSprPut(0xC2A96F8, 0xC2A9758);
}

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

