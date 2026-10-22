/* Straight-line functions with calls and guards (batch gen_er): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
float nlLength(int, int);
void setObjHitPin(int a4);

void setObjHitPin(int a4)
{
    int t0;
    int t1;
    float t2;
    float u3;
    float u4;
    int t5;
    int t6;
    int t7;
    float u13;
    int t14;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    float u27;
    int t28;

    t0 = *(int *)((a4 + 0x6C));
    t1 = *(int *)(((t0 << 2) + 0xC275824));
    if (t1 == 0) {
        t2 = nlLength((a4 + 0xC), (a4 + 0x58));
        if (!(t2 > (1.0f + 1.0f))) {
            u3 = *(float *)0xC038FDC;
            u4 = *(float *)((a4 + 0x40));
            if (u3 > u4) {
                t5 = *(int *)0xC2A991C;
                if (t5 == 0) {
                    t6 = *(int *)((a4 + 0x6C));
                    *(unsigned int *)(((t6 << 2) + 0xC275824)) = 0x1;
                    t7 = *(int *)0xC275940;
                    *(unsigned int *)0xC275940 = (t7 - 1);
                }
                u13 = *(float *)0xC038FE4;
                t14 = 0x30FA9;
                if (t2 > u13) {
                    t14 = 0xFA9;
                }
                Sound_Request(t14, 0x0);
    return;
            }
            t16 = *(int *)(((a4 + 0xC) + 0x8));
            *(unsigned int *)(((a4 + 0x58) + 0x8)) = t16;
            t17 = *(int *)(((a4 + 0xC) + 0x4));
            *(unsigned int *)(((a4 + 0x58) + 0x4)) = t17;
            t18 = *(int *)(((a4 + 0xC) + 0x0));
            *(unsigned int *)(((a4 + 0x58) + 0x0)) = t18;
            return;
        }
        t19 = *(int *)0xC2A991C;
        if (t19 == 0) {
            t20 = *(int *)((a4 + 0x6C));
            *(unsigned int *)(((t20 << 2) + 0xC275824)) = 0x1;
            t21 = *(int *)0xC275940;
            *(unsigned int *)0xC275940 = (t21 - 1);
        }
        u27 = *(float *)0xC038FE4;
        t28 = 0x30FA9;
        if (t2 > u27) {
            t28 = 0xFA9;
        }
        Sound_Request(t28, 0x0);
    return;
    }
}
