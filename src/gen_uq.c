/* Straight-line functions with calls and guards (batch gen_uq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckNameEntryPad(float f4, float f5);

int CheckNameEntryPad(float f4, float f5)
{
    int t22;
    float u23;
    int t24;
    float u48;
    int t31;
    float u35;
    float u32;
    float u39;
    float u37;
    float u1;
    int t93;
    int t87;
    int t81;
    int t76;
    int t72;

    if ((((*(int *)0xC1EE250) & 4) == 0) && (u1 = *(float *)0xC1EE2F8, !(u1 > 0.699999988f))) {
        if ((*(float *)0xC1EE2FC) > 0.699999988f) {
            if ((*(int *)0xC2864B8) == 0) {
                *(unsigned int *)0xC2864B0 = 0x1;
            }
            *(unsigned int *)0xC2864B8 = 0x1;
        } else {
            *(unsigned int *)0xC2864B8 = 0x0;
        }
    } else {
        if ((*(int *)0xC2864B8) == 0) {
            *(unsigned int *)0xC2864B0 = 0x1;
        }
        *(unsigned int *)0xC2864B8 = 0x1;
    }
    t22 = *(int *)0xC1EE250;
    u23 = *(float *)0xC1EE2F4;
    t24 = *(int *)0xC1EE24C;
    if (t22 != 0) {
        *(unsigned int *)0xC0EE9EC = 0x0;
    }
    u48 = u23;
    if ((0xC0 & (t24 | t22)) != 0) {
        if ((int)(*(int *)0xC0EE9EC) <= (int)0x64) {
            *(unsigned int *)0xC0EE9EC = ((*(int *)0xC0EE9EC) + 0x1);
        }
        t31 = *(int *)0xC0EE9EC;
        u35 = (u23 - ((float)t31 * 0.00999999978f));
        if ((0x40 & (t24 | t22)) != 0) {
        } else {
            u32 = u23;
            if (((t24 | t22) & 0x80) != 0) {
                u32 = (u23 + ((float)t31 * 0.00999999978f));
            }
            u35 = u32;
        }
        u39 = (-1.0f);
        if ((-1.0f) > u35) {
        } else {
            u37 = u35;
            if (u35 > 1.0f) {
                u37 = 1.0f;
            }
            u39 = u37;
        }
        u48 = u39;
    }
    if (_builtin_fabsf(u48) > (*(float *)0xC2864C0)) {
        *(float *)0xC2864C0 = _builtin_fabsf(u48);
    }
    if ((*(float *)0xC2864C0) > (_builtin_fabsf(u48) * 1.29999995f)) {
        *(float *)0xC2864C0 = (_builtin_fabsf(u48) * 1.29999995f);
    }
    if (0.099999994f > (*(float *)0xC2864C0)) {
        *(float *)0xC2864C0 = 0.099999994f;
    }
    if (_builtin_fabsf(u48) > ((*(float *)0xC2864C0) * 0.899999976f)) {
        *(float *)0xC2864C0 = ((*(float *)0xC2864C0) * 0.979999959f);
        if (u48 > 0.899999976f) {
            *(unsigned int *)0xC2864B4 = 0x4;
            t87 = 0xC039E24;
        } else {
            if (u48 > 0.199999988f) {
                *(unsigned int *)0xC2864B4 = 0x2;
                t81 = 0xC039E28;
            } else {
                if (u48 > 0.0f) {
                    *(unsigned int *)0xC2864B4 = 0x1;
                    t76 = 0xC039E28;
                } else {
                    if ((-0.9f) > u48) {
                        *(unsigned int *)0xC2864B4 = 0xFFFFFFFC;
                        t72 = 0xC039F88;
                    } else {
                        if ((-0.19999999f) > u48) {
                            *(unsigned int *)0xC2864B4 = 0xFFFFFFFE;
                        } else {
                            if (0.0f > u48) {
                                *(unsigned int *)0xC2864B4 = 0xFFFFFFFF;
                            }
                        }
                        t72 = 0xC039F8C;
                    }
                    t76 = t72;
                }
                t81 = t76;
            }
            t87 = t81;
        }
        t93 = t87;
    } else {
        *(unsigned int *)0xC2864B4 = 0x0;
        t93 = 0xC039E1C;
    }
    return t93;
}
