/* Straight-line functions with calls and guards (batch gen_mo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetCollision2D(int, float);
int PcarEvInit(int);
int calcCheckExec(int, int);
int carBalance(int, int);
int extRand(void);
int nlAddVector(int, int);
int nlCalcPoint(int, int);
int nlCloseEvent(int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int set_event(int, int);
int StopingCarInit(int a4, int a5, int a6);
struct o104_float { char p[0x104]; float v; };
struct o110_uint { char p[0x110]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct oA4_uchar { char p[0xA4]; unsigned char v; };
struct oA6_short { char p[0xA6]; short v; };
struct oA6_ushort { char p[0xA6]; unsigned short v; };
struct oC8_float { char p[0xC8]; float v; };


int StopingCarInit(int a4, int a5, int a6)
{
    int t0;
    int t44;
    int t1;
    int t6;
    int t28;
    int t29;
    float u30;
    int t22;
    int stk[10];
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    R1012 = a4;
    R1008 = a5;
    R1004 = a6;
    t0 = set_event(0x12C, 0xC0468A8);
    t44 = t0;
    if (t0 != 0) {
        t1 = *(int *)0xC2A1B1C;
        *(unsigned int *)0xC2A1B1C = (t1 + 0x1);
        (((struct o74_uint *)(t0))->v) = ((t1 + 0x1) - 1);
        *(unsigned int *)0xC2A44A8 = ((*(int *)0xC2A44A8) + 0x1);
        (((struct o78_uint *)(t0))->v) = (R1012);
        (((struct o80_uint *)(t0))->v) = (R1008);
        if ((R1004) == 0) {
            t6 = (((struct o80_int *)(t0))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t0)) = *(struct mv3 *)((*(int *)((((((t6 << 1) + t6) << 2) + (*(int *)0xC2A6690)) + 0x0)))); }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t0)) = *(struct mv3 *)((R1004)); }
        }
        PcarEvInit(t0);
        (((struct o84_uint *)(t0))->v) = (((((struct o84_int *)(t0))->v)) | 0x10);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)(0xC0A4788); }
        *(float *)(((int)stk + 16)) = -50.0f;
        nlPushUnitMatrix();
        nlRotateAY((unsigned short)((((struct oA6_short *)(t0))->v)));
        nlCalcPoint((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
        nlAddVector((0x8C + t0), (((int)stk + 4) + 0xC));
        nlAddVector((0xE0 + t0), (((int)stk + 4) + 0xC));
        nlPopMatrix(0x1);
        if ((((extRand()) & 3) != 0) && (t22 = (((struct o78_int *)(t0))->v), (int)t22 < (int)0x8)) {
            (((struct oA6_ushort *)(t0))->v) = (((((struct oA6_short *)(t0))->v)) + 0x2000);
        } else {
            (((struct o84_uint *)(t0))->v) = (((((struct o84_int *)(t0))->v)) | 0xC00);
        }
        (((struct oC8_float *)(t0))->v) = 0.00999999978f;
        t28 = GetCollision2D((0x8C + t0), 30.0f);
        t29 = *(int *)((t28 + 0x1C));
        if ((t29 != -1) && (t29 != 12)) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0xEC + t0)) = *(struct mv3 *)((t28 + 0xC)); }
            (((struct o110_uint *)(t0))->v) = 0xA;
            u30 = (((struct o18_float *)(t28))->v);
            (((struct o104_float *)(t0))->v) = u30;
            (((struct o90_float *)(t0))->v) = u30;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)(0xC0A4788); }
            carBalance(t0, (((int)stk + 4) + 0xC));
            (((struct oA4_uchar *)(t0))->v) = (*(signed char *)(((0x108 + t0) + 0x0)));
            *(unsigned char *)(((0xA4 + t0) + 0x1)) = (*(signed char *)(((0x108 + t0) + 0x1)));
            *(unsigned char *)(((0xA4 + t0) + 0x2)) = (*(signed char *)(((0x108 + t0) + 0x2)));
            *(unsigned char *)(((0xA4 + t0) + 0x3)) = (*(signed char *)(((0x108 + t0) + 0x3)));
            *(unsigned char *)(((0xA4 + t0) + 0x4)) = (*(signed char *)(((0x108 + t0) + 0x4)));
            *(unsigned char *)(((0xA4 + t0) + 0x5)) = (*(signed char *)(((0x108 + t0) + 0x5)));
            t44 = (calcCheckExec(t0, ((((struct o84_int *)(t0))->v))));
        } else {
            t44 = nlCloseEvent(t0);
            *(unsigned int *)0xC2A44A8 = ((*(int *)0xC2A44A8) - 1);
        }
    }
    return t44;
}
