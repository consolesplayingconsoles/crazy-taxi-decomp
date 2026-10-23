/* Straight-line functions with calls and guards (batch gen_aoh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int bootCopyBuffer(int, int, int, int, float, float, float, float);
int bootDevCommand(void);
int bootDevInit(void);
int bootEndTransfer(int);
int bootRecvToBuffer(int, int, int, int);
int bootSendData(int, int, int, int);
int bootSendFromBuffer(int, int, int, int);
int bootSerialGetByte(void);
int bootDispatchPacket(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);

int bootDispatchPacket(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7)
{
    int t0;
    int t31;
    int t1;
    int t9;
    int t24;
    int t18;
    int t21;
    int t82;
    int t70;
    int t57;
    int t44;

    t0 = *(signed char *)((a5 + 0x1));
    if (((unsigned char)t0 & 0xF0) != 0) {
        if (((unsigned char)t0 & 0xF0) != 16) {
            if (((unsigned char)t0 & 0xF0) != 32) {
                if (((unsigned char)t0 & 0xF0) != 48) {
                    t31 = ((unsigned char)t0 & 0xF0);
                    if (((unsigned char)t0 & 0xF0) != 0xF0) {
                    } else {
                        t1 = ((int (*)(int, int))(0xAC010A26))(0xFF, a5);
                        bootEndTransfer(a4);
                        if ((*(int *)0xAC00F708) != 0) {
                            bootDevCommand();
                        }
                        t9 = ((int (*)(void))(0xAC010E3C))();
                        if ((*(int *)0xAC00F708) != 0) {
                            bootDevInit();
                        }
                        *(unsigned int *)0x8C00F400 = (*(int *)(((*(int *)0x8C00FA1C) + 0x7C)));
                        t24 = a4;
                        if (a4 == 1) {
                            t18 = ((int (*)(void))(0xAC011AEA))();
                            t21 = 0x0;
                            if (t18 != 0) {
                                t21 = (bootSerialGetByte());
                            }
                            t24 = (((int (*)(int))(0xAC011B2C))((unsigned char)t21));
                        }
                        t31 = t24;
                    }
                    t44 = t31;
                } else {
                    t44 = (bootSendFromBuffer(a4, ((unsigned char)(*(signed char *)((a5 + 0x1))) & 0x7), (*(int *)((a5 + 0x4))), (unsigned short)(*(short *)((a5 + 0x2)))));
                }
                t57 = t44;
            } else {
                t57 = (bootRecvToBuffer(a4, ((unsigned char)(*(signed char *)((a5 + 0x1))) & 0x7), (*(int *)((a5 + 0x4))), (unsigned short)(*(short *)((a5 + 0x2)))));
            }
            t70 = t57;
        } else {
            t70 = (bootCopyBuffer(a4, ((unsigned char)(*(signed char *)((a5 + 0x1))) & 0x7), (*(int *)((a5 + 0x4))), (unsigned short)(*(short *)((a5 + 0x2))), f4, f5, f6, f7));
        }
        t82 = t70;
    } else {
        bootSendData(a4, (*(int *)0xAC00F700), 0x40, a7);
        t82 = (bootEndTransfer(a4));
    }
    return t82;
}
