/* Straight-line functions with calls and guards (batch gen_yz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
int nlObjPutSetFadeColor(float, float, float);
extern int nlSprPut();
int Result_Rank_Put(void);

int Result_Rank_Put(void)
{
    int t0;
    int t1;
    int t20;
    int t29;
    int t38;
    int t43;
    int t53;
    int t2;
    int t83;
    int t13;
    int t77;
    int t36;
    int t48;

    t0 = *(int *)0xC2A97A8;
    t1 = *(int *)0xC2A96F4;
    if (((int)t1 <= (int)(t0 + 0x78)) && (t2 = *(int *)0xC2A97E0, t2 != 1)) {
        t83 = t2;
    } else {
        t20 = t0;
        if ((*(int *)0xC2A97E0) == 0) {
            if (t1 == (t0 + 0x79)) {
                Sound_Request(0x405A9, 0x0);
                *(unsigned int *)0xC130E08 = ((*(int *)0xC130E08) + 0x1);
                *(unsigned int *)0xC2A9754 = 0x1;
            } else {
                t13 = (t0 + 0x79);
            }
            t20 = t13;
        }
        if ((int)(*(int *)0xC2A97DC) >= (int)0x64) {
            *(unsigned int *)0xC2A96F8 = 0x15A;
            *(float *)0xC2A96FC = 472.0f;
            *(float *)0xC2A9700 = (float)(0x18C + (*(int *)0xC2A9748));
            *(float *)0xC2A9708 = ((*(float *)0xC2A9758) + 1.0f);
            *(float *)0xC2A970C = ((*(float *)0xC2A9758) + 1.0f);
            *(float *)0xC2A9714 = 0.0f;
            *(float *)0xC2A971C = 1.0f;
            *(unsigned int *)0xC2A9720 = 0x0;
            t77 = t20;
        } else {
            *(unsigned int *)0xC2A96F8 = 0x4B;
            *(float *)0xC2A96FC = 472.0f;
            *(float *)0xC2A9700 = (float)((*(int *)0xC2A9748) + 0x18C);
            *(float *)0xC2A9704 = 0.25f;
            *(float *)0xC2A9708 = ((*(float *)0xC2A9758) + 1.0f);
            *(float *)0xC2A970C = ((*(float *)0xC2A9758) + 1.0f);
            *(float *)0xC2A9714 = 0.0f;
            *(float *)0xC2A971C = 1.0f;
            *(unsigned int *)0xC2A972C = 0xA;
            *(unsigned int *)0xC2A9720 = 0x0;
            t29 = ((int (*)(int, int))(nlSprPut))(0xC2A96F8, t20);
            nlObjPutSetFadeColor(0.0f, 0.0f, 0.0f);
            *(float *)0xC2A9704 = 0.199999988f;
            *(float *)0xC2A96FC = 400.0f;
            *(float *)0xC2A9700 = (float)(0x18C + (*(int *)0xC2A9748));
            *(float *)0xC2A9708 = ((*(float *)0xC2A9758) + 1.0f);
            *(float *)0xC2A970C = ((*(float *)0xC2A9758) + 1.0f);
            *(float *)0xC2A9714 = 0.0f;
            *(float *)0xC2A971C = 1.0f;
            *(unsigned int *)0xC2A972C = 0x300A;
            nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
            if (((*(int *)0xC2A97D4) == 0) && (t36 = *(int *)0xC2A97D0, t36 == 0)) {
            } else {
                *(unsigned int *)0xC2A96F8 = ((*(int *)0xC2A97D0) + 0x41);
                *(float *)0xC2A96FC = 444.0f;
                t38 = ((int (*)(int))(nlSprPut))(0xC2A96F8);
            }
            *(unsigned int *)0xC2A96F8 = ((*(int *)0xC2A97CC) + 0x41);
            *(float *)0xC2A96FC = 498.0f;
            t43 = ((int (*)(int))(nlSprPut))(0xC2A96F8);
            *(unsigned int *)0xC2A96F8 = 0x4F;
            *(float *)0xC2A9708 = ((*(float *)0xC2A9758) + 1.0f);
            *(float *)0xC2A970C = ((*(float *)0xC2A9758) + 1.0f);
            *(float *)0xC2A9700 = (float)((*(int *)0xC2A9748) + 0x19C);
            if (((*(int *)0xC2A97D4) == 0) && (t48 = *(int *)0xC2A97D0, t48 == 1)) {
            } else {
                t53 = *(int *)0xC2A97CC;
                if (t53 == 1) {
                    *(unsigned int *)0xC2A96F8 = 0x4E;
                } else {
                    if (t53 == 2) {
                        *(unsigned int *)0xC2A96F8 = 0x4C;
                    } else {
                        if ((*(int *)0xC2A97CC) == 3) {
                            *(unsigned int *)0xC2A96F8 = 0x4D;
                        }
                    }
                }
            }
            *(float *)0xC2A96FC = 554.0f;
        }
        t83 = (((int (*)(int, int))(nlSprPut))(0xC2A96F8, t77));
    }
    return t83;
}
