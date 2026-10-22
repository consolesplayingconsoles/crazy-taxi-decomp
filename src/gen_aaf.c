/* Straight-line functions with calls and guards (batch gen_aaf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADX_DecodeInfo(int, int, int, int);
void FUN_0c1524ee(int a4, int a5, int a6);

void FUN_0c1524ee(int a4, int a5, int a6)
{
    int t0;
    int stk[17] = {0};

    *(unsigned int *)(((int)stk + 60)) = a6;
    if ((int)a5 >= (int)0x2) {
        t0 = *(short *)((a4 + 0x0));
        if ((unsigned short)((unsigned char)((int)(unsigned short)t0 >> 8) | (((unsigned short)t0 << 8) & 0xFF00)) == 0x8000) {
            if ((int)(ADX_DecodeInfo(a4, a5, (((int)stk + 4) + 0x18), (((int)stk + 4) + 0x1C))) < 0) {
                return;
            }
            *(unsigned int *)(((*(int *)(((int)stk + 60))) + 0x0)) = (*(short *)(((int)stk + 28)));
            return;
        }
        return;
    }
}
