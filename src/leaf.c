/* Small game functions that read or write a few words: the car list, a customer's walk speed, camera and
   fade settings, HUD message flags and a few counters. */

extern unsigned int gCarCount;
extern void *gCarList[];
extern int menuSel[];
extern int g_sparkReset;
extern float g_fadeBase[3];
extern float g_fadeOffset[3];
extern int gCamSubMode;
extern float gLandmarkDist;
extern void *gPsgCurrent;
extern int gRinSeed;
extern int gPlayerAdv;
extern unsigned int gHudFlags;
extern short gDestCount[];
extern int gSystemFlag;
extern int g_0c2a4e68;
extern int gRideOnA;
extern int gRideOnCount;
extern float g_camEyeHV[];

/* Every live car adds itself once a frame, up to 100 of them. */
void carEntry(void *car)
{
    if (gCarCount < 100) {
        gCarList[gCarCount] = car;
        gCarCount++;
    }
}

/* A customer's walk speed, and its run speed (twice). */
void Psg_SetMoveSpeed(char *p, float speed)
{
    *(float *)(p + 284) = speed;
    *(float *)(p + 288) = speed / 0.5f;
}

void ResetSpark(void)
{
    g_sparkReset = 1;
}

int GetMenuMode(int level)
{
    return menuSel[level];
}

void SetFadeColorBase(float r, float g, float b)
{
    g_fadeBase[0] = r;
    g_fadeBase[1] = g;
    g_fadeBase[2] = b;
}

void SetFadeColorOffset(float r, float g, float b)
{
    g_fadeOffset[0] = r;
    g_fadeOffset[1] = g;
    g_fadeOffset[2] = b;
}

void SetCameraMode(int mode)
{
    gCamSubMode = mode;
}

void SetLandmarkDist(float d)
{
    gLandmarkDist = d;
}

void psgSetCurrent(void *p)
{
    gPsgCurrent = p;
}

void rinRandomSeed(int seed)
{
    gRinSeed = seed;
}

void initPlayer(void)
{
}

void initPlayerADV(void)
{
    gPlayerAdv = 129;
}

void SetCameraPosRatio(float a, float b)
{
    *(float *)((char *)g_camEyeHV + 36) = a;
    *(float *)((char *)g_camEyeHV + 40) = b;
}

void hudHidePickUpNag(void)
{
    gHudFlags &= 0xFDFFFFFF;
}

void kyakuClearVoiceBit24(void)
{
    gHudFlags &= 0xFEFFFFFF;
}

void kyakuClearVoiceBit26(void)
{
    gHudFlags &= 0xFBFFFFFF;
}

void kyakuCountDest(int i)
{
    gDestCount[i]++;
}

int acSystemGetSystemFlag(void)
{
    return gSystemFlag == 3;
}

int getGoiToolFlag(int mask)
{
    return (g_0c2a4e68 & mask) != 0;
}

int GetNumRideon(void)
{
    gRideOnA = -120;
    return ++gRideOnCount;
}

int dropOutCheck(char *car)
{
    return -35000.0f > *(float *)(car + 144) ? 1 : 0;
}
