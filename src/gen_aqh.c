/* Straight-line functions with calls and guards (batch gen_aqh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetAverageAngle(int, int, float);
int nlRand(void);
int breathSteer(int a4, int a5);

int breathSteer(int a4, int a5)
{
    int t0;
    int t33;
    float u47;
    int t90;
    int t93;
    int t92;
    int t97;
    int t70;
    int t26;

    t0 = *(int *)((a4 + 0x24));
    if (t0 != 0) {
        if (t0 != 1) {
            t33 = t0;
            if (t0 != 2) {
            } else {
                if ((int)(*(int *)((a4 + 0x20))) >= 0) {
                    *(unsigned int *)((a4 + 0xC)) = (short)(GetAverageAngle((*(int *)((a4 + 0xC))), 0xFFFFDC72, 0.98999995f));
                    *(unsigned int *)((a4 + 0x20)) = ((*(int *)((a4 + 0x20))) - 1);
                    if ((*(float *)0xC072784) > (*(float *)((a4 + 0x18)))) {
                        *(float *)((a4 + 0x18)) = ((*(float *)((a4 + 0x18))) + 0.00999999978f);
                    }
                    t26 = 0x18;
                } else {
                    *(unsigned int *)((a4 + 0xC)) = (short)(GetAverageAngle((*(int *)((a4 + 0xC))), 0x31C7, 0.98999995f));
                    if ((*(float *)0xC072788) > (*(float *)((a4 + 0x18)))) {
                        *(float *)((a4 + 0x18)) = ((*(float *)((a4 + 0x18))) + 0.00999999978f);
                    }
                    if (!(((*(float *)((a5 + 0x4))) + (*(float *)0xC07278C)) > (*(float *)((a4 + 0x4))))) {
                        *(unsigned int *)((a4 + 0x24)) = 0x0;
                    }
                    t26 = 0x4;
                }
                t33 = t26;
            }
            t70 = t33;
        } else {
            if (((int)((int)(*(int *)0xC1EE330) % (int)0x2D)) == 1) {
                u47 = (float)(*(int *)((a4 + 0x10)));
                u47 = u47 + 1274.0f * (float)(((int)((int)(nlRand()) % (int)0x5)) - 1);
                *(unsigned int *)((a4 + 0x14)) = (int)u47;
            }
            *(unsigned int *)((a4 + 0x10)) = (short)(GetAverageAngle((*(int *)((a4 + 0x10))), (*(int *)((a4 + 0x14))), 0.949999988f));
            *(unsigned int *)((a4 + 0xC)) = (short)(GetAverageAngle((*(int *)((a4 + 0xC))), 0xFFFFFF4A, 0.949999988f));
            *(unsigned int *)((a4 + 0x20)) = ((*(int *)((a4 + 0x20))) - 1);
            if (0.099999994f > (*(float *)((a4 + 0x18)))) {
                *(float *)((a4 + 0x18)) = ((*(float *)((a4 + 0x18))) + 0.00999999978f);
            }
            if ((int)(*(int *)((a4 + 0x20))) >= (int)0xFFFFFF10) {
            } else {
                *(unsigned int *)((a4 + 0x24)) = 0x0;
            }
            t70 = 0x18;
        }
        t97 = t70;
    } else {
        if (0.00999999978f > (*(float *)((a4 + 0x18)))) {
            *(float *)((a4 + 0x18)) = 0.00999999978f;
        } else {
            *(float *)((a4 + 0x18)) = ((*(float *)((a4 + 0x18))) * 0.899999976f);
        }
        *(unsigned int *)((a4 + 0xC)) = (short)(GetAverageAngle((*(int *)((a4 + 0xC))), 0x10, 0.98999995f));
        *(unsigned int *)((a4 + 0x20)) = 0xF0;
        t90 = (int)((int)(*(int *)0xC1EE330) % (int)0x78);
        t93 = t90;
        if (t90 != 0) {
        } else {
            t92 = (int)((int)(nlRand()) % (int)0x3);
            *(unsigned int *)((a4 + 0x24)) = t92;
            t93 = t92;
        }
        t97 = t93;
    }
    return t97;
}
