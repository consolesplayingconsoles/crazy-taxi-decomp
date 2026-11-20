/* Straight-line functions with calls and guards (batch gen_ex): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int bootCopyBuffer(int, int, int, int);
int bootRecvToBuffer(int, int, int, int);
int bootSendFromBuffer(int, int, int, int);
int bootSendData(int, int, int);
int bootEndTransfer(int);
int bootDevInit(void);
int bootDevCommand(void);
int bootSerialGetByte(void);
int bootDispatchPacket(int a4, int a5);
int bootSelectDevice(int a4);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };



int bootSelectDevice(int a4)
{
    int t0;
    int t9;
    int t15;
    int t16;
    int t10;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t38;
    int t36;
    int t37;

    t0 = (((struct o0_int *)0xAC00F718)->v);
    if (t0 != 1) {
        if (t0 != 2) {
        } else {
            (((struct o10_uint *)0xAC00F718)->v) = 0xA3010000;
            (((struct o14_uint *)0xAC00F718)->v) = 0xA3010040;
            (((struct o18_uint *)0xAC00F718)->v) = 0xA3010040;
            (((struct o1C_uint *)0xAC00F718)->v) = 0xA3010040;
            t15 = 0xA3010040;
        }
    } else {
        (((struct o10_uint *)0xAC00F718)->v) = 0xA05F7080;
        (((struct o14_uint *)0xAC00F718)->v) = 0xA05F70C0;
        (((struct o18_uint *)0xAC00F718)->v) = 0xA05F70C0;
        (((struct o1C_uint *)0xAC00F718)->v) = 0xA05F70C0;
        t15 = 0xA05F70C0;
    }
    t9 = (((struct o0_int *)0xAC00F718)->v);
    t16 = 0xAC00F718;
    if (t9 == 1) {
        (((struct o0_uint *)0xA05F7490)->v) = 0x511;
        (((struct o4_uint *)0xA05F7490)->v) = 0x511;
        (((struct o10_uint *)0xA05F7490)->v) = 0x5;
        t10 = *(int *)0xA05F707C;
        *(unsigned int *)0xA05F707C = (t10 | 0x8);
        t15 = (t10 | 0x8);
        t16 = 0xA05F707C;
    }
    t18 = (((struct o10_int *)0xAC00F718)->v);
    *(unsigned char *)((t18 + 0x3C)) = 0xFFFFFFC0;
    t19 = (((struct o18_int *)0xAC00F718)->v);
    *(unsigned char *)((t19 + 0x0)) = 0xB;
    t20 = (((struct o18_int *)0xAC00F718)->v);
    *(unsigned char *)((t20 + 0x4)) = a4;
    t21 = (((struct o18_int *)0xAC00F718)->v);
    *(unsigned char *)((t21 + 0x8)) = 0x43;
    t22 = (((struct o18_int *)0xAC00F718)->v);
    *(unsigned char *)((t22 + 0xC)) = 0x0;
    t23 = (((struct o18_int *)0xAC00F718)->v);
    *(unsigned char *)((t23 + 0x10)) = 0x0;
    t24 = (((struct o18_int *)0xAC00F718)->v);
    *(unsigned char *)((t24 + 0x14)) = 0x0;
    t25 = (((struct o18_int *)0xAC00F718)->v);
    *(unsigned char *)((t25 + 0x18)) = 0x0;
    t26 = (((struct o18_int *)0xAC00F718)->v);
    *(unsigned char *)((t26 + 0x1C)) = 0x1;
    t27 = (((struct o18_int *)0xAC00F718)->v);
    *(unsigned char *)((t27 + 0x20)) = 0x40;
    t28 = (((struct o18_int *)0xAC00F718)->v);
    *(unsigned char *)((t28 + 0x24)) = 0x0;
    t29 = (((struct o18_int *)0xAC00F718)->v);
    *(unsigned char *)((t29 + 0x28)) = 0x33;
    t30 = (((struct o18_int *)0xAC00F718)->v);
    *(unsigned char *)((t30 + 0x2C)) = 0x0;
    t31 = (((struct o18_int *)0xAC00F718)->v);
    *(unsigned char *)((t31 + 0x30)) = 0x4;
    t32 = (((struct o18_int *)0xAC00F718)->v);
    *(unsigned char *)((t32 + 0x34)) = 0x0;
    t33 = (((struct o18_int *)0xAC00F718)->v);
    *(unsigned char *)((t33 + 0x3C)) = 0x0;
    t34 = (((struct o10_int *)0xAC00F718)->v);
    *(unsigned char *)((t34 + 0x14)) = 0x43;
    t35 = ((int (*)(int, int, int, int))(0xAC0118F8))(0x43, 0xAC00F730, t15, t16);
    t38 = 0x1;
    if (t35 != 0) {
    } else {
        t36 = (((struct o10_int *)0xAC00F718)->v);
        *(unsigned char *)((t36 + 0x3C)) = 0x0;
        t37 = ((int (*)(void))(0xAC0115B8))();
        t38 = 0x0;
    }
    return t38;
}
