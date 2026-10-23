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
    *(unsigned int *)0xC2A991C = 0x0;
    *(unsigned int *)0xC2A9920 = 0x0;
    *(unsigned int *)0xC2A9924 = 0x1E;
    *(unsigned int *)0xC2A98E8 = 0x0;
    *(unsigned int *)0xC2A98F4 = 0x0;
    *(unsigned int *)0xC2A98F8 = 0x0;
    *(unsigned int *)0xC2A98F0 = 0xC2A98F4;
    *(unsigned int *)0xC2A9928 = 0x3E7;
    *(unsigned int *)0xC2A9A38 = 0xB4;
    *(unsigned short *)0xC2A9940 = 0x0;
    *(unsigned int *)0xC2A9944 = 0x1;
    *(float *)0xC2A9948 = 0.5f;
    *(float *)0xC2A994C = 0.0f;
    *(unsigned int *)0xC2A9950 = 0x0;
    *(unsigned int *)0xC2A9904 = 0x0;
    t7 = *(int *)0xC1EE214;
    if (t7 == 10) {
        *(unsigned int *)0xC2A9900 = 0x8;
    } else {
        if (t7 == 8) {
            *(unsigned int *)0xC2A9900 = 0x5;
        } else {
            if (t7 == 9) {
                *(unsigned int *)0xC2A9900 = 0x3;
            } else {
                if ((t7 != 14) && (t7 != 11)) {
                    *(unsigned int *)0xC2A9900 = 0x1;
                } else {
                    *(unsigned int *)0xC2A9900 = 0x7;
                }
            }
        }
    }
    *(unsigned short *)0xC2A992C = 0x0;
    *(unsigned int *)0xC2A996C = 0xC1311C8;
    *(unsigned int *)0xC2A9A40 = 0x122;
    *(unsigned int *)0xC2A9A44 = 0x0;
    *(float *)0xC2A9A48 = -320.0f;
    *(float *)0xC2A9A4C = 320.0f;
    *(unsigned int *)0xC2A9A50 = 0x0;
    *(float *)0xC2A9A54 = 1.0f;
    *(float *)0xC2A9A58 = 1.0f;
    if ((*(int *)0xC1EE214) == 3) {
        *(unsigned int *)0xC2A9964 = 0x78;
        *(unsigned int *)0xC2A9960 = 0x78;
        ResetPinFlag();
        *(unsigned int *)0xC2A9954 = 0xFFFFFFFF;
        *(unsigned int *)0xC2A9958 = 0x46;
        *(unsigned int *)0xC2A995C = 0x0;
    }
    *(unsigned int *)0xC2A98FC = 0x0;
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
                                *(unsigned int *)0xC2A98EC = 0x7;
                                t35 = 0xC1310E4;
                                if ((*(int *)0xC1EE214) == 11) {
                                    t35 = 0xC131030;
                                }
                                InitArrow(t35);
                                ResetPinFlag();
                                *(unsigned int *)0xC2A9968 = 0x78;
                                *(unsigned int *)0xC2A9A34 = 0x0;
                            }
                        } else {
                            *(unsigned int *)0xC2A9A3C = 0x0;
                        }
                    } else {
                        *(unsigned int *)0xC2A98EC = 0x7;
                        t58 = 0xC1310E4;
                        if ((*(int *)0xC1EE214) == 11) {
                            t58 = 0xC131030;
                        }
                        InitArrow(t58);
                        ResetPinFlag();
                        *(unsigned int *)0xC2A9968 = 0x78;
                        *(unsigned int *)0xC2A9A34 = 0x0;
                    }
                } else {
                    *(unsigned int *)0xC2A98EC = 0x8;
                    InitArrow(0xC131084);
                    *(unsigned int *)0xC2A9968 = 0x78;
                    *(unsigned short *)0xC2A9A64 = 0xC000;
                }
            } else {
                *(unsigned int *)0xC2A98EC = 0x3;
                *(unsigned int *)0xC2A9968 = 0x78;
            }
        } else {
            *(unsigned int *)0xC2A98EC = 0x5;
            *(unsigned int *)0xC2A9968 = 0x78;
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
        *(float *)0xC2A9A24 = 0.0f;
        Start_JumpDistance(0xC2A9A24);
        *(unsigned int *)0xC2A9970 = 0x0;
    }
    if ((*(int *)0xC1EE214) == 20) {
        MakeKyakuTakeArea(0xC2A9978, 0xC1311AC, 0x0, 250.0f);
        *(unsigned int *)0xC2A9974 = 0x0;
    }
    if ((*(int *)0xC1EE214) == 2) {
        Init_Balloon();
    }
    if ((*(int *)0xC1EE214) == 14) {
        *(unsigned int *)0xC2A9A2C = 0x0;
        *(unsigned int *)0xC2A9A30 = 0xFFFFFFFF;
    }
    *(unsigned int *)0xC2A9930 = 0x0;
    *(unsigned int *)0xC2A9934 = 0x0;
    *(unsigned int *)0xC2A9938 = 0x0;
    *(unsigned int *)0xC2A993C = 0x0;
    *(unsigned int *)0xC2A7614 = 0x0;
    t147 = *(int *)0xC1EE214;
    t148 = t147;
    if (t147 == 15) {
        *(unsigned int *)0xC2A9A5C = 0x0;
        *(unsigned int *)0xC2A9A60 = 0x0;
        t148 = 0xC2A9A5C;
    }
    *(unsigned int *)0xC17948C = 0x0;
    *(unsigned int *)0xC2A7368 = 0x0;
    *(unsigned int *)0xC2A736C = 0x0;
    *(unsigned int *)0xC2A9A68 = 0x0;
    return t148;
}
