/* Straight-line functions with calls and guards (batch gen_l): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
int kmRenderTexture(int, int, int, int);
int nlMatrixMode(int);
int nlSetWindowSize(float, float, float, float);
int nl_set_cnv_proj_pers(void);
void nlRenderTextureEnd(int a4, int a5, int a6, int a7);

void nlRenderTextureEnd(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (((struct o8_int *)0xC2B31BC)->v);
    t1 = (((struct o0_int *)0xC2B31BC)->v);
    if ((int)t0 >= 0) {
        t2 = *(int *)0xC2B29C0;
        t3 = *(int *)(((t1 + ((t0 << 2) << 2)) + 0x4));
        if ((*(int *)((((t3 * 0x3C) + t2) + 0x28))) == 0) {
            kmRenderTexture(((t3 * 0x3C) + t2), a5, a6, a7);
        }
        (((struct o0_uint *)0xA05F8068)->v) = (((*(short *)(((t1 + ((t0 << 2) << 2)) + 0xC))) - 1) << 16);
        (((struct o4_uint *)0xA05F8068)->v) = (((*(short *)(((t1 + ((t0 << 2) << 2)) + 0xE))) - 1) << 16);
        (((struct o8_uint *)0xC2B31BC)->v) = 0xFFFFFFFF;
        nlSetWindowSize(((((struct oC_float *)0xC2B31BC)->v)), ((((struct o10_float *)0xC2B31BC)->v)), ((((struct o14_float *)0xC2B31BC)->v)), ((((struct o18_float *)0xC2B31BC)->v)));
        t0 = *(signed char *)0xC2B31D8;
        nlMatrixMode(0x3);
        nl_set_cnv_proj_pers();
        nlMatrixMode(t0);
    return;
    }
}
