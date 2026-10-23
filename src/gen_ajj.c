/* Straight-line functions with calls and guards (batch gen_ajj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlsndPackLoad_Write(int a4, int a5, int a6, int a7);

int nlsndPackLoad_Write(int a4, int a5, int a6, int a7)
{
    int t8;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;

    t8 = 0xFFFFFFFF;
    if ((*(int *)0xC2B76FC) == 0x1004) {
        t1 = 0x0;
        t2 = a4;
        for (;;) {
            if ((int)t1 >= (int)(*(int *)0xC2B7700)) {
                return 0x1;
            }
            t4 = *(int *)0xC2B7710;
            *(unsigned int *)0xC2B7710 = (t4 + 0x4);
            t5 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            *(unsigned int *)((((t4 + 0x4) - 4) + 0x0)) = t5;
            t6 = *(int *)0xC2B7704;
            *(unsigned int *)0xC2B7704 = (t6 - 4);
            if ((t6 - 4) == 0) {
                break;
            }
            t1 = (t1 + 0x1);
        }
        *(unsigned int *)0xA08000B0 = 0x1;
        *(unsigned int *)0xC2B76FC = ((*(int *)0xC2B76FC) + 0x1);
        t8 = 0x0;
    }
    return t8;
}
