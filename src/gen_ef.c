/* Straight-line functions with calls and guards (batch gen_ef): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlLineBlendFunc(int, int);
int nlLineSetDiv(float);
int nlLineSetThickness(float);
int InitSpark(void);
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int InitSpark(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    for (;;) {
        t1 = ((short)t0 * (short)0x1C);
        t0 = (t0 + 0x1);
        *(unsigned int *)((((short)t1 + 0xC274DF8) + 0x18)) = 0xFFFFFFFF;
        if ((int)t0 >= (int)0x5A) {
            break;
        }
    }
    (((struct o10_uint *)0xC2757D0)->v) = 0x0;
    (((struct oC_uint *)0xC2757D0)->v) = 0x0;
    (((struct o8_uint *)0xC2757D0)->v) = 0x0;
    (((struct o4_uint *)0xC2757D0)->v) = 0x0;
    (((struct o0_uint *)0xC2757D0)->v) = 0x0;
    nlLineBlendFunc(0x1, 0x4);
    nlLineSetThickness((1.0f + 1.0f));
    return nlLineSetDiv(128.0f);
}
