/* Straight-line functions with calls and guards (batch gen_qq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ResetFadeColor(void);
int Result_Awesome_Put(void);
int Result_Crazy_Put(void);
int Sound_Request(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int, int);
void Result_Class_Put(void);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_int { char p[0x30]; int v; };
struct o38_int { char p[0x38]; int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


void Result_Class_Put(void)
{
    int t1;
    int t73;
    int t70;

    t1 = (((struct o0_int *)0xC2A97A8)->v);
    if ((int)((((struct o0_int *)0xC2A96F4)->v)) <= (int)t1) {
        return;
    }
    if (((((struct o0_int *)0xC2A982C)->v)) != 1) {
        (((struct o0_uint *)0xC2A96F4)->v) = t1;
        return;
    }
    if (((((struct o4_int *)0xC2A982C)->v)) != 1) {
        (((struct o0_uint *)0xC2A96F4)->v) = t1;
        return;
    }
    if (((((struct o8_int *)0xC2A982C)->v)) != 1) {
        (((struct o0_uint *)0xC2A96F4)->v) = t1;
        return;
    }
    if (((((struct oC_int *)0xC2A982C)->v)) != 1) {
        (((struct o0_uint *)0xC2A96F4)->v) = t1;
        return;
    }
    if (((((struct o10_int *)0xC2A982C)->v)) != 1) {
        (((struct o0_uint *)0xC2A96F4)->v) = t1;
        return;
    }
    if (((((struct o14_int *)0xC2A982C)->v)) != 1) {
        (((struct o0_uint *)0xC2A96F4)->v) = t1;
        return;
    }
    if (((((struct o18_int *)0xC2A982C)->v)) != 1) {
        (((struct o0_uint *)0xC2A96F4)->v) = t1;
        return;
    }
    if (((((struct o1C_int *)0xC2A982C)->v)) == 1) {
        if (((((struct o38_int *)0xC2A97A8)->v)) == 1) {
            (((struct o3C_uint *)0xC2A97A8)->v) = (((((struct o3C_int *)0xC2A97A8)->v)) + 0x1);
        }
        if (((((struct o0_int *)0xC2A96F4)->v)) == (((((struct o0_int *)0xC2A97A8)->v)) + 0x1)) {
            Sound_Request(0x405A9, 0x0);
            *(unsigned int *)0xC130E04 = ((*(int *)0xC130E04) + 0x1);
            (((struct oC_uint *)0xC2A9748)->v) = 0x1;
        } else {
            t70 = 0xC2A96F4;
        }
        t73 = (((struct o30_int *)0xC2A97A8)->v);
        if (t73 == 0x3E7) {
            nlObjPutSetFadeColor(0.75f, 0.0f, 0.0f);
            Result_Crazy_Put();
            ResetFadeColor();
    return;
        }
        if (t73 == 99) {
            nlObjPutSetFadeColor(0.75f, 0.0f, 0.0f);
            Result_Awesome_Put();
            ResetFadeColor();
    return;
        }
        (((struct o4_uint *)0xC2A96F4)->v) = (*(int *)(((t73 << 2) + 0xC130E80)));
        (((struct o8_float *)0xC2A96F4)->v) = 164.0f;
        (((struct oC_float *)0xC2A96F4)->v) = (float)(((((struct o0_int *)0xC2A9748)->v)) + 0x18C);
        (((struct o14_float *)0xC2A96F4)->v) = (((((struct o10_float *)0xC2A9748)->v)) + 1.0f);
        (((struct o18_float *)0xC2A96F4)->v) = (((((struct o10_float *)0xC2A9748)->v)) + 1.0f);
        (((struct o20_float *)0xC2A96F4)->v) = 0.0f;
        (((struct o28_float *)0xC2A96F4)->v) = 1.0f;
        (((struct o2C_uint *)0xC2A96F4)->v) = 0x0;
        nlSprPut(0xC2A96F8, 0xC2A9758);
    return;
    }
    (((struct o0_uint *)0xC2A96F4)->v) = t1;
}
