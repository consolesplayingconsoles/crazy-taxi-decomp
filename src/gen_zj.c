/* Straight-line functions with calls and guards (batch gen_zj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int End_LoadSave(int);
int LoadBackupData(int);
int PutVM_Message(int, int, int, float, float);
int SetScreen(int);
int SetTotalRecords(void);
int SetWindow(int);
int Start_LoadSave(int, int);
int buIsExistFile(int, int);
int callSaveData(int);
int callWarnning(int);
int windowClose(void);
int windowEnterStep(int);
int windowOpenStep(int);
void windowLoadData(int a4, int a5);

void windowLoadData(int a4, int a5)
{
    int t8;
    int t28;
    int t33;
    int t18;

    if ((*(int *)0xC2A1220) != 0) {
        return;
    }
    if ((*(int *)0xC2A121C) == 1) {
        *(unsigned int *)0xC2A121C = 0x2;
        *(unsigned int *)0xC2A1208 = 0x2;
    }
    if ((windowOpenStep(0x0)) == 1) {
        t8 = buIsExistFile((*(int *)0xC2A11B8), 0xC0A2078);
        if (t8 != 0) {
            if (t8 != 0xFFFFFF05) {
                callWarnning(t8);
    return;
            }
            SetWindow(0x0);
            *(unsigned int *)0xC1EE234 = (*(int *)0xC2A1228);
            *(unsigned int *)0xC1EE238 = (*(int *)0xC2A122C);
            callSaveData(0x0);
            *(unsigned int *)0xC2A1224 = 0x0;
            return;
        }
        *(unsigned int *)0xC2A19E0 = 0x3;
        return;
    }
    if ((*(signed char *)0xC28A4F6) != 0) {
        *(unsigned int *)0xC2A11C4 = 0x0;
    }
    if (((*(int *)0xC2A1228) == 0) && (t18 = *(int *)0xC2A122C, t18 == 0)) {
        PutVM_Message(0x20, 0xB, (((((*(int *)0xC2A11B8) << 2) << 2) << 1) + 0xC09F9F0), 98.0f, 240.0f);
    } else {
        PutVM_Message(0x20, 0x11, 0x0, 134.0f, 240.0f);
    }
    PutVM_Message(0x20, 0x7, (((((*(int *)0xC2A11B8) << 2) << 2) << 1) + 0xC09F9F0), 2.2e+02f, 368.0f);
    t28 = *(int *)0xC2A11B8;
    Start_LoadSave(((((t28 >> 1) << 1) + ((t28 >> 1) << 2)) + 0x1), 0x0);
    if ((int)(*(int *)0xC2A19E0) > 0) {
        *(unsigned int *)0xC2A19E0 = ((*(int *)0xC2A19E0) - 1);
        return;
    }
    t33 = LoadBackupData((*(int *)0xC2A11B8));
    End_LoadSave(0x0);
    if (t33 != 0) {
        callWarnning(t33);
    return;
    }
    windowEnterStep(0x14);
    SetTotalRecords();
    windowClose();
    SetScreen(0x4);
    SetWindow(0x0);
    if ((*(int *)0xC2A121C) == 2) {
        *(unsigned int *)0xC2A121C = 0x3;
    }
}
