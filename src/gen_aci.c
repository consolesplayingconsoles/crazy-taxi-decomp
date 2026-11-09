/* Straight-line functions with calls and guards (batch gen_aci): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int MotionBlurOff(void);
int SetMotionBlurStrength(float);
int goiToolCamData(int);
int goiToolCourseMap(int);
int goiToolCoursePoint(int);
int goiToolLight(int);
int goiToolPointEntry(int, int, int, int);
int replay(int);
int setReplayType(int);
void GoiTool(int a4, int a5, int a6, int a7);
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


void GoiTool(int a4, int a5, int a6, int a7)
{
    float u6;
    int t15;
    int t12;

    if (a4 == 0) {
        (((struct o10_uint *)0xC2A4E50)->v) = 0x0;
        (((struct o14_uint *)0xC2A4E50)->v) = 0x0;
        (((struct o18_uint *)0xC2A4E50)->v) = 0x2;
        (((struct o8_uint *)0xC2A4E50)->v) = 0x0;
        (((struct oC_uint *)0xC2A4E50)->v) = 0x0;
        (((struct o0_uint *)0xC0F2B30)->v) = 0xFFFFFFFF;
        (((struct o4_uint *)0xC0F2B30)->v) = 0x0;
        (((struct oC_uint *)0xC0F2B30)->v) = 0x0;
        goiToolPointEntry(0xFFFFFFFF, 0x0, a6, a7);
        goiToolCourseMap(0x0);
        goiToolCoursePoint(0x0);
        goiToolLight(0x0);
        goiToolCamData(0x0);
        MotionBlurOff();
        u6 = 0.5f;
        (((struct o0_float *)0xC2A6298)->v) = u6;
        SetMotionBlurStrength(u6);
        setReplayType(0x0);
        replay(0x1);
        replay(0x5);
        t15 = 0x3;
        if (((*(int *)0xC1EE234) != 0) && (t12 = (((struct o0_int *)0xC2A4E50)->v), t12 != 1)) {
            t15 = 0x2;
        }
        replay(t15);
        (((struct oC_uint *)0xC2A6298)->v) = 0x0;
    }
}
