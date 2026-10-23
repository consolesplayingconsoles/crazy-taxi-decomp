/* Straight-line functions with calls and guards (batch gen_alq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdc_StopStreamVoice(int);
void Voice_CancelToNext(int a4);

void Voice_CancelToNext(int a4)
{
    int t3;
    int stk[3];

    int R0;
    int R2;
    int R3;
    int R4;
    int R14;
    int T_;
    R4 = a4;
    L_C072F82:;
    R14 = ((((R4 << 2) << 2) + 0xC2AEBE0));
    if (((*(int *)(((((R4 << 2) << 2) + 0xC2AEBE0) + 0x0))) == 0)) goto L_C072FB0;
    goto L_C072F96;
    L_C072F96:;
    t3 = gdc_StopStreamVoice(R4);
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0xC);
    *(unsigned int *)((R14 + 0xC)) = 0x0;
    R0 = (t3);
    R4 = (0x0);
    if (((*(int *)(((*(int *)((R14 + 0x0))) + 0x0))) != 0)) goto L_C072FB0;
    goto L_C072FAE;
    L_C072FAE:;
    *(unsigned int *)((R14 + 0x0)) = R4;
    goto L_C072FB0;
    L_C072FB0:;
}
