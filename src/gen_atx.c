/* A function proven on cases written by hand (tools/6-agentic/handcase.py). */

int bootSerialInit(int a4, int a5);
struct o0_ushort { unsigned short v; };
struct o18_ushort { char p[0x18]; unsigned short v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o8_ushort { char p[0x8]; unsigned short v; };


int bootSerialInit(int a4, int a5)
{
    int stk[2];
    register int t9;
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    (((struct o8_ushort *)0xFFE80000)->v) = 0x0;
    (((struct o18_ushort *)0xFFE80000)->v) = 0x6;
    (((struct o0_ushort *)0xFFE80000)->v) = 0x0;
    if (a5 != 115) {
        if ((a5 != 0x180) && (a5 != 0x9600)) {
            t9 = 0xFFE80018;
            if (a5 != 0x1C200) {
            } else {
                (((struct o4_uchar *)0xFFE80000)->v) = 0xD;
                t9 = 0xD;
            }
        } else {
            (((struct o4_uchar *)0xFFE80000)->v) = 0x28;
            t9 = 0xFFE80018;
        }
    } else {
        (((struct o4_uchar *)0xFFE80000)->v) = 0xD;
        t9 = 0xD;
    }
    R1004 = 0x0;
    for (;;) {
        if ((int)(R1004) >= (int)0x186A0) {
            break;
        }
        t9 = (R1004);
        t9 = (t9 + 0x1);
        R1004 = t9;
    }
    (((struct o18_ushort *)0xFFE80000)->v) = 0x0;
    (((struct o8_ushort *)0xFFE80000)->v) = 0x30;
    return 0x0;
}
