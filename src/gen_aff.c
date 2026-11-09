/* Straight-line functions with calls and guards (batch gen_aff): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int courseStatusGet(int, int, int, int);
int extRand(void);
int getNearLinkedLine(int, int, int, int, int);
int pcarRejoinLane(int a4);
struct o11C_int { char p[0x11C]; int v; };
struct o11C_uint { char p[0x11C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o84_int { char p[0x84]; int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct oB4_float { char p[0xB4]; float v; };
struct oD0_float { char p[0xD0]; float v; };
struct oD4_int { char p[0xD4]; int v; };


int pcarRejoinLane(int a4)
{
    int t0;
    int t1;
    int t3;
    int t22;
    float u25;
    int t41;

    t0 = (((struct o84_int *)(a4))->v);
    if (((t0 & 0xC00) != 0x400) && ((t0 & 0xC00) != 0x800)) {
        t1 = extRand();
        t41 = t1;
        if ((t1 & 0x3FF) == 0) {
            (((struct o84_uint *)(a4))->v) = (((((struct o84_int *)(a4))->v)) & 0xFFFFF3FF);
            t3 = (((struct o80_int *)(a4))->v);
            if (((*(int *)(((*(int *)((((((t3 << 1) + t3) << 2) + (*(int *)0xC2A6690)) + 0x8))) + 0x0))) & 0x4000) != 0) {
                (((struct o84_uint *)(a4))->v) = (((((struct o84_int *)(a4))->v)) | 0x800);
            } else {
                (((struct o84_uint *)(a4))->v) = (((((struct o84_int *)(a4))->v)) | 0x400);
            }
            (((struct o11C_uint *)(a4))->v) = 0x10E;
            t41 = 0x11C;
        }
    } else {
        if ((float)((((struct o11C_int *)(a4))->v)) > 150.0f) {
            (((struct o11C_uint *)(a4))->v) = (((((struct o11C_int *)(a4))->v)) - 1);
            t41 = 0x11C;
        } else {
            getNearLinkedLine(0x2, 0x0, (0x80 + a4), (0xD4 + a4), (0x8C + a4));
            t22 = courseStatusGet(((((struct o80_int *)(a4))->v)), (((((struct oD4_int *)(a4))->v)) - 2), 0x0, 0x8);
            t41 = t22;
            if (t22 == 0) {
                *(unsigned int *)((a4 + 0xC)) = 0xC0465A8;
                (((struct o84_uint *)(a4))->v) = (((((struct o84_int *)(a4))->v)) & 0xFFFFFFEF);
                u25 = 0.0599999987f;
                u25 = u25 + 0.00999999978f * (1000.0f / ((((struct oB4_float *)(a4))->v)));
                (((struct oD0_float *)(a4))->v) = u25;
                t41 = 0xD0;
            }
        }
    }
    return t41;
}
