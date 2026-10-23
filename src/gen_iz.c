/* Straight-line functions with calls and guards (batch gen_iz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_StartAction(int, int, int);
int FcvPlayBuffer(int, int);
int FcvStoreBuffer(int, int, float);
int Start_Pass_Judgement(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int psgEnterState5(int, int);
int psgSeatMatrix(int);
int psgUpdatePartTracks(int);
int psgFrameState5(int a4);

int psgFrameState5(int a4)
{
    int t0;
    float u9;
    int t61;
    float u63;
    int t72;
    int t10;

    t0 = *(int *)((a4 + 0x24));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            nlPushMatrix(0x0);
            psgSeatMatrix(a4);
            psgUpdatePartTracks(a4);
            FcvStoreBuffer((*(int *)((a4 + 0x34))), (a4 + 0x3C), (*(float *)((a4 + 0x38))));
            FcvPlayBuffer((a4 + 0x3C), (*(int *)((a4 + 0x0))));
            u9 = *(float *)((a4 + 0x38));
            *(float *)((a4 + 0x38)) = (u9 + 1.0f);
            if (((int)(u9 + 1.0f) == 5) && (t10 = *(int *)0xC1EE794, (int)t10 > 0)) {
                Start_Pass_Judgement(0xFFFFFFFF);
            }
            if ((*(float *)((a4 + 0x38))) == (*(float *)0xC070884)) {
                Drv_StartAction(0x7, 0x0, 0x1);
            }
            if (!((*(float *)0xC07088C) > (*(float *)((a4 + 0x38))))) {
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x20);
            }
            return nlPopMatrix(0x1);
        }
        nlPushMatrix(0x0);
        psgSeatMatrix(a4);
        psgUpdatePartTracks(a4);
        FcvStoreBuffer((*(int *)((a4 + 0x34))), (a4 + 0x3C), (*(float *)((a4 + 0x38))));
        FcvPlayBuffer((a4 + 0x3C), (*(int *)((a4 + 0x0))));
        *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + 1.0f);
        if (((*(signed char *)((a4 + 0x149))) & 16) != 0) {
            *(unsigned int *)((a4 + 0x24)) = ((*(int *)((a4 + 0x24))) + 0x1);
            psgEnterState5(a4, (*(int *)((a4 + 0x24))));
        } else {
            if (!((float)((*(int *)(((*(int *)((a4 + 0x34))) + 0x0))) - 2) > (*(float *)((a4 + 0x38))))) {
                psgEnterState5(a4, (*(int *)((a4 + 0x24))));
            }
        }
        return nlPopMatrix(0x1);
    }
    nlPushMatrix(0x0);
    psgSeatMatrix(a4);
    psgUpdatePartTracks(a4);
    t61 = *(int *)((a4 + 0x34));
    u63 = 58.0f;
    if (!(58.0f > (*(float *)((a4 + 0x38))))) {
    } else {
        u63 = (*(float *)((a4 + 0x38)));
    }
    FcvStoreBuffer(t61, (a4 + 0x3C), u63);
    FcvPlayBuffer((a4 + 0x3C), (*(int *)((a4 + 0x0))));
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + 1.0f);
    if (!((float)((*(int *)(((*(int *)((a4 + 0x34))) + 0x0))) - 2) > (*(float *)((a4 + 0x38))))) {
        t72 = *(int *)((a4 + 0x24));
        *(unsigned int *)((a4 + 0x24)) = (t72 + 0x1);
        psgEnterState5(a4, (t72 + 0x1));
    }
    return nlPopMatrix(0x1);
}
