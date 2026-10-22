/* Straight-line functions with calls and guards (batch gen_wq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXF_LoadPartition(int, int, int, int);
int gdc_CourseSet(int a4);

int gdc_CourseSet(int a4)
{
    int t5;
    int t0;
    int t1;
    int t2;
    int t11;
    int t12;
    int t13;
    int t23;
    int t24;
    int t25;
    int t28;
    int t16;

    if (a4 != 0) {
        if (a4 != 1) {
            t5 = a4;
            if (a4 != 2) {
            } else {
                t0 = 0x0;
                for (;;) {
                    t1 = ADXF_LoadPartition(0x0, 0xC08D474, 0xC26C1C4, 0x1F9);
                    if (t1 == 0) {
                        break;
                    }
                    t0 = (t0 + 0x1);
                    if ((int)t0 > (int)0xA) {
                        t2 = *(int *)0xC1EE208;
                        *(unsigned int *)0xC1EE208 = (t2 + 0x1);
                    }
                }
                *(unsigned int *)0xC26E0FC = 0xC08D21C;
                *(unsigned int *)0xC26E100 = 0xC08D424;
                *(unsigned int *)0xC26E104 = 0x82;
                *(unsigned int *)0xC26E108 = 0x0;
                *(unsigned int *)0xC0EA3D8 = 0xC149818;
                *(unsigned int *)0xC1EE800 = 0xC0E9988;
                *(unsigned int *)0xC1EE804 = 0xC0EA3C4;
                t5 = 0xC1EE800;
            }
            t16 = t5;
        } else {
            t11 = 0x0;
            for (;;) {
                t12 = ADXF_LoadPartition(0x0, 0xC08D468, 0xC26C1C4, 0x1F9);
                if (t12 == 0) {
                    break;
                }
                t11 = (t11 + 0x1);
                if ((int)t11 > (int)0xA) {
                    t13 = *(int *)0xC1EE208;
                    *(unsigned int *)0xC1EE208 = (t13 + 0x1);
                }
            }
            *(unsigned int *)0xC26E0FC = 0xC08CBDC;
            *(unsigned int *)0xC26E100 = 0xC08CF8C;
            *(unsigned int *)0xC26E104 = 0xEC;
            *(unsigned int *)0xC26E108 = 0xA4;
            *(unsigned int *)0xC0EA3D8 = 0xC1483C8;
            *(unsigned int *)0xC1EE800 = 0xC0E7A20;
            *(unsigned int *)0xC1EE804 = 0xC0E8CA4;
            t16 = 0xC1EE804;
        }
        t28 = t16;
    } else {
        t23 = 0x0;
        for (;;) {
            t24 = ADXF_LoadPartition(0x0, 0xC08D45C, 0xC26C1C4, 0x1F9);
            if (t24 == 0) {
                break;
            }
            t23 = (t23 + 0x1);
            if ((int)t23 > (int)0xA) {
                t25 = *(int *)0xC1EE208;
                *(unsigned int *)0xC1EE208 = (t25 + 0x1);
            }
        }
        *(unsigned int *)0xC26E0FC = 0xC08C420;
        *(unsigned int *)0xC26E100 = 0xC08C81C;
        *(unsigned int *)0xC26E104 = 0xFF;
        *(unsigned int *)0xC26E108 = 0xF0;
        *(unsigned int *)0xC0EA3D8 = 0xC146EB8;
        *(unsigned int *)0xC1EE800 = 0xC0E534C;
        *(unsigned int *)0xC1EE804 = 0xC0E674C;
        t28 = 0xC1EE804;
    }
    return t28;
}
