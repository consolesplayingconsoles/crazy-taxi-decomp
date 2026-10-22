/* Straight-line functions with calls and guards (batch gen_ht): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSubVector3op(int, int, int);
int nlUnitVector(int);
void Start_Proposal(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);

void Start_Proposal(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int t0;
    int t12;
    int stk[20] = {0};

    stk[8] = a8;
    stk[9] = a9;
    stk[10] = a10;
    stk[11] = a11;
    *(unsigned int *)(((int)stk + 4)) = 0x1;
    t0 = *(int *)(((int)stk + 4));
    if (a5 != 0) {
        *(unsigned int *)0xC2A9D5C = ((*(int *)0xC2A9D5C) | (((int)(a4 << 2) >= 0) ? (t0 << ((a4 << 2) & 31)) : ((-(int)(a4 << 2) & 31) ? ((unsigned int)t0 >> (-(int)(a4 << 2) & 31)) : 0)));
        *(unsigned int *)(((*(int *)((0xC2A9D30 + ((a4 + ((a5 << 2) + a5)) << 2)))) + 0x18)) = 0x1;
    } else {
        *(unsigned int *)0xC2A9D58 = ((*(int *)0xC2A9D58) | (((int)(a4 << 2) >= 0) ? (t0 << ((a4 << 2) & 31)) : ((-(int)(a4 << 2) & 31) ? ((unsigned int)t0 >> (-(int)(a4 << 2) & 31)) : 0)));
        *(unsigned int *)(((*(int *)((0xC2A9D30 + (a4 << 2)))) + 0x18)) = 0x2;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((((a4 + ((a5 << 2) + a5)) << 2) + 0xC2A9D30) + 0x0))) + 0x1C)) = *(struct mv3 *)((((int)stk + 4) + 0x1C)); }
    t12 = (int)((int)a4 % (int)0x5);
    nlSubVector3op((((int)stk + 4) + 0x4), ((signed char)(((t12 << 1) + t12) << 2) + 0xC131B10), ((*(int *)(((((a4 + ((a5 << 2) + a5)) << 2) + 0xC2A9D30) + 0x0))) + 0x1C));
    nlUnitVector((((int)stk + 4) + 0x4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((((a4 + ((a5 << 2) + a5)) << 2) + 0xC2A9D30) + 0x0))) + 0x28)) = *(struct mv3 *)((((int)stk + 4) + 0x4)); }
}
