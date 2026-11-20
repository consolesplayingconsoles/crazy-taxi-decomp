/* Straight-line functions with calls and guards (batch gen_l): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlsndStreamChgFilter(int, int, int);
int kmtex_CheckTextureFormat(int);
int InitArrow(int);
int kmiDefaultInterruptHandler(int);
int kmiTXalloc(int, int);
int kmiVQalloc(int);


int mwlSbSetFilter(int a4, int a5, int a6)
{
    int t0;
    int t3;
    int t6;
    int t1;
    int t4;

    *(unsigned short *)((a4 + 0x58)) = a5;
    *(unsigned short *)((a4 + 0x5A)) = a6;
    
    
    if (!((int)a5 > 0)) {
        t1 = 0x0;
        } else {
        t0 = a5;
        if (((int)a5 >= (int)0x7F)) {
        t0 = 0x7F;
        }
        t1 = t0;
        }
    
    
    if (!((int)a6 > 0)) {
        t4 = 0x0;
        } else {
        t3 = a6;
        if (((int)a6 >= (int)0x1F)) {
        t3 = 0x1F;
        }
        t4 = t3;
        }
    t6 = *(short *)((a4 + 0x6));
    return nlsndStreamChgFilter(t6, t1, t4);
}
