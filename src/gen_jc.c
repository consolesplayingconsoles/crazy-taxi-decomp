/* Straight-line functions with calls and guards (batch gen_jc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckKyakuArea(int, int);
int CheckNumRideon(void);
int kyakuInDestArea(int a4);

int kyakuInDestArea(int a4)
{
    int r;
    if (*(int *)0xC1EE20C == 2 && *(int *)0xC1EE214 == 11 && **(int **)(a4 + 0x198) == *(int *)0xC2A98FC) goto check;
    if (*(int *)0xC1EE20C == 2 && *(int *)0xC1EE214 == 14 && **(int **)(a4 + 0x198) == *(int *)0xC2A98FC) {
        if (CheckNumRideon() == *(int *)0xC2A9900) goto check;
    }
    if (*(int *)0xC1EE20C == 2) {
        if (*(int *)0xC1EE214 == 11 || *(int *)0xC1EE214 == 10 || *(int *)0xC1EE214 == 14 || *(int *)0xC1EE214 == 13) goto skip;
    }
    if (*(int *)0xC1EE20C == 0 && *(int *)0xC1EE214 == 15) goto skip;
check:
    r = CheckKyakuArea(*(int *)(a4 + 24) + 120, **(int **)(a4 + 0x198));
    if (r != 0) return 1;
skip:
    if (*(int *)0xC1EE20C == 0 && *(int *)0xC1EE214 == 15 && *(int *)0xC2A98FC == 7) {
        if (CheckKyakuArea(*(int *)(a4 + 24) + 120, 7) != 0) return 1;
    }
    if (*(int *)0xC1EE20C == 2) {
        if (*(int *)0xC1EE214 == 10) {
            if (CheckKyakuArea(*(int *)(a4 + 24) + 120, *(int *)0xC2A98FC) != 0) return 1;
        }
        if (*(int *)0xC1EE20C == 2 && *(int *)0xC1EE214 == 13 && *(float *)(*(int *)(a4 + 24) + 124) > 130.0f) return 1;
    }
    return 0;
}