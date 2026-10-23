/* Straight-line functions with calls and guards (batch gen_uo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlLength(int, int);
int setObjGroupOpen(int);
void ExecSetObject(int a4);

void ExecSetObject(int a4)
{
    int t0;
    int t10;
    int t2;
    int t16;
    int t17;
    int t18;
    int t19;
    int t21;
    int t22;
    int t23;
    int t24;
    float u26;
    float u47;
    float u48;
    int t11;
    float u14;
    int t7;
    float u8;
    int t20;
    float u25;
    int t33;
    int t42;
    int t43;
    int t46;
    int t38;
    float u39;
    float u40;

    t0 = *(int *)0xC1EE20C;
    t10 = t0;
    if (t0 == 1) {
        t2 = *(int *)0xC179494;
        if (t2 != 0) {
            *(float *)0xC2757E8 = (*(float *)0xC038470);
            t7 = 0xC038474;
            u8 = (*(float *)0xC038474);
        } else {
            *(float *)0xC2757E8 = (*(float *)0xC038478);
            t7 = 0xC03847C;
            u8 = (*(float *)0xC03847C);
        }
        *(float *)0xC2757EC = u8;
        t10 = t7;
        t11 = t2;
        u14 = u8;
    }
    t16 = *(int *)0xC2757F0;
    t17 = t10;
    t18 = t11;
    t19 = (((t16 << 2) << 2) << 1);
    t21 = t16;
    t22 = (((t16 << 2) << 2) << 1);
    t23 = (((t16 << 2) << 2) << 1);
    t24 = (((t16 << 2) << 2) << 1);
    u26 = u14;
    for (;;) {
        if ((int)t21 >= (int)(*(int *)0xC2757F4)) {
            break;
        }
        t20 = (*(int *)0xC0EDBB8);
        t19 = t22;
        t19 = (t19 + t20);
        t17 = (*(short *)((t19 + 0x10)));
        u47 = u25;
        u48 = u26;
        if (((int)t17 > 0) && (t33 = *(int *)((t19 + 0x1C)), t33 == 0)) {
            t19 = t24;
            t19 = (t19 + t20);
            u25 = (nlLength(t19, 0xC179144));
            u26 = (*(float *)0xC2757E8);
            if (u26 > u25) {
                t19 = (*(int *)0xC0EDBB8);
                t19 = (t19 + t23);
                t17 = (setObjGroupOpen(t19));
                t38 = t17;
            } else {
                u39 = u25;
                u40 = u26;
            }
            t42 = t38;
            u47 = u39;
            u48 = u40;
        } else {
            t42 = t17;
            t43 = t18;
            t46 = t19;
        }
        u25 = u47;
        u26 = u48;
        t17 = t42;
        t18 = t43;
        t24 = (t24 + 0x20);
        t19 = t46;
        t22 = (t22 + 0x20);
        t21 = (t21 + 0x1);
        t23 = (t23 + 0x20);
    }
}
