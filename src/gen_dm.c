/* Straight-line functions with calls and guards (batch gen_dm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetCollision2D(int, float);
int PcarEvInit(int);
int calcCheckExec(int, int);
int courseStatusEntry(int, int);
int extRand(void);
int nlAddVector(int, int);
int nlCalcVector(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlSetEventNext(int, int, int);
int TrailerInit(int a4, int a5);
struct o18_float { char p[0x18]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o90_float { char p[0x90]; float v; };
struct oA4_uchar { char p[0xA4]; unsigned char v; };
struct oA6_short { char p[0xA6]; short v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD4_uint { char p[0xD4]; unsigned int v; };


int TrailerInit(int a4, int a5)
{
    int t0;
    int t47;
    int t1;
    int t15;
    int t21;
    int t23;
    int stk[9];
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    R1004 = a5;
    t0 = nlSetEventNext(0x12C, 0xC0486D4, a4);
    t47 = t0;
    if (t0 == 0) {
    } else {
        t1 = *(int *)0xC2A1B1C;
        *(unsigned int *)0xC2A1B1C = (t1 + 0x1);
        (((struct o74_uint *)(t0))->v) = ((t1 + 0x1) - 1);
        *(unsigned int *)0xC2A44A8 = ((*(int *)0xC2A44A8) + 0x1);
        (((struct o78_uint *)(t0))->v) = (((extRand()) & 0x1) + 0xC);
        (((struct o80_uint *)(t0))->v) = ((((struct o80_int *)(a4))->v));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t0)) = *(struct mv3 *)((0x8C + a4)); }
        (((struct oD4_uint *)(t0))->v) = ((((struct oD4_int *)(a4))->v));
        *(float *)(((int)stk + 12)) = 0.0f;
        *(float *)(((int)stk + 8)) = 0.0f;
        *(float *)(((int)stk + 16)) = (-((float)(R1004) * 100.0f));
        nlPushUnitMatrix();
        nlRotateAY((unsigned short)((((struct oA6_short *)(a4))->v)));
        nlCalcVector((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x4));
        nlAddVector((0x8C + t0), (((int)stk + 4) + 0x4));
        nlPopMatrix(0x1);
        PcarEvInit(t0);
        if (((((struct o80_int *)(t0))->v)) == 0) {
            t15 = GetCollision2D((0x8C + t0), 30.0f);
            if ((*(int *)((t15 + 0x1C))) != -1) {
                (((struct o90_float *)(t0))->v) = (((((struct o18_float *)(t15))->v)) + 1.0f);
            }
        } else {
            t21 = (((struct o80_int *)(t0))->v);
            t23 = (((struct oD4_int *)(t0))->v);
            (((struct o90_float *)(t0))->v) = (((((struct o4_float *)(((*(int *)((((((t21 << 1) + t21) << 2) + (*(int *)0xC2A6690)) + 0x0))) + (((t23 << 1) + t23) << 2))))->v)) + 1.0f);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + t0)) = *(struct mv3 *)((0x98 + a4)); }
        (((struct oA4_uchar *)(t0))->v) = (*(signed char *)(((0xA4 + a4) + 0x0)));
        *(unsigned char *)(((0xA4 + t0) + 0x1)) = (*(signed char *)(((0xA4 + a4) + 0x1)));
        *(unsigned char *)(((0xA4 + t0) + 0x2)) = (*(signed char *)(((0xA4 + a4) + 0x2)));
        *(unsigned char *)(((0xA4 + t0) + 0x3)) = (*(signed char *)(((0xA4 + a4) + 0x3)));
        *(unsigned char *)(((0xA4 + t0) + 0x4)) = (*(signed char *)(((0xA4 + a4) + 0x4)));
        *(unsigned char *)(((0xA4 + t0) + 0x5)) = (*(signed char *)(((0xA4 + a4) + 0x5)));
        courseStatusEntry(((((struct o80_int *)(t0))->v)), ((((struct oD4_int *)(t0))->v)));
        courseStatusEntry(((((struct o80_int *)(t0))->v)), (((((struct oD4_int *)(t0))->v)) + 0x1));
        t47 = (calcCheckExec(t0, ((((struct o84_int *)(t0))->v))));
    }
    return t47;
}
