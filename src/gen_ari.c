/* Straight-line functions with calls and guards (batch gen_ari): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXERR_CallErrFunc(int, int, int, int, int, int);
int kmiCopyToFrameBuffer(int, int, int);
int kmtex_GetTextureLevel(int, int);
int kmtex_CopyTextureToMem(int a4, int a5, int a6);
int adxini_rnaerr_cbfn(int a4, int a5, int a6, int a7);

int kmtex_CopyTextureToMem(int a4, int a5, int a6)
{
    int t1;

    t1 = *(int *)((((kmtex_GetTextureLevel(a6, a6)) << 2) + 0xC175E54));
    return kmiCopyToFrameBuffer((a4 + 0x4), a5, (t1 + 0x4));
}

int adxini_rnaerr_cbfn(int a4, int a5, int a6, int a7)
{
    return (ADXERR_CallErrFunc(a4, a5, a6, a7, 0xC175454, a5));
}
