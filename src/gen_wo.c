/* Straight-line functions with calls and guards (batch gen_wo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int HomingPosX(int, float, float);
int ResetFadeColor(void);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int nd_SprPut(int, int, float, float);
int nlObjPutSetFadeColor(float, float, float);
void Put_Here_We_Go(int a4);

void Put_Here_We_Go(int a4)
{
    int t10;
    float u30;
    float u31;
    float u41;

    if (((int)a4 > 0) && ((int)a4 <= (int)0x150)) {
        *(unsigned int *)0xC2A8C94 = ((*(int *)0xC2A8C94) + 0x1);
        *(unsigned int *)0xC2A7F10 = 0x200A;
        if ((*(int *)0xC2A8C94) == 1) {
            Voice_ShutUp(0x0);
            Voice_Request(0xC130B18, 0x0, 0x7F, 0x0);
        }
        t10 = *(int *)0xC2A8C94;
        if (((int)t10 > (int)0xDD) && ((int)t10 <= (int)0xF1)) {
            nlObjPutSetFadeColor(1.0f, 0.643137217f, 0.160784304f);
            HomingPosX(0xC2A8C98, 0.199999988f, 0.0f);
            if (!(-6.0f > (*(float *)0xC2A8C98))) {
                *(float *)0xC2A7F08 = 1.0f;
            } else {
                *(float *)0xC2A7F08 = 0.5f;
            }
            *(unsigned int *)0xC2A7F04 = 0x0;
            nd_SprPut(0xC2A7EDC, 0x19A, ((*(float *)0xC2A8C98) + 320.0f), 240.0f);
            nd_SprPut(0xC2A7EDC, 0x19A, (320.0f - (*(float *)0xC2A8C98)), 240.0f);
            ResetFadeColor();
    return;
        }
        if (((int)t10 > (int)0xF3) && ((int)t10 <= (int)0x107)) {
            nlObjPutSetFadeColor(1.0f, 0.6431372f, 0.1607843f);
            HomingPosX(0xC2A8C9C, 0.19999999f, 0.0f);
            *(unsigned int *)0xC2A7F04 = 0x0;
            if (!((-6.0f) > (*(float *)0xC2A8C9C))) {
                *(float *)0xC2A7F08 = 1.0f;
            } else {
                *(float *)0xC2A7F08 = 0.5f;
            }
            u30 = 3.2e+02f;
            u31 = 2.4e+02f;
            nd_SprPut(0xC2A7EDC, 0x19B, ((*(float *)0xC2A8C9C) + u30), u31);
            nd_SprPut(0xC2A7EDC, 0x19B, (u30 - (*(float *)0xC2A8C9C)), u31);
            ResetFadeColor();
    return;
        }
        if (((int)t10 >= (int)0x10A) && ((int)t10 <= (int)0x146)) {
            *(unsigned int *)0xC2A8CA4 = ((int)((int)((*(int *)0xC2A8CA4) + 0x1) % (int)0x1E));
            nlObjPutSetFadeColor(0.9960784f, 0.2862745f, 0.0f);
            u41 = *(float *)0xC2A7EEC;
            *(float *)0xC2A7EEC = (u41 + 0.099999994f);
            *(float *)0xC2A7EF0 = (u41 + 0.099999994f);
            *(unsigned int *)0xC2A7F04 = 0x0;
            if ((*(float *)0xC2A7F08) > 0.0f) {
                *(float *)0xC2A7F08 = ((*(float *)0xC2A7F08) - 0.0199999996f);
            }
            nd_SprPut(0xC2A7EDC, 0x63, (*(float *)0xC2A8CA0), 2.4e+02f);
            ResetFadeColor();
    return;
        }
        return;
    }
}
