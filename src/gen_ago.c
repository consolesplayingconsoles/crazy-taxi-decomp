/* Straight-line functions with calls and guards (batch gen_ago): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int PutVM_Message(int, int, int, float, float);
int SetScreen(int);
int SetWindow(int);
int windowEnterStep(int);
int windowOpenStep(int);
int windowSaveOff(void);

int windowSaveOff(void)
{
    int t6;
    int t9;
    int t8;

    windowOpenStep(0x3C);
    PutVM_Message(0x20, 0x27, 0x0, 209.0f, 240.0f);
    if (((*(int *)0xC2A1208) & 4) != 0) {
        *(unsigned int *)0xC2A1208 = ((*(int *)0xC2A1208) | 0x9);
    }
    t6 = windowEnterStep(0x0);
    t9 = t6;
    if (t6 == 1) {
        SetScreen(0x4);
        t8 = SetWindow(0x0);
        *(unsigned int *)0xC2A121C = 0x0;
        t9 = t8;
    }
    return t9;
}
