/* Straight-line functions with calls and guards (batch gen_hy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlLocate(int, int);
int nlPrintf(int, ...);
int Set_AD(void);

int Set_AD(void)
{
    *(unsigned char *)0xC2A6698 = (*(signed char *)(((*(int *)0xC1EDF26) + 0x0)));
    *(unsigned char *)0xC2A6699 = (*(signed char *)(((*(int *)0xC1EDF2A) + 0x0)));
    *(unsigned char *)0xC2A669A = (*(signed char *)(((*(int *)0xC1EDF2E) + 0x0)));
    *(unsigned char *)0xC2A669B = (*(signed char *)(((*(int *)0xC1EDF32) + 0x0)));
    *(unsigned char *)0xC2A669C = (*(signed char *)(((*(int *)0xC1EDF36) + 0x0)));
    *(unsigned char *)0xC2A669D = (*(signed char *)(((*(int *)0xC1EDF3A) + 0x0)));
    *(unsigned char *)0xC2A669E = (*(signed char *)(((*(int *)0xC1EDF3E) + 0x0)));
    *(unsigned char *)0xC2A669F = (*(signed char *)(((*(int *)0xC1EDF42) + 0x0)));
    nlLocate(0x37, 0x34);
    nlPrintf(0xC0C8348, (unsigned char)(*(signed char *)0xC2A6698), (unsigned char)(*(signed char *)0xC2A6699), (unsigned char)(*(signed char *)0xC2A669A), (unsigned char)(*(signed char *)0xC2A669B));
    nlLocate(0x37, 0x35);
    return (nlPrintf(0xC0C8348, (unsigned char)(*(signed char *)0xC2A669C), (unsigned char)(*(signed char *)0xC2A669D), (unsigned char)(*(signed char *)0xC2A669E), (unsigned char)(*(signed char *)0xC2A669F)));
}
