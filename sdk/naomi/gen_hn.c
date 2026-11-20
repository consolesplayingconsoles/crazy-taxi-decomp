/* Straight-line functions with calls and guards (batch gen_hn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct oC_int { char p[0xC]; int v; };
float nlInnerProduct(int, int);
int nlMvClipEdge(int, int, int);
int nlMvGetFaceVerts(int, int, int, int);
int nlMvPutFaceClip(int, int, int, int);
void nlMvPutPolygon(int a4, int a5, int a6, int a7);

void nlMvPutPolygon(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t2;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t12;
    register float t15;
    register int t17;
    register int t21;
    register int t25;
    register int t28;
    register int t4;
    register int t9;
    register int t10;
    register int t11;
    register float u13;
    register int t50;
    register int t51;
    register int t52;
    register float u53;
    register int t34;
    register int t35;
    register float u37;

    *(unsigned int *)(((int)stk + 24)) = a6;
    *(unsigned int *)(((int)stk + 0)) = ((((struct oC_int *)0xC2B7664)->v));
    *(unsigned int *)(((int)stk + 28)) = 0xC2B7678;
    t6 = *(int *)((a7 + 0x0));
    t2 = (((int)stk + 0) + 0x1C);
    if ((t6 & 0x1) != 0) {
        t2 = ((int)stk + 0);
    }
    t5 = 0xC2B7670;
    t7 = a5;
    t8 = a4;
    t12 = a5;
    for (;;) {
        if ((int)t12 <= 0) {
            break;
        }
        t5 = 0xC078AC0;
        t7 = (*(int *)((t2 + 0x0)));
        t15 = nlInnerProduct(t8, t7);
        u13 = 0.0f;
        if (u13 > t15) {
            t9 = t8;
            t10 = 0x3;
            t9 = (t9 + 0x12);
            for (;;) {
                t6 = 0xC2B766C;
                t11 = *(short *)((t9 + 0x0));
                t9 = (t9 + 0x2);
                t17 = *(int *)((t6 + 0x0));
                t5 = (*(signed char *)(((t17 + t11) + 0x0)));
                if (t5 != 0) {
                    t4 = 0x2;
                    *(unsigned char *)(((t17 + t11) + 0x0)) = t4;
                    t34 = t5;
                    t35 = t6;
                    u37 = u13;
                } else {
                    *(unsigned char *)(((t17 + t11) + 0x0)) = 0x1;
                    t5 = (*(int *)(((int)stk + 24)));
                    t21 = ((t11 << 2) + t5);
                    t5 = (*(short *)((((t11 << 2) + t5) + 0x0)));
                    *(unsigned int *)(((int)stk + 20)) = t5;
                    t4 = (*(short *)((t21 + 0x2)));
                    *(unsigned int *)(((int)stk + 4)) = t4;
                    *(unsigned int *)(((int)stk + 16)) = ((t11 << 2) << 2);
                    t7 = (*(int *)(((int)stk + 4)));
                    t7 = (t7 << 2);
                    t7 = (t7 << 2);
                    t6 = ((((struct o0_int *)0xC2B7664)->v));
                    *(unsigned int *)(((int)stk + 8)) = t7;
                    t25 = *(int *)(((int)stk + 20));
                    t4 = 0xC2B7658;
                    t5 = (*(int *)((t4 + 0x0)));
                    *(unsigned int *)(((int)stk + 12)) = ((t25 << 2) << 2);
                    t7 = (t7 + t5);
                    t4 = (nlMvClipEdge((((t25 << 2) << 2) + t5), t7, (((t11 << 2) << 2) + t6)));
                    t4 = 0xC2B765C;
                    t5 = 0xC2B7668;
                    t28 = *(int *)((t4 + 0x0));
                    t7 = (*(int *)(((int)stk + 8)));
                    t6 = (*(int *)((t5 + 0x0)));
                    t7 = (t7 + t28);
                    t4 = (nlMvClipEdge(((*(int *)(((int)stk + 12))) + t28), t7, ((*(int *)(((int)stk + 16))) + t6)));
                }
                u13 = u37;
                t10 = (t10 - 0x1);
                t5 = t34;
                t6 = t35;
                if (t10 == 0) {
                    break;
                }
            }
            t6 = 0xC2B7664;
            t7 = t8;
            t5 = 0xC2B7658;
            t7 = (t7 + 0xC);
            t4 = (nlMvGetFaceVerts((*(int *)((t5 + 0x0))), t7, (*(int *)((t6 + 0x0))), (t8 + 0x12)));
            t6 = 0xC2B7668;
            t7 = t8;
            t5 = 0xC2B765C;
            t7 = (t7 + 0xC);
            t11 = t4;
            t4 = (nlMvGetFaceVerts((*(int *)((t5 + 0x0))), t7, (*(int *)((t6 + 0x0))), (t8 + 0x12)));
            t6 = t11;
            t7 = t4;
            t6 = (t6 | t7);
            if (t6 != 0) {
                t4 = (nlMvPutFaceClip(t11, t7, (t8 + 0xC), (t8 + 0x12)));
            } else {
                t51 = t6;
                t52 = t7;
            }
            t50 = t4;
        } else {
            u53 = u13;
        }
        u13 = u53;
        t4 = t50;
        t5 = (*(int *)(((int)stk + 0)));
        t6 = t51;
        t7 = t52;
        t8 = (t8 + 0x18);
        t12 = (t12 - 1);
        t5 = (t5 + 0xC);
        *(unsigned int *)(((int)stk + 0)) = t5;
    }
}
