extern int setObjPieceExecSleep();
/* setObjHitScatter: the callback that scatters the pieces of a broken object. Written from the generator's C with two changes the original needs:
   the float it returns is what its last call, KillColliObj, leaves in fr0 (that call is declared to return a float and its result is
   returned), and the sum added to each position is computed first (a volatile temporary), because the original adds old + (random - 0.5)
   and the compiler would otherwise add the terms in the other order, which differs in float. */

int GetRotVec(int);
float KillColliObj(int);
int MultiRot4Vec(int);
int SetColliObj(int, int);
int SetEffect(int, int, int);
int nlGetPushedMatrix(int);
int nlGetTranslate(int);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
float nlRandom(void);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlTranslateV(int);
int set_event(int, int);
float setObjHitScatter(int a4);

float setObjHitScatter(int a4)
{
    float t0;
    int t6;
    int t8;
    int t9;
    int t11;
    float u51;
    int t5;
    int t7;
    int t12;

    t0 = nlLength((a4 + 0xC), (a4 + 0x58));
    if (!(t0 > (1.0f + 1.0f))) {
        u51 = t0;
    } else {
        nlPushUnitMatrix();
        nlTranslateV(a4);
        MultiRot4Vec((a4 + 0x30));
        nlPushMatrix(0x0);
        t6 = 0x0;
        for (;;) {
            t8 = set_event(0x84, ((int)setObjPieceExecSleep));
            if (t8 != 0) {
                t7 = t8;
                t7 = (t7 + 0x14);
                t9 = a4;
                t11 = t7;
                for (;;) { t12 = *(int *)t9; t9 = (t9 + 4); if ((unsigned int)((a4 + 112)) < (unsigned int)t9) break; *(unsigned int *)t11 = t12; t11 = (t11 + 4); }
                nlGetPushedMatrix(0x0);
                t5 = t6;
                t5 = (t5 << 2);
                t5 = (t5 << 2);
                nlTranslateV((t5 + 0xC0EE624));
                if ((int)t6 > (int)0x3) {
                    nlRotateAZ(0xE0B7);
                    nlRotateAY((*(int *)(((t5 + 0xC0EE624) + 0xC))));
                    GetRotVec((t7 + 0x30));
                }
                nlGetTranslate(t7);
                *(unsigned int *)((t7 + 0x54)) = 0xC0EDF8C;
                *(unsigned int *)((t7 + 0x64)) = (*(int *)(((*(int *)0xC0EE220) + 0x0)));
                { volatile float rr = ((nlRandom()) + -0.5f); *(float *)(((0xC + t7) + 0x0)) = (*(float *)(((0xC + t7) + 0x0)) + rr); }
                { volatile float rr = ((nlRandom()) + -0.5f); *(float *)(((0x10 + t7) + 0x0)) = (*(float *)(((0x10 + t7) + 0x0)) + rr); }
                { volatile float rr = ((nlRandom()) + -0.5f); *(float *)(((0x14 + t7) + 0x0)) = (*(float *)(((0x14 + t7) + 0x0)) + rr); }
                SetColliObj(t7, 0x10);
                if ((int)(nlRand()) < (int)0x6000) {
                    SetEffect(t7, (t7 + 0xC), 0x2);
                }
            }
            t6 = (t6 + 0x1);
            if ((int)t6 >= (int)0x8) {
                break;
            }
        }
        nlPopMatrix(0x2);
        u51 = KillColliObj(a4);
        *(unsigned int *)((a4 + 0x68)) = 0xFFFFFFFE;
    }
    return u51;
}
