/* Straight-line functions with calls and guards (batch gen_vh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetRotVec(int);
int SetColliObj(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int setObjPlace(int a4, int a5);

int setObjPlace(int a4, int a5)
{
    int t0;
    int t55;
    int t4;
    int t9;
    int t12;
    int t18;
    int t39;
    int t44;
    int t46;
    int t54;
    int t52;
    int t49;

    t0 = *(short *)((a4 + 0x10));
    t55 = t0;
    if (t0 == -1) {
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(a5) = *(struct mv3 *)(a4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a5 + 0xC)) = *(struct mv3 *)(0xC0965F0); }
        *(float *)((a5 + 0x18)) = 0.0f;
        nlPushUnitMatrix();
        nlRotateAY((*(int *)((a4 + 0xC))));
        t4 = *(short *)((a4 + 0x10));
        nlRotateAX((*(int *)((0xC0EDBCC + ((((t4 << 2) << 1) + t4) << 2)))));
        GetRotVec((a5 + 0x30));
        nlPopMatrix(0x1);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a5 + 0x48)) = *(struct mv3 *)(0xC0965F0); }
        *(unsigned int *)((a5 + 0x28)) = (a5 + 0x30);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a5 + 0x58)) = *(struct mv3 *)(0xC0965F0); }
        t9 = *(short *)((a4 + 0x10));
        if ((t9 != 17) && ((t9 != 20) && ((t9 != 19) && ((t9 != 7) && (t9 != 16))))) {
            *(unsigned int *)((a5 + 0x68)) = 0x1;
        } else {
            *(unsigned int *)((a5 + 0x68)) = 0x0;
        }
        t12 = *(short *)((a4 + 0x10));
        *(unsigned int *)(((0x54 + a5) + 0x0)) = (((((t12 << 2) << 1) + t12) << 2) + 0xC0EDBC0);
        *(unsigned int *)(((0x6C + a5) + 0x0)) = (*(short *)((a4 + 0x12)));
        *(unsigned int *)(((0x64 + a5) + 0x0)) = (*(int *)(((*(int *)((0xC0EE1B4 + ((*(short *)((a4 + 0x10))) << 2)))) + ((*(short *)((a4 + 0x12))) << 2))));
        t18 = *(short *)((a4 + 0x10));
        if ((t18 != 7) && ((t18 != 8) && ((t18 != 10) && (t18 != 14)))) {
            t39 = *(short *)((a4 + 0x10));
            if ((t39 != 11) && ((t39 != 12) && ((t39 != 15) && (t39 != 16)))) {
                t44 = *(short *)((a4 + 0x10));
                if (t44 == 19) {
                    t49 = (SetColliObj(a5, 0x13));
                } else {
                    t46 = 0x10;
                    if (t44 == 20) {
                        t46 = 0x14;
                    }
                    t49 = (SetColliObj(a5, t46));
                }
                t52 = t49;
            } else {
                t52 = (SetColliObj(a5, 0x12));
            }
            t54 = t52;
        } else {
            t54 = (SetColliObj(a5, 0x11));
        }
        t55 = t54;
    }
    return t55;
}
