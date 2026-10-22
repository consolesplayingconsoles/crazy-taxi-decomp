/* Straight-line functions with calls and guards (batch gen_adg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float fcvHermiteAngle(int a4, int a5, float f4);

float fcvHermiteAngle(int a4, int a5, float f4)
{
    float u3;
    float u0;
    float u6;
    float u8;
    float u9;
    float u13;
    float u15;
    float u16;

    u3 = 1.0f;
    if (f4 > 1.0f) {
    } else {
        u0 = f4;
        if (0.0f > f4) {
            u0 = 0.0f;
        }
        u3 = u0;
    }
    u6 = (u3 * u3);
    u8 = (u3 * u3);
    u9 = (u3 * u6);
    u13 = ((float)(*(int *)((a5 + 0x4))) * (((u8 * 3.0f) - (u9 * (1.0f + 1.0f)))));
    u13 = u13 + (((u9 * (1.0f + 1.0f)) - (u8 * 3.0f)) + 1.0f) * (float)(*(int *)((a4 + 0x4)));
    u15 = u13;
    u15 = u15 + ((u3 - (((u3 * u3)) * (1.0f + 1.0f))) + (u3 * u6)) * (float)(*(int *)((a4 + 0xC)));
    u16 = u15;
    u16 = u16 + ((u3 * u6) - (u3 * u3)) * (float)(*(int *)((a5 + 0x8)));
    return ((u3 * u6) - (u3 * u3));
}
