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
    int t0;
    int t1;
    int t10;
    float u11;
    float u12;
    float u15;
    float u16;
    float u19;
    float u21;
    float u24;
    float u34;
    float u35;
    float u36;
    float u37;
    float u38;
    float u39;
    float u40;
    int t41;
    int t42;
    float u44;
    float u45;
    float u50;
    float u53;
    float u54;

    if (((int)a4 > 0) && ((int)a4 <= (int)0x104)) {
        t0 = *(int *)0xC2A9A44;
        *(unsigned int *)0xC2A9A44 = (t0 + 0x1);
        *(unsigned int *)0xC2A98CC = 0x200A;
        t1 = *(int *)0xC2A9A44;
        if (t1 == 1) {
            Voice_ShutUp(0x0);
            Voice_Request(0xC1311D0, 0x0, 0x7F, 0x0);
        }
        t10 = *(int *)0xC2A9A44;
        if ((int)t10 <= (int)0x8C) {
            u11 = *(float *)0xC2A9A58;
            u12 = *(float *)0xC2A98C4;
            *(float *)0xC2A98C4 = u11;
            nlObjPutSetFadeColor(1.0f, 0.643137217f, 0.160784304f);
            HomingPosX(0xC2A9A48, 0.099999994f, 0.0f);
            u15 = *(float *)0xC2A9A48;
            *(float *)0xC2A9A48 = (float)(int)u15;
            *(float *)0xC2A98A8 = 1.0f;
            *(float *)0xC2A98AC = 1.0f;
            u16 = *(float *)0xC2A9A48;
            if (!(-6.0f > u16)) {
                *(float *)0xC2A98C4 = 1.0f;
            } else {
                *(float *)0xC2A98C4 = 0.5f;
            }
            *(unsigned int *)0xC2A98C0 = 0x0;
            u19 = *(float *)0xC2A9A48;
            nd_SprPut(0xC2A9898, 0x75, (u19 + 320.0f), 240.0f);
            u21 = *(float *)0xC2A9A48;
            nd_SprPut(0xC2A9898, 0x75, (320.0f - u21), 240.0f);
            ResetFadeColor();
            u24 = *(float *)0xC2A98C4;
            *(float *)0xC2A9A58 = u24;
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
            u36 = *(float *)0xC2A9A54;
            u37 = *(float *)0xC2A98AC;
            *(float *)0xC2A98A8 = u36;
            u38 = *(float *)0xC2A98A8;
            *(float *)0xC2A98A8 = (u38 + 0.099999994f);
            u39 = *(float *)0xC2A9A58;
            *(float *)0xC2A98C4 = u39;
            u40 = *(float *)0xC2A98A8;
            *(float *)0xC2A98AC = u40;
            t41 = *(int *)0xC2A9A50;
            t42 = (int)((int)(t41 + 0x1) % (int)0x1E);
            *(unsigned int *)0xC2A9A50 = t42;
            nlObjPutSetFadeColor(0.996078372f, 0.286274493f, 0.0f);
            *(unsigned int *)0xC2A98C0 = 0x0;
            u44 = *(float *)0xC2A98C4;
            if (u44 > 0.0f) {
                u45 = *(float *)0xC2A98C4;
                *(float *)0xC2A98C4 = (u45 - 0.0199999996f);
            }
            u50 = *(float *)0xC2A9A4C;
            nd_SprPut(0xC2A9898, 0x63, u50, 240.0f);
            ResetFadeColor();
            u53 = *(float *)0xC2A98A8;
            *(float *)0xC2A9A54 = u53;
            u54 = *(float *)0xC2A98C4;
            *(float *)0xC2A9A58 = u54;
            *(float *)0xC2A98C4 = u34;
            *(float *)0xC2A98A8 = u35;
            *(float *)0xC2A98AC = u37;
            return;
        }
        return;
    }
}
