extern int pcarExec();
/* Straight-line functions with calls and guards (batch gen_oz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int courseStatusGet(int, int, int, int);
int extRand(void);
int getNearLinkedLine(int, int, int, int, int);
int pcarRejoinLane(int a4);

int pcarRejoinLane(int a4)
{
    int t0;
    int t1;
    int t12;
    int t3;
    int t22;
    int t26;
    float u25;
    int t41;
    int t33;

    t0 = *(int *)((a4 + 0x84));
    if (((t0 & 0xC00) != 0x400) && ((t0 & 0xC00) != 0x800)) {
        t1 = extRand();
        t12 = t1;
        if ((t1 & 0x3FF) == 0) {
            *(unsigned int *)((a4 + 0x84)) = ((*(int *)((a4 + 0x84))) & 0xFFFFF3FF);
            t3 = *(int *)((a4 + 0x80));
            if (((*(int *)(((*(int *)((((((t3 << 1) + t3) << 2) + (*(int *)0xC2A6690)) + 0x8))) + 0x0))) & 0x4000) != 0) {
                *(unsigned int *)((a4 + 0x84)) = ((*(int *)((a4 + 0x84))) | 0x800);
            } else {
                *(unsigned int *)((a4 + 0x84)) = ((*(int *)((a4 + 0x84))) | 0x400);
            }
            *(unsigned int *)((a4 + 0x11C)) = 0x10E;
            t12 = 0x11C;
        }
        t41 = t12;
    } else {
        if ((float)(*(int *)((a4 + 0x11C))) > 150.0f) {
            *(unsigned int *)((a4 + 0x11C)) = ((*(int *)((a4 + 0x11C))) - 1);
            t33 = 0x11C;
        } else {
            getNearLinkedLine(0x2, 0x0, (0x80 + a4), (0xD4 + a4), (0x8C + a4));
            t22 = courseStatusGet((*(int *)((a4 + 0x80))), ((*(int *)((a4 + 0xD4))) - 2), 0x0, 0x8);
            t26 = t22;
            if (t22 == 0) {
                *(unsigned int *)((a4 + 0xC)) = ((int)pcarExec);
                *(unsigned int *)((a4 + 0x84)) = ((*(int *)((a4 + 0x84))) & 0xFFFFFFEF);
                u25 = 0.0599999987f;
                u25 = u25 + 0.00999999978f * (1000.0f / (*(float *)((a4 + 0xB4))));
                *(float *)((a4 + 0xD0)) = u25;
                t26 = 0xD0;
            }
            t33 = t26;
        }
        t41 = t33;
    }
    return t41;
}
