/* Straight-line functions with calls and guards (batch gen_hx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ExecArrow(int, float);
float FUN_0c089de0(int);
int Put_Stop_and_Brake(int, int);
int ResetFadeColor(void);
int ResetLight(void);
float nlFraction(float);
int nlObjPut(int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutSetLightDirectionV(int);
int nlObjPutTrnsl(int, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
float nlRoundUp(float);
int nlScale(float, float, float);
int nlSetScaleFactor(float);
int nlTranslate(float, float, float);
int kyakuTaskPut(int a4, int a5, float f4);

int kyakuTaskPut(int a4, int a5, float f4)
{
    int t0;
    int t104;
    int t89;
    float t12;
    float t23;
    float u27;
    float u31;
    float u35;
    float u39;
    int t72;
    int t6;
    float u48;
    float u18;
    int stk[19] = {0};

    *(unsigned short *)(((int)stk + 4)) = a4;
    t0 = *(int *)0xC2A4E50;
    t104 = t0;
    if (t0 == 1) {
    } else {
        t89 = 0xC179860;
        if (((*(int *)0xC1EE234) == 0) && (t6 = *(int *)0xC179860, t6 != 0)) {
        } else {
            if ((*(int *)0xC0E49E8) != a5) {
                *(unsigned int *)0xC0E49EC = 0x0;
                *(unsigned short *)0xC0E49E4 = 0x0;
            }
            *(unsigned int *)0xC0E49E8 = a5;
            if (!(1800.0f > f4)) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x14)) = *(struct mv3 *)(0xC0E49D0); }
                u48 = 1.0f;
            } else {
                if (0.0f > (((f4 + -200.0f) / 1600.0f) * 4.0f)) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)(0xC0E49A0); }
                    u18 = 0.0f;
                } else {
                    t12 = nlRoundUp((((f4 + -200.0f) / 1600.0f) * 4.0f));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)(((signed char)((((int)t12 << 1) + (int)t12) << 2) + 0xC0E49A0)); }
                    u18 = (((f4 + -200.0f) / 1600.0f) * 4.0f);
                }
                t23 = nlFraction(u18);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x14)) = *(struct mv3 *)(((signed char)((((int)u18 << 1) + (int)u18) << 2) + 0xC0E49A0)); }
                u27 = (*(float *)(((int)stk + 24)));
                u27 = u27 + t23 * ((*(float *)(((((int)stk + 4) + 0x8) + 0x0))) - (*(float *)(((int)stk + 24))));
                *(float *)(((int)stk + 24)) = u27;
                u31 = (*(float *)(((int)stk + 28)));
                u31 = u31 + t23 * ((*(float *)(((((int)stk + 4) + 0x8) + 0x4))) - (*(float *)(((int)stk + 28))));
                *(float *)(((int)stk + 28)) = u31;
                u35 = (*(float *)(((int)stk + 32)));
                u35 = u35 + t23 * ((*(float *)(((((int)stk + 4) + 0x8) + 0x8))) - (*(float *)(((int)stk + 32))));
                *(float *)(((int)stk + 32)) = u35;
                *(unsigned short *)0xC0E49E4 = ((*(short *)0xC0E49E4) + ((int)(1800.0f - f4) + 0x120));
                u39 = 1.19999993f;
                u39 = u39 + 0.269999981f * (FUN_0c089de0((unsigned short)(*(short *)0xC0E49E4)));
                u48 = u39;
            }
            nlObjPutSetFadeColor((*(float *)(((int)stk + 24))), (*(float *)(((int)stk + 28))), (*(float *)(((int)stk + 32))));
            *(unsigned int *)(((int)stk + 8)) = (ExecArrow(a5, f4));
            if (a5 == 0) {
                nlPushMatrix(0x0);
                nlTranslate(0.0f, 0.199999988f, -0.699999988f);
                nlRotateAY((((-(unsigned short)(*(short *)0xC17985A)) + (unsigned short)(*(short *)(((int)stk + 4)))) - 32768));
                *(float *)(((int)stk + 24)) = -0.149999991f;
                *(float *)(((int)stk + 28)) = -0.399999976f;
                *(float *)(((int)stk + 32)) = 0.5f;
                nlObjPutSetLightDirectionV((((int)stk + 4) + 0x14));
                nlScale(u48, u48, u48);
                nlSetScaleFactor(u48);
                if ((*(int *)(((int)stk + 8))) != 0) {
                    nlObjPutTrnsl(0xC46BAB8, 0.5f);
                } else {
                    nlObjPut(0xC46BAB8);
                }
                nlPopMatrix(0x1);
            } else {
                t72 = *(int *)0xC0E49EC;
                if ((int)(0x1F & t72) < (int)0x1B) {
                    Put_Stop_and_Brake(((((int)(t72 & 0x7F) >= (int)0x3F)) ? 1 : 0), (*(int *)0xC1EE244));
                }
                *(unsigned int *)0xC0E49EC = ((*(int *)0xC0E49EC) + 0x1);
            }
            ResetFadeColor();
            t89 = (ResetLight());
        }
        t104 = t89;
    }
    return t104;
}
