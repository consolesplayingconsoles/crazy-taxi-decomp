/* Straight-line functions with calls and guards (batch gen_tv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int extRand(void);
int pcarTurnSelect(int a4);

int pcarTurnSelect(int a4)
{
    int t1;
    int t3;
    int t4;
    int t6;
    int t47;
    int t13;
    int t15;
    int t39;
    int t56;
    int t35;
    int t43;

    t1 = *(int *)((a4 + 0x80));
    t3 = *(int *)(((*(int *)((((((t1 << 1) + t1) << 2) + (*(int *)0xC2A6690)) + 0x4))) + 0x0));
    t4 = 0x2;
    if ((int)(t3 - 14) > (int)0x2) {
        t4 = (t3 - 14);
    }
    t6 = *(int *)((a4 + 0xD4));
    if (((int)t6 < (int)t4) && ((int)t6 > 0)) {
        *(unsigned int *)((a4 + 0x84)) = ((*(int *)((a4 + 0x84))) & 0xFFFF8DFF);
        t56 = 0x84;
    } else {
        t47 = 0x84;
        if (((*(int *)((a4 + 0x84))) & 0x1000) == 0) {
            *(unsigned int *)((a4 + 0x84)) = ((*(int *)((a4 + 0x84))) | 0x1000);
            *(unsigned int *)((a4 + 0x84)) = ((*(int *)((a4 + 0x84))) & 0xFFFFF3FF);
            t13 = *(int *)((a4 + 0x80));
            t15 = *(int *)((((((t13 << 1) + t13) << 2) + (*(int *)0xC2A6690)) + 0x8));
            if ((*(short *)((t15 + 0x6))) != 0) {
                if (((extRand()) & 1) != 0) {
                    *(unsigned int *)((a4 + 0x84)) = ((*(int *)((a4 + 0x84))) | 0x200);
                }
            }
            if (((*(int *)((a4 + 0x84))) & 0x200) == 0) {
                t35 = (short)((unsigned int)(*(int *)((t15 + 0x0))) >> 16);
            } else {
                t35 = ((int)(*(int *)((t15 + 0x0))) >> 18);
            }
            if ((t35 & 0x3) == 2) {
                *(unsigned int *)((a4 + 0x84)) = ((*(int *)((a4 + 0x84))) | 0x4000);
                t43 = 0x84;
            } else {
                t39 = (t35 & 0x3);
                if ((t35 & 0x3) == 1) {
                    *(unsigned int *)((a4 + 0x84)) = ((*(int *)((a4 + 0x84))) | 0x2000);
                    t39 = 0x84;
                }
                t43 = t39;
            }
            t47 = t43;
        }
        t56 = t47;
    }
    return t56;
}
