/* Straight-line functions with calls and guards (batch gen_l): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlsndStreamChgFilter(int, int, int);
int kmtex_CheckTextureFormat(int);
int InitArrow(int);
int kmiDefaultInterruptHandler(int);
int kmiTXalloc(int, int);
int kmiVQalloc(int);


int kmCreateTextureSurface(int a4)
{
    int r;

    r = kmtex_CheckTextureFormat(a4);
    if (r != 0) {
        return r;
    }
    if ((unsigned short)*(int *)(a4 + 0x0) == 3) {
        r = kmiVQalloc(a4);
    } else {
        r = kmiTXalloc(*(int *)(a4 + 0x14), a4);
    }
    if (r == 3) {
        kmiDefaultInterruptHandler(3);
    }
    return r;
}

