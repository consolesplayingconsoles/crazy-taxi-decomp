/* Straight-line functions with calls and guards (batch gen_f): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetAdvCamera(int, int);
int FUN_0c03932e(void);
int FUN_0c03934e(float);
int FUN_0c039378(float, float, float);
int FUN_0c03a3e0(void);
int FUN_0c04bb70(int);
int FUN_0c059514(void);
int FUN_0c0595e8(void);
int FUN_0c0596ac(void);
int FUN_0c0597fc(void);
int FUN_0c05aefc(void);
int FUN_0c05af8e(void);
int FUN_0c05b044(void);
int Result_SetBackColor(void);
int FUN_0c074680(void);
int FUN_0c077210(int, int);
int FUN_0c077df0(int);
int FUN_0c078980(void);
int Init_Result(int);
int Initialize_Replay(void);
int Sound_Init(void);
int gdc_StopStreamSongAll(void);
int kmiWriteRegister(int, int);
int mwRnaErrEntryFunc(void);
int mwRnaGetNumData(void);
int mwRnaSetPlaySw(void);
int nlObjPutLoadTexture(int, int);
int nlScaleUnitVector(int, int, float);
int nlSprPut(int, int);
void FUN_0c020092(void);
int gameState12(void);
int FUN_0c030e72(void);
void FUN_0c03ac62(void);
int FUN_0c05778a(int a4, int a5, float f4, float f5);
int FUN_0c059450(void);
int nlInvLightVectorUseViewMatrix(void);
int FUN_0c158f00(void);
int ADXRNA_SetPlaySw(void);
int ADXRNA_GetNumData(void);
int thunk_mwRnaErrEntryFunc(void);

void FUN_0c020092(void)
{
    int t0;

    t0 = 0;
    for (; t0 < (int)0x6E8; t0++) *(unsigned char *)(0xC1789E0 + t0) = *(unsigned char *)(0xC089F80 + t0);
}

int gameState12(void)
{
    float u9;
    float u11;
    float u12;
    int t14;
    int t15;

    Sound_Init();
    gdc_StopStreamSongAll();
    FUN_0c074680();
    *(unsigned int *)0xC2A4E50 = 0x1;
    Init_Result(0xFFFFFFFF);
    Initialize_Replay();
    FUN_0c04bb70(0x3);
    SetAdvCamera(0xC179840, 0x1);
    FUN_0c03932e();
    FUN_0c03932e();
    u9 = *(float *)0xC02D520;
    FUN_0c03934e(u9);
    u11 = *(float *)0xC02D528;
    u12 = *(float *)0xC02D52C;
    FUN_0c039378(u12, u11, u9);
    t14 = FUN_0c03a3e0();
    t15 = *(int *)0xC1EE238;
    *(unsigned int *)0xC1EE238 = (t15 + 0x1);
    *(unsigned int *)0xC1EE240 = 0x0;
    return t14;
}

int FUN_0c030e72(void)
{
    int t3;

    nlObjPutLoadTexture(0xC0EA5D8, 0xC141868);
    nlObjPutLoadTexture(0xC0EAC20, 0xC141868);
    nlObjPutLoadTexture(0xC0EB340, 0xC141868);
    t3 = nlObjPutLoadTexture(0xC0EB720, 0xC141868);
    return t3;
}

void FUN_0c03ac62(void)
{
    int t0;

    t0 = 0;
    for (; t0 < (int)0x25B0; t0++) *(unsigned char *)(0xC28F8A0 + t0) = *(unsigned char *)(0xC28A4E8 + t0);
}

int FUN_0c05778a(int a4, int a5, float f4, float f5)
{
    *(unsigned int *)((a4 + 0x0)) = a5;
    *(float *)((a4 + 0x4)) = f4;
    *(float *)((a4 + 0x8)) = f5;
    return nlSprPut(a4, a5);
}

int FUN_0c059450(void)
{
    int t7;
    int t8;

    FUN_0c059514();
    FUN_0c0595e8();
    FUN_0c0596ac();
    FUN_0c05af8e();
    FUN_0c05b044();
    Result_SetBackColor();
    FUN_0c05aefc();
    t7 = FUN_0c0597fc();
    t8 = *(int *)0xC2A96F4;
    *(unsigned int *)0xC2A96F4 = (t8 + 0x1);
    return t7;
}

int nlInvLightVectorUseViewMatrix(void)
{
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u14;
    int t16;

    FUN_0c077df0(0x2);
    FUN_0c078980();
    FUN_0c077210(0xC14A938, 0xC2B3150);
    FUN_0c078980();
    FUN_0c077df0(0x1);
    FUN_0c078980();
    FUN_0c077210(0xC14A918, 0xC2B3160);
    u7 = *(float *)0xC2B3150;
    u8 = *(float *)0xC14A918;
    *(float *)0xC2B3150 = (u7 + u8);
    u9 = *(float *)0xC2B3154;
    u10 = *(float *)0xC14A91C;
    *(float *)0xC2B3154 = (u9 + u10);
    u11 = *(float *)0xC2B3158;
    u12 = *(float *)0xC14A920;
    *(float *)0xC2B3158 = (u11 + u12);
    FUN_0c077210(0xC2B3150, 0xC2B3150);
    u14 = *(float *)0xC07B2F0;
    nlScaleUnitVector(0xC2B3150, 0xC2B3150, u14);
    t16 = FUN_0c078980();
    return t16;
}

int FUN_0c158f00(void)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t8;
    int t10;
    int t12;
    int t14;
    int t16;
    int t17;

    t0 = *(int *)0xC2EA934;
    kmiWriteRegister(0x68, t0);
    t2 = *(int *)0xC2EA938;
    kmiWriteRegister(0x6C, t2);
    t4 = *(int *)0xC2EA940;
    kmiWriteRegister(0x5C, t4);
    t6 = *(int *)0xC2EA944;
    kmiWriteRegister(0x4C, t6);
    t8 = *(int *)0xC2EA97C;
    kmiWriteRegister(0x118, t8);
    t10 = *(int *)0xC2EA980;
    kmiWriteRegister(0xF4, t10);
    t12 = *(int *)0xC2EA94C;
    kmiWriteRegister(0x48, t12);
    t14 = *(int *)0xC2EA948;
    kmiWriteRegister(0x44, (t14 & 0xFFFFFFFE));
    t16 = *(int *)0xC2EA984;
    t17 = kmiWriteRegister(0xE8, (t16 | 0x8));
    return t17;
}

int ADXRNA_SetPlaySw(void)
{
    return mwRnaSetPlaySw();
}

int ADXRNA_GetNumData(void)
{
    return mwRnaGetNumData();
}

int thunk_mwRnaErrEntryFunc(void)
{
    return mwRnaErrEntryFunc();
}

