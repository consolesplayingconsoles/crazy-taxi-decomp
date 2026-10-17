/* Straight-line functions with calls and guards (batch gen_o): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_SetOutVol(int, int);
int ADXT_StartAfs(int, int, int);
int FUN_0c02e494(void);
int FUN_0c02f02a(void);
int FUN_0c03012c(void);
int FUN_0c03019a(void);
int FUN_0c03b544(int);
int FUN_0c03b698(int);
int FUN_0c066bf0(int, int, float);
int FUN_0c07eca0(int, int);
int FUN_0c07f0b0(int);
int FUN_0c167800(void);
int gdc_FileLoad(int, int, int);
int gdc_StopStreamSongAll(int);
int kbCfgIni(int);
int kmiWriteRegister(int, int);
int memmove(int, int, int);
int syCfgIIDCheckSum(int);
int volumeToDb(int);

int FUN_0c02e31e(int a4)
{
    int t0;
    int t2;
    int t4;
    int t5;
    int t6;

    *(unsigned int *)0xC26A0B8 = 0x0;
    t0 = *(signed char *)0xC28A4EC;
    *(unsigned char *)0xC1EE80C = (int)(((float)(unsigned char)t0 / 8.0f) * 76.0f);
    gdc_StopStreamSongAll(a4);
    t2 = *(int *)0xC1EE820;
    ADXT_StartAfs(t2, 0x1, a4);
    t4 = *(signed char *)0xC1EE80C;
    t5 = volumeToDb(t4);
    t6 = *(int *)0xC1EE820;
    return ADXT_SetOutVol(t6, t5);
}

int FUN_0c03006a(void)
{
    int t0;
    int t4;

    t0 = *(int *)0xC179488;
    
    
    if (!((int)t0 >= (int)0x4)) {
        FUN_0c07f0b0(0x5);
        t4 = 0xC08D4C8;
        } else {
        FUN_0c07f0b0(0x5);
        t4 = 0xC08D4D4;
        }
    gdc_FileLoad(0xCB40000, t4, 0x0);
    FUN_0c07eca0(0xCB40000, 0x5);
    gdc_FileLoad(0xCB40000, 0xC08D588, 0x0);
    return gdc_FileLoad(0xCE90000, 0xC08D594, 0x8000);
}

int FUN_0c03dffa(void)
{
    *(unsigned int *)0xC1EE238 = 0x0;
    FUN_0c03012c();
    FUN_0c03019a();
    FUN_0c02f02a();
    FUN_0c03b544(0x4);
    FUN_0c03b698(0x0);
    *(unsigned int *)0xC2A11B0 = 0x0;
    return FUN_0c02e494();
}

int FUN_0c063dc6(void)
{
    float u0;
    int t1;
    float u2;
    float u4;
    float u5;
    float u6;
    int t10;
    int t7;
    int t8;
    float u9;

    u0 = *(float *)0xC2AD0F8;
    if ((u0 == 0.0f)) {
        t1 = *(signed char *)0xC2AD1DF;
        *(unsigned char *)0xC2AD1DF = (t1 & 0x7F);
        return (t1 & 0x7F);
        }
    u2 = *(float *)0xC2AD0F4;
    FUN_0c066bf0(0xC2AD028, 0xC2AD104, (u2 / u0));
    u4 = *(float *)0xC2AD0F4;
    *(float *)0xC2AD0F4 = (u4 + 1.0f);
    u5 = *(float *)0xC2AD0F8;
    u6 = *(float *)0xC2AD0F4;
    t10 = 0xF4;
    if ((u6 == u5)) {
        t7 = *(signed char *)0xC2AD1DF;
        *(unsigned char *)0xC2AD1DF = (t7 & 0x7F);
        t8 = *(int *)0xC2AD0FC;
        *(unsigned int *)0xC2AD020 = t8;
        u9 = *(float *)0xC2AD100;
        *(float *)0xC2AD024 = u9;
        t10 = 0x24;
        }
    return t10;
}

int FUN_0c071258(int a4)
{
    float u0;
    int t1;
    float u2;
    float u3;
    int t4;
    float u6;
    float u7;
    float u8;
    int t12;
    int t9;
    int t10;
    float u11;

    u0 = *(float *)((a4 + 0x10C));
    if ((u0 == 0.0f)) {
        t1 = *(signed char *)(((0x149 + a4) + 0x0));
        *(unsigned char *)(((0x149 + a4) + 0x0)) = (t1 & 0x7F);
        return (t1 & 0x7F);
        }
    u2 = *(float *)((a4 + 0x10C));
    u3 = *(float *)((a4 + 0x108));
    t4 = *(int *)((a4 + 0x118));
    FUN_0c066bf0((a4 + 0x3C), t4, (u3 / u2));
    u6 = *(float *)((a4 + 0x108));
    *(float *)((a4 + 0x108)) = (u6 + 1.0f);
    u7 = *(float *)((a4 + 0x10C));
    u8 = *(float *)((a4 + 0x108));
    t12 = 0x108;
    if ((u8 == u7)) {
        t9 = *(signed char *)(((0x149 + a4) + 0x0));
        *(unsigned char *)(((0x149 + a4) + 0x0)) = (t9 & 0x7F);
        t10 = *(int *)((a4 + 0x110));
        *(unsigned int *)((a4 + 0x34)) = t10;
        u11 = *(float *)((a4 + 0x114));
        *(float *)((a4 + 0x38)) = u11;
        t12 = 0x38;
        }
    return t12;
}

int syCfgGetIndividualID(int a4)
{
    int t1;
    int t3;
    int t4;

    if ((a4 == 0)) {
        return 0x0;
        }
    kbCfgIni(0x0);
    t1 = FUN_0c167800();
    memmove(a4, (t1 + 0x2), 0x6);
    t3 = syCfgIIDCheckSum(t1);
    
    if (!(t3 == 0)) {
        t4 = 0x1;
        } else {
        t4 = 0x2;
        }
    return t4;
}

void kmBlankScreen(int a4)
{
    int t0;
    int t2;
    int t3;
    int t5;
    int t9;
    int t7;

    
    
    if ((a4 == 1)) {
        t0 = *(int *)0xC2EA948;
        kmiWriteRegister(0x44, (t0 & 0xFFFFFFFE));
        t2 = *(int *)0xC2EA984;
        t7 = (t2 | 0x8);
        } else {
        t3 = *(int *)0xC2EA948;
        kmiWriteRegister(0x44, (t3 & 0xFFFFFFFE));
        t5 = *(int *)0xC2EA984;
        t7 = t5;
        }
    kmiWriteRegister(0xE8, t7);
    t9 = *(int *)0xC2EA948;
    kmiWriteRegister(0x44, t9);
}
