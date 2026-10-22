/* Small game functions (batch b): print and file-load state resets, course spline tables, HUD flags, audio and
   peripheral queries, state words. Globals are addressed directly where the decomp has no name for them yet. */

void gdc_CourseBlockReset(void);
void gdc_FileLoadInitAll(int a);
int FUN_0c0813e0(void *a, void *b, int n);
int *pdGetPeripheralInfo(int port);
int pdVibIsReady(int port);
int nlRenderTextureInit(int a, int b);
int nlRenderTextureSet(int a, int b, int c, int d);
int nlsndSystemControl(int a, int b, int c);
void selectInitBarSprite(void);
void selectInitPanelSprite(void);
void selectInitIconSprite(void);
void selectInitTileSprite(void);
void selectInitFrontSprite(void);
void selectDrawBar(void);
void selectDrawPanels(void);
void selectDrawCarIcons(void);
void selectDrawDriverTiles(void);
void selectPutHelpBar(void);

#define HUD_FLAGS       (*(unsigned int *)0x0C2A75E0)
#define COURSE_TABLE    (*(char **)0x0C2A6690)

void gdc_FileLoadSetup(int a)
{
    gdc_CourseBlockReset();
    gdc_FileLoadInitAll(a);
    *(int *)0x0C26E180 = 1;
}

void InitLandmark(void)
{
    *(int *)0x0C26E398 = -1;
    *(int *)0x0C0ED2AC = 3;
    *(int *)0x0C0ED2A8 = -1;
}

/* The first free entry (link word [1] is -1) of the 256 16-byte collision nodes, or 0. */
int *colliNodeAlloc(void)
{
    int *p = (int *)0x0C26F408;
    int n = 256;

    for (;;) {
        if (p[1] == -1)
            return p;
        p += 4;
        n--;
        if (!n)
            return 0;
    }
}

/* 70 words below 0C275940 cleared, the count 70 at 0C275940. */
void ResetPinFlag(void)
{
    int *p = (int *)0x0C275940;
    int n = 70;

    while (n--)
        *--p = 0;
    *(int *)0x0C275940 = 70;
}

void InitRenderTexture1st(void)
{
    nlRenderTextureInit(0x0C286420, 2);
    nlRenderTextureSet(0, 120, 512, 512);
}

void MotionBlurOn(void)
{
    if (*(int *)0x0C0EE900 != 2)
        *(int *)0x0C0EE900 = 1;
}

void MotionBlurOff(void)
{
    if (*(int *)0x0C0EE900 > 0)
        *(int *)0x0C0EE900 = -1;
}

int CompBackupBuffer(void)
{
    return FUN_0c0813e0((void *)0x0C28A4E8, (void *)0x0C28F8A0, 9648) != 0;
}

int padPortAConnected(void)
{
    return *pdGetPeripheralInfo(0) != 0;
}

int vibIsReady(void)
{
    return pdVibIsReady(2) == 1;
}

/* NowLanguage (0 means the first language); with m, any language but the first reads 1. */
int GetNowLanguage(int m)
{
    int v = *(int *)0x0C2A11C0;

    if (m && v)
        v = 1;
    return v;
}

int SetAudio(void)
{
    if (*(int *)0x0C2A11BC == 1)
        return nlsndSystemControl(0, 0x000900A0, 0);
    return nlsndSystemControl(0, 0x000800A0, 0);
}

int pointEventGet(int i)
{
    return *(int *)(*(char **)0x0C2A447C + i * 32) != 0;
}

void cycleAdvCheck(void)
{
    if (*(int *)0x0C179488 >= 4) {
        *(int *)0x0C2A4E54 = 2;
        *(int *)0x0C1EE23C = 1;
    } else
        *(int *)0x0C2A4E54 = 0;
}

/* Course i's entry of the 8-byte table at 0C0C832C: its two words to 0C2A6690 and 0C2A6694. */
void CourseTableSet(int i)
{
    int *e = (int *)(0x0C0C832C + i * 8);

    *(int *)0x0C2A6690 = e[0];
    *(int *)0x0C2A6694 = e[1];
}

int CourseSplineGet(int i)
{
    return *(int *)(COURSE_TABLE + i * 12);
}

int CourseSplineNumGet(int i)
{
    return **(int **)(COURSE_TABLE + i * 12 + 4);
}

void Start_Time_Count(int a, int b)
{
    *(int *)0x0C2A8C4C = a;
    if (!b)
        HUD_FLAGS |= 1;
}

void End_Time_Count(int m)
{
    if (!m)
        HUD_FLAGS &= ~1u;
}

void selectInitSprites(void)
{
    selectInitBarSprite();
    selectInitPanelSprite();
    selectInitIconSprite();
    selectInitTileSprite();
    selectInitFrontSprite();
}

void selectDrawSprites(void)
{
    selectDrawBar();
    selectDrawPanels();
    selectDrawCarIcons();
    selectDrawDriverTiles();
    selectPutHelpBar();
}
