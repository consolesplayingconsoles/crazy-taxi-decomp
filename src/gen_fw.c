/* Straight-line functions with calls and guards (batch gen_fw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void TggleObjShadow(int a4, int a5, int a6, int a7);

void TggleObjShadow(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t1;

    t0 = *(int *)((a4 + 0x0));
    if (((int)t0 >= 0) && (t1 = *(int *)((a4 + 0x18)), t1 != 0)) {
        t2 = t1;
        t3 = t0;
        t4 = (a4 + 0x18);
        for (;;) {
            t5 = *(int *)((t4 + 0x0));
            t6 = t4;
            t4 = (t4 + 0x50);
            if ((t5 & 0xC0) != 0) {
                t2 = (*(int *)((t6 + 0x0)));
                t2 = (t2 & 0xFFFFFF3F);
                *(unsigned int *)((t6 + 0x0)) = t2;
            } else {
                t3 = (t5 & 0xFFFFFF3F);
                t3 = (t3 | 0x80);
                *(unsigned int *)((t6 + 0x0)) = t3;
            }
            t4 = (t4 + (*(int *)((t6 + 0x4C))));
            if ((*(int *)((t4 + 0x0))) == 0) {
                break;
            }
        }
    }
}
