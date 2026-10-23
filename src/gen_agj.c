/* Straight-line functions with calls and guards (batch gen_agj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int KillColliObj(int);
int SetObjFly(int, int, int, int, float);
int nlCloseEvent(int);
float nlLength(int, int);
int setObjPlace(int, int);
void setObjGroupExec(int a4, int a5, int a6, int a7, float f4);

void setObjGroupExec(int a4, int a5, int a6, int a7, float f4)
{
    int t2;
    int t4;
    int t5;
    int t23;
    float t29;
    int t33;
    int t34;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t0;
    int t1;
    int t3;
    int t22;
    int t25;
    int t19;
    int t47;

    t2 = a4;
    t4 = 0x0;
    t5 = 0x0;
    for (;;) {
        if ((int)t5 >= (int)(*(short *)(((*(int *)((a4 + 0x14))) + 0x10)))) {
            break;
        }
        t1 = (t5 * 0x70);
        t1 = (t1 + (*(int *)((a4 + 0x18))));
        t0 = (*(int *)((t1 + 0x68)));
        t23 = t1;
        if ((int)t0 >= 0) {
            t0 = 0xC2757EC;
            t1 = (t5 * 0x70);
            t1 = (t1 + (*(int *)((a4 + 0x18))));
            if ((*(float *)((t1 + 0x18))) > (*(float *)((t0 + 0x0)))) {
                t2 = (*(int *)((a4 + 0x18)));
                t3 = (t5 * 0x70);
                t2 = (t2 + t3);
                KillColliObj(t2);
                t1 = (*(int *)((a4 + 0x18)));
                t3 = (t3 + t1);
                *(unsigned int *)((t3 + 0x68)) = 0xFFFFFFFF;
                t19 = t1;
            } else {
                t2 = (t5 * 0x70);
                t2 = (t2 + (*(int *)((a4 + 0x18))));
                SetObjFly(t2, a5, a6, a7, f4);
                t4 = (t4 + 0x1);
            }
            t23 = t19;
        } else {
            t22 = t0;
            t25 = t2;
        }
        t0 = t22;
        t5 = (t5 + 0x1);
        t1 = t23;
        t2 = t25;
    }
    t29 = nlLength((*(int *)((a4 + 0x14))), 0xC179144);
    if ((*(float *)0xC2757E8) > t29) {
        t33 = *(int *)((a4 + 0x14));
        t34 = *(short *)((t33 + 0x10));
        if ((int)t4 < (int)t34) {
            t37 = t34;
            t38 = t33;
            t39 = 0x0;
            t40 = 0x0;
            t41 = (*(int *)(((*(int *)((a4 + 0x14))) + 0x14)));
            for (;;) {
                if (t41 == 0) {
                    break;
                }
                t37 = (*(int *)((a4 + 0x18)));
                t38 = 0x68;
                t39 = (t40 * 0x70);
                t37 = (t37 + t39);
                t37 = (*(int *)((t38 + t37)));
                if (t37 == -1) {
                    t37 = (setObjPlace(t41, ((*(int *)((a4 + 0x18))) + t39)));
                    t37 = (*(int *)0xC1EE234);
                    if ((t37 == 1) && (t47 = *(int *)0xC2A4E50, t47 == 0)) {
                        return;
                    }
                    t41 = (*(int *)((t41 + 0x14)));
                    t40 = (t40 + 0x1);
                    continue;
                }
                t41 = (*(int *)((t41 + 0x14)));
                t40 = (t40 + 0x1);
            }
        }
        return;
    }
    if (t4 == 0) {
        *(unsigned int *)(((*(int *)((a4 + 0x14))) + 0x1C)) = 0x0;
        nlCloseEvent(a4);
    return;
    }
}
