/* Straight-line functions with calls and guards (batch gen_th): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int);
int Result_Class_Line_Put(void);

int Result_Class_Line_Put(void)
{
    int t4;
    int t5;

    if ((int)(*(int *)0xC2A96F4) <= (int)0x58) {
        return 0xC2A96F4;
    }
    *(unsigned int *)0xC2A96F8 = 0x5D;
    *(float *)0xC2A9700 = (float)((*(int *)0xC2A9748) + 0x1BC);
    *(float *)0xC2A9708 = ((*(float *)0xC2A9758) + 1.0f);
    *(float *)0xC2A970C = ((*(float *)0xC2A9758) + 1.0f);
    *(float *)0xC2A9714 = 0.0f;
    *(float *)0xC2A971C = 1.0f;
    *(unsigned int *)0xC2A9720 = 0x0;
    *(unsigned int *)0xC2A972C = 0xA;
    t4 = 0x0;
    t5 = 0x68;
    for (;;) {
        *(float *)0xC2A96FC = (float)t5;
        nlSprPut(0xC2A96F8);
        t4 = (t4 + 0x1);
        t5 = (t5 + 0x11);
        if ((int)t4 >= (int)0x8) {
            break;
        }
    }
    *(unsigned int *)0xC2A96F8 = 0x146;
    *(float *)0xC2A96FC = 172.0f;
    *(float *)0xC2A9700 = (float)((*(int *)0xC2A9748) + 0x18C);
    *(float *)0xC2A9704 = 0.199999988f;
    *(float *)0xC2A9708 = ((*(float *)0xC2A9758) + 1.0f);
    *(float *)0xC2A970C = ((*(float *)0xC2A9758) + 1.0f);
    *(float *)0xC2A9714 = 0.0f;
    *(float *)0xC2A971C = 1.0f;
    *(unsigned int *)0xC2A972C = 0x200A;
    nlObjPutSetFadeColor(0.699999988f, 0.699999988f, 0.699999988f);
    nlSprPut(0xC2A96F8);
    *(float *)0xC2A9704 = 0.199999988f;
    *(unsigned int *)0xC2A972C = 0xA;
    *(unsigned int *)0xC2A96F8 = 0x12E;
    *(float *)0xC2A96FC = 276.0f;
    *(float *)0xC2A9700 = (float)((*(int *)0xC2A9748) + 0x1B4);
    *(float *)0xC2A9708 = ((*(float *)0xC2A9758) + 1.0f);
    *(float *)0xC2A970C = ((*(float *)0xC2A9758) + 1.0f);
    *(float *)0xC2A9714 = 0.0f;
    *(float *)0xC2A971C = 1.0f;
    nlSprPut(0xC2A96F8);
    return nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
}
