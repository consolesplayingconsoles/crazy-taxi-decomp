/* Straight-line functions with calls and guards (batch gen_jb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int End_LoadSave(int);
int GetNowLanguage(int);
int PutVM_Message(int, int, int, float, float);
int SaveBackupData(int);
int SetScreen(int);
extern int SetWindow();
int Start_LoadSave(int, int);
int buIsExistFile(int, int);
int callWarnning(int);
int putLevelCTFontAssist(int, int, int, int, int);
int windowClose(void);
int windowEnterStep(int);
int windowOpenStep(int);
void windowSaveData(int a4, int a5, int a6, int a7);

void windowSaveData(int a4, int a5, int a6, int a7)
{
    int t10;
    int t12;
    int t20;
    int t21;
    float u22;
    int t27;
    int t32;
    int t37;
    int t47;
    int t69;
    int t70;
    float u71;
    int t76;
    int t81;
    int t86;
    int t105;
    int t106;
    float u107;
    int t112;
    int t117;
    int t122;
    int t48;

    if ((*(int *)0xC2A1220) != 0) {
        return;
    }
    if ((*(int *)0xC2A121C) == 1) {
        *(unsigned int *)0xC2A121C = 0x2;
        *(unsigned int *)0xC2A1208 = 0x2;
        if ((*(int *)0xC2A1224) != 0) {
            return;
        }
        ((int (*)(int, int, int, int))(SetWindow))(0x4, a5, a6, a7);
    return;
    }
    if ((windowOpenStep(0x0)) == 1) {
        for (;;) {
            t10 = buIsExistFile((*(int *)0xC2A11B8), 0xC0A2078);
            if (t10 != -1) {
                break;
            }
        }
        *(unsigned int *)0xC2A1AEC = t10;
        if ((t10 != 0) && (t10 != 0xFFFFFF05)) {
            callWarnning(t10);
    return;
        }
        *(unsigned int *)0xC0EF7E0 = 0x1;
        *(unsigned int *)0xC2A19E0 = 0x3;
        return;
    }
    t12 = *(int *)0xC2A1AEC;
    if (((*(int *)0xC2A1208) & 0x4) == 0) {
        if ((*(int *)0xC0EF7E0) == 0) {
            ((int (*)(int, int, int))(SetWindow))(0x9, t12, 0x4);
    return;
        }
        t20 = 0x6;
        t21 = 0x0;
        u22 = 135.0f;
        if ((*(int *)0xC2A1AEC) == 0xFFFFFF05) {
            t20 = 0x8;
            t21 = (((((*(int *)0xC2A11B8) << 2) << 2) << 1) + 0xC09F9F0);
            u22 = 191.0f;
        }
        PutVM_Message(0x20, t20, t21, u22, 240.0f);
        PutVM_Message(0x20, 0x7, (((((*(int *)0xC2A11B8) << 2) << 2) << 1) + 0xC09F9F0), 220.0f, 368.0f);
        t27 = *(int *)0xC2A11B8;
        Start_LoadSave(((((t27 >> 1) << 1) + ((t27 >> 1) << 2)) + 0x1), 0x1);
        if ((int)(*(int *)0xC2A19E0) > 0) {
            *(unsigned int *)0xC2A19E0 = ((*(int *)0xC2A19E0) - 1);
            return;
        }
        t32 = SaveBackupData((*(int *)0xC2A11B8));
        End_LoadSave(0x1);
        if (t32 != 0) {
            callWarnning(t32);
    return;
        }
        windowEnterStep(0x14);
        windowClose();
        SetScreen(0x4);
        t37 = ((int (*)(int))(SetWindow))(0x0);
        if ((*(int *)0xC0EF7E0) == 1) {
            if ((*(int *)0xC2A121C) == 2) {
                *(unsigned int *)0xC2A121C = 0x3;
            }
        }
        return;
    }
    t47 = *(int *)0xC2A11CC;
    if ((t12 == 0) && (t48 = *(int *)0xC2A121C, t48 == 2)) {
        if ((0x18 & t47) != 0) {
            *(unsigned int *)0xC0EF7E0 = (((*(int *)0xC0EF7E0) + 0x1) & 0x1);
        } else {
            if ((t47 & 0x4) != 0) {
                *(unsigned int *)0xC0EF7E0 = 0x0;
            }
        }
        PutVM_Message(0x20, 0x24, 0x0, 190.0f, 176.0f);
        PutVM_Message(0x20, 0x25, 0x0, 190.0f, 208.0f);
        putLevelCTFontAssist(0x2024, (0xC09E1B4 + (short)((short)(GetNowLanguage(0x0)) * (short)0x58)), 0x2, (0x1 & ((*(int *)0xC0EF7E0) + 0x1)), 0x0);
        PutVM_Message(0x20, 0x7, (((((*(int *)0xC2A11B8) << 2) << 2) << 1) + 0xC09F9F0), 220.0f, 368.0f);
        if (((*(int *)0xC2A11CC) & 6) == 0) {
            return;
        }
        *(unsigned int *)0xC2A1208 = (((*(int *)0xC2A1208) & 0xFFFFFFFB) | 0x8);
        if ((*(int *)0xC0EF7E0) == 0) {
            ((int (*)(int))(SetWindow))(0x9);
    return;
        }
        t69 = 0x6;
        t70 = 0x0;
        u71 = 135.0f;
        if ((*(int *)0xC2A1AEC) == 0xFFFFFF05) {
            t69 = 0x8;
            t70 = (((((*(int *)0xC2A11B8) << 2) << 2) << 1) + 0xC09F9F0);
            u71 = 191.0f;
        }
        PutVM_Message(0x20, t69, t70, u71, 240.0f);
        PutVM_Message(0x20, 0x7, (((((*(int *)0xC2A11B8) << 2) << 2) << 1) + 0xC09F9F0), 220.0f, 368.0f);
        t76 = *(int *)0xC2A11B8;
        Start_LoadSave(((((t76 >> 1) << 1) + ((t76 >> 1) << 2)) + 0x1), 0x1);
        if ((int)(*(int *)0xC2A19E0) > 0) {
            *(unsigned int *)0xC2A19E0 = ((*(int *)0xC2A19E0) - 1);
            return;
        }
        t81 = SaveBackupData((*(int *)0xC2A11B8));
        End_LoadSave(0x1);
        if (t81 != 0) {
            callWarnning(t81);
    return;
        }
        windowEnterStep(0x14);
        windowClose();
        SetScreen(0x4);
        t86 = ((int (*)(int))(SetWindow))(0x0);
        if ((*(int *)0xC0EF7E0) == 1) {
            if ((*(int *)0xC2A121C) == 2) {
                *(unsigned int *)0xC2A121C = 0x3;
            }
        }
        return;
    }
    if ((t12 == 0xFFFFFF05) && ((t47 & 0x2) == 0)) {
        PutVM_Message(0x20, 0x5, (((((*(int *)0xC2A11B8) << 2) << 2) << 1) + 0xC09F9F0), 118.0f, 240.0f);
        PutVM_Message(0x20, 0x7, (((((*(int *)0xC2A11B8) << 2) << 2) << 1) + 0xC09F9F0), 220.0f, 368.0f);
    return;
    }
    *(unsigned int *)0xC0EF7E0 = 0x1;
    *(unsigned int *)0xC2A1208 = (((*(int *)0xC2A1208) & 0xFFFFFFFB) | 0x8);
    if ((*(int *)0xC0EF7E0) == 0) {
        ((int (*)(int, int, int))(SetWindow))(0x9, t12, 0x4);
    return;
    }
    t105 = 0x6;
    t106 = 0x0;
    u107 = 135.0f;
    if ((*(int *)0xC2A1AEC) == 0xFFFFFF05) {
        t105 = 0x8;
        t106 = (((((*(int *)0xC2A11B8) << 2) << 2) << 1) + 0xC09F9F0);
        u107 = 191.0f;
    }
    PutVM_Message(0x20, t105, t106, u107, 240.0f);
    PutVM_Message(0x20, 0x7, (((((*(int *)0xC2A11B8) << 2) << 2) << 1) + 0xC09F9F0), 220.0f, 368.0f);
    t112 = *(int *)0xC2A11B8;
    Start_LoadSave(((((t112 >> 1) << 1) + ((t112 >> 1) << 2)) + 0x1), 0x1);
    if ((int)(*(int *)0xC2A19E0) > 0) {
        *(unsigned int *)0xC2A19E0 = ((*(int *)0xC2A19E0) - 1);
        return;
    }
    t117 = SaveBackupData((*(int *)0xC2A11B8));
    End_LoadSave(0x1);
    if (t117 != 0) {
        callWarnning(t117);
    return;
    }
    windowEnterStep(0x14);
    windowClose();
    SetScreen(0x4);
    t122 = ((int (*)(int))(SetWindow))(0x0);
    if ((*(int *)0xC0EF7E0) == 1) {
        if ((*(int *)0xC2A121C) == 2) {
            *(unsigned int *)0xC2A121C = 0x3;
        }
    }
}
