/* Straight-line functions with calls and guards (batch gen_oq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int colliBoxShapeInit();
int InitColliObj(int a4, int a5, int a6, int a7, float f4, float f5, float f6);

int InitColliObj(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t9;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;

    if ((*(int *)0xC0ED80C) != 0) {
        t1 = 0x0;
        for (;;) {
            t2 = ((int (*)(int, int, float, float, float))(colliBoxShapeInit))(t1, (((t1 << 2) << 2) + 0xC0ED68C), f4, f5, f6);
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0xF) {
                break;
            }
        }
        t3 = 0x0;
        for (;;) {
            t4 = 0x0;
            for (;;) {
                t5 = 0x0;
                if ((int)t3 < (int)0xF) {
                    t5 = 0x1;
                }
                t7 = 0x0;
                if ((int)t4 < (int)0xF) {
                    t7 = 0x1;
                }
                t9 = (t4 << 2);
                t4 = (t4 + 0x1);
                *(unsigned int *)((((short)((short)t3 * (short)0x54) + 0xC26E4E8) + t9)) = (*(int *)((((((t5 << 2) << 1) + 0xC0ED7FC) + (t7 << 2)) + 0x0)));
                if ((int)t4 >= (int)0x15) {
                    break;
                }
            }
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0x15) {
                break;
            }
        }
        *(unsigned int *)0xC0ED80C = 0x0;
    }
    t26 = ((int (*)(int, int))(colliBoxShapeInit))(0x0, (((a4 << 2) << 2) + 0xC0ED77C));
    t27 = 0x0;
    t28 = 0x0;
    for (;;) {
        t28 = (t28 + 0x1);
        *(unsigned int *)((0xC26EC24 + t27)) = 0x0;
        *(unsigned int *)((0xC26EBCC + t27)) = 0x0;
        *(unsigned int *)((0xC26EC7C + t27)) = 0x0;
        t29 = t27;
        t27 = (t27 + 0x4);
        if ((int)t28 >= (int)0x16) {
            break;
        }
    }
    *(unsigned int *)0xC26ECD4 = 0x0;
    t30 = 0xC26F408;
    t31 = 0x0;
    for (;;) {
        t31 = (t31 + 0x1);
        *(unsigned int *)((t30 + 0x4)) = 0xFFFFFFFF;
        t30 = (t30 + 0x10);
        if ((int)t31 >= (int)0x100) {
            break;
        }
    }
    return t29;
}
