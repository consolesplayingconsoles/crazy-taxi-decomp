/* Straight-line functions with calls and guards (batch gen_wc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int HomingPosX(int, float, float);
int ResetFadeColor(void);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int nd_SprPut(int, int, float, float);
int nlObjPutSetFadeColor(float, float, float);
void Put_ReadySetGo(int a4);

void Put_ReadySetGo(int a4)
{
    int t10;
    float u12;
    float u34;
    float u35;
    float u37;

    if (((int)a4 > 0) && ((int)a4 <= (int)0x104)) {
        *(unsigned int *)0xC2A9A44 = ((*(int *)0xC2A9A44) + 0x1);
        *(unsigned int *)0xC2A98CC = 0x200A;
        if ((*(int *)0xC2A9A44) == 1) {
            Voice_ShutUp(0x0);
            Voice_Request(0xC1311D0, 0x0, 0x7F, 0x0);
        }
        t10 = *(int *)0xC2A9A44;
        if ((int)t10 <= (int)0x8C) {
            u12 = *(float *)0xC2A98C4;
            *(float *)0xC2A98C4 = (*(float *)0xC2A9A58);
            nlObjPutSetFadeColor(1.0f, 0.643137217f, 0.160784304f);
            HomingPosX(0xC2A9A48, 0.099999994f, 0.0f);
            *(float *)0xC2A9A48 = (float)(int)(*(float *)0xC2A9A48);
            *(float *)0xC2A98A8 = 1.0f;
            *(float *)0xC2A98AC = 1.0f;
            if (!(-6.0f > (*(float *)0xC2A9A48))) {
                *(float *)0xC2A98C4 = 1.0f;
            } else {
                *(float *)0xC2A98C4 = 0.5f;
            }
            *(unsigned int *)0xC2A98C0 = 0x0;
            nd_SprPut(0xC2A9898, 0x75, ((*(float *)0xC2A9A48) + 320.0f), 240.0f);
            nd_SprPut(0xC2A9898, 0x75, (320.0f - (*(float *)0xC2A9A48)), 240.0f);
            ResetFadeColor();
            *(float *)0xC2A9A58 = (*(float *)0xC2A98C4);
            *(float *)0xC2A98C4 = u12;
            return;
        }
        if (1 && ((int)t10 <= (int)0xB4)) {
            if (t10 == 0x8D) {
                *(float *)0xC2A9A58 = 1.0f;
                Voice_ShutUp(0x0);
                Voice_Request(0xC1311E8, 0x0, 0x7F, 0x0);
            }
            u34 = *(float *)0xC2A98C4;
            u35 = *(float *)0xC2A98A8;
            u37 = *(float *)0xC2A98AC;
            *(float *)0xC2A98A8 = (*(float *)0xC2A9A54);
            *(float *)0xC2A98A8 = ((*(float *)0xC2A98A8) + 0.099999994f);
            *(float *)0xC2A98C4 = (*(float *)0xC2A9A58);
            *(float *)0xC2A98AC = (*(float *)0xC2A98A8);
            *(unsigned int *)0xC2A9A50 = ((int)((int)((*(int *)0xC2A9A50) + 0x1) % (int)0x1E));
            nlObjPutSetFadeColor(0.996078372f, 0.286274493f, 0.0f);
            *(unsigned int *)0xC2A98C0 = 0x0;
            if ((*(float *)0xC2A98C4) > 0.0f) {
                *(float *)0xC2A98C4 = ((*(float *)0xC2A98C4) - 0.0199999996f);
            }
            nd_SprPut(0xC2A9898, 0x63, (*(float *)0xC2A9A4C), 240.0f);
            ResetFadeColor();
            *(float *)0xC2A9A54 = (*(float *)0xC2A98A8);
            *(float *)0xC2A9A58 = (*(float *)0xC2A98C4);
            *(float *)0xC2A98C4 = u34;
            *(float *)0xC2A98A8 = u35;
            *(float *)0xC2A98AC = u37;
            return;
        }
        return;
    }
}
