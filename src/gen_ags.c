/* Straight-line functions with calls and guards (batch gen_ags): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FcvPlay(int, int, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int Put_PoleMarriageKiss(void);

int Put_PoleMarriageKiss(void)
{
    int t10;
    int t12;
    int t11;

    nlPushMatrix(0x0);
    nlTranslateV(0xC13197C);
    nlTranslate((*(float *)0xC05D588), 0.0f, (*(float *)0xC05D584));
    nlRotateAY(((unsigned short)(*(short *)0xC2A9A64) + 0x8000));
    FcvPlay(0xC9C6C40, 0x21, (float)(*(int *)0xC2A9B90));
    t10 = *(int *)0xC2A9B90;
    t12 = (nlPopMatrix(0x1));
    if ((int)t10 < (int)0x40) {
        t11 = *(int *)0xC2A9B90;
        *(unsigned int *)0xC2A9B90 = (t11 + 0x1);
        t12 = (t11 + 0x1);
    }
    return t12;
}
