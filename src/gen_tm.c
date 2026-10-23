/* Straight-line functions with calls and guards (batch gen_tm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckClipping(float);
int humanDraw(int, int, int, int);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlTranslateV(int);
void HesLate(void);

void HesLate(void)
{
    float u0;
    int t5;
    int t30;
    int t31;
    int t32;
    int stk[8];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC0D6128); }
    u0 = *(float *)0xC072540;
    if (((*(int *)0xC13F4B8) & 1) == 0) {
        if (((*(signed char *)0xC2AD1DF) & 2) != 0) {
            if (u0 > (nlLength(((int)stk + 4), 0xC179840))) {
                t5 = *(int *)0xC2AD1D8;
                *(unsigned int *)0xC13F4F4 = t5;
                if ((*(int *)((0x140 + t5))) == 15) {
                    *(unsigned int *)0xC13F4B8 = ((*(int *)0xC13F4B8) | 0x1);
                }
            }
        }
    } else {
        if ((CheckClipping((*(float *)0xC07255C))) != 0) {
            nlPushMatrix(0x0);
            nlTranslateV(((int)stk + 4));
            nlRotateAY(0xD680);
            humanDraw(0xCADBCA8, 0x16, 0x0, 0x0);
            nlPopMatrix(0x1);
        }
        t30 = *(int *)0xC13F4F4;
        if ((t30 != 0) && ((t31 = *(int *)((t30 + 0x20)), t31 == 4) && (t32 = *(int *)((t30 + 0x24)), t32 == 3))) {
            *(unsigned int *)0xC13F4B8 = ((*(int *)0xC13F4B8) & 0xFFFFFFFE);
            *(unsigned int *)0xC13F4F4 = 0x0;
        }
        if ((nlLength(((int)stk + 4), 0xC179840)) > u0) {
            *(unsigned int *)0xC13F4B8 = ((*(int *)0xC13F4B8) & 0xFFFFFFFE);
            *(unsigned int *)0xC13F4F4 = 0x0;
        }
    }
}
