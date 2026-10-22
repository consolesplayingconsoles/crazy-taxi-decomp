/* Straight-line functions with calls and guards (batch gen_oo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int HomingPosX(int, float, float);
int nlSprPut(int);
void selectDrawPanels(void);

void selectDrawPanels(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    float u4;
    float u5;
    float u15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t21;
    float u22;
    float u23;
    float u33;
    int t34;
    int t35;
    int t36;
    int t37;

    t0 = 0x0;
    for (;;) {
        t1 = *(int *)0xC2A751C;
        t2 = *(int *)((t1 + 0x0));
        if (t2 == 3) {
            if (t0 != 2) {
                t3 = *(int *)0xC2A759C;
                if (t3 == 1) {
                    u4 = *(float *)0xC2A750C;
                    if (0.0f > u4) {
                        u5 = *(float *)0xC2A750C;
                        *(float *)0xC2A750C = (u5 + 30.0f);
                    } else {
                        HomingPosX(0xC2A750C, 0.599999964f, 0.0f);
                    }
                }
                u15 = *(float *)0xC2A750C;
                *(float *)0xC2A73C4 = ((float)(((((t0 << 2) << 2) << 2) << 1) + 0x50) + u15);
                t16 = *(int *)0xC2A751C;
                t17 = *(int *)((t16 + 0x0));
                t18 = *(int *)((0xC13049C + (t17 << 2)));
                t19 = *(int *)(((t0 << 2) + t18));
                *(unsigned int *)0xC2A73C0 = t19;
                *(unsigned int *)0xC2A73E8 = 0x0;
                nlSprPut(0xC2A73C0);
                t0 = (t0 + 0x1);
                if ((int)t0 >= (int)0x3) {
                    break;
                }
                continue;
            }
            break;
        }
        t21 = *(int *)0xC2A759C;
        if (t21 == 1) {
            u22 = *(float *)0xC2A750C;
            if (0.0f > u22) {
                u23 = *(float *)0xC2A750C;
                *(float *)0xC2A750C = (u23 + 30.0f);
            } else {
                HomingPosX(0xC2A750C, 0.599999964f, 0.0f);
            }
        }
        u33 = *(float *)0xC2A750C;
        *(float *)0xC2A73C4 = ((float)(((((t0 << 2) << 2) << 2) << 1) + 0x50) + u33);
        t34 = *(int *)0xC2A751C;
        t35 = *(int *)((t34 + 0x0));
        t36 = *(int *)((0xC13049C + (t35 << 2)));
        t37 = *(int *)(((t0 << 2) + t36));
        *(unsigned int *)0xC2A73C0 = t37;
        *(unsigned int *)0xC2A73E8 = 0x0;
        nlSprPut(0xC2A73C0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x3) {
            break;
        }
    }
}
