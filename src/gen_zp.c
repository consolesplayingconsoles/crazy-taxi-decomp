/* Straight-line functions with calls and guards (batch gen_zp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlCeil(float);
float nlFloor(float);
int ConvertSwitch(int a4);

int ConvertSwitch(int a4)
{
    int t0;
    int t31;
    int t27;
    int t62;
    int t78;
    int t125;
    int t12;
    int t8;
    int t227;
    int t229;
    int t174;
    int t176;
    int t151;
    int t152;

    t0 = *(int *)(((a4 << 2) + 0xC1EE12C));
    if ((*(signed char *)(((*(int *)((t0 + 0x24))) + 0x0))) == 82) {
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2C)) = 0x2;
        t12 = 0x1;
    } else {
        if ((*(signed char *)(((*(int *)((t0 + 0x24))) + 0xA))) == 70) {
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2C)) = 0x5;
            t8 = 0x2;
        } else {
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2C)) = 0x2;
            t8 = 0x0;
        }
        t12 = t8;
    }
    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2B)) = t12;
    *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x10)) = (((*(short *)((t0 + 0x1C))) + 0x80) << 8);
    *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x12)) = ((unsigned short)(*(short *)((t0 + 0x18))) << 8);
    *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x14)) = ((unsigned short)(*(short *)((t0 + 0x1A))) << 8);
    *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x16)) = (((*(short *)((t0 + 0x1E))) + 0x80) << 8);
    *(unsigned int *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0xC)) = (*(int *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x0)));
    *(unsigned int *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x0)) = (*(int *)((t0 + 0x8)));
    *(unsigned int *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x4)) = (*(int *)((t0 + 0x10)));
    *(unsigned int *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x8)) = (*(int *)((t0 + 0x14)));
    if (t12 != 1) {
        if (t12 != 2) {
            t31 = 0x0;
            if (((*(int *)((t0 + 0x8))) & 64) != 0) {
            } else {
                t27 = 0xFF;
                if ((0x80 & (*(int *)((t0 + 0x8)))) != 0) {
                } else {
                    t27 = ((*(short *)((t0 + 0x1C))) + 0x80);
                }
                t31 = t27;
            }
            if ((float)((unsigned char)t31 - (unsigned char)(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x18)))) > 0.0f) {
                *(unsigned char *)(((0x18 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0)) = ((*(signed char *)(((0x18 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0))) + (int)(nlCeil(((float)((unsigned char)t31 - (unsigned char)(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x18)))) * 0.349999994f))));
            } else {
                *(unsigned char *)(((0x18 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0)) = ((*(signed char *)(((0x18 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0))) + (int)(nlFloor(((float)((unsigned char)t31 - (unsigned char)(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x18)))) * 0.349999994f))));
            }
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x27)) = (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x28)) = (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)));
            if ((*(signed char *)0xC28A4EE) == 0) {
                if (((*(int *)((t0 + 0x8))) & 0x2) != 0) {
                    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x1;
                } else {
                    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x0;
                }
                if (((*(int *)((t0 + 0x8))) & 4) != 0) {
                    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x1;
                } else {
                    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x0;
                }
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x19)) = (*(short *)((t0 + 0x18)));
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1A)) = (*(short *)((t0 + 0x1A)));
            } else {
                if (((*(int *)((t0 + 0x8))) & 0x10000) != 0) {
                    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x1;
                } else {
                    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x0;
                }
                if (((*(int *)((t0 + 0x8))) & 0x20000) != 0) {
                    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x1;
                } else {
                    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x0;
                }
                t62 = 0x0;
                if (((*(int *)((t0 + 0x8))) & 4) != 0) {
                    t62 = 0xFF;
                }
                if ((float)((unsigned char)t62 - (unsigned char)(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x19)))) > 0.0f) {
                    *(unsigned char *)(((0x19 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0)) = ((*(signed char *)(((0x19 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0))) + (int)(nlCeil(((float)((unsigned char)t62 - (unsigned char)(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x19)))) * 0.899999976f))));
                } else {
                    *(unsigned char *)(((0x19 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0)) = ((*(signed char *)(((0x19 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0))) + (int)(nlFloor(((float)((unsigned char)t62 - (unsigned char)(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x19)))) * 0.899999976f))));
                }
                t78 = 0x0;
                if (((*(int *)((t0 + 0x8))) & 0x2) != 0) {
                    t78 = 0xFF;
                }
                if ((float)((unsigned char)t78 - (unsigned char)(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1A)))) > 0.0f) {
                    *(unsigned char *)(((0x1A + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0)) = ((*(signed char *)(((0x1A + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0))) + (int)(nlCeil(((float)((unsigned char)t78 - (unsigned char)(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1A)))) * 0.899999976f))));
                } else {
                    *(unsigned char *)(((0x1A + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0)) = ((*(signed char *)(((0x1A + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0))) + (int)(nlFloor(((float)((unsigned char)t78 - (unsigned char)(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1A)))) * 0.899999976f))));
                }
            }
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1F)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x27)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B))));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x23)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x27))));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x20)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x28)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C))));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x24)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x28))));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x29)) = (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)));
            if (((*(int *)((t0 + 0x8))) & 0x400) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)) = 0x0;
            }
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x21)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x29)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D))));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x25)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x29))));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2A)) = (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E)));
            if (((*(int *)((t0 + 0x8))) & 0x200) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E)) = 0x0;
            }
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x22)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2A)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E))));
            t174 = 0x26;
            t176 = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2A))));
        } else {
            t125 = *(short *)((t0 + 0x1C));
            if ((float)((unsigned char)(t125 + 0x80) - (unsigned char)(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x18)))) > 0.0f) {
                *(unsigned char *)(((0x18 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0)) = ((*(signed char *)(((0x18 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0))) + (int)(nlCeil(((float)((unsigned char)(t125 + 0x80) - (unsigned char)(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x18)))) * 0.349999994f))));
            } else {
                *(unsigned char *)(((0x18 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0)) = ((*(signed char *)(((0x18 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0))) + (int)(nlFloor(((float)((unsigned char)(t125 + 0x80) - (unsigned char)(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x18)))) * 0.349999994f))));
            }
            if ((int)(unsigned short)(*(short *)((t0 + 0x18))) > (int)0x3F) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x19)) = 0xFF;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x19)) = ((*(short *)((t0 + 0x18))) << 2);
            }
            if (((*(int *)((t0 + 0x8))) & 0x2) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1A)) = 0xFF;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1A)) = 0x0;
            }
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2F)) = (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2D)));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x30)) = (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2E)));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2D)) = ((*(signed char *)((t0 + 0x20))) + 0x80);
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2E)) = (0x80 + (*(signed char *)((t0 + 0x22))));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x27)) = (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)));
            if ((((*(int *)((t0 + 0x8))) & 4) == 0) && (t151 = *(signed char *)0xC1EE27A, t152 = *(signed char *)0xC1EE27C, (int)((unsigned char)t151 - (unsigned char)t152) <= (int)0x30)) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x0;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x1;
            }
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1F)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x27)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B))));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x23)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x27))));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x28)) = (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)));
            if (((*(int *)((t0 + 0x8))) & 0x400) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x0;
            }
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x20)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x28)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C))));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x24)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x28))));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x29)) = (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)));
            if (((*(int *)((t0 + 0x8))) & 0x200) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)) = 0x0;
            }
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x21)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x29)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D))));
            t174 = 0x25;
            t176 = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x29))));
        }
        t227 = t174;
        t229 = t176;
    } else {
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x18)) = ((*(short *)((t0 + 0x1C))) + 0x80);
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x19)) = (*(short *)((t0 + 0x18)));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1A)) = (*(short *)((t0 + 0x1A)));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x27)) = (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x28)) = (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x29)) = (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2A)) = (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E)));
        if ((*(signed char *)0xC28A4EE) == 0) {
            if ((0x10 & (*(int *)((t0 + 0x8)))) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x0;
            }
            if ((0x20 & (*(int *)((t0 + 0x8)))) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x0;
            }
            if (((*(int *)((t0 + 0x8))) & 0x2) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)) = 0x0;
            }
            if (((*(int *)((t0 + 0x8))) & 4) == 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E)) = 0x0;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E)) = 0x1;
            }
        } else {
            if (((*(int *)((t0 + 0x8))) & 4) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x0;
            }
            if (((*(int *)((t0 + 0x8))) & 0x2) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x0;
            }
            if ((0x20 & (*(int *)((t0 + 0x8)))) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)) = 0x0;
            }
            if ((0x10 & (*(int *)((t0 + 0x8)))) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E)) = 0x0;
            }
        }
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1F)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x27)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B))));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x23)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x27))));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x20)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x28)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C))));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x24)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x28))));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x21)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x29)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D))));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x25)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x29))));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x22)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2A)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E))));
        t227 = 0x26;
        t229 = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2A))));
    }
    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + t227)) = t229;
    return t227;
}
