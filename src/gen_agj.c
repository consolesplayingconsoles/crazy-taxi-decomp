/* Straight-line functions with calls and guards (batch gen_agj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int AnnounceSecretFlag(int);
int End_LoadSave(int);
int LCDAccessOK(void);
int Sound_Init(void);
int Voice_Clear(void);
int buStat(int);
int callGoBackAdvertise(void);
int gdc_StopStreamSongAll(void);
int gdc_StopStreamVoiceAll(void);
int ndPuru2Reset(int);
int pfOffsetOff(void);
int usr_gd_err_func(int, int);
int CheckSoftReset(void);

int CheckSoftReset(void)
{
    int t2;
    int t54;
    int t3;
    int t11;
    int t14;
    int t43;
    int t62;
    int t70;
    int t73;
    int t102;
    int t113;
    int t17;
    int t22;
    int t48;
    int t28;
    int t29;
    int t30;
    int t76;
    int t81;
    int t107;
    int t87;
    int t88;
    int t89;

    if ((*(int *)0xC2A121C) != 0) {
        t2 = buStat((*(int *)0xC2A11B8));
        t54 = t2;
        if (t2 == 0) {
            t3 = *(signed char *)0xC1EE277;
            if ((unsigned char)t3 != 0) {
                if ((unsigned char)t3 != 1) {
                    *(unsigned int *)0xC2A123C = 0x0;
                } else {
                    *(unsigned int *)0xC2A123C = 0x1;
                }
            } else {
                *(unsigned int *)0xC2A123C = 0x0;
            }
            if ((*(int *)0xC2A123C) == 1) {
                t11 = 0x1;
                if (((*(int *)0xC1EE24C) & 0x6) != 6) {
                    t11 = 0x0;
                }
                t17 = t11;
            } else {
                t14 = 0x0;
                if (((*(int *)0xC1EE24C) & 0x606) == 0x606) {
                    t14 = 0x1;
                }
                t17 = t14;
            }
            if (((((*(int *)0xC1EE250) & 0x8) == 0) && (t22 = *(int *)0xC1EE24C, (t22 & 0x8) == 0)) || (t17 != 1)) {
                *(unsigned int *)0xC0EF7F4 = 0x0;
                t48 = 0x0;
            } else {
                t43 = 0x0;
                if ((*(int *)0xC0EF7F4) == 0) {
                    ndPuru2Reset(0x2);
                    if (((*(int *)0xC1EE234) != 0) && ((t28 = *(int *)0xC1EE234, t28 != 2) && ((t29 = *(int *)0xC2A1228, t29 != 0) || (t30 = *(int *)0xC2A122C, t30 != 0)))) {
                        callGoBackAdvertise();
                    } else {
                        usr_gd_err_func(0x0, 0xFFFFFFE9);
                    }
                    Voice_Clear();
                    gdc_StopStreamVoiceAll();
                    gdc_StopStreamSongAll();
                    Sound_Init();
                    *(unsigned int *)0xC2A4E50 = 0x0;
                    AnnounceSecretFlag(0x0);
                    End_LoadSave(0x0);
                    End_LoadSave(0x1);
                    LCDAccessOK();
                    pfOffsetOff();
                    *(unsigned int *)0xC0EF7F4 = 0x1;
                    t43 = 0x1;
                }
                t48 = t43;
            }
            t54 = t48;
        }
        t113 = t54;
    } else {
        t62 = *(signed char *)0xC1EE277;
        if ((unsigned char)t62 != 0) {
            if ((unsigned char)t62 != 1) {
                *(unsigned int *)0xC2A123C = 0x0;
            } else {
                *(unsigned int *)0xC2A123C = 0x1;
            }
        } else {
            *(unsigned int *)0xC2A123C = 0x0;
        }
        if ((*(int *)0xC2A123C) == 1) {
            t70 = 0x1;
            if (((*(int *)0xC1EE24C) & 0x6) != 6) {
                t70 = 0x0;
            }
            t76 = t70;
        } else {
            t73 = 0x0;
            if (((*(int *)0xC1EE24C) & 0x606) == 0x606) {
                t73 = 0x1;
            }
            t76 = t73;
        }
        if (((((*(int *)0xC1EE250) & 0x8) == 0) && (t81 = *(int *)0xC1EE24C, (t81 & 0x8) == 0)) || (t76 != 1)) {
            *(unsigned int *)0xC0EF7F4 = 0x0;
            t107 = 0x0;
        } else {
            t102 = 0x0;
            if ((*(int *)0xC0EF7F4) == 0) {
                ndPuru2Reset(0x2);
                if (((*(int *)0xC1EE234) != 0) && ((t87 = *(int *)0xC1EE234, t87 != 2) && ((t88 = *(int *)0xC2A1228, t88 != 0) || (t89 = *(int *)0xC2A122C, t89 != 0)))) {
                    callGoBackAdvertise();
                } else {
                    usr_gd_err_func(0x0, 0xFFFFFFE9);
                }
                Voice_Clear();
                gdc_StopStreamVoiceAll();
                gdc_StopStreamSongAll();
                Sound_Init();
                *(unsigned int *)0xC2A4E50 = 0x0;
                AnnounceSecretFlag(0x0);
                End_LoadSave(0x0);
                End_LoadSave(0x1);
                LCDAccessOK();
                pfOffsetOff();
                *(unsigned int *)0xC0EF7F4 = 0x1;
                t102 = 0x1;
            }
            t107 = t102;
        }
        t113 = t107;
    }
    return t113;
}
