/* Straight-line functions with calls and guards (batch gen_oy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int rankingCalcDigitRoll(int, int);
int rankingInsert(void);

int rankingInsert(void)
{
    int t0;
    int t1;
    int t5;
    int t6;
    int t7;
    int t8;
    int t24;
    int stk[16] = {0};

    t0 = *(int *)0xC2A9168;
    t1 = t0;
    if (t0 == 100) {
        t1 = 0x63;
    }
    *(unsigned int *)(((int)stk + 4)) = ((int)((int)t1 / (int)0xA));
    *(unsigned int *)(((int)stk + 8)) = ((int)((int)t1 % (int)0xA));
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 4) + 0x10);
    t5 = 0x1;
    t6 = 0x1;
    t7 = 0x0;
    t8 = 0xC2A8FD8;
    for (;;) {
        if ((int)t7 >= (int)t0) {
            return 0x0;
        }
        if ((int)(*(int *)(((*(int *)0xC2A7600) + 0x0))) > (int)(*(int *)((t8 + 0x0)))) {
            break;
        }
        t5 = (t5 + 0x1);
        t8 = (t8 + 0x4);
        t7 = (t7 + 0x1);
        t6 = (t6 + 0x1);
    }
    t24 = 0x0;
    if (((t5 == t1) && (t0 != 100)) || (t5 == 100)) {
    } else {
        *(unsigned int *)0xC2A9168 = t6;
        *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x0)) = (*(int *)(((int)stk + 4)));
        *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x0)) = (*(int *)(((int)stk + 8)));
        *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x0)) = ((int)((int)(*(int *)0xC2A9168) / (int)0xA));
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = ((int)((int)(*(int *)0xC2A9168) % (int)0xA));
        rankingCalcDigitRoll((((int)stk + 4) + 0x14), (((int)stk + 4) + 0xC));
        *(unsigned int *)0xC1EE340 = (*(int *)0xC2A9168);
        t24 = 0x1;
    }
    return t24;
}
