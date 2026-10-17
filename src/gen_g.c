/* Straight-line functions with calls and guards (batch gen_g): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXRNA_GetNumData(int, int, int, int);
int ADXRNA_SetPlaySw(int, int);
int nlObjPutSetFadeColor(int, int, int, int, float, float, float);
int nlSprPut(int, int, float);

int FUN_0c05a742(int a4, int a5, int a6, int a7)
{
    int t1;
    float u2;
    float u3;

    nlObjPutSetFadeColor(a4, a5, a6, a7, 0.0f, 0.0f, 0.0f);
    *(unsigned int *)0xC2A972C = 0x200A;
    *(unsigned int *)0xC2A96F8 = 0x13E;
    *(float *)0xC2A96FC = 164.0f;
    t1 = *(int *)0xC2A9748;
    *(float *)0xC2A9700 = (float)(t1 + 0x18C);
    u2 = *(float *)0xC2A9758;
    *(float *)0xC2A9708 = (u2 + 1.0f);
    u3 = *(float *)0xC2A9758;
    *(float *)0xC2A970C = (u3 + 1.0f);
    *(float *)0xC2A9714 = 0.0f;
    *(float *)0xC2A971C = 1.0f;
    *(unsigned int *)0xC2A9720 = 0x0;
    return nlSprPut(0xC2A96F8, 0xC2A9758, 1.0f);
}

void nlObjPutSetLightDirectionV(int a4)
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
}

void adxt_stat_decend(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)((a4 + 0xC));
    t1 = ADXRNA_GetNumData(t0, a5, a6, a7);
    if (!((int)t1 > 0)) {
        t2 = *(int *)((a4 + 0xC));
        ADXRNA_SetPlaySw(t2, 0x0);
        *(unsigned char *)((a4 + 0x1)) = 0x5;
        }
}
