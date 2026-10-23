/* Straight-line functions with calls and guards (batch gen_lv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void rankingCalcDigitRoll(int a4, int a5);

void rankingCalcDigitRoll(int a4, int a5)
{
    int t0;
    int t1;

    *(unsigned int *)0xC2A8F8C = 0x0;
    t0 = *(int *)(((a5 + 0x4) + 0x0));
    t1 = *(int *)(((a4 + 0x4) + 0x0));
    if ((int)t1 >= (int)t0) {
        *(unsigned int *)0xC2A8F78 = ((*(int *)(((a4 + 0x4) + 0x0))) - (*(int *)(((a5 + 0x4) + 0x0))));
    } else {
        *(unsigned int *)0xC2A8F78 = ((t1 - t0) + 0xA);
    }
    if ((*(int *)0xC2A8F78) == 0) {
        *(unsigned int *)0xC2A8F88 = 0x1;
    } else {
        *(unsigned int *)0xC2A8F88 = 0x0;
    }
    if ((int)(*(int *)((a4 + 0x0))) >= (int)(*(int *)((a5 + 0x0)))) {
        *(unsigned int *)0xC2A8F74 = ((*(int *)((a4 + 0x0))) - (*(int *)((a5 + 0x0))));
    } else {
        *(unsigned int *)0xC2A8F74 = (((*(int *)((a4 + 0x0))) - (*(int *)((a5 + 0x0)))) + 0xA);
    }
    if ((*(int *)0xC2A8F74) == 0) {
        *(unsigned int *)0xC2A8F84 = 0x1;
    } else {
        *(unsigned int *)0xC2A8F84 = 0x0;
    }
}
