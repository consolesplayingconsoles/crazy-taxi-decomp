/* Straight-line functions with calls and guards (batch gen_mx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int copy_device(void);
int kdRecvFrame(void);
extern int mpdrv_frame_send();
int kdSendFrame(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);

int kdSendFrame(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int t151;
    int t8;
    int t26;
    int t49;
    int t72;
    int t95;
    int t113;
    int t119;
    int t126;
    int t137;
    int t147;

    t151 = 0x0;
    if ((*(int *)0xC2EC4D4) == 0) {
    } else {
        *(unsigned int *)0xC2EC4E8 = ((*(int *)0xC2EC4EC) - 1);
        *(unsigned int *)0xC2EC4EC = 0x0;
        t8 = a5;
        if ((*(int *)0xC2EC4E4) != 0) {
            *(unsigned int *)0xC2EC4F0 = ((*(int *)0xA05F80C4) & 0x3FF);
            *(unsigned int *)0xC2EC4F4 = ((short)((unsigned int)(*(int *)0xA05F80C4) >> 16) & 0x3FF);
            t8 = 0xA05F80C4;
        }
        *(unsigned int *)0xC2EC4E4 = 0x0;
        if ((*(int *)0xC2EC4E0) != 0) {
            *(unsigned int *)0xA05F8040 = (*(int *)0xC2EC4DC);
            *(unsigned int *)0xA05F80E8 = ((*(int *)0xA05F80E8) & 0xFFFFFFF7);
            *(unsigned int *)0xC2EC4E0 = 0x0;
        }
        if (((*(int *)0xA05F6908) & 0xF00) != 0) {
            if (((*(int *)0xA05F6908) & 0x800) != 0) {
                *(unsigned int *)0xC2EC270 = ((*(int *)0xC2EC270) + 0x1);
                if ((*(int *)0xC2EC28C) != 0) {
                    t26 = ((int (*)(int, int, int, int))((*(int *)0xC2EC28C)))(0x1, 0xFFFFFFFE, (*(int *)0xC2EC25C), (*(int *)0xA05F6908));
                }
            }
            if (((*(int *)0xA05F6908) & 0x400) != 0) {
                *(unsigned int *)0xC2EC274 = ((*(int *)0xC2EC274) + 0x1);
                if ((*(int *)0xC2EC28C) != 0) {
                    t49 = ((int (*)(int, int, int, int))((*(int *)0xC2EC28C)))(0x1, 0xFFFFFFFD, (*(int *)0xC2EC25C), (*(int *)0xA05F6908));
                }
            }
            if (((*(int *)0xA05F6908) & 0x200) != 0) {
                *(unsigned int *)0xC2EC278 = ((*(int *)0xC2EC278) + 0x1);
                if ((*(int *)0xC2EC28C) != 0) {
                    t72 = ((int (*)(int, int, int, int))((*(int *)0xC2EC28C)))(0x1, 0xFFFFFFFC, (*(int *)0xC2EC25C), (*(int *)0xA05F6908));
                }
            }
            if (((*(int *)0xA05F6908) & 0x100) != 0) {
                *(unsigned int *)0xC2EC27C = ((*(int *)0xC2EC27C) + 0x1);
                if ((*(int *)0xC2EC28C) != 0) {
                    t95 = ((int (*)(int, int, int, int))((*(int *)0xC2EC28C)))(0x1, 0xFFFFFFFB, (*(int *)0xC2EC25C), (*(int *)0xA05F6908));
                }
            }
            *(unsigned int *)0xA05F6908 = 0xF00;
            kdRecvFrame();
            t113 = ((int (*)(void))(mpdrv_frame_send))();
            if ((int)t113 >= 0) {
                copy_device();
            } else {
                if ((*(int *)0xC2EC28C) != 0) {
                    t119 = ((int (*)(int, int, int, int))((*(int *)0xC2EC28C)))(0x1, 0xFFFFFFFA, (*(int *)0xC2EC25C), t113);
                }
            }
            t147 = t113;
        } else {
            t126 = ((int (*)(int, int, float, float, float, float, float, float, float, float))(mpdrv_frame_send))(0xC2EC4E0, t8, f4, f5, f6, f7, f8, f9, f10, f11);
            if ((int)t126 >= 0) {
                *(unsigned int *)0xC2EC504 = 0x0;
                *(unsigned short *)(((((*(int *)0xC2EC4D8) << 1) + 0xC2EC288) + 0x0)) = 0x0;
                *(unsigned short *)(((((*(int *)0xC2EC4D8) << 1) + 0xC2EC280) + 0x0)) = ((*(int *)0xA05F810C) & 0x3FF);
                copy_device();
                *(unsigned int *)0xC2EC254 = ((*(int *)0xC2EC254) + 0x1);
            } else {
                kdRecvFrame();
                *(unsigned int *)0xC2EC264 = ((*(int *)0xC2EC264) + 0x1);
                if ((*(int *)0xC2EC28C) != 0) {
                    t137 = ((int (*)(int, int, int, int))((*(int *)0xC2EC28C)))(0x1, 0xFFFFFFF9, (*(int *)0xC2EC25C), t126);
                }
            }
            t147 = t126;
        }
        t151 = t147;
    }
    return t151;
}
