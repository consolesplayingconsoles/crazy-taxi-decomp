/* Straight-line functions with calls and guards (batch gen_lk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Put_Max_Combo(void);
int ResetFadeColor(void);
int Start_Excellent(void);
int Start_Fault(int);
int nd_SprPut(int, int, float, float);
int nlObjPutSetFadeColor(float, float, float);
int Exec_DCmini_Game12(void);

int Exec_DCmini_Game12(void)
{
    float u1;
    float u11;
    int t18;
    int t27;
    int t22;
    int t19;

    nlObjPutSetFadeColor(0.0f, 1.0f, 1.0f);
    *(float *)0xC2A98A8 = 1.0f;
    *(float *)0xC2A98AC = 1.0f;
    u1 = 55.0f;
    nd_SprPut(0xC2A9898, 0x53, (483.0f), u1);
    nd_SprPut(0xC2A9898, 0x50, (509.0f), u1);
    nlObjPutSetFadeColor(0.0f, (0.29999998f), 1.0f);
    nd_SprPut(0xC2A9898, 0x1E6, (458.0f), (67.0f));
    u11 = 60.0f;
    nd_SprPut(0xC2A9898, 0x1E3, (559.0f), u11);
    nd_SprPut(0xC2A9898, 0x1E4, (595.0f), u11);
    ResetFadeColor();
    t18 = *(int *)0xC1EE794;
    t27 = (Put_Max_Combo());
    if ((t18 == 0) && (t19 = *(int *)0xC2A991C, t19 == 0)) {
        t22 = *(int *)0xC2A7614;
        if ((int)t22 >= (int)0x1E) {
            *(unsigned int *)0xC2A98F4 = t22;
            Start_Excellent();
        } else {
            Start_Fault(0x0);
        }
        *(unsigned int *)0xC2A991C = 0x1;
        *(unsigned int *)0xC179120 = 0x0;
        t27 = 0x54;
    }
    return t27;
}
