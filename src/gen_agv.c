/* Straight-line functions with calls and guards (batch gen_agv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Move_ProposalWalker(int);
int Put_ProposalWalker(int, float, float);
void Exec_ProposalWalker(int a4, float f4, float f5);

void Exec_ProposalWalker(int a4, float f4, float f5)
{
    int t1;
    int t3;

    if ((*(int *)((a4 + 0x18))) != 0) {
        t1 = *(int *)((a4 + 0x14));
        if ((((*(int *)0xC2A9D58) & (((int)(t1 << 2) >= 0) ? (0x1 << ((t1 << 2) & 31)) : ((-(int)(t1 << 2) & 31) ? ((unsigned int)0x1 >> (-(int)(t1 << 2) & 31)) : 0))) != 0) && (t3 = *(int *)((a4 + 0x40)), t3 == 0)) {
            Put_ProposalWalker(a4, f4, f5);
            if ((*(int *)((a4 + 0x18))) == 1) {
                Move_ProposalWalker(a4);
    return;
            }
            return;
        }
        if (((*(int *)0xC2A9D5C) & (((int)(t1 << 2) >= 0) ? (0x1 << ((t1 << 2) & 31)) : ((-(int)(t1 << 2) & 31) ? ((unsigned int)0x1 >> (-(int)(t1 << 2) & 31)) : 0))) != 0) {
            if ((*(int *)((a4 + 0x40))) == 1) {
                Put_ProposalWalker(a4, f4, f5);
                if ((*(int *)((a4 + 0x18))) == 1) {
                    Move_ProposalWalker(a4);
    return;
                }
                return;
            }
            return;
        }
        return;
    }
}
