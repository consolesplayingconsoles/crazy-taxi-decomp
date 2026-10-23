/* Straight-line functions with calls and guards (batch gen_alh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_StartAction(int, int, int);
int FcvPlayBuffer(int, int);
int FcvStoreBuffer(int, int, float);
int Pass_Angry(void);
int Sound_Request(int, int);
int Start_Pass_Judgement(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int psgEnterState3(int, int);
extern int psgJolt();
int psgSeatMatrix(int);
int psgStepBlend(int);
int psgUpdatePartTracks(int);
int psgFrameState3(int a4);

int psgFrameState3(int a4)
{
    int t5;
    int t6;
    float u276;
    int t19;
    int t29;
    float u32;
    int t59;
    float u61;
    int t68;
    int t164;
    float u247;
    int t282;
    int t283;
    int t293;
    float u280;
    float u268;
    int t170;

    *(unsigned int *)0xC13ED98 = 0x0;
    *(unsigned int *)0xC13ED9C = 0x1;
    *(unsigned int *)0xC13EDA0 = 0x1;
    nlPushMatrix(0x0);
    psgSeatMatrix(a4);
    if (((*(signed char *)((a4 + 0x149))) & 128) != 0) {
        psgStepBlend(a4);
        t5 = ((int (*)(int, int, float))(psgJolt))(a4, (*(int *)((a4 + 0x118))), 0.5f);
    } else {
        t6 = *(int *)((a4 + 0x24));
        u276 = 60.0f;
        if ((unsigned int)t6 >= (unsigned int)0x10) {
            u280 = 0.099999994f;
        } else {
            switch ((t6 << 1)) {
                case 0:
                {
                    *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x40);
                    FcvStoreBuffer((*(int *)((a4 + 0x34))), (a4 + 0x3C), (*(float *)((a4 + 0x38))));
                    u268 = 1.0f;
                }
                    break;
                case 2:
                {
                    *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xBF);
                    FcvStoreBuffer((*(int *)((a4 + 0x34))), (a4 + 0x3C), (*(float *)((a4 + 0x38))));
                    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + 1.0f);
                    if ((float)((*(int *)(((*(int *)((a4 + 0x34))) + 0x0))) - 1) > (*(float *)((a4 + 0x38)))) {
                    } else {
                        t19 = *(int *)((a4 + 0x24));
                        *(unsigned int *)((a4 + 0x24)) = (t19 + 0x1);
                        psgEnterState3(a4, (t19 + 0x1));
                        Drv_StartAction(0x3, a4, 0x0);
                    }
                    u268 = 0.299999982f;
                }
                    break;
                case 4:
                {
                    *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xBF);
                    t29 = *(int *)((a4 + 0x34));
                    FcvStoreBuffer(t29, (a4 + 0x3C), (float)((*(int *)((t29 + 0x0))) - 2));
                    u32 = *(float *)((a4 + 0x38));
                    *(float *)((a4 + 0x38)) = (u32 + 1.0f);
                    if (5.0f > (u32 + 1.0f)) {
                    } else {
                        *(unsigned int *)((a4 + 0x24)) = ((*(int *)((a4 + 0x24))) + 0x1);
                        psgEnterState3(a4, (*(int *)((a4 + 0x24))));
                    }
                    u268 = 0.299999982f;
                }
                    break;
                case 6:
                {
                    *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xBF);
                    FcvStoreBuffer((*(int *)((a4 + 0x34))), (a4 + 0x3C), (*(float *)((a4 + 0x38))));
                    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + 1.0f);
                    if ((float)((*(int *)(((*(int *)((a4 + 0x34))) + 0x0))) - 1) > (*(float *)((a4 + 0x38)))) {
                    } else {
                        *(unsigned int *)((a4 + 0x24)) = 0x0;
                        psgEnterState3(a4, (*(int *)((a4 + 0x24))));
                    }
                    u268 = 0.299999982f;
                }
                    break;
                case 8:
                {
                    nlPushMatrix(0x0);
                    psgUpdatePartTracks(a4);
                    t59 = *(int *)((a4 + 0x34));
                    u61 = 58.0f;
                    if (!(58.0f > (*(float *)((a4 + 0x38))))) {
                    } else {
                        u61 = (*(float *)((a4 + 0x38)));
                    }
                    FcvStoreBuffer(t59, (a4 + 0x3C), u61);
                    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + 1.0f);
                    nlPopMatrix(0x1);
                    if (60.0f > (*(float *)((a4 + 0x38)))) {
                    } else {
                        t68 = (int)((int)((*(int *)0xC1EE7D4) - 150) % (int)0x5A);
                        if (t68 == 30) {
                            *(unsigned int *)((a4 + 0x24)) = 0x8;
                        } else {
                            if (t68 == 60) {
                                *(unsigned int *)((a4 + 0x24)) = 0x7;
                            } else {
                                *(unsigned int *)((a4 + 0x24)) = 0x9;
                            }
                        }
                        psgEnterState3(a4, (*(int *)((a4 + 0x24))));
                    }
                    u268 = 60.0f;
                }
                    break;
                case 10:
                case 12:
                case 18:
                {
                    nlPushMatrix(0x0);
                    psgUpdatePartTracks(a4);
                    FcvStoreBuffer((*(int *)((a4 + 0x34))), (a4 + 0x3C), (*(float *)((a4 + 0x38))));
                    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + 1.0f);
                    nlPopMatrix(0x1);
                    if (((*(signed char *)((a4 + 0x149))) & 16) != 0) {
                        *(unsigned int *)((a4 + 0x24)) = 0xA;
                        psgEnterState3(a4, (*(int *)((a4 + 0x24))));
                    } else {
                        if (90.0f > (*(float *)((a4 + 0x38)))) {
                        } else {
                            if (((*(signed char *)((a4 + 0x149))) & 8) != 0) {
                                if ((*(int *)((a4 + 0x24))) != 6) {
                                    *(unsigned int *)((a4 + 0x24)) = 0x6;
                                } else {
                                    *(unsigned int *)((a4 + 0x24)) = 0x9;
                                }
                            } else {
                                if ((int)(*(int *)0xC1EE7CC) <= (int)0x69) {
                                    *(unsigned int *)((a4 + 0x24)) = 0x6;
                                } else {
                                    if ((*(int *)((a4 + 0x24))) == 9) {
                                        *(unsigned int *)((a4 + 0x24)) = 0x5;
                                    } else {
                                        *(unsigned int *)((a4 + 0x24)) = 0x9;
                                    }
                                }
                            }
                            psgEnterState3(a4, (*(int *)((a4 + 0x24))));
                        }
                    }
                    u268 = 60.0f;
                }
                    break;
                case 14:
                {
                    nlPushMatrix(0x0);
                    psgUpdatePartTracks(a4);
                    FcvStoreBuffer((*(int *)((a4 + 0x34))), (a4 + 0x3C), (*(float *)((a4 + 0x38))));
                    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + 1.0f);
                    nlPopMatrix(0x1);
                    if (60.0f > (*(float *)((a4 + 0x38)))) {
                    } else {
                        *(unsigned int *)((a4 + 0x24)) = 0x9;
                        psgEnterState3(a4, (*(int *)((a4 + 0x24))));
                    }
                    u268 = 60.0f;
                }
                    break;
                case 16:
                {
                    nlPushMatrix(0x0);
                    psgUpdatePartTracks(a4);
                    FcvStoreBuffer((*(int *)((a4 + 0x34))), (a4 + 0x3C), (*(float *)((a4 + 0x38))));
                    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + 1.0f);
                    nlPopMatrix(0x1);
                    if (30.0f > (*(float *)((a4 + 0x38)))) {
                    } else {
                        *(unsigned int *)((a4 + 0x24)) = 0x6;
                        psgEnterState3(a4, (*(int *)((a4 + 0x24))));
                    }
                    u268 = 60.0f;
                }
                    break;
                case 20:
                {
                    nlPushMatrix(0x0);
                    psgUpdatePartTracks(a4);
                    FcvStoreBuffer((*(int *)((a4 + 0x34))), (a4 + 0x3C), (*(float *)((a4 + 0x38))));
                    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + 1.0f);
                    nlPopMatrix(0x1);
                    t164 = *(int *)((a4 + 0x34));
                    if ((t164 == 0xC92FC64) || ((t164 == 0xC9323F8) || ((t164 == 0xC934CCC) || ((t164 == 0xC937750) || ((t164 == 0xC93A1A4) || ((t164 == 0xC93CD68) || ((t164 == 0xC93F94C) || (t164 == 0xC9424C0)))))))) {
                        if (((*(float *)((a4 + 0x38))) == 5.0f) && (t170 = *(int *)0xC1EE794, (int)t170 > 0)) {
                            Start_Pass_Judgement(0xFFFFFFFF);
                            Pass_Angry();
                        }
                        if ((*(float *)((a4 + 0x38))) == 120.0f) {
                            Drv_StartAction(0x7, 0x0, 0x1);
                        }
                        if (150.0f > (*(float *)((a4 + 0x38)))) {
                        } else {
                            *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x20);
                        }
                    }
                    u268 = 60.0f;
                }
                    break;
                case 22:
                {
                    nlPushMatrix(0x0);
                    psgUpdatePartTracks(a4);
                    FcvStoreBuffer((*(int *)((a4 + 0x34))), (a4 + 0x3C), (*(float *)((a4 + 0x38))));
                    if (!((float)((*(int *)(((*(int *)((a4 + 0x34))) + 0x0))) - 2) > (*(float *)((a4 + 0x38))))) {
                    } else {
                        *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + 1.0f);
                    }
                    nlPopMatrix(0x1);
                    u268 = 0.299999982f;
                }
                    break;
                case 24:
                {
                    nlPushMatrix(0x0);
                    psgUpdatePartTracks(a4);
                    FcvStoreBuffer((*(int *)((a4 + 0x34))), (a4 + 0x3C), (*(float *)((a4 + 0x38))));
                    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) - 1.5f);
                    if (!((*(float *)((a4 + 0x38))) > (1.0f + 1.0f))) {
                        *(unsigned int *)((a4 + 0x24)) = 0x0;
                        psgEnterState3(a4, 0x0);
                        FcvStoreBuffer((*(int *)((a4 + 0x34))), ((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4), (*(float *)((a4 + 0x38))));
                    }
                    nlPopMatrix(0x1);
                    u268 = 0.299999982f;
                }
                    break;
                case 26:
                case 28:
                {
                    nlPushMatrix(0x0);
                    psgUpdatePartTracks(a4);
                    FcvStoreBuffer((*(int *)((a4 + 0x34))), (a4 + 0x3C), (*(float *)((a4 + 0x38))));
                    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + 1.0f);
                    if (!((float)((*(int *)(((*(int *)((a4 + 0x34))) + 0x0))) - 2) > (*(float *)((a4 + 0x38))))) {
                        *(unsigned int *)((a4 + 0x24)) = 0x0;
                        psgEnterState3(a4, 0x0);
                    }
                    nlPopMatrix(0x1);
                    u268 = 0.099999994f;
                }
                    break;
                default:
                {
                    nlPushMatrix(0x0);
                    psgUpdatePartTracks(a4);
                    FcvStoreBuffer((*(int *)((a4 + 0x34))), (a4 + 0x3C), (*(float *)((a4 + 0x38))));
                    u247 = *(float *)((a4 + 0x38));
                    *(float *)((a4 + 0x38)) = (u247 + 1.0f);
                    if ((int)(u247 + 1.0f) == 58) {
                        Sound_Request(0x9A9, 0x2);
                    }
                    if (!((float)((*(int *)(((*(int *)((a4 + 0x34))) + 0x0))) - 2) > (*(float *)((a4 + 0x38))))) {
                        *(unsigned int *)((a4 + 0x24)) = 0x0;
                        psgEnterState3(a4, 0x0);
                    }
                    nlPopMatrix(0x1);
                    u268 = 0.099999994f;
                }
                    break;
            }
            u276 = u268;
        }
        t282 = *(int *)((a4 + 0x24));
        if ((t282 != 4) && ((t282 != 5) && ((t282 != 6) && ((t282 != 7) && ((t282 != 8) && ((t282 != 9) && (t282 != 10))))))) {
            t283 = ((int (*)(int, int, float, float))(psgJolt))(a4, (a4 + 0x3C), u276, u280);
        } else {
            FcvPlayBuffer((a4 + 0x3C), (*(int *)((a4 + 0x0))));
        }
    }
    t293 = nlPopMatrix(0x1);
    *(unsigned int *)0xC13ED98 = 0x1;
    *(unsigned int *)0xC13ED9C = 0x0;
    *(unsigned int *)0xC13EDA0 = 0x0;
    return t293;
}
