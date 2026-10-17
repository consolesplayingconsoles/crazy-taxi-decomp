/* Straight-line functions with calls and guards (batch gen_c): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_SetOutVol(int, int);
int FUN_0c03b544(int);
int FUN_0c03b698(int);
int FUN_0c05322c(float, float);
int FUN_0c053236(float, float);
int FUN_0c053240(float, float, float);
int FUN_0c05778a(int, int, float, float);
int FUN_0c074680(int, int, int, float, float);
int ResetFadeColor(void);
int SetFadeColorBase(int, float, float, float);
int SetFadeColorOffset(float, float, float);
int menuPutSprites(int, int, int, int);
int nlObjPutSetFadeColor(int, float, float, float);
int nlObjPutSetFadeColorBase(float, float, float);
int nlObjPutSetFadeColorOffset(float, float, float);
int nlSprPut(int);
int volumeToDb(int);

void FUN_0c02e2ca(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;

    t0 = *(signed char *)0xC28A4EC;
    *(unsigned char *)0xC1EE80C = (int)((float)(signed char)a4 * ((float)(unsigned char)t0 / 8.0f));
    t1 = *(signed char *)0xC1EE80C;
    t2 = volumeToDb(t1);
    t3 = *(int *)0xC1EE820;
    ADXT_SetOutVol(t3, t2);
    t5 = *(signed char *)0xC28A4EC;
    *(unsigned char *)0xC1EE80C = (int)(((float)(unsigned char)t5 / 8.0f) * 76.0f);
}

int FUN_0c030a3e(void)
{
    *(float *)0xC26E194 = 1.0f;
    *(float *)0xC26E1A0 = 0.0f;
    *(float *)0xC26E1A4 = 0.0f;
    *(float *)0xC26E1A8 = 1.0f;
    *(float *)0xC26E1AC = 1.0f;
    *(unsigned int *)0xC26E1B0 = 0x0;
    *(unsigned int *)0xC26E1BC = 0x80A;
    *(float *)0xC26E1B4 = 1.0f;
    *(unsigned int *)0xC26E1B8 = 0x2;
    *(float *)0xC26E19C = 1.0f;
    *(float *)0xC26E198 = 1.0f;
    return FUN_0c074680(0xFFBFBFBF, 0xFFBFBFBF, 0xFFBFBFBF, 1.0f, 0.0f);
}

int FUN_0c030a80(void)
{
    *(unsigned int *)0xC26E188 = 0xEA;
    *(float *)0xC26E18C = 320.0f;
    *(float *)0xC26E190 = 384.0f;
    nlSprPut(0xC26E188);
    *(unsigned int *)0xC26E188 = 0xEB;
    *(float *)0xC26E18C = 320.0f;
    *(float *)0xC26E190 = 224.0f;
    return nlSprPut(0xC26E188);
}

int SetFadeColorMulti(float f4, float f5, float f6)
{
    float u0;
    float u1;
    float u2;
    float u4;
    float u5;
    float u6;

    u0 = *(float *)0xC0EA5C4;
    u1 = *(float *)0xC0EA5C0;
    u2 = *(float *)0xC0EA5BC;
    nlObjPutSetFadeColorBase((u2 * f4), (u1 * f5), (u0 * f6));
    u4 = *(float *)0xC0EA5C8;
    u5 = *(float *)0xC0EA5CC;
    u6 = *(float *)0xC0EA5D0;
    return nlObjPutSetFadeColorOffset((u4 * f4), (u5 * f5), (u6 * f6));
}

int LightEffect(int a4)
{
    if (!(a4 == 0)) {
        SetFadeColorBase(a4, 0.5f, 0.599999964f, 1.0f);
        SetFadeColorOffset(0.299999982f, 0.399999976f, 0.5f);
        } else {
        SetFadeColorBase(a4, 1.0f, 1.0f, 1.0f);
        SetFadeColorOffset(1.0f, 1.0f, 1.0f);
        }
    return ResetFadeColor();
}

void FUN_0c03c10e(void)
{
    int t0;
    float u1;

    t0 = *(int *)0xC1EE234;
    u1 = *(float *)0xC2A1AD4;
    if (!(t0 == 1)) {
        *(float *)0xC2A1AD4 = 100.0f;
        *(float *)0xC2A1AB0 = 0.5f;
        menuPutSprites(0xC0A0678, 0xC2A1A84, 0x170, 0xD0);
        *(float *)0xC2A1AB0 = 1.0f;
        *(float *)0xC2A1AD4 = u1;
        }
}

void FUN_0c03df1a(void)
{
    int t0;
    int t4;
    int t5;
    int t6;

    t0 = *(int *)0xC2A1218;
    if (!(t0 == 0)) {
        FUN_0c03b698(t0);
        *(unsigned int *)0xC2A1218 = 0x0;
        } else {
        FUN_0c03b544(0x4);
        FUN_0c03b698(0x0);
        *(unsigned int *)0xC2A11B0 = 0x0;
        t4 = *(int *)0xC2A1228;
        *(unsigned int *)0xC1EE234 = t4;
        t5 = *(int *)0xC2A122C;
        *(unsigned int *)0xC1EE238 = t5;
        t6 = *(int *)0xC1EE234;
        if ((t6 == 0)) {
        *(unsigned int *)0xC1EE210 = 0x0;
        *(unsigned int *)0xC1EE214 = 0x0;
        *(unsigned int *)0xC1EE20C = 0x0;
        }
        }
}

int FUN_0c057e9e(void)
{
    *(unsigned int *)0xC2A92CC = 0x62;
    *(unsigned int *)0xC2A9300 = 0x2005;
    *(float *)0xC2A92DC = 40.0f;
    *(float *)0xC2A92E0 = 30.0f;
    *(float *)0xC2A92D8 = 490.0f;
    *(float *)0xC2A92F8 = 0.5f;
    nlObjPutSetFadeColor(0xC2A92CC, 0.0f, 0.0f, 0.0f);
    return nlSprPut(0xC2A92CC);
}

void FUN_0c05cde4(void)
{
    int t0;

    t0 = *(int *)0xC2A9960;
    *(unsigned int *)0xC2A9960 = (t0 + 0x1);
    if (!((int)(t0 + 0x1) >= (int)0x78)) {
        *(float *)0xC2A98A8 = 1.39999998f;
        *(float *)0xC2A98AC = 1.39999998f;
        FUN_0c05778a(0xC2A9898, 0x1F1, 525.0f, 154.0f);
        FUN_0c05778a(0xC2A9898, 0x1F2, 525.0f, 221.0f);
        *(float *)0xC2A98A8 = 1.0f;
        *(float *)0xC2A98AC = 1.0f;
        }
}

int FUN_0c0714f2(void)
{
    float u0;
    float u1;

    *(unsigned int *)0xC2AE368 = 0x0;
    *(unsigned int *)0xC2AE364 = 0x0;
    *(float *)0xC2AE36C = 420.0f;
    *(float *)0xC2AE370 = 250.0f;
    *(float *)0xC2AE374 = (-1.0f);
    *(float *)0xC2AE378 = -30.0f;
    *(float *)0xC2AE380 = 0.5f;
    *(float *)0xC2AE37C = 0.5f;
    *(float *)0xC2AE384 = 15.0f;
    u0 = *(float *)0xC2AE370;
    u1 = *(float *)0xC2AE36C;
    FUN_0c05322c(u1, u0);
    FUN_0c053236(0.5f, 0.5f);
    return FUN_0c053240(0.899999976f, 0.899999976f, 0.599999964f);
}
