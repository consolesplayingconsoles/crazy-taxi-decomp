/* Straight-line functions with calls and guards (batch gen_zx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlCeil(float);
float nlFloor(float);
int ConvertSwitch(int a4);

int ConvertSwitch(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;

    t2 = *(int *)(((a4 << 2) + 0xC1EE12C));
    if ((*(signed char *)(((*(int *)((t2 + 0x24))) + 0x0))) == 82) {
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2C)) = 0x2;
        t3 = 0x1;
    } else {
        if ((*(signed char *)(((*(int *)((t2 + 0x24))) + 0xA))) == 70) {
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2C)) = 0x5;
            t4 = 0x2;
        } else {
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2C)) = 0x2;
            t4 = 0x0;
        }
        t3 = t4;
    }
    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2B)) = t3;
    *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x10)) = (((*(short *)((t2 + 0x1C))) + 0x80) << 8);
    *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x12)) = ((unsigned short)(*(short *)((t2 + 0x18))) << 8);
    *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x14)) = ((unsigned short)(*(short *)((t2 + 0x1A))) << 8);
    *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x16)) = (((*(short *)((t2 + 0x1E))) + 0x80) << 8);
    *(unsigned int *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0xC)) = (*(int *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x0)));
    *(unsigned int *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x0)) = (*(int *)((t2 + 0x8)));
    *(unsigned int *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x4)) = (*(int *)((t2 + 0x10)));
    *(unsigned int *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x8)) = (*(int *)((t2 + 0x14)));
    if (t3 != 1) {
        if (t3 != 2) {
            t3 = 0x0;
            if (((*(int *)((t2 + 0x8))) & 64) != 0) {
            } else {
                t4 = 0xFF;
                if ((0x80 & (*(int *)((t2 + 0x8)))) != 0) {
                } else {
                    t4 = ((*(short *)((t2 + 0x1C))) + 0x80);
                }
                t3 = t4;
            }
            if ((float)((unsigned char)t3 - (unsigned char)(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x18)))) > 0.0f) {
                u0 = nlCeil(((float)((unsigned char)t3 - (unsigned char)(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x18)))) * 0.349999994f));
                *(unsigned char *)(((0x18 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0)) = ((*(signed char *)(((0x18 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0))) + (int)u0);
            } else {
                u0 = nlFloor(((float)((unsigned char)t3 - (unsigned char)(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x18)))) * 0.349999994f));
                *(unsigned char *)(((0x18 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0)) = ((*(signed char *)(((0x18 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0))) + (int)u0);
            }
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x27)) = (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x28)) = (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)));
            if ((*(signed char *)0xC28A4EE) == 0) {
                if (((*(int *)((t2 + 0x8))) & 0x2) != 0) {
                    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x1;
                } else {
                    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x0;
                }
                if (((*(int *)((t2 + 0x8))) & 4) != 0) {
                    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x1;
                } else {
                    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x0;
                }
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x19)) = (*(short *)((t2 + 0x18)));
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1A)) = (*(short *)((t2 + 0x1A)));
            } else {
                if (((*(int *)((t2 + 0x8))) & 0x10000) != 0) {
                    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x1;
                } else {
                    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x0;
                }
                if (((*(int *)((t2 + 0x8))) & 0x20000) != 0) {
                    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x1;
                } else {
                    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x0;
                }
                t3 = 0x0;
                if (((*(int *)((t2 + 0x8))) & 4) != 0) {
                    t3 = 0xFF;
                }
                if ((float)((unsigned char)t3 - (unsigned char)(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x19)))) > 0.0f) {
                    u0 = nlCeil(((float)((unsigned char)t3 - (unsigned char)(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x19)))) * 0.899999976f));
                    *(unsigned char *)(((0x19 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0)) = ((*(signed char *)(((0x19 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0))) + (int)u0);
                } else {
                    u0 = nlFloor(((float)((unsigned char)t3 - (unsigned char)(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x19)))) * 0.899999976f));
                    *(unsigned char *)(((0x19 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0)) = ((*(signed char *)(((0x19 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0))) + (int)u0);
                }
                t3 = 0x0;
                if (((*(int *)((t2 + 0x8))) & 0x2) != 0) {
                    t3 = 0xFF;
                }
                if ((float)((unsigned char)t3 - (unsigned char)(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1A)))) > 0.0f) {
                    u0 = nlCeil(((float)((unsigned char)t3 - (unsigned char)(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1A)))) * 0.899999976f));
                    *(unsigned char *)(((0x1A + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0)) = ((*(signed char *)(((0x1A + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0))) + (int)u0);
                } else {
                    u0 = nlFloor(((float)((unsigned char)t3 - (unsigned char)(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1A)))) * 0.899999976f));
                    *(unsigned char *)(((0x1A + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0)) = ((*(signed char *)(((0x1A + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0))) + (int)u0);
                }
            }
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1F)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x27)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B))));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x23)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x27))));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x20)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x28)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C))));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x24)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x28))));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x29)) = (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)));
            if (((*(int *)((t2 + 0x8))) & 0x400) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)) = 0x0;
            }
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x21)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x29)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D))));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x25)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x29))));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2A)) = (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E)));
            if (((*(int *)((t2 + 0x8))) & 0x200) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E)) = 0x0;
            }
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x22)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2A)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E))));
            t3 = 0x26;
            t4 = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2A))));
        } else {
            t5 = *(short *)((t2 + 0x1C));
            if ((float)((unsigned char)(t5 + 0x80) - (unsigned char)(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x18)))) > 0.0f) {
                u0 = nlCeil(((float)((unsigned char)(t5 + 0x80) - (unsigned char)(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x18)))) * 0.349999994f));
                *(unsigned char *)(((0x18 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0)) = ((*(signed char *)(((0x18 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0))) + (int)u0);
            } else {
                u0 = nlFloor(((float)((unsigned char)(t5 + 0x80) - (unsigned char)(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x18)))) * 0.349999994f));
                *(unsigned char *)(((0x18 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0)) = ((*(signed char *)(((0x18 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0))) + (int)u0);
            }
            if ((int)(unsigned short)(*(short *)((t2 + 0x18))) > (int)0x3F) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x19)) = 0xFF;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x19)) = ((*(short *)((t2 + 0x18))) << 2);
            }
            if (((*(int *)((t2 + 0x8))) & 0x2) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1A)) = 0xFF;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1A)) = 0x0;
            }
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2F)) = (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2D)));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x30)) = (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2E)));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2D)) = ((*(signed char *)((t2 + 0x20))) + 0x80);
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2E)) = (0x80 + (*(signed char *)((t2 + 0x22))));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x27)) = (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)));
            if ((((*(int *)((t2 + 0x8))) & 4) == 0) && (t0 = *(signed char *)0xC1EE27A, t1 = *(signed char *)0xC1EE27C, (int)((unsigned char)t0 - (unsigned char)t1) <= (int)0x30)) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x0;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x1;
            }
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1F)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x27)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B))));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x23)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x27))));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x28)) = (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)));
            if (((*(int *)((t2 + 0x8))) & 0x400) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x0;
            }
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x20)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x28)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C))));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x24)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x28))));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x29)) = (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)));
            if (((*(int *)((t2 + 0x8))) & 0x200) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)) = 0x0;
            }
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x21)) = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x29)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D))));
            t3 = 0x25;
            t4 = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x29))));
        }
        t0 = t3;
        t1 = t4;
    } else {
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x18)) = ((*(short *)((t2 + 0x1C))) + 0x80);
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x19)) = (*(short *)((t2 + 0x18)));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1A)) = (*(short *)((t2 + 0x1A)));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x27)) = (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x28)) = (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x29)) = (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2A)) = (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E)));
        if ((*(signed char *)0xC28A4EE) == 0) {
            if ((0x10 & (*(int *)((t2 + 0x8)))) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x0;
            }
            if ((0x20 & (*(int *)((t2 + 0x8)))) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x0;
            }
            if (((*(int *)((t2 + 0x8))) & 0x2) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)) = 0x0;
            }
            if (((*(int *)((t2 + 0x8))) & 4) == 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E)) = 0x0;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E)) = 0x1;
            }
        } else {
            if (((*(int *)((t2 + 0x8))) & 4) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x0;
            }
            if (((*(int *)((t2 + 0x8))) & 0x2) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x0;
            }
            if ((0x20 & (*(int *)((t2 + 0x8)))) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)) = 0x0;
            }
            if ((0x10 & (*(int *)((t2 + 0x8)))) != 0) {
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
        t0 = 0x26;
        t1 = ((~(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E)))) & (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2A))));
    }
    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + t0)) = t1;
    return t0;
}
