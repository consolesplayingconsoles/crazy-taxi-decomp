/* Straight-line functions with calls and guards (batch gen_acc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int menuChangeValue(int, int, int);
int menuPutSprites(int, int, int, int);
int padPortAConnected(void);
int putMenuValue(int, int, int, int);
int putString(int, int, float, float, float);
int menuItemController(int a4);

int menuItemController(int a4)
{
    int t11;
    int t57;
    int t21;
    int t52;
    int t32;
    int t33;
    int t34;
    int t39;
    int t51;
    int t16;
    int t17;
    int t24;
    int t25;
    int t27;
    int t28;
    int stk[13];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = (unsigned char)(*(signed char *)0xC28A4EE);
    if ((*(int *)(((int)stk + 8))) != 0) {
        if ((menuChangeValue(0x0, ((int)stk + 4), 0x2)) == 1) {
            *(unsigned char *)0xC28A4EE = (*(int *)(((int)stk + 4)));
        }
    }
    t11 = padPortAConnected();
    t57 = t11;
    if (t11 == 1) {
        if ((*(int *)(((int)stk + 8))) != 0) {
            t16 = 0x8013;
            t17 = (*(int *)(((int)stk + 4)));
        } else {
            t16 = 0x13;
            t17 = (*(int *)(((int)stk + 4)));
        }
        putMenuValue(t16, 0xC09F050, 0x2, t17);
        if ((*(int *)0xC2A123C) == 1) {
            t21 = *(signed char *)0xC28A4EE;
            t24 = (0xC0EF5A0 + (signed char)((((t21 << 1) + t21) << 2) << 1));
            t25 = 0xC09EF48;
            t27 = 0xC0A0888;
            t28 = 0x6;
        } else {
            t24 = (0xC0EF568 + (signed char)((short)(*(signed char *)0xC28A4EE) * (short)0x1C));
            t25 = 0xC09EE14;
            t27 = 0xC0A0878;
            t28 = 0x7;
        }
        t52 = (menuPutSprites(t27, 0xC2A1A84, (-(*(int *)0xC2A1ADC)), 0x0));
        if ((int)t28 > 0) {
            t32 = 0x0;
            t33 = t24;
            t34 = t25;
            for (;;) {
                putString(0x13, (t34 + 0xC), ((*(float *)((t34 + 0x0))) + (float)(*(int *)0xC2A1ADC)), (*(float *)((t34 + 0x4))), 1.0f);
                t39 = *(int *)((t33 + 0x0));
                t33 = (t33 + 0x4);
                putString(0x20, (((short)((short)t39 * (short)0x58) + 0xC09EBAC) + 0xC), (((*(float *)((t34 + 0x0))) + (*(float *)((((short)((short)t39 * (short)0x58) + 0xC09EBAC) + 0x0)))) + (float)(*(int *)0xC2A1ADC)), ((*(float *)((t34 + 0x4))) + (*(float *)((((short)((short)t39 * (short)0x58) + 0xC09EBAC) + 0x4)))), 1.0f);
                t51 = putString(0x20, ((((short)((short)t39 * (short)0x58) + 0xC09EBAC) + 0x2C) + 0xC), (((*(float *)((t34 + 0x0))) + (*(float *)(((((short)((short)t39 * (short)0x58) + 0xC09EBAC) + 0x2C) + 0x0)))) + (float)(*(int *)0xC2A1ADC)), ((*(float *)((t34 + 0x4))) + (*(float *)(((((short)((short)t39 * (short)0x58) + 0xC09EBAC) + 0x2C) + 0x4)))), 1.0f);
                t32 = (t32 + 0x1);
                t34 = (t34 + 0x2C);
                if ((int)t32 >= (int)t28) {
                    break;
                }
            }
            t52 = t51;
        }
        t57 = t52;
    }
    return t57;
}
