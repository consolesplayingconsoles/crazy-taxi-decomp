/* Straight-line functions with calls and guards (batch gen_oq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int KillColliObj(int);
int SetObjFly(int);
int nlCloseEvent(int);
float nlLength(int, int);
int setObjPlace(int, int);
void setObjGroupExec(int a4);

void setObjGroupExec(int a4)
{
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t23;
    int t10;
    float u11;
    float u12;
    int t13;
    int t15;
    int t16;
    int t28;
    float t29;
    float u30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t50;
    int t52;
    int t62;
    int t0;
    int t1;
    int t3;
    int t22;
    int t25;
    int t19;
    int t37;

    t2 = a4;
    t4 = 0x0;
    t5 = 0x0;
    for (;;) {
        t6 = *(int *)((a4 + 0x14));
        t7 = *(short *)((t6 + 0x10));
        if ((int)t5 >= (int)t7) {
            break;
        }
        t8 = *(int *)((a4 + 0x18));
        t1 = (t5 * 0x70);
        t1 = (t1 + t8);
        t9 = *(int *)((t1 + 0x68));
        t0 = t9;
        t23 = t1;
        if ((int)t0 >= 0) {
            t10 = *(int *)((a4 + 0x18));
            t0 = 0xC2757EC;
            t1 = (t5 * 0x70);
            u11 = *(float *)((t0 + 0x0));
            t1 = (t1 + t10);
            u12 = *(float *)((t1 + 0x18));
            if (u12 > u11) {
                t13 = *(int *)((a4 + 0x18));
                t2 = t13;
                t3 = (t5 * 0x70);
                t2 = (t2 + t3);
                KillColliObj(t2);
                t15 = *(int *)((a4 + 0x18));
                t1 = t15;
                t3 = (t3 + t1);
                *(unsigned int *)((t3 + 0x68)) = 0xFFFFFFFF;
                t19 = t1;
            } else {
                t2 = (t5 * 0x70);
                t16 = *(int *)((a4 + 0x18));
                t2 = (t2 + t16);
                SetObjFly(t2);
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
    t28 = *(int *)((a4 + 0x14));
    t29 = nlLength(t28, 0xC179144);
    u30 = *(float *)0xC2757E8;
    if (u30 > t29) {
        t31 = *(int *)((a4 + 0x14));
        t32 = *(short *)((t31 + 0x10));
        if ((int)t4 < (int)t32) {
            t33 = *(int *)((a4 + 0x14));
            t34 = *(int *)((t33 + 0x14));
            t35 = t32;
            t36 = t31;
            t38 = 0xC2757E8;
            t39 = 0x0;
            t40 = 0x0;
            t41 = t34;
            for (;;) {
                if (t41 == 0) {
                    break;
                }
                t42 = *(int *)((a4 + 0x18));
                t35 = t42;
                t36 = 0x68;
                t39 = (t40 * 0x70);
                t35 = (t35 + t39);
                t43 = *(int *)((t36 + t35));
                t35 = t43;
                if (t35 == -1) {
                    t44 = *(int *)((a4 + 0x18));
                    t45 = setObjPlace(t41, (t44 + t39));
                    t35 = t45;
                    t46 = *(int *)0xC1EE234;
                    t35 = t46;
                    if (t35 == 1) {
                        t38 = 0xC2A4E50;
                        t47 = *(int *)((t38 + 0x0));
                        t37 = t47;
                        if (t37 != 0) {
                            t48 = *(int *)((t41 + 0x14));
                            t41 = t48;
                            t40 = (t40 + 0x1);
                            continue;
                        }
                        return;
                    }
                    t50 = *(int *)((t41 + 0x14));
                    t41 = t50;
                    t40 = (t40 + 0x1);
                    continue;
                }
                t52 = *(int *)((t41 + 0x14));
                t41 = t52;
                t40 = (t40 + 0x1);
            }
        }
        return;
    }
    if (t4 == 0) {
        t62 = *(int *)((a4 + 0x14));
        *(unsigned int *)((t62 + 0x1C)) = 0x0;
        nlCloseEvent(a4);
    return;
    }
}
