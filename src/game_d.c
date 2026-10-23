/* Small game functions (batch d): flag words, random seeds, init sequences, peripheral state. Globals are addressed
   directly where the decomp has no name for them yet. */

int extRand(void);
int pdGetPeripheral(int port);
void nlTranslateV(float *v);
void fcvCalcPosition(int a, float *out);
void Set_ProposalWalker(int i);
void gdc_CourseLoadExec(void);
int gdc_LandmarkLoadExec(void);
void gdc_CourseBlockInit(void);
void gdc_LandmarkInit(void);
void nlSetBackColor(int a, int b, int c);

#define ADV_FLAGS       (*(unsigned short *)0x0C2A992C)

void End_Record_Window(void)
{
    ADV_FLAGS &= 0xFFBF;
}

void LCDAccessOK(void)
{
    *(int *)0x0C2A9FF0 = 0;
}

int Set_LCDLogoFlag(void)
{
    int v = *(int *)0x0C2A9FA8 | 1;

    *(int *)0x0C2A9FA8 = v;
    return v;
}

void End_LoadSave(int m)
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

int ndGetPeripheral(int port)
{
    int r = pdGetPeripheral(port);

    *(int *)0x0C2A9C70 = r;
    return r;
}

void fcvTranslateCurve(int a)
{
    float v[3];

    fcvCalcPosition(a, v);
    nlTranslateV(v);
}

void Proposal_Initialize(void)
{
    int i;

    *(int *)0x0C2A9D58 = 0;
    *(int *)0x0C2A9D5C = 0;
    for (i = 0; i < 10; i++)
        Set_ProposalWalker(i);
}

void End_Adv_Title_LOGO(void)
{
    nlSetBackColor(0xFF000000, 0xFF000000, 0xFF000000);
    *(unsigned short *)0x0C2A9228 &= 0xFFFE;
}

void gdc_FileLoadInit(void)
{
    *(int *)0x0C26E0F4 = -1;
    *(int *)0x0C26E0F8 = 0;
    gdc_CourseBlockInit();
    gdc_LandmarkInit();
    *(int *)0x0C26E180 = 1;
}

int gdc_FileLoadExec(void)
{
    int v = *(int *)0x0C26E180;

    if (v == 1) {
        gdc_CourseLoadExec();
        return gdc_LandmarkLoadExec();
    }
    return v;
}
