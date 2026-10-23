/* Straight-line functions with calls and guards (batch gen_wp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetScreen(int);
int SetWindow(int);
int Voice_Request(int, int, int, int);
int callBoxAdvice(void);

int callBoxAdvice(void)
{
    int t9;

    *(unsigned int *)0xC2A1228 = (*(int *)0xC1EE234);
    *(unsigned int *)0xC2A122C = (*(int *)0xC1EE238);
    if ((*(int *)0xC1EE234) != 3) {
        *(unsigned int *)0xC1EE234 = 0x3;
        *(unsigned int *)0xC1EE238 = 0x0;
    }
    SetScreen(0x6);
    SetWindow(0xF);
    t9 = (int)((int)((*(int *)0xC2A1AE0) + 0x1) % (int)0x3);
    *(unsigned int *)0xC2A1AE0 = t9;
    *(unsigned int *)0xC0EF550 = (*(int *)(((t9 << 2) + 0xC0A2018)));
    return Voice_Request(0xC0EF550, 0x0, 0x7F, 0x0);
}
