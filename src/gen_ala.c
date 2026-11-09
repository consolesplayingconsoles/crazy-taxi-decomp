/* Straight-line functions with calls and guards (batch gen_ala): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int PcarEvInit(int);
int TrailerInit(int, int);
int calcCheckExec(int, int);
int courseStatusEntry(int, int);
int extRand(void);
int nlScaleUnitVector(int, int, float);
int nlSubVector(int, int);
int set_event(int, int);
int PcarInit(int a4, int a5, int a6);
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct oB4_float { char p[0xB4]; float v; };
struct oD0_float { char p[0xD0]; float v; };
struct oD4_int { char p[0xD4]; int v; };


int PcarInit(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t4;
    int t9;
    float u19;
    int t26;
    int t38;

    t0 = set_event(0x12C, 0xC0465A8);
    if (t0 == 0) {
        return t0;
    }
    t1 = *(int *)0xC2A1B1C;
    *(unsigned int *)0xC2A1B1C = (t1 + 0x1);
    (((struct o74_uint *)(t0))->v) = ((t1 + 0x1) - 1);
    *(unsigned int *)0xC2A44A8 = ((*(int *)0xC2A44A8) + 0x1);
    (((struct o78_uint *)(t0))->v) = a4;
    t4 = 0x0;
    if (((extRand()) & 15) == 0) {
        t4 = 0x1;
    }
    if (t4 != 0) {
        (((struct o78_uint *)(t0))->v) = 0x0;
    }
    (((struct o80_uint *)(t0))->v) = a5;
    if (a6 == 0) {
        t9 = (((struct o80_int *)(t0))->v);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t0)) = *(struct mv3 *)((*(int *)((((((t9 << 1) + t9) << 2) + (*(int *)0xC2A6690)) + 0x0)))); }
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t0)) = *(struct mv3 *)(a6); }
    }
    PcarEvInit(t0);
    u19 = 0.06f;
    u19 = u19 + 0.01f * (1e+03f / ((((struct oB4_float *)(t0))->v)));
    (((struct oD0_float *)(t0))->v) = u19;
    if (t4 != 0) {
        (((struct o84_uint *)(t0))->v) = (((((struct o84_int *)(t0))->v)) | 0x2);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + t0)) = *(struct mv3 *)((0xE0 + t0)); }
    nlSubVector((0x98 + t0), (0x8C + t0));
    t26 = (((struct o80_int *)(t0))->v);
    nlScaleUnitVector((0x98 + t0), (0x98 + t0), ((*(float *)((0xC0C3F04 + (((*(int *)(((*(int *)((((((t26 << 1) + t26) << 2) + (*(int *)0xC2A6690)) + 0x8))) + 0x0))) & 0xF) << 2)))) * 0.7f));
    courseStatusEntry(((((struct o80_int *)(t0))->v)), ((((struct oD4_int *)(t0))->v)));
    calcCheckExec(t0, ((((struct o84_int *)(t0))->v)));
    t38 = (((struct o78_int *)(t0))->v);
    if (t38 == 11) {
        return TrailerInit(t0, 0x1);
    }
    return t38;
}
