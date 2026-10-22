/* Straight-line functions with calls and guards (batch gen_afj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckClipping(float);
int IsBoyFriend(int, int);
int humanDraw(int, int, int, int);
float nlLength(int, int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlTranslateV(int);
int psgFaceBoyFriend(int);
int psgFaceTaxi(int);
int psgPutMarker(int, int);
int psgPutShadow(int);
int psgUpdatePartTracks(int);
int psgFrameState0(int a4);

int psgFrameState0(int a4)
{
    float t1;
    int t38;
    int t15;

    *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x40);
    t1 = nlLength(0xC179840, (a4 + 0x4));
    if (t1 > (*(float *)0xC13EED0)) {
        nlPushMatrix(0x0);
        *(unsigned int *)((a4 + 0x10)) = (unsigned short)(*(short *)0xC17985A);
        nlTranslateV((a4 + 0x4));
        nlRotateAY(((*(int *)((a4 + 0x10))) + 0x8000));
        nlObjPutUseViewMatrix((*(int *)(((((*(int *)((a4 + 0x0))) - 23) << 2) + 0xC13F410))));
        nlPopMatrix(0x1);
    } else {
        if ((CheckClipping(5.0f)) != 0) {
            nlPushMatrix(0x0);
            if (((*(int *)0xC1EE20C) == 2) && (t15 = *(int *)0xC1EE214, t15 == 8)) {
                if ((IsBoyFriend((*(int *)((a4 + 0x0))), 0x0)) == 0) {
                    psgFaceBoyFriend(a4);
                } else {
                    psgFaceTaxi(a4);
                }
            } else {
                psgFaceTaxi(a4);
            }
            psgPutShadow(a4);
            psgUpdatePartTracks(a4);
            humanDraw((*(int *)((a4 + 0x34))), (*(int *)((a4 + 0x0))), (int)(*(float *)((a4 + 0x38))), 0x0);
            nlPopMatrix(0x1);
        }
        *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + 1.0f);
    }
    t38 = 0x1;
    if (t1 > 1000.0f) {
        t38 = 0x0;
    }
    return psgPutMarker(a4, t38);
}
