/* Straight-line functions with calls and guards (batch gen_eh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int pfSetFilterMode(int);
int windowOpenStep(void);
int windowEnterStep(void);
int GetNowLanguage(int);
int nd_SprPut(int, int, float, float);
int sys_init(void);
int nlSysInitStripContextVtx(int);
int nlSysInitStripContextBG(int);
int nl_system_config_init(int);
int nlSetFatalErrorMode(int);
int nlSetWindowSize(float, float, float, float);
int memcmp(int, int, int);
int PutVM_Message(int, int, int, float, float);
int ResetFadeColor(void);
extern void _builtin_set_imask(int);
int kmInitDevice(void);
int kmSetCullingRegister(float);
int kmSetDisplayMode(int, int, int, int);
int kmSetPALEXTCallback(int);
int kmSetWaitVsyncCount(int);
int memmove(int, int, int);
int menuCursor(int, int, int);
int nlObjPutSetFadeColor(float, float, float);
int pfColor(int, int, int, int);
float pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSetZ(float);
int pfSize(float, float);
int putLevelCTFontAssist(int, int, int, int, int);
int putMenuValue(int a4, int a5, int a6, int a7);
void nlInitLibrary0(int a4, int a5, int a6);
int Put_Remain_Icon(void);
int windowNameConfirm(void);


void nlInitLibrary0(int a4, int a5, int a6)
{
    int t5;
    int t12;
    int t13;
    int t15;
    int t19;
    int t20;
    int t21;
    int t22;
    int t24;
    int t25;
    int t28;
    int t29;
    int t30;
    int t33;
    int t31;
    float u41;

    *(unsigned int *)0xC2AED98 = 0x0;
    if (a4 == 0) {
        *(unsigned int *)0xC2AED98 = 0x1;
    }
    *(unsigned int *)0xC2AED9C = 0x0;
    if (a4 != 25) {
        if (a4 != 24) {
            if (a4 != 26) {
                if (a4 == 27) {
                    *(unsigned int *)0xC2AED9C = 0x1;
                }
            } else {
                *(unsigned int *)0xC2AED9C = 0x1;
            }
        } else {
            *(unsigned int *)0xC2AED9C = 0x1;
        }
    } else {
        *(unsigned int *)0xC2AED9C = 0x1;
    }
    _builtin_set_imask(0xE);
    t5 = *(int *)0xA05F689C;
    if ((int)t5 >= (int)0x8) {
        *(unsigned int *)0xC2AED40 = 0x1;
    } else {
        *(unsigned int *)0xC2AED40 = 0x0;
    }
    _builtin_set_gbr((void *)(0xC2B7BC0));
    sys_init();
    *(unsigned short *)0xC2B3194 = 0x0;
    *(unsigned short *)0xC2B3196 = 0x0;
    if ((0x80 & a5) != 0) {
        *(unsigned short *)0xC2B3194 = 0x1;
    }
    if ((0x8000 & a5) != 0) {
        *(unsigned short *)0xC2B3196 = 0x1;
    }
    t12 = *(int *)((((a5 & 0xF) << 2) + 0xC0D63D4));
    *(unsigned int *)0xC2AEDB8 = t12;
    t13 = *(int *)(((((a4 << 1) + a4) << 2) + 0xC0D6284));
    kmInitDevice();
    t15 = *(int *)0xC2AED9C;
    if (t15 == 1) {
        kmSetPALEXTCallback(0xC074310);
    }
    t19 = *(short *)0xC2B3196;
    t20 = *(short *)0xC2B3194;
    t21 = *(int *)0xC2AEDB8;
    t22 = *(int *)((((((a4 << 1) + a4) << 2) + 0xC0D6284) + 0x4));
    kmSetDisplayMode(t22, t21, t20, t19);
    t24 = *(short *)((((((a4 << 1) + a4) << 2) + 0xC0D6284) + 0x8));
    *(unsigned short *)0xC2B3190 = t24;
    t25 = *(short *)((((((a4 << 1) + a4) << 2) + 0xC0D6284) + 0xA));
    *(unsigned short *)0xC2B3192 = t25;
    nlSysInitStripContextBG(0xC2AF388);
    nlSysInitStripContextVtx(0xC2B29C8);
    *(unsigned int *)0xC2B2FC8 = 0xC2B29C8;
    *(unsigned int *)0xC2B2FCC = 0x0;
    *(unsigned int *)0xC2B3180 = 0xFFFFFFFF;
    *(unsigned int *)0xC2B3188 = 0x0;
    *(unsigned int *)0xC2B3198 = 0x0;
    *(unsigned int *)0xC2B317C = 0x0;
    *(float *)0xC2B31AC = 0.0f;
    *(float *)0xC2B31B0 = 0.0f;
    *(float *)0xC2B31B4 = 0.0f;
    *(float *)0xC2B31B8 = 0.0f;
    *(unsigned int *)0xC2B319C = 0x0;
    *(unsigned int *)0xC2B31A0 = 0x0;
    *(unsigned int *)0xC2B31A4 = 0x0;
    *(unsigned int *)0xC2B31A8 = 0x0;
    *(float *)0xC2B7BE8 = 1.0f;
    *(unsigned int *)0xC2B7C04 = 0x0;
    t28 = *(short *)0xC2B3192;
    t29 = *(short *)0xC2B3190;
    if (0x0 != 0) {
        t30 = *(short *)0xC2B3196;
        t33 = (short)t28;
        if (t30 == 1) {
            t31 = ((short)t28 + (short)t28);
            if ((int)((short)t28 + (short)t28) > (int)0x1E0) {
                t31 = 0x1E0;
            }
            t33 = t31;
        }
        nlSetWindowSize(0.0f, 0.0f, (float)t29, (float)t33);
    } else {
        nlSetWindowSize(0.0f, 0.0f, (float)t29, (float)(short)t28);
    }
    u41 = 0.19999999f;
    kmSetCullingRegister(u41);
    *(unsigned int *)0xFF000038 = 0xC;
    *(unsigned int *)0xFF00003C = 0xC;
    *(unsigned int *)0xC2AEDA0 = a6;
    kmSetWaitVsyncCount(a6);
    nl_system_config_init(0x200000);
    nlSetFatalErrorMode(0x0);
    *(unsigned int *)0xC2AEDC0 = 0x0;
    _builtin_set_imask(0x0);
}


