/* Straight-line functions with calls and guards (batch gen_t): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiCopyFromFrameBuffer(int, int, int);
int kmiCopyToFrameBuffer(int, int, int);
int kmtex_GetTextureLevel(int, int);
int kmtex_CopyTextureFromMem(int a4, int a5, int a6);
int kmtex_ConvertSmallVQToMem(int a4, int a5, int a6, int a7);

int kmtex_CopyTextureFromMem(int a4, int a5, int a6)
{
    int t0;
    int t1;

    t0 = kmtex_GetTextureLevel(a6, a6);
    t1 = *(int *)(((t0 << 2) + 0xC175E54));
    return kmiCopyFromFrameBuffer(a4, (a5 + 0x4), t1);
}

int kmtex_ConvertSmallVQToMem(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t7;

    t0 = kmtex_GetTextureLevel(a6, a6);
    if ((a7 & 1) != 0) {
        t1 = *(int *)(((t0 << 2) + 0xC175DE0));
        t2 = *(int *)(((t0 << 2) + 0xC175ED8));
        t6 = (t2 + 0xA);
        t7 = t1;
    } else {
        t3 = *(int *)(((t0 << 2) + 0xC175DC4));
        t4 = *(int *)(((t0 << 2) + 0xC175EAC));
        t6 = t4;
        t7 = t3;
    }
    kmiCopyToFrameBuffer(a4, a5, t7);
    return kmiCopyToFrameBuffer((a4 + 0x800), (a5 + t7), t6);
}

