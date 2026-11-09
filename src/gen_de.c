/* Straight-line functions with calls and guards (batch gen_de): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int NextWindow(int);
int PutVM_Message(int, int, int, float, float);
int windowEnterStep(int);
int windowOpenStep(int);
int windowCardDriveError(void);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };


int windowCardDriveError(void)
{
    float u1;
    int t49;
    int t27;
    int t48;
    int t42;
    int t43;
    int t36;
    int t37;

    windowOpenStep(0x14);
    u1 = 1.6e+02f;
    PutVM_Message(0x20, 0x9, ((((((((struct o0_int *)0xC2A11B8)->v)) << 2) << 2) << 1) + 0xC09F9F0), u1, 112.0f);
    PutVM_Message(0x20, 0xA, ((((((((struct o0_int *)0xC2A11B8)->v)) << 2) << 2) << 1) + 0xC09F9F0), u1, 144.0f);
    PutVM_Message(0x20, 0x1, 0x0, u1, 176.0f);
    PutVM_Message(0x20, 0x2, 0xC2A1238, u1, 208.0f);
    PutVM_Message(0x20, 0x3, 0x0, u1, 272.0f);
    PutVM_Message(0x20, 0x4, 0x0, u1, 304.0f);
    PutVM_Message(0x20, 0x7, ((((((((struct o0_int *)0xC2A11B8)->v)) << 2) << 2) << 1) + 0xC09F9F0), 2.2e+02f, 368.0f);
    t49 = 0xC2A11D8;
    if ((((((struct o0_int *)0xC2A1208)->v)) & 4) != 0) {
        if (((((struct o14_int *)0xC2A1208)->v)) == 1) {
            (((struct o14_uint *)0xC2A1208)->v) = 0x2;
            (((struct o0_uint *)0xC2A1208)->v) = (((((struct o0_int *)0xC2A1208)->v)) | 0x9);
            t27 = 0x5;
            if (((((struct o1C_int *)0xC2A1208)->v)) == 0) {
                t27 = 0x4;
            }
            NextWindow(t27);
        } else {
            if ((((((struct o14_int *)0xC2A11B8)->v)) & 1) != 0) {
                (((struct o0_uint *)0xC2A1208)->v) = (((((struct o0_int *)0xC2A1208)->v)) | 0x9);
                (((struct o14_uint *)0xC2A1208)->v) = 0x0;
                NextWindow(0x9);
            } else {
                t36 = 0xC2A121C;
                t37 = 0xC2A11D8;
            }
            t42 = t36;
            t43 = t37;
        }
        t48 = t42;
        t49 = t43;
    }
    return windowEnterStep(0x14);
}
