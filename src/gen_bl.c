/* Straight-line functions with calls and guards (batch gen_bl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c15887e(int, int, int);
extern void _builtin_prefetch(void *);
int FUN_0c158860(int a4, int a5, int a6);
void FUN_0c077b50(int a4);
void FUN_0c079ed0(int a4);
void nlLoadMatrix(int a4);
int PutRenderTexture(int a4);

int FUN_0c158860(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    float u3;
    float u4;

    if ((((a4 | a5) | a6) & 7) == 0) {
        t0 = a4;
        t1 = a5;
        t2 = ((unsigned int)((unsigned int)a6 >> 2) >> 1);
        do {
            u3 = *(float *)((t1 + 0x0));
            u4 = *(float *)(((t1 + 0x0) + 4));
            t1 = (t1 + 0x8);
            t2 = (t2 - 0x1);
            *(float *)((t0 + 0x0)) = u3;
            *(float *)(((t0 + 0x0) + 4)) = u4;
            t0 = (t0 + 0x8);
        } while (t2 != 0);
        return ((a4 | a5) | a6);
    }
    return FUN_0c15887e(a4, a5, a6);
}





