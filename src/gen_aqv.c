/* Straight-line functions with calls and guards (batch gen_aqv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXF_GetFsizeSct(int);
int ADXF_OpenAfs(int, int);
int ADXF_ReadNw32(int, int, int);
int gdc_CourseBlockReadNext(void);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };


int gdc_CourseBlockReadNext(void)
{
    int t1;
    int t2;
    int t3;
    int t7;
    int t9;
    int t10;
    int t11;
    int t13;
    int t18;
    int t14;
    int t17;
    int t0;
    int t5;
    int t22;

    t1 = 0xC26C5DC;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        if (((unsigned char)(*(signed char *)((t1 + 0x0))) == 1) && (t5 = *(int *)((t1 + 0xC)), t0 = t5, (int)t3 < (int)t0)) {
            (((struct o0_uint *)0xC26E0F4)->v) = t2;
            t3 = (*(int *)((t1 + 0xC)));
        }
        t7 = *(int *)((t1 + 0x8));
        t2 = (t2 + t7);
        t2 = (t2 + 0x1);
        t1 = (t1 + (((((t7 + 0x1) << 1) + (t7 + 0x1)) << 2) << 1));
        if ((int)t2 >= (int)0x120) {
            break;
        }
    }
    t9 = (((struct o0_int *)0xC26E0F4)->v);
    if (t9 != -1) {
        (((struct o4_uint *)0xC26E0F4)->v) = 0x1;
        t10 = (((struct o0_int *)0xC26E0F4)->v);
        *(unsigned char *)((((short)((((t10 << 1) + t10) << 2) << 1) + 0xC26C5DC) + 0x0)) = 0x2;
        t11 = (((struct o0_int *)0xC26E0F4)->v);
        t13 = ADXF_OpenAfs(0x0, (*(int *)((((short)((((t11 << 1) + t11) << 2) << 1) + 0xC26C5DC) + 0x4))));
        *(unsigned int *)0xC26C5D8 = t13;
        t18 = t13;
        if (t13 != 0) {
            t14 = ADXF_GetFsizeSct(t13);
            t17 = ADXF_ReadNw32((*(int *)0xC26C5D8), t14, (*(int *)((((short)((((t11 << 1) + t11) << 2) << 1) + 0xC26C5DC) + 0x14))));
            *(unsigned char *)((((short)((((t11 << 1) + t11) << 2) << 1) + 0xC26C5DC) + 0x0)) = 0x3;
            t18 = t17;
        }
        t22 = t18;
    } else {
        (((struct o4_uint *)0xC26E0F4)->v) = 0x0;
        t22 = t9;
    }
    return t22;
}
