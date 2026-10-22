/* Straight-line functions with calls and guards (batch gen_tr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int HomingPosX(int, float, float);
int nlSprPut(int);
void selectDrawPanels(void);

void selectDrawPanels(void)
{
    int t0;

    t0 = 0x0;
    for (;;) {
        if (((*(int *)(((*(int *)0xC2A751C) + 0x0))) == 3) && (t0 == 2)) {
            break;
        }
        if ((*(int *)0xC2A759C) == 1) {
            if (0.0f > (*(float *)0xC2A750C)) {
                *(float *)0xC2A750C = ((*(float *)0xC2A750C) + 30.0f);
            } else {
                HomingPosX(0xC2A750C, 0.599999964f, 0.0f);
            }
        }
        *(float *)0xC2A73C4 = ((float)(((((t0 << 2) << 2) << 2) << 1) + 0x50) + (*(float *)0xC2A750C));
        *(unsigned int *)0xC2A73C0 = (*(int *)(((t0 << 2) + (*(int *)((0xC13049C + ((*(int *)(((*(int *)0xC2A751C) + 0x0))) << 2)))))));
        *(unsigned int *)0xC2A73E8 = 0x0;
        nlSprPut(0xC2A73C0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x3) {
            break;
        }
    }
}
