/* Straight-line functions with calls and guards (batch gen_gl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXF_Close(int);
int ADXF_GetFsizeSct(int);
int ADXF_GetStat(int);
int ADXF_LoadPartition(int, int, int, int);
int ADXF_OpenAfs(int, int);
int ADXF_ReadNw32(int, int, int);
int frameFlip(void);
int nlLocate(int, int);
int nlPrintf(int, ...);
int nlSetFontSize(int, int);
void gdc_CourseSetupAll(int a4, int a5);

void gdc_CourseSetupAll(int a4, int a5)
{
    int t3;
    int t10;
    int t26;
    int t42;
    int t58;
    int t69;
    int t75;
    int t76;
    int t87;
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    float u6;
    float u7;
    int t51;
    int t52;
    int t55;
    float u56;
    int t35;
    int t36;
    int t39;
    float u40;
    int t19;
    int t20;
    int t23;
    float u24;
    int stk[15];

    *(unsigned int *)(((int)stk + 16)) = 0x0;
    t3 = a5;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 16))) < (int)0x3) {
            t0 = (*(int *)(((int)stk + 16)));
            t3 = 0xC26C1C4;
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        t19 = t1;
                        t20 = t2;
                        t23 = t3;
                        u24 = u6;
                    } else {
                        t5 = 0xC08D474;
                        t2 = 0xC1528BA;
                        t10 = t3;
                        t3 = t5;
                        t0 = (ADXF_LoadPartition(0x0, t3, t10, 0x1F4));
                        t2 = 0x0;
                        t3 = 0x10;
                        *(unsigned int *)0xC26E0FC = 0xC08D21C;
                        t5 = 0xC0EA3C4;
                        *(unsigned int *)0xC26E100 = 0xC08D424;
                        t4 = 0xC0E9988;
                        *(unsigned int *)0xC26E104 = 0x82;
                        *(unsigned int *)0xC26E108 = t2;
                        t0 = (nlSetFontSize(t3, t3));
                        t3 = 0xC;
                        t0 = (nlLocate(0xA, t3));
                        t2 = 0xC08D4A0;
                        t0 = (nlPrintf((t2)));
                        t1 = 0xC074370;
                        t0 = (frameFlip());
                        t0 = (frameFlip());
                        t3 = 0x8;
                        t0 = (nlSetFontSize(t3, t3));
                    }
                    t35 = t19;
                    t36 = t20;
                    t39 = t23;
                    u40 = u24;
                } else {
                    t5 = 0xC08D468;
                    t26 = t3;
                    t3 = t5;
                    t0 = (ADXF_LoadPartition(0x0, t3, t26, 0x1F4));
                    t3 = 0x10;
                    t2 = 0xC26E104;
                    *(unsigned int *)0xC26E0FC = 0xC08CBDC;
                    t4 = 0xC0E7A20;
                    *(unsigned int *)0xC26E100 = 0xC08CF8C;
                    t5 = 0xC0E8CA4;
                    *(unsigned int *)((t2 + 0x0)) = 0xEC;
                    *(unsigned int *)0xC26E108 = 0xA4;
                    t0 = (nlSetFontSize(t3, t3));
                    t3 = 0xC;
                    t0 = (nlLocate(0xA, t3));
                    t2 = 0xC08D490;
                    t0 = (nlPrintf((t2)));
                    t0 = (frameFlip());
                    t0 = (frameFlip());
                    t3 = 0x8;
                    t0 = (nlSetFontSize(t3, t3));
                }
                t51 = t35;
                t52 = t36;
                t55 = t39;
                u56 = u40;
            } else {
                t5 = 0xC08D45C;
                t42 = t3;
                t3 = t5;
                t0 = (ADXF_LoadPartition(0x0, t3, t42, 0x1F4));
                t3 = 0x10;
                t2 = 0xC26E104;
                *(unsigned int *)0xC26E0FC = 0xC08C420;
                t4 = 0xC0E534C;
                *(unsigned int *)0xC26E100 = 0xC08C81C;
                t5 = 0xC0E674C;
                *(unsigned int *)((t2 + 0x0)) = 0xFF;
                *(unsigned int *)0xC26E108 = 0xF0;
                t0 = (nlSetFontSize(t3, t3));
                t3 = 0xC;
                t0 = (nlLocate(0xA, t3));
                t2 = 0xC08D480;
                t0 = (nlPrintf((t2)));
                t0 = (frameFlip());
                t0 = (frameFlip());
                t3 = 0x8;
                t0 = (nlSetFontSize(t3, t3));
            }
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            u6 = u56;
            t1 = t51;
            t2 = t52;
            t3 = t55;
            *(unsigned int *)(((int)stk + 12)) = 0x0;
            t58 = 0xC076830;
            for (;;) {
                t1 = (*(int *)(((int)stk + 8)));
                t2 = (*(int *)0xC26E104);
                if ((int)t1 >= (int)t2) {
                    break;
                }
                for (;;) {
                    t0 = (*(int *)(((int)stk + 12)));
                    t2 = (*(int *)0xC26E0FC);
                    t3 = (*(int *)((t2 + t0)));
                    t0 = (ADXF_OpenAfs(0x0, t3));
                    t58 = t0;
                    if (t58 != 0) {
                        break;
                    }
                }
                t0 = (ADXF_GetFsizeSct(t58));
                t3 = 0x4;
                *(unsigned int *)(((int)stk + 20)) = t0;
                t0 = (ADXF_ReadNw32(t58, t3, 0xC640000));
                for (;;) {
                    t0 = (ADXF_GetStat(t58));
                    if (t0 == 3) {
                        break;
                    }
                }
                t0 = (ADXF_Close(t58));
                t2 = 0xC640008;
                t1 = t4;
                t1 = (t1 + 0x4);
                t0 = 0xC;
                t69 = 0;
                for (; t69 < (int)t0; t69++) *(unsigned char *)(t1 + t69) = *(unsigned char *)(t2 + t69);
                t1 = 0xC640014;
                t0 = 0x2000;
                u6 = (*(float *)((t1 + 0x0)));
                *(float *)((t4 + 0x0)) = u6;
                t1 = (*(int *)(((int)stk + 20)));
                t1 = (t1 << 8);
                t1 = (t1 << 2);
                t1 = (t1 << 1);
                t0 = ((int)((int)t1 / (int)t0));
                t0 = (t0 + 0x1);
                *(unsigned int *)((t4 + 0x10)) = t0;
                t4 = (t4 + 0x14);
                t1 = (*(int *)(((int)stk + 8)));
                t1 = (t1 + 0x1);
                *(unsigned int *)(((int)stk + 8)) = t1;
                *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x4);
            }
            t0 = 0x4;
            u7 = 0.0f;
            *(float *)((t4 + t0)) = u7;
            t0 = 0x8;
            *(float *)((t4 + t0)) = u7;
            t0 = 0xC;
            *(float *)((t4 + t0)) = u7;
            *(float *)((t4 + 0x0)) = u7;
            *(unsigned int *)((t4 + 0x10)) = 0xFFFFFFFF;
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            *(unsigned int *)(((int)stk + 12)) = 0x0;
            t75 = 0xFFFFFFFF;
            t76 = t58;
            for (;;) {
                t1 = (*(int *)(((int)stk + 8)));
                t2 = (*(int *)0xC26E108);
                if ((int)t1 >= (int)t2) {
                    break;
                }
                for (;;) {
                    t0 = (*(int *)(((int)stk + 12)));
                    t2 = (*(int *)0xC26E100);
                    t75 = 0xC152DC4;
                    t3 = (*(int *)((t2 + t0)));
                    t0 = (ADXF_OpenAfs(0x0, t3));
                    t76 = t0;
                    if (t76 != 0) {
                        break;
                    }
                }
                t75 = 0xC1532DC;
                t0 = (ADXF_GetFsizeSct(t76));
                t75 = 0xC152FD0;
                t3 = 0x4;
                *(unsigned int *)(((int)stk + 20)) = t0;
                t0 = (ADXF_ReadNw32(t76, t3, 0xC640000));
                for (;;) {
                    t75 = 0xC153360;
                    t0 = (ADXF_GetStat(t76));
                    if (t0 == 3) {
                        break;
                    }
                }
                t75 = 0xC152E70;
                t0 = (ADXF_Close(t76));
                t2 = 0xC640008;
                t1 = t5;
                t75 = 0xC081324;
                t1 = (t1 + 0x4);
                t0 = 0xC;
                t87 = 0;
                for (; t87 < (int)t0; t87++) *(unsigned char *)(t1 + t87) = *(unsigned char *)(t2 + t87);
                t1 = 0xC640014;
                t0 = 0x2000;
                u6 = (*(float *)((t1 + 0x0)));
                t75 = 0xC080F10;
                *(float *)((t5 + 0x0)) = u6;
                t1 = (*(int *)(((int)stk + 20)));
                t1 = (t1 << 8);
                t1 = (t1 << 2);
                t1 = (t1 << 1);
                t0 = ((int)((int)t1 / (int)t0));
                t0 = (t0 + 0x1);
                *(unsigned int *)((t5 + 0x10)) = t0;
                t5 = (t5 + 0x14);
                t1 = (*(int *)(((int)stk + 8)));
                t1 = (t1 + 0x1);
                *(unsigned int *)(((int)stk + 8)) = t1;
                t75 = (*(int *)(((int)stk + 12)));
                t75 = (t75 + 0x4);
                *(unsigned int *)(((int)stk + 12)) = t75;
            }
            t0 = 0x4;
            *(float *)((t5 + t0)) = u7;
            t0 = 0x8;
            *(float *)((t5 + t0)) = u7;
            t0 = 0xC;
            *(float *)((t5 + t0)) = u7;
            *(float *)((t5 + 0x0)) = u7;
            *(unsigned int *)((t5 + 0x10)) = 0xFFFFFFFF;
            t2 = (*(int *)(((int)stk + 16)));
            t2 = (t2 + 0x1);
            *(unsigned int *)(((int)stk + 16)) = t2;
            continue;
        }
        break;
    }
    nlSetFontSize(0x10, 0x10);
    nlLocate(0xA, 0xC);
    nlPrintf(0xC08D4B0);
    frameFlip();
    frameFlip();
    nlSetFontSize(0x8, 0x8);
}
