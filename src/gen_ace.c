/* Straight-line functions with calls and guards (batch gen_ace): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int PcarEvInit(int);
int calcCheckExec(int, int);
int courseStatusEntry(int, int);
int getCoursePointMove(int, int, int);
int nlSetEventNext(int, int, int);
int TrainInit(int a4, int a5);
struct o4_float { char p[0x4]; float v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o90_float { char p[0x90]; float v; };
struct oA4_uchar { char p[0xA4]; unsigned char v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD4_uint { char p[0xD4]; unsigned int v; };


int TrainInit(int a4, int a5)
{
    int t0;
    int t1;
    int t11;
    int t13;
    int t16;
    int t18;

    t0 = nlSetEventNext(0x12C, 0xC0490E0, a4);
    if (t0 == 0) {
        return t0;
    }
    t1 = *(int *)0xC2A1B1C;
    *(unsigned int *)0xC2A1B1C = (t1 + 0x1);
    (((struct o74_uint *)(t0))->v) = ((t1 + 0x1) - 1);
    *(unsigned int *)0xC2A44A8 = ((*(int *)0xC2A44A8) + 0x1);
    if (a5 == 5) {
        (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(a4))->v)) + 0x2);
    } else {
        (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(a4))->v)) + 0x1);
    }
    (((struct o80_uint *)(t0))->v) = ((((struct o80_int *)(a4))->v));
    (((struct oD4_uint *)(t0))->v) = (((((struct oD4_int *)(a4))->v)) - ((a5 << 1) + (a5 << 2)));
    getCoursePointMove((0x80 + t0), (0xD4 + t0), 0x0);
    t11 = (((struct o80_int *)(t0))->v);
    t13 = (((struct oD4_int *)(t0))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t0)) = *(struct mv3 *)(((((t13 << 1) + t13) << 2) + (*(int *)((((((t11 << 1) + t11) << 2) + (*(int *)0xC2A6690)) + 0x0))))); }
    PcarEvInit(t0);
    t16 = (((struct o80_int *)(t0))->v);
    t18 = (((struct oD4_int *)(t0))->v);
    (((struct o90_float *)(t0))->v) = (((((struct o4_float *)(((*(int *)((((((t16 << 1) + t16) << 2) + (*(int *)0xC2A6690)) + 0x0))) + (((t18 << 1) + t18) << 2))))->v)) + 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + t0)) = *(struct mv3 *)((0x98 + a4)); }
    (((struct oA4_uchar *)(t0))->v) = (*(signed char *)(((0xA4 + a4) + 0x0)));
    *(unsigned char *)(((0xA4 + t0) + 0x1)) = (*(signed char *)(((0xA4 + a4) + 0x1)));
    *(unsigned char *)(((0xA4 + t0) + 0x2)) = (*(signed char *)(((0xA4 + a4) + 0x2)));
    *(unsigned char *)(((0xA4 + t0) + 0x3)) = (*(signed char *)(((0xA4 + a4) + 0x3)));
    *(unsigned char *)(((0xA4 + t0) + 0x4)) = (*(signed char *)(((0xA4 + a4) + 0x4)));
    *(unsigned char *)(((0xA4 + t0) + 0x5)) = (*(signed char *)(((0xA4 + a4) + 0x5)));
    courseStatusEntry(((((struct o80_int *)(t0))->v)), ((((struct oD4_int *)(t0))->v)));
    courseStatusEntry(((((struct o80_int *)(t0))->v)), (((((struct oD4_int *)(t0))->v)) + 0x1));
    return calcCheckExec(t0, ((((struct o84_int *)(t0))->v)));
}
