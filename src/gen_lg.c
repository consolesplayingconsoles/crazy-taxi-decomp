/* Straight-line functions with calls and guards (batch gen_lg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlAddVector3op(int, int, int);
int nlGetTranslate(int);
int nlMultiMatrix(int);
int nlRotateAY(int);
int nlTranslateV(int);
int psgSeatMatrix(int a4);

int psgSeatMatrix(int a4)
{
    int t2;
    int t7;
    int t8;
    int t10;
    int t3;
    int t4;
    int stk[9];

    nlMultiMatrix(0xC179180);
    t2 = *(int *)0xC179488;
    if ((((*(int *)0xC1EE20C) == 2) && (t3 = *(int *)0xC1EE214, t3 == 11)) || (t4 = *(int *)0xC1EE214, t4 == 14)) {
        if ((*(int *)0xC1EE214) == 11) {
            t7 = *(signed char *)((a4 + 0x154));
            t8 = *(signed char *)0xC2A98EC;
            nlAddVector3op(((int)stk + 4), ((unsigned char)(((t2 << 1) + t2) << 2) + 0xC0D55C4), ((signed char)(((((t7 + t8) - 7) << 1) + ((t7 + t8) - 7)) << 2) + 0xC13F3BC));
        } else {
            t10 = *(signed char *)((a4 + 0x154));
            nlAddVector3op(((int)stk + 4), ((unsigned char)(((t2 << 1) + t2) << 2) + 0xC0D55C4), ((signed char)(((t10 << 1) + t10) << 2) + 0xC13F3BC));
        }
        nlTranslateV(((int)stk + 4));
    } else {
        nlTranslateV(((((t2 << 1) + t2) << 2) + 0xC0D55C4));
    }
    nlRotateAY(0x8000);
    return (nlGetTranslate((a4 + 0x4)));
}
