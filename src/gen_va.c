/* Straight-line functions with calls and guards (batch gen_va): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Put_Max_Combo(void);
int ResetFadeColor(void);
int Start_Excellent(void);
int Start_Fault(int);
int nd_SprPut(int, int, float, float);
int nlObjPutSetFadeColor(float, float, float);
int Exec_DCmini_Game4(void);

int Exec_DCmini_Game4(void)
{
    int t9;
    int t18;
    int t13;
    int t10;

    nlObjPutSetFadeColor(0.0f, 1.0f, 1.0f);
    *(float *)0xC2A98A8 = 1.0f;
    *(float *)0xC2A98AC = 1.0f;
    nd_SprPut(0xC2A9898, 0x51, 483.0f, 55.0f);
    nd_SprPut(0xC2A9898, 0x55, 509.0f, 55.0f);
    nlObjPutSetFadeColor(0.0f, 0.299999982f, 1.0f);
    nd_SprPut(0xC2A9898, 0x1E6, 458.0f, 67.0f);
    nd_SprPut(0xC2A9898, 0x1E3, 559.0f, 60.0f);
    nd_SprPut(0xC2A9898, 0x1E4, 595.0f, 60.0f);
    ResetFadeColor();
    t9 = *(int *)0xC1EE794;
    t18 = (Put_Max_Combo());
    if ((t9 == 0) && (t10 = *(int *)0xC2A991C, t10 == 0)) {
        t13 = *(int *)0xC2A7614;
        if ((int)t13 >= (int)0xF) {
            *(unsigned int *)0xC2A98F4 = t13;
            Start_Excellent();
        } else {
            Start_Fault(0x0);
        }
        *(unsigned int *)0xC2A991C = 0x1;
        *(unsigned int *)0xC179120 = 0x0;
        t18 = 0x54;
    }
    return t18;
}
