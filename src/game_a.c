/* Small game functions (batch a): camera mode, game state steps, stream (ADX) voice control, the print buffer
   (pf*), the print state words. Globals are addressed directly where the decomp has no name for them yet. */

void ResetSpark(void);
void nlExecuteEvent(void);
void Exec_Result(void);
void gdc_CourseStartLoadReq(void);
void gdc_CourseBlockInit(void);
void LoadGroupTexture(int n);
void nlSetCommonTextureOffset(int ofs);
void camSetMode(int m);
int ADXT_StartAfs(int h, int a, int b);
int ADXT_Stop(int h);
int ADXT_GetStat(int h);
int ADXT_SetOutPan(int h, int a, int b);
void pfPutc(int c);

#define ADXT_SONG       ((int *)0x0C1EE820)             /* the stream handles of the songs */
#define ADXT_VOICE      ((int *)0x0C1EE810)             /* and of the voices */
#define PF_PTR          (*(char **)0x0C26E310)          /* the print buffer's write pointer */

void SetKyakuCount(int i)
{
    ((short *)0x0C178E70)[i]++;
}

void kyakuResetDropCount(void)
{
    *(int *)0x0C1794D0 = 0;
}

void camSetMode(int m)
{
    if (*(int *)0x0C179860 != m) {
        *(int *)0x0C179860 = m;
        ResetSpark();
        *(int *)0x0C0E4A14 = 1;
    }
}

void SetCameraAngleVelocity(int a, int b, int c)
{
    int *g = (int *)0x0C179928;

    g[3] = a;
    g[4] = b;
    g[5] = c;
}

void InitAdvCamera(void)
{
    camSetMode(8);
    *(int *)0x0C179974 = 1;
}

void car_texload(void)
{
    nlSetCommonTextureOffset(1500);
    LoadGroupTexture(6);
}

void TitleWaitSet(int m)
{
    *(int *)0x0C0E5310 = m ? 900 : 0;
    *(int *)0x0C2A4E54 = 0;
}

void gameState9(void)
{
    (*(int *)0x0C1EE240)++;
    Exec_Result();
    nlExecuteEvent();
    gdc_CourseStartLoadReq();
}

void gameState11(void)
{
    (*(int *)0x0C1EE240)++;
    *(int *)0x0C1EE238 = 2;
    nlExecuteEvent();
}

/* 0 below the limit at +76, 1 from it, 2 from the limit at +80 (compared with the value at +68). */
int GS_GuestResult(void)
{
    int *g = (int *)0x0C1EE788;

    if (g[17] <= g[19])
        return 0;
    if (g[17] >= g[20])
        return 2;
    return 1;
}

int Start_chk(void)
{
    return (((int *)0x0C1EE24C)[1] & 8) ? 1 : 0;
}

void execPlayerADV(void)
{
}

void execPlayer(void)
{
}

int adxStartAfs1(int i, int b)
{
    return ADXT_StartAfs(ADXT_SONG[i], 1, b);
}

void gdc_StopStreamSongAll(void)
{
    ADXT_Stop(ADXT_SONG[0]);
}

void gdc_FadeStopStreamSong(int a, int b)
{
    *(int *)0x0C26A0B8 = 1;
    *(int *)0x0C26A0BC = a;
    *(int *)0x0C26A0C0 = b;
    *(int *)0x0C26A0C4 = b;
}

int gdc_GetStreamVoiceStat(int i)
{
    return ADXT_GetStat(ADXT_VOICE[i]);
}

void gdc_StopStreamVoice(int i)
{
    ADXT_Stop(ADXT_VOICE[i]);
}

void gdc_StopStreamVoiceAll(void)
{
    ADXT_Stop(ADXT_VOICE[0]);
    ADXT_Stop(ADXT_VOICE[1]);
    ADXT_Stop(ADXT_VOICE[2]);
    ADXT_Stop(ADXT_VOICE[3]);
}

int adxStartAfs2(int i, int b)
{
    return ADXT_StartAfs(ADXT_VOICE[i], 2, b);
}

int gdc_StreamVoicePan(int i, char c)
{
    return ADXT_SetOutPan(ADXT_VOICE[i], 0, c);
}

void gdc_CourseBlockReset(void)
{
    *(int *)0x0C26E0F4 = -1;
    *(int *)0x0C26E0F8 = 0;
    *(int *)0x0C0EA3DC = 0;
    gdc_CourseBlockInit();
}

void gdc_LandmarkInit(void)
{
    *(int *)0x0C1EE808 = -1;
    *(int *)0x0C26E17C = 0;
    *(int *)0x0C26E178 = 0;
    *(int *)0x0C0EA3E4 = 0;
}

/* The print buffer empty: the pointer at its start, a terminating 0 there. */
void pfCleanString(void)
{
    PF_PTR = (char *)0x0C26E210;
    *(char *)0x0C26E210 = 0;
}

void pfAddChar(int c)
{
    char *p = PF_PTR;

    *p = c;
    p++;
    PF_PTR = p;
    *p = 0;
}

void pfAddString(char *s)
{
    char *p;

    while (*s) {
        p = PF_PTR;
        p++;
        PF_PTR = p;
        p[-1] = *s++;
    }
    *PF_PTR = 0;
}

void pfPuts(char *s)
{
    while (*s)
        pfPutc(*s++);
}

void pfSetFilterMode(int on)
{
    if (on)
        *(int *)0x0C0ED1C8 |= 0x2000;
    else
        *(int *)0x0C0ED1C8 &= 0xFFFF9FFF;
}

void pfColor(int a, int b, int c, int d)
{
    int *g = (int *)0x0C0ED230;

    g[0] = a;
    g[1] = b;
    g[2] = c;
    g[3] = d;
}

void pfOffsetColor(int a, int b, int c, int d)
{
    int *g = (int *)0x0C0ED240;

    g[0] = a;
    g[1] = b;
    g[2] = c;
    g[3] = d;
    *(int *)0x0C0ED1C0 = 0x8200000E;
}

void pfOffsetOff(void)
{
    int *g = (int *)0x0C0ED240;

    g[3] = 0;
    g[2] = 0;
    g[1] = 0;
    g[0] = 0;
    *(int *)0x0C0ED1C0 = 0x8200000A;
}
