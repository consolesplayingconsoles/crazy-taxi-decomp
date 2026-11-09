/* Straight-line functions with calls and guards (batch gen_vs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
float nlLength(int, int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlTranslate(float, float, float);
int Put_Course_Obj_Sound(int a4, int a5);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int Put_Course_Obj_Sound(int a4, int a5)
{
    int t0;
    float t1;
    int t24;
    float t31;
    int t41;
    int t59;
    float t66;
    int t75;
    int t96;
    int t113;

    t0 = *(int *)0xC1EE20C;
    if (t0 == 0) {
        t1 = nlLength(0xC5E0008, 0xC179840);
        if (3000.0f > t1) {
            nlObjPutUseViewMatrix((*(int *)(((((((struct o8_int *)0xC2A6EC8)->v)) << 2) + 0xC118678))));
            if (400.0f > t1) {
                if (((((struct o10_int *)0xC2A6EC8)->v)) == 0) {
                    (((struct o10_uint *)0xC2A6EC8)->v) = 0x1;
                    Sound_Request(0x211A9, 0x0);
                }
            } else {
                if (((((struct o10_int *)0xC2A6EC8)->v)) == 1) {
                    (((struct o10_uint *)0xC2A6EC8)->v) = 0x0;
                    Sound_Request(0x311A9, 0x0);
                }
            }
        }
        t24 = (int)((int)(((((struct o0_int *)0xC2A6EC8)->v)) + 0x1) % (int)0x2);
        (((struct o0_uint *)0xC2A6EC8)->v) = t24;
        t113 = t24;
        if (t24 != 1) {
        } else {
            t113 = (int)((int)(((((struct o8_int *)0xC2A6EC8)->v)) + 0x1) % (int)((((struct o0_int *)0xC0C83E0)->v)));
            (((struct o8_uint *)0xC2A6EC8)->v) = t113;
        }
    } else {
        t113 = t0;
        if (t0 != 1) {
        } else {
            t31 = nlLength(0xC5E9FA8, 0xC179840);
            if (3000.0f > t31) {
                nlObjPutUseViewMatrix((*(int *)(((((((struct o8_int *)0xC2A6EC8)->v)) << 2) + 0xC1186F0))));
                nlPushMatrix(0x0);
                nlTranslate(300.0f, 0.0f, 0.0f);
                nlObjPutUseViewMatrix((*(int *)(((((((struct o8_int *)0xC2A6EC8)->v)) << 2) + 0xC1186F0))));
                nlPopMatrix(0x1);
                t41 = (((struct o10_int *)0xC2A6EC8)->v);
                if (400.0f > t31) {
                    if (t41 == 0) {
                        (((struct o10_uint *)0xC2A6EC8)->v) = 0x1;
                        Sound_Request(0x211A9, 0x0);
                    }
                } else {
                    if (t41 == 1) {
                        (((struct o10_uint *)0xC2A6EC8)->v) = 0x0;
                        Sound_Request(0x311A9, 0x0);
                    }
                }
            }
            t59 = (int)((int)(((((struct o0_int *)0xC2A6EC8)->v)) + 0x1) % (int)0x2);
            (((struct o0_uint *)0xC2A6EC8)->v) = t59;
            if (t59 == 1) {
                (((struct o8_uint *)0xC2A6EC8)->v) = ((int)((int)(((((struct o8_int *)0xC2A6EC8)->v)) + 0x1) % (int)((((struct o4_int *)0xC0C83E0)->v))));
            }
            t66 = nlLength(0xC5ECBB8, 0xC179840);
            if (3000.0f > t66) {
                nlObjPutUseViewMatrix((*(int *)(((((((struct oC_int *)0xC2A6EC8)->v)) << 2) + 0xC118768))));
                nlPushMatrix(0x0);
                nlObjPutUseViewMatrix((*(int *)(((((((struct oC_int *)0xC2A6EC8)->v)) << 2) + 0xC118768))));
                nlPopMatrix(0x1);
                t75 = (((struct o14_int *)0xC2A6EC8)->v);
                if (400.0f > t66) {
                    if (t75 == 0) {
                        (((struct o14_uint *)0xC2A6EC8)->v) = 0x1;
                        Sound_Request(0x211A9, 0x0);
                    }
                } else {
                    if (t75 == 1) {
                        (((struct o14_uint *)0xC2A6EC8)->v) = 0x0;
                        Sound_Request(0x311A9, 0x0);
                    }
                }
            }
            t96 = (int)((int)(((((struct o4_int *)0xC2A6EC8)->v)) + 0x1) % (int)0x2);
            (((struct o4_uint *)0xC2A6EC8)->v) = t96;
            t113 = t96;
            if (t96 == 1) {
                t113 = (int)((int)(((((struct oC_int *)0xC2A6EC8)->v)) + 0x1) % (int)((((struct o8_int *)0xC0C83E0)->v)));
                (((struct oC_uint *)0xC2A6EC8)->v) = t113;
            }
        }
    }
    return t113;
}
