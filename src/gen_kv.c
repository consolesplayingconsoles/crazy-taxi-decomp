/* Straight-line functions with calls and guards (batch gen_kv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int PutRenderTexture(int);
int nlRenderTextureEnd(int, int, int, int);
int pfSetAspectRatio(float);
int Pause_ExecRenderTexture2nd(int a4, int a5, int a6, int a7);

int Pause_ExecRenderTexture2nd(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(int *)0xC2A11B0;
    if (t0 == 1) {
        nlRenderTextureEnd(a4, a5, a6, a7);
        pfSetAspectRatio(1.0f);
        return PutRenderTexture(0x3);
    }
    return t0;
}
