/* Straight-line functions with calls and guards (batch gen_gz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int buAnalyzeBackupFileImage(int, int);
int nlLocate(int, int);
int nlPrintf(int, ...);
int DispBackupHeadInfo(int a4, int a5, int a6);

int DispBackupHeadInfo(int a4, int a5, int a6)
{
    int t0;
    int t35;
    int stk[55] = {0};

    *(unsigned int *)(((int)stk + 104)) = a4;
    *(unsigned int *)(((int)stk + 100)) = a5;
    *(unsigned int *)(((int)stk + 108)) = a6;
    t0 = buAnalyzeBackupFileImage((((int)stk + 100) + 0xC), a6);
    nlLocate((*(int *)(((int)stk + 104))), (*(int *)(((int)stk + 100))));
    t35 = (nlPrintf(0xC09DA40, (t0)));
    if (t0 == 0) {
        nlLocate((*(int *)(((int)stk + 104))), ((*(int *)(((int)stk + 100))) + 0x1));
        nlPrintf(0xC09DA58, (((int)stk + 100) + 0xC));
        nlPrintf(0xC09DA6C, (((int)stk + 92) + 0x26));
        nlPrintf(0xC09DA80, (((int)stk + 84) + 0x50));
        nlPrintf(0xC09DA94, ((*(int *)(((int)stk + 180)))));
        nlPrintf(0xC09DAA8, ((*(int *)(((int)stk + 184)))));
        nlPrintf(0xC09DABC, (unsigned short)(*(short *)(((int)stk + 188))));
        nlPrintf(0xC09DAD0, (unsigned short)(*(short *)(((int)stk + 190))));
        nlPrintf(0xC09DAE4, ((*(int *)(((int)stk + 192)))));
        nlPrintf(0xC09DAF8, (unsigned short)(*(short *)(((int)stk + 196))));
        nlPrintf(0xC09DB0C, (unsigned short)(*(short *)(((int)stk + 198))));
        nlPrintf(0xC09DB20, ((*(int *)(((int)stk + 200)))));
        t35 = (nlPrintf(0xC09DB34, ((*(int *)(((int)stk + 204))))));
    }
    return t35;
}
