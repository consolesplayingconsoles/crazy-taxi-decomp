/* Straight-line functions with calls and guards (batch gen_acs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdc_StopStreamVoice(int);
void Voice_CancelToNext(int a4);

void Voice_CancelToNext(int a4)
{
    if ((*(int *)(((((a4 << 2) << 2) + 0xC2AEBE0) + 0x0))) != 0) {
        gdc_StopStreamVoice(a4);
        *(unsigned int *)(((((a4 << 2) << 2) + 0xC2AEBE0) + 0x0)) = ((*(int *)(((((a4 << 2) << 2) + 0xC2AEBE0) + 0x0))) + 0xC);
        *(unsigned int *)(((((a4 << 2) << 2) + 0xC2AEBE0) + 0xC)) = 0x0;
        if ((*(int *)(((*(int *)(((((a4 << 2) << 2) + 0xC2AEBE0) + 0x0))) + 0x0))) == 0) {
            *(unsigned int *)(((((a4 << 2) << 2) + 0xC2AEBE0) + 0x0)) = 0x0;
        }
    }
}
