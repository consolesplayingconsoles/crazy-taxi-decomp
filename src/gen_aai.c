/* Straight-line functions with calls and guards (batch gen_aai): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void kmiWaitAccurate(float f4);

void kmiWaitAccurate(float f4)
{
    float u0;
    int stk[2] = {0};

    *(unsigned int *)(((int)stk + 4)) = 0x0;
    u0 = *(float *)0xC158840;
    if ((unsigned int)(*(int *)(((int)stk + 4))) < (unsigned int)(int)(f4 * u0)) {
        for (;;) {
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
            if ((unsigned int)(*(int *)(((int)stk + 4))) >= (unsigned int)(int)(f4 * u0)) {
                break;
            }
        }
    }
}
