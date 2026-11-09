/* Straight-line functions with calls and guards (batch gen_wf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int InitArrow(int);
int Init_Balloon(void);
int Init_DCmini_CarPos(void);
int Init_DCmini_Standard_Sprite(void);
int Init_Window_Sprite(int);
int MakeKyakuTakeArea(int, int, int, float);
int Proposal_Initialize(void);
int ResetBreakBeachFlag(void);
int ResetPinFlag(void);
int Reset_JumpDistance(void);
int Start_JumpDistance(int);
int nlMatrixMode(int);
int nlPerspective(int, float, float, float);
int nlUnitMatrix(void);
int Init_DCmini(void);
struct o0_float { float v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o18_ushort { char p[0x18]; unsigned short v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_float { char p[0x34]; float v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int Init_DCmini(void)
{
    int t7;
    int t31;
    int t35;
    int t58;
    int t90;
    int t91;
    int t109;
    int t147;
    int t148;

    nlMatrixMode(0x3);
    nlUnitMatrix();
    nlPerspective(0x1D28, 1.33333325f, 0.299999982f, 300.0f);
    nlMatrixMode(0x1);
    Init_DCmini_Standard_Sprite();
    Init_Window_Sprite(0x4);
    Init_DCmini_CarPos();
    (((struct o34_uint *)0xC2A98E8)->v) = 0x0;
    (((struct o38_uint *)0xC2A98E8)->v) = 0x0;
    (((struct o3C_uint *)0xC2A98E8)->v) = 0x1E;
    (((struct o0_uint *)0xC2A98E8)->v) = 0x0;
    (((struct oC_uint *)0xC2A98E8)->v) = 0x0;
    (((struct o10_uint *)0xC2A98E8)->v) = 0x0;
    (((struct o8_uint *)0xC2A98E8)->v) = 0xC2A98F4;
    (((struct o0_uint *)0xC2A9928)->v) = 0x3E7;
    (((struct o14_uint *)0xC2A9A24)->v) = 0xB4;
    (((struct o18_ushort *)0xC2A9928)->v) = 0x0;
    (((struct o1C_uint *)0xC2A9928)->v) = 0x1;
    (((struct o20_float *)0xC2A9928)->v) = 0.5f;
    (((struct o24_float *)0xC2A9928)->v) = 0.0f;
    (((struct o28_uint *)0xC2A9928)->v) = 0x0;
    (((struct o1C_uint *)0xC2A98E8)->v) = 0x0;
    t7 = *(int *)0xC1EE214;
    if (t7 == 10) {
        (((struct o18_uint *)0xC2A98E8)->v) = 0x8;
    } else {
        if (t7 == 8) {
            (((struct o18_uint *)0xC2A98E8)->v) = 0x5;
        } else {
            if (t7 == 9) {
                (((struct o18_uint *)0xC2A98E8)->v) = 0x3;
            } else {
                if ((t7 != 14) && (t7 != 11)) {
                    (((struct o18_uint *)0xC2A98E8)->v) = 0x1;
                } else {
                    (((struct o18_uint *)0xC2A98E8)->v) = 0x7;
                }
            }
        }
    }
    (((struct o4_ushort *)0xC2A9928)->v) = 0x0;
    (((struct o4_uint *)0xC2A9968)->v) = 0xC1311C8;
    (((struct o1C_uint *)0xC2A9A24)->v) = 0x122;
    (((struct o20_uint *)0xC2A9A24)->v) = 0x0;
    (((struct o24_float *)0xC2A9A24)->v) = -320.0f;
    (((struct o28_float *)0xC2A9A24)->v) = 320.0f;
    (((struct o2C_uint *)0xC2A9A24)->v) = 0x0;
    (((struct o30_float *)0xC2A9A24)->v) = 1.0f;
    (((struct o34_float *)0xC2A9A24)->v) = 1.0f;
    if ((*(int *)0xC1EE214) == 3) {
        (((struct o3C_uint *)0xC2A9928)->v) = 0x78;
        (((struct o38_uint *)0xC2A9928)->v) = 0x78;
        ResetPinFlag();
        (((struct o2C_uint *)0xC2A9928)->v) = 0xFFFFFFFF;
        (((struct o30_uint *)0xC2A9928)->v) = 0x46;
        (((struct o34_uint *)0xC2A9928)->v) = 0x0;
    }
    (((struct o14_uint *)0xC2A98E8)->v) = 0x0;
    t31 = *(int *)0xC1EE214;
    if (t31 == 1) {
        InitArrow(0xC1311BC);
        ResetBreakBeachFlag();
    } else {
        if (t31 != 8) {
            if (t31 != 9) {
                if (t31 != 10) {
                    if (t31 != 11) {
                        if (t31 != 13) {
                            if (t31 != 14) {
                            } else {
                                (((struct o4_uint *)0xC2A98E8)->v) = 0x7;
                                t35 = 0xC1310E4;
                                if ((*(int *)0xC1EE214) == 11) {
                                    t35 = 0xC131030;
                                }
                                InitArrow(t35);
                                ResetPinFlag();
                                (((struct o0_uint *)0xC2A9968)->v) = 0x78;
                                (((struct o10_uint *)0xC2A9A24)->v) = 0x0;
                            }
                        } else {
                            (((struct o18_uint *)0xC2A9A24)->v) = 0x0;
                        }
                    } else {
                        (((struct o4_uint *)0xC2A98E8)->v) = 0x7;
                        t58 = 0xC1310E4;
                        if ((*(int *)0xC1EE214) == 11) {
                            t58 = 0xC131030;
                        }
                        InitArrow(t58);
                        ResetPinFlag();
                        (((struct o0_uint *)0xC2A9968)->v) = 0x78;
                        (((struct o10_uint *)0xC2A9A24)->v) = 0x0;
                    }
                } else {
                    (((struct o4_uint *)0xC2A98E8)->v) = 0x8;
                    InitArrow(0xC131084);
                    (((struct o0_uint *)0xC2A9968)->v) = 0x78;
                    (((struct o0_ushort *)0xC2A9A64)->v) = 0xC000;
                }
            } else {
                (((struct o4_uint *)0xC2A98E8)->v) = 0x3;
                (((struct o0_uint *)0xC2A9968)->v) = 0x78;
            }
        } else {
            (((struct o4_uint *)0xC2A98E8)->v) = 0x5;
            (((struct o0_uint *)0xC2A9968)->v) = 0x78;
            t90 = 0xC2A9908;
            t91 = 0x0;
            for (;;) {
                t91 = (t91 + 0x1);
                *(unsigned int *)((t90 + 0x0)) = 0x0;
                t90 = (t90 + 0x4);
                if ((int)t91 >= (int)0x5) {
                    break;
                }
            }
            Proposal_Initialize();
        }
    }
    t109 = *(int *)0xC1EE214;
    if ((t109 != 0) && (t109 != 20)) {
    } else {
        Reset_JumpDistance();
        (((struct o0_float *)0xC2A9A24)->v) = 0.0f;
        Start_JumpDistance(0xC2A9A24);
        (((struct o8_uint *)0xC2A9968)->v) = 0x0;
    }
    if ((*(int *)0xC1EE214) == 20) {
        MakeKyakuTakeArea(0xC2A9978, 0xC1311AC, 0x0, 250.0f);
        (((struct oC_uint *)0xC2A9968)->v) = 0x0;
    }
    if ((*(int *)0xC1EE214) == 2) {
        Init_Balloon();
    }
    if ((*(int *)0xC1EE214) == 14) {
        (((struct o8_uint *)0xC2A9A24)->v) = 0x0;
        (((struct oC_uint *)0xC2A9A24)->v) = 0xFFFFFFFF;
    }
    (((struct o8_uint *)0xC2A9928)->v) = 0x0;
    (((struct oC_uint *)0xC2A9928)->v) = 0x0;
    (((struct o10_uint *)0xC2A9928)->v) = 0x0;
    (((struct o14_uint *)0xC2A9928)->v) = 0x0;
    *(unsigned int *)0xC2A7614 = 0x0;
    t147 = *(int *)0xC1EE214;
    t148 = t147;
    if (t147 == 15) {
        (((struct o38_uint *)0xC2A9A24)->v) = 0x0;
        (((struct o3C_uint *)0xC2A9A24)->v) = 0x0;
        t148 = 0xC2A9A5C;
    }
    *(unsigned int *)0xC17948C = 0x0;
    (((struct o0_uint *)0xC2A7368)->v) = 0x0;
    (((struct o4_uint *)0xC2A7368)->v) = 0x0;
    (((struct o4_uint *)0xC2A9A64)->v) = 0x0;
    return t148;
}
