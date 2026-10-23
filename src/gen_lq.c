/* Straight-line functions with calls and guards (batch gen_lq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Result_Check_Digit_Disp(int);
int Sound_Request(int, int);
int nlSprPut(int);
int Result_Money_Digit_Put(int a4);

int Result_Money_Digit_Put(int a4)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t32;
    int t33;
    float u62;
    int t87;
    int t82;
    int t31;
    int stk[14];

    t1 = (int)((int)((*(int *)0xC2A978C) + 0x1) % (int)0x4);
    *(unsigned int *)0xC2A978C = t1;
    if (t1 == 0) {
        *(unsigned int *)(((int)stk + 4)) = 0xC2A982C;
        *(unsigned int *)(((int)stk + 8)) = 0xC130E00;
        t2 = t1;
        t3 = 0x0;
        t4 = 0xC2A982C;
        t5 = 0x0;
        for (;;) {
            if ((int)(*(int *)((0xC2A97EC + (t3 << 2)))) > 0) {
                *(unsigned int *)((0xC2A97EC + t5)) = ((*(int *)((0xC2A97EC + t5))) - 1);
                *(unsigned int *)(((t5 + 0xC2A980C) + 0x0)) = ((int)((int)((*(int *)(((t5 + 0xC2A980C) + 0x0))) + 0x1) % (int)0xA));
            } else {
                if ((*(int *)((t4 + 0x0))) == 0) {
                    Sound_Request(0x205A9, 0x0);
                    t2 = (*(int *)(((int)stk + 8)));
                    *(unsigned int *)((t2 + 0x0)) = ((*(int *)((t2 + 0x0))) + 0x1);
                    t2 = (*(int *)(((int)stk + 4)));
                    *(unsigned int *)((t2 + 0x0)) = 0x1;
                }
            }
            t3 = (t3 + 0x1);
            t4 = (t4 + 0x4);
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x4);
            t5 = (t5 + 0x4);
            if ((int)t3 >= (int)0x8) {
                break;
            }
        }
        t31 = t3;
    }
    t32 = t31;
    t33 = 0x0;
    for (;;) {
        if ((int)t33 >= (int)0x5) {
            t32 = 0xFFFFFFFC;
        }
        if ((int)t33 <= (int)0x4) {
            t32 = 0x10;
        }
        if ((int)t33 <= (int)0x1) {
            t32 = 0x20;
        }
        if ((Result_Check_Digit_Disp(t33)) != 1) {
        } else {
            *(unsigned int *)(((int)stk + 4)) = (t33 << 2);
            *(unsigned int *)0xC2A96F8 = (*(int *)((((*(int *)((0xC2A980C + (t33 << 2)))) << 2) + 0xC130E18)));
            *(unsigned int *)0xC2A972C = 0x200E;
            *(float *)0xC2A9714 = 0.0f;
            if ((*(int *)(((*(int *)(((int)stk + 4))) + 0xC2A982C))) == 0) {
                *(float *)0xC2A971C = (1.0f - ((float)(*(int *)0xC2A978C) * 0.25f));
                *(float *)0xC2A970C = (((*(float *)0xC2A9758) - ((float)(*(int *)0xC2A978C) * 0.25f)) + 1.0f);
            } else {
                *(float *)0xC2A971C = 1.0f;
                *(float *)0xC2A970C = 1.0f;
            }
            *(float *)0xC2A96FC = (float)(((((((0x7 - t33) << 2) << 2) + (0x7 - t33)) << 1) + t32) + 0x7A);
            *(float *)0xC2A9700 = (float)((*(int *)0xC2A9748) + 0xF8);
            *(unsigned int *)0xC2A9720 = 0x0;
            nlSprPut(0xC2A96F8);
            if ((*(int *)(((*(int *)(((int)stk + 4))) + 0xC2A982C))) == 0) {
                *(float *)0xC2A9700 = ((*(float *)0xC2A9700) - (float)((*(int *)0xC2A9748) + 0x40));
                *(unsigned int *)0xC2A96F8 = (*(int *)((0xC130E18 + (((int)((int)((*(int *)((0xC2A980C + (*(int *)(((int)stk + 4)))))) + 0x1) % (int)0xA)) << 2))));
                *(unsigned int *)0xC2A972C = 0x2006;
                u62 = (*(float *)0xC2A9758);
                u62 = u62 + 0.25f * (float)(*(int *)0xC2A978C);
                *(float *)0xC2A970C = u62;
                *(float *)0xC2A9714 = (1.0f - ((float)(*(int *)0xC2A978C) * 0.25f));
                *(float *)0xC2A971C = 1.0f;
                nlSprPut(0xC2A96F8);
            }
        }
        t33 = (t33 + 0x1);
        if ((int)t33 < (int)0x8) continue;
        break;
    }
    t87 = 0xC2A96F4;
    if ((int)(*(int *)0xC2A96F4) < (int)(*(int *)0xC2A97A8)) {
        t82 = *(int *)((0xC2A982C + ((*(int *)0xC2A984C) << 2)));
        if (t82 == 1) {
            *(unsigned int *)0xC2A984C = ((*(int *)0xC2A984C) + 0x1);
        }
        t87 = t82;
    }
    return t87;
}
