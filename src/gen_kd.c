/* Straight-line functions with calls and guards (batch gen_kd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlSetScaleFactor(float);
int nlTranslate(float, float, float);
int Put_Build_Patch(void);

int Put_Build_Patch(void)
{
    int t8;
    int t9;
    float u11;
    int t18;

    nlPushMatrix(0x0);
    nlTranslate(-3666.0f, 103.5f, -3888.0f);
    nlRotateAY(0xC000);
    nlRotateAX(0x4AAA);
    nlScale(25.0f, 25.0f, 25.0f);
    nlSetScaleFactor(25.0f);
    nlObjPutUseViewMatrix(0xC5BDE50);
    nlPopMatrix(0x1);
    t8 = 0x0;
    t9 = 0xC11894C;
    for (;;) {
        nlPushMatrix(0x0);
        u11 = *(float *)((t9 + 0x0));
        t9 = (t9 + 0x4);
        nlTranslate(-3845.00977f, 118.668198f, u11);
        nlRotateAY(0xC000);
        nlRotateAX(0xAAA);
        nlScale(7.0f, 3.5f, 3.5f);
        nlSetScaleFactor(7.0f);
        nlObjPutUseViewMatrix(0xC5C55D8);
        t18 = nlPopMatrix(0x1);
        t8 = (t8 + 0x1);
        if ((int)t8 >= (int)0x3) {
            break;
        }
    }
    return t18;
}
