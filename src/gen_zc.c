/* Straight-line functions with calls and guards (batch gen_zc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckClippingProject3D(int, float);
int carBoxVertexInit(void);
int courseStatusEntry(int, int);
int courseStatusInit(int);
int getCoursePointMove(int, int, int);
int nlPopMatrix(int);
int nlProjectScreen3D(int, int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlTranslateV(int);
int putCarModel(int, int);
int putTrainModel(int, int);
int replay(int);
int entryCarPut(int a4);

int entryCarPut(int a4)
{
    int t0;
    int t1;
    int t5;
    int t7;
    int t14;
    int t18;
    float u38;
    float u43;
    int t44;
    float u39;
    float u40;
    int t64;
    int t66;
    int t6;
    int t8;
    int t9;
    int t27;
    int t34;
    float u35;
    float u36;
    int stk[17];

    if (a4 == 0) {
        *(unsigned int *)0xC2A44C8 = 0x0;
        *(unsigned int *)0xC2A44A8 = 0x0;
        t0 = 0xC2A44CC;
        t1 = 0x0;
        for (;;) {
            t1 = (t1 + 0x1);
            *(unsigned int *)((t0 + 0x0)) = 0x0;
            t0 = (t0 + 0x4);
            if ((int)t1 >= (int)0x64) {
                break;
            }
        }
        *(unsigned int *)0xC2A44AC = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2A44B0) = *(struct mv3 *)(0xC0A4788); }
        *(float *)0xC2A44BC = 0.0f;
        *(float *)0xC2A44C0 = 20.0f;
        *(float *)0xC2A44C4 = -100.0f;
        courseStatusInit(0x0);
        t66 = (carBoxVertexInit());
    } else {
        courseStatusInit(0x2);
        *(unsigned int *)(((int)stk + 12)) = 0x0;
        t5 = 0xC0449C8;
        t7 = 0xC2A44CC;
        for (;;) {
            if ((unsigned int)(*(int *)(((int)stk + 12))) < (unsigned int)(*(int *)0xC2A44C8)) {
                t5 = 0x84;
                t9 = (*(int *)((t7 + 0x0)));
                if (((*(int *)((t9 + t5))) & 0x10) == 0) {
                    t5 = 0xD4;
                    t14 = *(int *)((t9 + t5));
                    t5 = (t5 - 84);
                    t5 = (courseStatusEntry((*(int *)((t9 + t5))), t14));
                    t5 = 0x78;
                    if ((int)(*(int *)((t9 + t5))) >= (int)0xA) {
                        t5 = 0x80;
                        t18 = *(int *)((t9 + t5));
                        t5 = 0xD4;
                        *(unsigned int *)(((int)stk + 8)) = t18;
                        t6 = (*(int *)((t9 + t5)));
                        t6 = (t6 - 1);
                        *(unsigned int *)(((int)stk + 4)) = t6;
                        t5 = (getCoursePointMove((((int)stk + 4) + 0x4), ((int)stk + 4), 0x0));
                        t5 = (courseStatusEntry((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4)))));
                    }
                } else {
                    t27 = t6;
                }
                t6 = t27;
                t5 = (nlProjectScreen3D((0x8C + t9), (((int)stk + 4) + 0xC)));
                t5 = 0xB0;
                t5 = (CheckClippingProject3D((((int)stk + 4) + 0xC), (*(float *)((t9 + t5)))));
                if ((t5 != 0) && (t34 = (t5 == 0), t5 = 0xC044AD0, u35 = *(float *)((t5 + 0x0)), t5 = 0x14, u36 = *(float *)((((int)stk + 4) + t5)), u36 > u35)) {
                    t5 = 0x84;
                    *(unsigned int *)((t9 + t5)) = ((*(int *)((t9 + t5))) | 0x10000);
                    t5 = 0x14;
                    u38 = *(float *)((((int)stk + 4) + t5));
                    t8 = 0x1;
                    u43 = u38;
                    t44 = 0;
                    if (u38 > -400.0f) {
                        t5 = 0xC;
                        u39 = *(float *)((((int)stk + 4) + t5));
                        t5 = 0xC044AD8;
                        u40 = *(float *)((t5 + 0x0));
                        if (u40 > _builtin_fabsf(u39)) {
                            t8 = 0x0;
                        }
                        u43 = _builtin_fabsf(u39);
                        t44 = ((u40 > _builtin_fabsf(u39)));
                    } else {
                        t44 = (0);
                    }
                    if (40.0f > (*(float *)0xC1798A4)) {
                        t8 = 0x0;
                    }
                    t5 = (nlPushMatrix(0x0));
                    t5 = (nlTranslateV((0x8C + t9)));
                    t5 = 0xA6;
                    t5 = (nlRotateAY((unsigned short)(*(short *)((t9 + t5)))));
                    t5 = 0xA4;
                    t5 = (nlRotateAX((unsigned short)(*(short *)((t9 + t5)))));
                    t5 = 0xA8;
                    t5 = (nlRotateAZ((unsigned short)(*(short *)((t9 + t5)))));
                    t5 = 0x78;
                    if ((int)(*(int *)((t9 + t5))) < (int)0x10) {
                        t5 = (putCarModel(t9, t8));
                    } else {
                        t5 = (putTrainModel(t9, t8));
                    }
                    t5 = (nlPopMatrix(0x1));
                } else {
                    t5 = 0x84;
                    *(unsigned int *)((t9 + t5)) = ((*(int *)((t9 + t5))) & 0xFFFEFFFF);
                }
                t6 = (*(int *)(((int)stk + 12)));
                t7 = (t7 + 0x4);
                t6 = (t6 + 0x1);
                *(unsigned int *)(((int)stk + 12)) = t6;
                continue;
            }
            break;
        }
        t64 = replay(0x0);
        if (t64 != 4) {
            *(unsigned int *)0xC2A44C8 = 0x0;
        }
        t66 = t64;
    }
    return t66;
}
