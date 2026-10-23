/* Straight-line functions with calls and guards (batch gen_bz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlScale(float, float, float);
int nlSetScaleFactor(float);
int nlTranslateV(int);
int PutCourse_Sky(void);

int PutCourse_Sky(void)
{
    int t0;
    int t3;

    t0 = *(int *)0xC1EE20C;
    if (t0 != 2) {
        t3 = *(int *)0xC2A6FD8;
        if (t3 != 2) {
            nlPushMatrix(0x0);
            nlTranslateV(0xC179840);
            nlScale((1.0f + 1.0f), (1.0f + 1.0f), (1.0f + 1.0f));
            nlSetScaleFactor((1.0f + 1.0f));
            nlObjPutUseViewMatrix(0xC462B70);
            nlSetScaleFactor((1.0f + 1.0f));
            nlObjPutUseViewMatrix(0xC46C730);
            return nlPopMatrix(0x1);
        }
        return t3;
    }
    if ((*(int *)0xC1EE214) != 0) {
        nlPushMatrix(0x0);
        nlTranslateV(0xC179840);
        nlScale((1.0f + 1.0f), (1.0f + 1.0f), (1.0f + 1.0f));
        nlSetScaleFactor((1.0f + 1.0f));
        nlObjPutUseViewMatrix(0xC46C730);
        return nlPopMatrix(0x1);
    }
    return t0;
}
