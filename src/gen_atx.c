/* A function proven on cases written by hand (tools/6-agentic/handcase.py). */

int bootSerialInit(int a4, int a5);

int bootSerialInit(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t9;
    register int t6;
    register int t3;

    *(unsigned short *)0xFFE80008 = 0x0;
    *(unsigned short *)0xFFE80018 = 0x6;
    *(unsigned short *)0xFFE80000 = 0x0;
    if (a5 != 115) {
        if ((a5 != 0x180) && (a5 != 0x9600)) {
            t0 = 0xFFE80018;
            if (a5 != 0x1C200) {
            } else {
                *(unsigned char *)0xFFE80004 = 0xD;
                t0 = 0xD;
            }
            t3 = t0;
        } else {
            *(unsigned char *)0xFFE80004 = 0x28;
            t3 = 0xFFE80018;
        }
        t6 = t3;
    } else {
        *(unsigned char *)0xFFE80004 = 0xD;
        t6 = 0xD;
    }
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t9 = t6;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 4))) >= (int)0x186A0) {
            break;
        }
        t9 = (*(int *)(((int)stk + 4)));
        t9 = (t9 + 0x1);
        *(unsigned int *)(((int)stk + 4)) = t9;
    }
    *(unsigned short *)0xFFE80018 = 0x0;
    *(unsigned short *)0xFFE80008 = 0x30;
    return 0x0;
}
