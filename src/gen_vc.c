/* Straight-line functions with calls and guards (batch gen_vc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int MotionBlurOff(void);
int SetMotionBlurStrength(float);
int goiToolCamData(int);
int goiToolCourseMap(int);
int goiToolCoursePoint(int);
int goiToolLight(int);
int goiToolPointEntry(int, int);
int replay(int);
int setReplayType(int);
void GoiTool(int a4);

void GoiTool(int a4)
{
    float u6;
    int t11;
    int t15;
    int t12;

    if (a4 == 0) {
        *(unsigned int *)0xC2A4E60 = 0x0;
        *(unsigned int *)0xC2A4E64 = 0x0;
        *(unsigned int *)0xC2A4E68 = 0x2;
        *(unsigned int *)0xC2A4E58 = 0x0;
        *(unsigned int *)0xC2A4E5C = 0x0;
        *(unsigned int *)0xC0F2B30 = 0xFFFFFFFF;
        *(unsigned int *)0xC0F2B34 = 0x0;
        *(unsigned int *)0xC0F2B3C = 0x0;
        goiToolPointEntry(0xFFFFFFFF, 0x0);
        goiToolCourseMap(0x0);
        goiToolCoursePoint(0x0);
        goiToolLight(0x0);
        goiToolCamData(0x0);
        MotionBlurOff();
        u6 = 0.5f;
        *(float *)0xC2A6298 = u6;
        SetMotionBlurStrength(u6);
        setReplayType(0x0);
        replay(0x1);
        replay(0x5);
        t11 = *(int *)0xC1EE234;
        t15 = 0x3;
        if ((t11 != 0) && (t12 = *(int *)0xC2A4E50, t12 != 1)) {
            t15 = 0x2;
        }
        replay(t15);
        *(unsigned int *)0xC2A62A4 = 0x0;
    }
}
