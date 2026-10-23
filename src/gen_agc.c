/* Straight-line functions with calls and guards (batch gen_agc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Result_Money_Digit_Put(void);
int Sound_Request(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int);
int Result_Money_Put(void);

int Result_Money_Put(void)
{
    int t1;
    int t10;
    int t24;
    int t25;

    nlObjPutSetFadeColor(0.0f, 0.0f, 0.0f);
    t1 = *(int *)0xC2A96F4;
    if ((int)t1 <= (int)0x58) {
    } else {
        if (t1 == 89) {
            Sound_Request(0x104A9, 0x0);
            *(unsigned int *)0xC130DF8 = ((*(int *)0xC130DF8) + 0x1);
        }
        if (((*(int *)0xC2A9848) == 1) && (t10 = *(int *)0xC2A9858, t10 == 0)) {
            Sound_Request(0x204A9, 0x0);
            *(unsigned int *)0xC130DFC = ((*(int *)0xC130DFC) + 0x1);
            *(unsigned int *)0xC2A9858 = 0x1;
        }
        *(unsigned int *)0xC2A96F8 = 0xFB;
        *(unsigned int *)0xC2A972C = 0x200A;
        *(float *)0xC2A96FC = 80.0f;
        *(float *)0xC2A9700 = (float)((*(int *)0xC2A9748) + 0xD8);
        *(float *)0xC2A9708 = ((*(float *)0xC2A9758) + 1.0f);
        *(float *)0xC2A970C = ((*(float *)0xC2A9758) + 1.0f);
        *(float *)0xC2A9714 = 0.0f;
        *(float *)0xC2A971C = 1.0f;
        *(unsigned int *)0xC2A9720 = 0x0;
        nlSprPut(0xC2A96F8);
        Result_Money_Digit_Put();
        *(unsigned int *)0xC2A972C = 0x200A;
        if (((*(int *)0xC2A97C8) == 0) && ((t24 = *(int *)0xC2A97C4, t24 == 0) && (t25 = *(int *)0xC2A97C0, t25 == 0))) {
        } else {
            *(unsigned int *)0xC2A96F8 = 0xFA;
            *(float *)0xC2A96FC = 214.0f;
            *(float *)0xC2A9700 = (float)((*(int *)0xC2A9748) + 0xEA);
            *(float *)0xC2A9708 = ((*(float *)0xC2A9758) + 1.0f);
            *(float *)0xC2A970C = ((*(float *)0xC2A9758) + 1.0f);
            *(float *)0xC2A9714 = 0.0f;
            *(float *)0xC2A971C = 1.0f;
            *(unsigned int *)0xC2A9720 = 0x0;
            nlSprPut(0xC2A96F8);
        }
        *(unsigned int *)0xC2A96F8 = 0xFC;
        *(float *)0xC2A96FC = 332.0f;
        *(float *)0xC2A9700 = (float)((*(int *)0xC2A9748) + 0xEA);
        *(float *)0xC2A9708 = ((*(float *)0xC2A9758) + 1.0f);
        *(float *)0xC2A970C = ((*(float *)0xC2A9758) + 1.0f);
        *(float *)0xC2A9714 = 0.0f;
        *(float *)0xC2A971C = 1.0f;
        nlSprPut(0xC2A96F8);
        *(unsigned int *)0xC2A9788 = ((*(int *)0xC2A9788) + 0x1);
    }
    return nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
}
