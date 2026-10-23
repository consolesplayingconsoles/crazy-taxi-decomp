/* Straight-line functions with calls and guards (batch gen_qn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int pfSetAspectRatio(float);
int PutRenderTexture(int);
int nlRenderTextureEnd(void);
int Pause_ExecRenderTexture2nd(void);

int Pause_ExecRenderTexture2nd(void)
{
    int t0;

    t0 = *(int *)0xC2A11B0;
    if (t0 == 1) {
        nlRenderTextureEnd();
        pfSetAspectRatio(1.0f);
        return PutRenderTexture(0x3);
    }
    return t0;
}
