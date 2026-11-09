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
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o24_int { char p[0x24]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


void windowLoadData(int a4, int a5)
{
    int t8;
    int t28;
    int t33;
    int t18;

    if (((((struct o18_int *)0xC2A1208)->v)) != 0) {
        return;
    }
    if (((((struct o14_int *)0xC2A1208)->v)) == 1) {
        (((struct o14_uint *)0xC2A1208)->v) = 0x2;
        (((struct o0_uint *)0xC2A1208)->v) = 0x2;
    }
    if ((windowOpenStep(0x0)) == 1) {
        t8 = buIsExistFile(((((struct o0_int *)0xC2A11B8)->v)), 0xC0A2078);
        if (t8 != 0) {
            if (t8 != 0xFFFFFF05) {
                callWarnning(t8);
    return;
            }
            SetWindow(0x0);
            (((struct o0_uint *)0xC1EE234)->v) = ((((struct o20_int *)0xC2A1208)->v));
            (((struct o4_uint *)0xC1EE234)->v) = ((((struct o24_int *)0xC2A1208)->v));
            callSaveData(0x0);
            (((struct o1C_uint *)0xC2A1208)->v) = 0x0;
            return;
        }
        *(unsigned int *)0xC2A19E0 = 0x3;
        return;
    }
    if ((*(signed char *)0xC28A4F6) != 0) {
        (((struct oC_uint *)0xC2A11B8)->v) = 0x0;
    }
    if ((((((struct o20_int *)0xC2A1208)->v)) == 0) && (t18 = (((struct o24_int *)0xC2A1208)->v), t18 == 0)) {
        PutVM_Message(0x20, 0xB, ((((((((struct o0_int *)0xC2A11B8)->v)) << 2) << 2) << 1) + 0xC09F9F0), 98.0f, 240.0f);
    } else {
        PutVM_Message(0x20, 0x11, 0x0, 134.0f, 240.0f);
    }
    PutVM_Message(0x20, 0x7, ((((((((struct o0_int *)0xC2A11B8)->v)) << 2) << 2) << 1) + 0xC09F9F0), 2.2e+02f, 368.0f);
    t28 = (((struct o0_int *)0xC2A11B8)->v);
    Start_LoadSave(((((t28 >> 1) << 1) + ((t28 >> 1) << 2)) + 0x1), 0x0);
    if ((int)(*(int *)0xC2A19E0) > 0) {
        *(unsigned int *)0xC2A19E0 = ((*(int *)0xC2A19E0) - 1);
        return;
    }
    t33 = LoadBackupData(((((struct o0_int *)0xC2A11B8)->v)));
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
    if (((((struct o14_int *)0xC2A1208)->v)) == 2) {
        (((struct o14_uint *)0xC2A1208)->v) = 0x3;
    }
}
