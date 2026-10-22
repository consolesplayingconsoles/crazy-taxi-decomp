/* Straight-line functions with calls and guards (batch gen_sz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetWindow(int, int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
void AnnounceSecretFlag(int a4);

void AnnounceSecretFlag(int a4)
{
    int t1;
    int t4;
    int t6;
    int t7;
    int t8;
    int t5;
    int t17;
    int t18;

    if (a4 == 0) {
        *(unsigned int *)0xC2A1234 = 0x0;
    } else {
        t1 = *(int *)0xC2A1234;
        if ((t1 & 1) != 0) {
            SetWindow(0x10, 0x0);
            *(unsigned int *)0xC2A1234 = ((*(int *)0xC2A1234) & 0xFFFFFFFE);
        } else {
            t4 = t1;
            t6 = a4;
            t7 = 0x0;
            t8 = 0x0;
            for (;;) {
                if (((*(int *)0xC2A1234) & (((int)t8 >= 0) ? (0x2 << (t8 & 31)) : ((-(int)t8 & 31) ? ((int)0x2 >> (-(int)t8 & 31)) : ((int)0x2 >> 31)))) != 0) {
                    t6 = 0x0;
                    t4 = (Voice_ShutUp(t6));
                    t4 = 0xC0A2154;
                    t5 = t8;
                    t5 = (t5 << 2);
                    t7 = 0x0;
                    *(unsigned int *)0xC0EF550 = (*(int *)((t5 + t4)));
                    t6 = 0xC0EF550;
                    t4 = (Voice_Request(t6, t7, 0x7F, 0x0));
                    *(unsigned int *)0xC2A1234 = ((*(int *)0xC2A1234) & (~(((int)t8 >= 0) ? (0x2 << (t8 & 31)) : ((-(int)t8 & 31) ? ((int)0x2 >> (-(int)t8 & 31)) : ((int)0x2 >> 31)))));
                } else {
                    t17 = t6;
                    t18 = t7;
                }
                t5 = 0x4;
                t6 = t17;
                t7 = t18;
                t8 = (t8 + 0x1);
                if ((int)t8 >= (int)t5) {
                    break;
                }
            }
            if (((*(int *)0xC2A1234) & 32) != 0) {
                Voice_ShutUp(0x0);
                *(unsigned int *)0xC0EF550 = 0xA1;
                Voice_Request(0xC0EF550, 0x0, 0x7F, 0x0);
                *(unsigned int *)0xC2A1234 = ((*(int *)0xC2A1234) & 0xFFFFFFDF);
            }
        }
    }
}
