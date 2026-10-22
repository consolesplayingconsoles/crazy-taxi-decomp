/* Straight-line functions with calls and guards (batch gen_adz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int strlen(int);
int strncmp(int, int, int);
int search(int a4, int a5);

int search(int a4, int a5)
{
    int t0;
    int t1;
    int t10;
    int t2;

    t0 = strlen(a4);
    t1 = strlen(a5);
    t10 = 0x0;
    if ((unsigned int)((t1 + a4) - 1) < (unsigned int)(a4 + t0)) {
        t2 = ((t1 + a4) - 1);
        for (;;) {
            if ((*(signed char *)((t2 + 0x0))) == (*(signed char *)((((t1 - 1) + a5) + 0x0)))) {
                if ((strncmp(((t2 - t1) + 0x1), a5, t1)) == 0) {
                    break;
                }
                t2 = (t2 + (*(int *)((0xC2A66A0 + ((*(signed char *)((t2 + 0x0))) << 2)))));
                if ((unsigned int)t2 >= (unsigned int)(a4 + t0)) {
                    return 0x0;
                }
                continue;
            }
            t2 = (t2 + (*(int *)((0xC2A66A0 + ((*(signed char *)((t2 + 0x0))) << 2)))));
            if ((unsigned int)t2 >= (unsigned int)(a4 + t0)) {
                return 0x0;
            }
        }
        t10 = 0x1;
    }
    return t10;
}
