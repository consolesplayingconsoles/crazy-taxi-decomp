/* Straight-line functions with calls and guards (batch gen_tk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
float nlLength(int, int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlTranslate(float, float, float);
int Put_Course_Obj_Sound(int a4, int a5);

int Put_Course_Obj_Sound(int a4, int a5)
{
    int t0;
    float t1;
    int t24;
    int t28;
    int t27;
    int t103;
    float t31;
    int t41;
    int t59;
    float t66;
    int t75;
    int t96;
    int t100;
    int t99;
    int t113;

    t0 = *(int *)0xC1EE20C;
    if (t0 == 0) {
        t1 = nlLength(0xC5E0008, 0xC179840);
        if (3000.0f > t1) {
            nlObjPutUseViewMatrix((*(int *)((((*(int *)0xC2A6ED0) << 2) + 0xC118678))));
            if (400.0f > t1) {
                if ((*(int *)0xC2A6ED8) == 0) {
                    *(unsigned int *)0xC2A6ED8 = 0x1;
                    Sound_Request(0x211A9, 0x0);
                }
            } else {
                if ((*(int *)0xC2A6ED8) == 1) {
                    *(unsigned int *)0xC2A6ED8 = 0x0;
                    Sound_Request(0x311A9, 0x0);
                }
            }
        }
        t24 = (int)((int)((*(int *)0xC2A6EC8) + 0x1) % (int)0x2);
        *(unsigned int *)0xC2A6EC8 = t24;
        t28 = t24;
        if (t24 != 1) {
        } else {
            t27 = (int)((int)((*(int *)0xC2A6ED0) + 0x1) % (int)(*(int *)0xC0C83E0));
            *(unsigned int *)0xC2A6ED0 = t27;
            t28 = t27;
        }
        t113 = t28;
    } else {
        t103 = t0;
        if (t0 != 1) {
        } else {
            t31 = nlLength(0xC5E9FA8, 0xC179840);
            if (3000.0f > t31) {
                nlObjPutUseViewMatrix((*(int *)((((*(int *)0xC2A6ED0) << 2) + 0xC1186F0))));
                nlPushMatrix(0x0);
                nlTranslate(300.0f, 0.0f, 0.0f);
                nlObjPutUseViewMatrix((*(int *)((((*(int *)0xC2A6ED0) << 2) + 0xC1186F0))));
                nlPopMatrix(0x1);
                t41 = *(int *)0xC2A6ED8;
                if (400.0f > t31) {
                    if (t41 == 0) {
                        *(unsigned int *)0xC2A6ED8 = 0x1;
                        Sound_Request(0x211A9, 0x0);
                    }
                } else {
                    if (t41 == 1) {
                        *(unsigned int *)0xC2A6ED8 = 0x0;
                        Sound_Request(0x311A9, 0x0);
                    }
                }
            }
            t59 = (int)((int)((*(int *)0xC2A6EC8) + 0x1) % (int)0x2);
            *(unsigned int *)0xC2A6EC8 = t59;
            if (t59 == 1) {
                *(unsigned int *)0xC2A6ED0 = ((int)((int)((*(int *)0xC2A6ED0) + 0x1) % (int)(*(int *)0xC0C83E4)));
            }
            t66 = nlLength(0xC5ECBB8, 0xC179840);
            if (3000.0f > t66) {
                nlObjPutUseViewMatrix((*(int *)((((*(int *)0xC2A6ED4) << 2) + 0xC118768))));
                nlPushMatrix(0x0);
                nlObjPutUseViewMatrix((*(int *)((((*(int *)0xC2A6ED4) << 2) + 0xC118768))));
                nlPopMatrix(0x1);
                t75 = *(int *)0xC2A6EDC;
                if (400.0f > t66) {
                    if (t75 == 0) {
                        *(unsigned int *)0xC2A6EDC = 0x1;
                        Sound_Request(0x211A9, 0x0);
                    }
                } else {
                    if (t75 == 1) {
                        *(unsigned int *)0xC2A6EDC = 0x0;
                        Sound_Request(0x311A9, 0x0);
                    }
                }
            }
            t96 = (int)((int)((*(int *)0xC2A6ECC) + 0x1) % (int)0x2);
            *(unsigned int *)0xC2A6ECC = t96;
            t100 = t96;
            if (t96 == 1) {
                t99 = (int)((int)((*(int *)0xC2A6ED4) + 0x1) % (int)(*(int *)0xC0C83E8));
                *(unsigned int *)0xC2A6ED4 = t99;
                t100 = t99;
            }
            t103 = t100;
        }
        t113 = t103;
    }
    return t113;
}
