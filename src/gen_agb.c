/* Straight-line functions with calls and guards (batch gen_agb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int selectSetDriverFace(int a4, int a5, int a6, int a7);

int selectSetDriverFace(int a4, int a5, int a6, int a7)
{
    int t1;
    int t46;
    int t60;
    int t87;
    int t93;
    int t95;
    int t106;
    int t80;
    int t36;
    int t37;
    int t38;
    int t75;
    int t69;
    int t101;
    int t97;

    t1 = *(int *)(((*(int *)0xC2A751C) + 0x0));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 == 3) {
                    *(unsigned int *)0xC133184 = (*(int *)0xC1337B8);
                    *(unsigned int *)0xC133178 = (*(int *)0xC1337B4);
                }
            } else {
                *(unsigned int *)0xC133144 = (*(int *)0xC133790);
            }
            t80 = t1;
        } else {
            if (((int)(*(int *)((0xC2A7538 + ((*(int *)(((*(int *)0xC2A751C) + 0x0))) << 2)))) < (int)0x6F) && (t36 = *(int *)0xC2A751C, t37 = *(int *)((t36 + 0x0)), t38 = *(int *)((0xC2A7538 + (t37 << 2))), (int)t38 >= (int)0x17)) {
                *(unsigned int *)0xC133104 = (*(int *)0xC133780);
            } else {
                *(unsigned int *)0xC133104 = (*(int *)0xC133778);
            }
            t46 = *(int *)(((*(int *)0xC2A751C) + 0x0));
            if ((int)(*(int *)((0xC2A7538 + (t46 << 2)))) < (int)0x7C) {
                if ((int)(*(int *)((0xC2A7538 + ((*(int *)(((*(int *)0xC2A751C) + 0x0))) << 2)))) >= (int)0x59) {
                    t60 = *(int *)0xC13376C;
                    *(unsigned int *)0xC1330F8 = t60;
                    t69 = t60;
                } else {
                    if ((int)(*(int *)((0xC2A7538 + ((*(int *)(((*(int *)0xC2A751C) + 0x0))) << 2)))) >= (int)0x17) {
                        *(unsigned int *)0xC1330F8 = (*(int *)0xC13377C);
                    } else {
                        *(unsigned int *)0xC1330F8 = (*(int *)0xC133784);
                    }
                    t69 = 0x17;
                }
                t75 = t69;
            } else {
                *(unsigned int *)0xC1330F8 = (*(int *)0xC133784);
                t75 = (t46 << 2);
            }
            t80 = t75;
        }
        t106 = t80;
    } else {
        t87 = *(int *)(((*(int *)0xC2A751C) + 0x0));
        if ((int)(*(int *)((0xC2A7538 + (t87 << 2)))) < (int)0x56) {
            t93 = *(int *)(((*(int *)0xC2A751C) + 0x0));
            if ((int)(*(int *)((0xC2A7538 + (t93 << 2)))) >= (int)0x32) {
                t95 = *(int *)0xC133758;
                *(unsigned int *)0xC1330C4 = t95;
                t97 = t95;
            } else {
                *(unsigned int *)0xC1330C4 = (*(int *)0xC133750);
                t97 = (t93 << 2);
            }
            t101 = t97;
        } else {
            *(unsigned int *)0xC1330C4 = (*(int *)0xC133750);
            t101 = (t87 << 2);
        }
        t106 = t101;
    }
    return t106;
}
