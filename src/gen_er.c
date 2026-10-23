/* Straight-line functions with calls and guards (batch gen_er): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ResetFadeColor(void);
int Result_Awesome_Put(void);
int Result_Crazy_Put(void);
int Sound_Request(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int, int, int);
void Result_Class_Put(void);

void Result_Class_Put(void)
{
    int t1;
    int t73;
    int t70;

    t1 = *(int *)0xC2A97A8;
    if ((int)(*(int *)0xC2A96F4) <= (int)t1) {
        return;
    }
    if ((*(int *)0xC2A982C) != 1) {
        *(unsigned int *)0xC2A96F4 = t1;
        return;
    }
    if ((*(int *)0xC2A9830) != 1) {
        *(unsigned int *)0xC2A96F4 = t1;
        return;
    }
    if ((*(int *)0xC2A9834) != 1) {
        *(unsigned int *)0xC2A96F4 = t1;
        return;
    }
    if ((*(int *)0xC2A9838) != 1) {
        *(unsigned int *)0xC2A96F4 = t1;
        return;
    }
    if ((*(int *)0xC2A983C) != 1) {
        *(unsigned int *)0xC2A96F4 = t1;
        return;
    }
    if ((*(int *)0xC2A9840) != 1) {
        *(unsigned int *)0xC2A96F4 = t1;
        return;
    }
    if ((*(int *)0xC2A9844) != 1) {
        *(unsigned int *)0xC2A96F4 = t1;
        return;
    }
    if ((*(int *)0xC2A9848) == 1) {
        if ((*(int *)0xC2A97E0) == 1) {
            *(unsigned int *)0xC2A97E4 = ((*(int *)0xC2A97E4) + 0x1);
        }
        if ((*(int *)0xC2A96F4) == ((*(int *)0xC2A97A8) + 0x1)) {
            Sound_Request(0x405A9, 0x0);
            *(unsigned int *)0xC130E04 = ((*(int *)0xC130E04) + 0x1);
            *(unsigned int *)0xC2A9754 = 0x1;
        } else {
            t70 = 0xC2A96F4;
        }
        t73 = *(int *)0xC2A97D8;
        if (t73 == 0x3E7) {
            nlObjPutSetFadeColor(0.75f, 0.0f, 0.0f);
            Result_Crazy_Put();
            ResetFadeColor();
    return;
        }
        if (t73 == 99) {
            nlObjPutSetFadeColor(0.75f, 0.0f, 0.0f);
            Result_Awesome_Put();
            ResetFadeColor();
    return;
        }
        *(unsigned int *)0xC2A96F8 = (*(int *)(((t73 << 2) + 0xC130E80)));
        *(float *)0xC2A96FC = (164.0f);
        *(float *)0xC2A9700 = (float)((*(int *)0xC2A9748) + 0x18C);
        *(float *)0xC2A9708 = ((*(float *)0xC2A9758) + 1.0f);
        *(float *)0xC2A970C = ((*(float *)0xC2A9758) + 1.0f);
        *(float *)0xC2A9714 = 0.0f;
        *(float *)0xC2A971C = 1.0f;
        *(unsigned int *)0xC2A9720 = 0x0;
        nlSprPut(0xC2A96F8, 0xC2A9758, t70);
    return;
    }
    *(unsigned int *)0xC2A96F4 = t1;
}
