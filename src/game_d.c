/* Small game functions (batch d): flag words, random seeds, init sequences, peripheral state. Globals are addressed
   directly where the decomp has no name for them yet. */

int extRand(void);
int pdGetPeripheral(int port);
void nlTranslateV(float *v);
void FUN_0c0678a4(int a, float *out);
void FUN_0c05fa10(int i);
void FUN_0c02ea04(void);
int FUN_0c02f26a(void);
void FUN_0c02e800(void);
void FUN_0c02f14c(void);
void FUN_0c074680(int a, int b, int c);

#define ADV_FLAGS       (*(unsigned short *)0x0C2A992C)

void FUN_0c05df5e(void)
{
    ADV_FLAGS &= 0xFFBF;
}

void FUN_0c06047c(void)
{
    *(int *)0x0C2A9FF0 = 0;
}

int FUN_0c06048c(void)
{
    int v = *(int *)0x0C2A9FA8 | 1;

    *(int *)0x0C2A9FA8 = v;
    return v;
}

void FUN_0c060616(int m)
{
    if (m)
        *(int *)0x0C2A9FA8 &= ~4;
    else
        *(int *)0x0C2A9FA8 &= ~2;
}

int Chat_Execute(void)
{
    int a = extRand();
    int b;

    *(int *)0x0C13EB90 = a;
    b = extRand();
    *(int *)0x0C13EB94 = b;
    return b;
}

int FUN_0c05f482(int port)
{
    int r = pdGetPeripheral(port);

    *(int *)0x0C2A9C70 = r;
    return r;
}

void FUN_0c067a28(int a)
{
    float v[3];

    FUN_0c0678a4(a, v);
    nlTranslateV(v);
}

void FUN_0c05f93c(void)
{
    int i;

    *(int *)0x0C2A9D58 = 0;
    *(int *)0x0C2A9D5C = 0;
    for (i = 0; i < 10; i++)
        FUN_0c05fa10(i);
}

void FUN_0c057c3c(void)
{
    FUN_0c074680(0xFF000000, 0xFF000000, 0xFF000000);
    *(unsigned short *)0x0C2A9228 &= 0xFFFE;
}

void FUN_0c03019a(void)
{
    *(int *)0x0C26E0F4 = -1;
    *(int *)0x0C26E0F8 = 0;
    FUN_0c02e800();
    FUN_0c02f14c();
    *(int *)0x0C26E180 = 1;
}

int FUN_0c0300b6(void)
{
    int v = *(int *)0x0C26E180;

    if (v == 1) {
        FUN_0c02ea04();
        return FUN_0c02f26a();
    }
    return v;
}
