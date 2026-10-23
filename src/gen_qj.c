/* Straight-line functions with calls and guards (batch gen_qj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ResetFadeColor(void);
int SetFadeColorBaseMulti(float, float, float);
int nlObjPutMvClosedVolumeUseViewMatrix(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateRX(float);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int putCarModel(int a4, int a5);

int putCarModel(int a4, int a5)
{
    int t0;
    int t2;
    int t30;
    int t68;
    int t61;
    int t73;
    float u114;
    int t126;
    int t158;
    int t182;
    int stk[14];

    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = *(short *)((a4 + 0x78));
    nlPushMatrix(0x0);
    t2 = *(int *)(((int)stk + 4));
    if ((*(int *)((((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x8) + (t2 << 2)) + 0x0))) != 0) {
        nlPushUnitMatrix();
        nlTranslate((*(float *)((a4 + 0x8C))), (*(float *)((a4 + 0x104))), (*(float *)((a4 + 0x94))));
        nlRotateAY((unsigned short)(*(short *)((a4 + 0x10A))));
        nlRotateAX((unsigned short)(*(short *)((a4 + 0x108))));
        nlRotateAZ((unsigned short)(*(short *)((a4 + 0x10C))));
        nlObjPutMvClosedVolumeUseViewMatrix((*(int *)((((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x8) + (t2 << 2)) + 0x0))));
        nlPopMatrix(0x1);
    }
    nlTranslate(0.0f, ((*(float *)((a4 + 0xF8))) + (*(float *)((a4 + 0xFC)))), 0.0f);
    nlRotateAX((unsigned short)(*(short *)((a4 + 0xAA))));
    nlRotateAZ((unsigned short)(*(short *)((a4 + 0xAE))));
    if ((int)(*(int *)((a4 + 0x7C))) >= 0) {
        t30 = *(short *)((a4 + 0x7C));
        SetFadeColorBaseMulti((*(float *)((((short)(((t30 << 1) + t30) << 2) + 0xC0A3498) + 0x0))), (*(float *)((((short)(((t30 << 1) + t30) << 2) + 0xC0A3498) + 0x4))), (*(float *)((((short)(((t30 << 1) + t30) << 2) + 0xC0A3498) + 0x8))));
    }
    nlObjPutUseViewMatrix((*(int *)(((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + (t2 << 2)) + 0x0))));
    ResetFadeColor();
    if ((*(int *)((a4 + 0x128))) != 0) {
        nlObjPutUseViewMatrix((*(int *)((a4 + 0x128))));
    }
    if ((*(int *)((((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x10) + (t2 << 2)) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)((((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x10) + (t2 << 2)) + 0x0))));
    }
    if ((*(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x1C))) != 0) {
        *(unsigned int *)(((int)stk + 8)) = 0x0;
        t68 = 0x0;
        if (((*(int *)0xC1EE330) & 16) != 0) {
            if (((*(int *)((a4 + 0x84))) & 0x2400) != 0) {
                *(unsigned int *)(((int)stk + 8)) = 0x1;
            }
            t61 = 0x0;
            if (((*(int *)((a4 + 0x84))) & 0x4800) != 0) {
                t61 = 0x1;
            }
            t68 = t61;
        }
        t73 = t68;
        if ((*(float *)((a4 + 0xC8))) > 0.00999999978f) {
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x2);
            t73 = (t68 + 0x2);
        }
        *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 4))) << 2);
        if ((*(int *)(((int)stk + 8))) != 0) {
            nlObjPutUseViewMatrix((*(int *)((((((*(int *)(((int)stk + 12))) + (*(int *)(((int)stk + 8)))) << 2) + (((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x18)) + 0x0))));
        }
        if (t73 != 0) {
            nlObjPutUseViewMatrix((*(int *)((((((*(int *)(((int)stk + 12))) + t73) << 2) + (((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x38)) + 0x0))));
        }
    }
    if ((*(int *)(((int)stk + 4))) != 0) {
    } else {
        if ((*(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x60))) == 0) {
        } else {
            u114 = (*(float *)((a4 + 0xB8)));
            u114 = u114 + 0.199999988f * (*(float *)(((0xCC + a4) + 0x0)));
            *(float *)((a4 + 0xB8)) = u114;
            if ((*(int *)(((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x58) + 0x0))) != 0) {
                *(unsigned int *)(((int)stk + 4)) = (((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x70);
                nlPushMatrix(0x0);
                nlTranslateV((*(int *)(((int)stk + 4))));
                nlRotateRX((*(float *)((a4 + 0xB8))));
                nlObjPutUseViewMatrix((*(int *)(((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x58) + 0x0))));
                nlPopMatrix(0x1);
                if ((*(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x5C))) != 0) {
                    nlPushMatrix(0x0);
                    t126 = *(int *)(((int)stk + 4));
                    nlTranslate((-(*(float *)((t126 + 0x0)))), (*(float *)((t126 + 0x4))), (*(float *)((t126 + 0x8))));
                    nlRotateRX((*(float *)((a4 + 0xB8))));
                    nlObjPutUseViewMatrix((*(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x5C))));
                    nlPopMatrix(0x1);
                }
            }
            *(unsigned int *)(((int)stk + 4)) = (((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x7C);
            nlPushMatrix(0x0);
            nlTranslateV((*(int *)(((int)stk + 4))));
            nlRotateRX((*(float *)((a4 + 0xB8))));
            nlObjPutUseViewMatrix((*(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x60))));
            nlPopMatrix(0x1);
            if ((*(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x64))) != 0) {
                nlPushMatrix(0x0);
                t158 = *(int *)(((int)stk + 4));
                nlTranslate((-(*(float *)((t158 + 0x0)))), (*(float *)((t158 + 0x4))), (*(float *)((t158 + 0x8))));
                nlRotateRX((*(float *)((a4 + 0xB8))));
                nlObjPutUseViewMatrix((*(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x64))));
                nlPopMatrix(0x1);
            }
            if ((*(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x68))) != 0) {
                *(unsigned int *)(((int)stk + 4)) = ((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x70) + 0x18);
                nlPushMatrix(0x0);
                nlTranslateV((*(int *)(((int)stk + 4))));
                nlRotateRX((*(float *)((a4 + 0xB8))));
                nlObjPutUseViewMatrix((*(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x68))));
                nlPopMatrix(0x1);
                if ((*(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x6C))) != 0) {
                    nlPushMatrix(0x0);
                    t182 = *(int *)(((int)stk + 4));
                    nlTranslate((-(*(float *)((t182 + 0x0)))), (*(float *)((t182 + 0x4))), (*(float *)((t182 + 0x8))));
                    nlRotateRX((*(float *)((a4 + 0xB8))));
                    nlObjPutUseViewMatrix((*(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x6C))));
                    nlPopMatrix(0x1);
                }
            }
        }
    }
    return (nlPopMatrix(0x1));
}
