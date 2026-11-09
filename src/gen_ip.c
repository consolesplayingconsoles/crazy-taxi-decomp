/* Straight-line functions with calls and guards (batch gen_ip): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetCollision2D(int, float);
int GetRotVec4Ang(int, int, int, int);
int TrainInit(int, int);
int carBalance(int, int);
int carColliReflection(int);
int carEntry(int);
int carMultiCollision(int, float);
int carResistance(int);
int carSteering(int);
int courseStatusEntry(int, int);
int dropOutCheck(int);
int getNearLineIndex(int, int, int, int, int);
int nlAddVector(int, int);
int nlCalcVector(int, int);
float nlInnerProduct(int, int);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
int technicalCheck(int, int, int);
int trainCarDrive(int, int, int, int);
int trainCarExec(int a4, int a5, int a6);
struct o100_float { char p[0x100]; float v; };
struct o104_float { char p[0x104]; float v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o110_int { char p[0x110]; int v; };
struct o110_uint { char p[0x110]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o84_int { char p[0x84]; int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA4_short { char p[0xA4]; short v; };
struct oA6_short { char p[0xA6]; short v; };
struct oA8_short { char p[0xA8]; short v; };
struct oCC_float { char p[0xCC]; float v; };


int trainCarExec(int a4, int a5, int a6)
{
    float t3;
    int t14;
    int t27;
    int t28;
    int t50;
    float u72;
    float t66;
    int t90;
    int t114;
    int t115;
    int t154;
    int t155;
    int t156;
    int t157;
    int t162;
    int t164;
    int t165;
    int t166;
    int t170;
    int t189;
    int t172;
    int t173;
    int t174;
    int t175;
    int t180;
    int t182;
    int t183;
    int t184;
    int t188;
    int t4;
    int t5;
    int t6;
    int t7;
    int t42;
    int t43;
    int t44;
    int t22;
    int t34;
    int t35;
    float u47;
    int t198;
    int t163;
    int t181;
    int stk[29];

    technicalCheck(a4, a5, a6);
    (((struct o84_uint *)(a4))->v) = (((((struct o84_int *)(a4))->v)) | 0xC);
    t3 = nlLength(((*(int *)0xC2A1B30) + 0x78), (0x8C + a4));
    if ((3000.0f > t3) && (((t4 = (((struct o78_int *)(a4))->v), t4 == 19) && (t5 = *(int *)0xC2A9D60, t5 != 0)) || ((t6 = (((struct o78_int *)(a4))->v), t6 == 16) && (t7 = *(int *)0xC2A4E4C, t7 == 1)))) {
        if ((((((struct o84_int *)(a4))->v)) & 0x1) == 0) {
            (((struct o84_uint *)(a4))->v) = (((((struct o84_int *)(a4))->v)) | 0x1);
            t14 = 0x5;
            for (;;) {
                TrainInit(a4, t14);
                t14 = (t14 - 1);
                if ((int)t14 <= 0) {
                    break;
                }
            }
        } else {
            t22 = 0x5;
        }
        t44 = t22;
    } else {
        if ((0x1 & ((((struct o84_int *)(a4))->v))) != 0) {
            (((struct o84_uint *)(a4))->v) = (((((struct o84_int *)(a4))->v)) & 0xFFFFFFFE);
            t27 = a4;
            t28 = 0x5;
            for (;;) {
                t27 = (*(int *)((t27 + 0x8)));
                t28 = (t28 - 0x1);
                (((struct o84_uint *)(t27))->v) = (((((struct o84_int *)(t27))->v)) & 0xFFFFFFFE);
                if (t28 == 0) {
                    break;
                }
            }
            t34 = 0xFFFFFFFE;
            t35 = t28;
        }
        t42 = t34;
        t43 = t35;
        t44 = 0x5;
    }
    if ((800.0f > t3) && (u47 = (((struct oCC_float *)(a4))->v), u47 > 0.694444537f)) {
        t50 = (((struct o78_int *)(a4))->v);
        if (t50 == 16) {
            *(unsigned int *)0xC2A4E48 = ((*(int *)0xC2A4E48) | 0x3);
        } else {
            if (t50 == 19) {
                *(unsigned int *)0xC2A4E48 = ((*(int *)0xC2A4E48) | 0xC);
            }
        }
    }
    trainCarDrive(a4, t42, t43, t44);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x1C)) = *(struct mv3 *)((0x98 + a4)); }
    u72 = t3;
    if ((((((struct o84_int *)(a4))->v)) & 8) != 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x28)) = *(struct mv3 *)((0x8C + a4)); }
        nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.199999988f);
        t66 = nlInnerProduct((a4 + 0x5C), (a4 + 0x44));
        (((struct o100_float *)(a4))->v) = t66;
        u72 = t66;
    }
    if ((((((struct o84_int *)(a4))->v)) & 0x4) == 0) {
    } else {
        (((struct o9C_float *)(a4))->v) = (((((struct o9C_float *)(a4))->v)) - 0.073499985f);
        if ((int)((((struct o110_int *)(a4))->v)) > 0) {
            (((struct o110_uint *)(a4))->v) = (((((struct o110_int *)(a4))->v)) - 1);
            carSteering(a4);
            carResistance(a4);
        }
        nlScaleVector((0x98 + a4), (0x98 + a4), 0.999799967f);
        nlAddVector((0x8C + a4), (0x98 + a4));
        t90 = GetCollision2D((0x8C + a4), 30.0f);
        if ((*(int *)((t90 + 0x1C))) != -1) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0xEC + a4)) = *(struct mv3 *)((t90 + 0xC)); }
            (((struct o104_float *)(a4))->v) = ((((struct o18_float *)(t90))->v));
            carMultiCollision(a4, 45.0f);
            if (((((struct o104_float *)(a4))->v)) > ((((struct o90_float *)(a4))->v))) {
                (((struct o90_float *)(a4))->v) = ((((struct o104_float *)(a4))->v));
                carColliReflection(a4);
                (((struct o110_uint *)(a4))->v) = (int)((float)((((struct o110_int *)(a4))->v)) + 5.0f);
            }
        } else {
            dropOutCheck(a4);
        }
        if ((int)((((struct o110_int *)(a4))->v)) > (int)0xA) {
            (((struct o110_uint *)(a4))->v) = 0xA;
        }
        (((struct o110_uint *)(a4))->v) = 0xA;
        t114 = (((struct o80_int *)(a4))->v);
        t115 = *(int *)0xC2A6690;
        *(unsigned int *)(((int)stk + 8)) = ((((t114 << 1) + t114) << 2) + t115);
        getNearLineIndex(0x2, (*(int *)(((*(int *)(((int)stk + 8))) + 0x0))), (*(int *)(((*(int *)((((((t114 << 1) + t114) << 2) + t115) + 0x4))) + 0x0))), (0xD4 + a4), (0x8C + a4));
        nlSubVector3op((((int)stk + 8) + 0x1C), (0x98 + a4), (((int)stk + 8) + 0x1C));
        carBalance(a4, (((int)stk + 8) + 0x1C));
        (((struct o108_uchar *)(a4))->v) = (*(signed char *)(((0xA4 + a4) + 0x0)));
        *(unsigned char *)(((0x108 + a4) + 0x1)) = (*(signed char *)(((0xA4 + a4) + 0x1)));
        *(unsigned char *)(((0x108 + a4) + 0x2)) = (*(signed char *)(((0xA4 + a4) + 0x2)));
        *(unsigned char *)(((0x108 + a4) + 0x3)) = (*(signed char *)(((0xA4 + a4) + 0x3)));
        *(unsigned char *)(((0x108 + a4) + 0x4)) = (*(signed char *)(((0xA4 + a4) + 0x4)));
        *(unsigned char *)(((0x108 + a4) + 0x5)) = (*(signed char *)(((0xA4 + a4) + 0x5)));
    }
    nlPushUnitMatrix();
    nlRotateAZ((-(unsigned short)((((struct oA8_short *)(a4))->v))));
    nlRotateAX((-(unsigned short)((((struct oA4_short *)(a4))->v))));
    nlRotateAY((-(unsigned short)((((struct oA6_short *)(a4))->v))));
    nlCalcVector((0x98 + a4), (((int)stk + 8) + 0x40));
    (((struct oCC_float *)(a4))->v) = (*(float *)(((int)stk + 80)));
    nlPopMatrix(0x1);
    carEntry(a4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x14)) = *(struct mv3 *)((0x8C + a4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x20)) = *(struct mv3 *)((0x98 + a4)); }
    nlScaleVector((((int)stk + 8) + 0x40), (a4 + 0x44), (((((struct o100_float *)(a4))->v)) - u72));
    nlAddVector((a4 + 0x5C), (((int)stk + 8) + 0x40));
    nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.899999976f);
    GetRotVec4Ang((a4 + 0x44), (unsigned short)((((struct oA4_short *)(a4))->v)), (unsigned short)((((struct oA6_short *)(a4))->v)), (unsigned short)((((struct oA8_short *)(a4))->v)));
    (((struct o68_uint *)(a4))->v) = 0x0;
    if (((((struct o80_int *)(a4))->v)) == 0x13B) {
        t154 = 0x80;
        t155 = 0xC0A38B4;
        t156 = 0xC0A3884;
        t157 = 0x0;
        for (;;) {
            if ((unsigned int)t157 >= (unsigned int)0x3) {
                return t154;
            }
            t154 = 0xD4;
            t162 = *(int *)((a4 + t154));
            if (((int)t162 >= (int)(*(int *)((t156 + 0x0)))) && (t163 = *(int *)((t156 + 0x4)), (int)t162 <= (int)t163)) {
                break;
            }
            t156 = (t156 + 0x8);
            t155 = (t155 + 0x10);
            t157 = (t157 + 0x1);
        }
        t164 = t155;
        t165 = 0x0;
        for (;;) {
            t166 = *(int *)((t164 + 0x0));
            t164 = (t164 + 0x4);
            t170 = courseStatusEntry(t166, ((*(int *)(((*(int *)((((((t166 << 1) + t166) << 2) + (*(int *)0xC2A6690)) + 0x4))) + 0x0))) - 1));
            t165 = (t165 + 0x1);
            if ((int)t165 >= (int)0x4) {
                break;
            }
        }
        t198 = t170;
    } else {
        t189 = 0x80;
        if (((((struct o80_int *)(a4))->v)) == 0x13C) {
            t172 = 0x80;
            t173 = 0xC0A38B4;
            t174 = 0xC0A389C;
            t175 = 0x0;
            for (;;) {
                if ((unsigned int)t175 >= (unsigned int)0x3) {
                    return t172;
                }
                t172 = 0xD4;
                t180 = *(int *)((a4 + t172));
                if (((int)t180 >= (int)(*(int *)((t174 + 0x0)))) && (t181 = *(int *)((t174 + 0x4)), (int)t180 <= (int)t181)) {
                    break;
                }
                t174 = (t174 + 0x8);
                t173 = (t173 + 0x10);
                t175 = (t175 + 0x1);
            }
            t182 = t173;
            t183 = 0x0;
            for (;;) {
                t184 = *(int *)((t182 + 0x0));
                t182 = (t182 + 0x4);
                t188 = courseStatusEntry(t184, ((*(int *)(((*(int *)((((((t184 << 1) + t184) << 2) + (*(int *)0xC2A6690)) + 0x4))) + 0x0))) - 1));
                t183 = (t183 + 0x1);
                if ((int)t183 >= (int)0x4) {
                    break;
                }
            }
            t189 = t188;
        }
        t198 = t189;
    }
    return t198;
}
