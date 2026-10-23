/* Straight-line functions with calls and guards (batch gen_aoa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void padToAnalog(void);

void padToAnalog(void)
{
    float u1;
    int t2;
    float u3;
    int t4;
    float u5;
    int t16;
    float u17;
    float u18;
    int t23;
    float u24;
    float u25;

    u1 = *(float *)0xC1EE31C;
    if (!(u1 > (float)(unsigned char)(*(signed char *)0xC1EE264))) {
        t2 = *(signed char *)0xC1EE264;
        u3 = *(float *)0xC1EE32C;
        *(float *)0xC1EE2E8 = (((float)(unsigned char)t2 - u1) / u3);
        *(float *)0xC1EE2F4 = (((float)(unsigned char)t2 - u1) / u3);
    } else {
        t4 = *(signed char *)0xC1EE264;
        u5 = *(float *)0xC1EE328;
        *(float *)0xC1EE2E8 = (-((u1 - (float)(unsigned char)t4) / u5));
        *(float *)0xC1EE2F4 = (-((u1 - (float)(unsigned char)t4) / u5));
    }
    if ((-1.0f) > (*(float *)0xC1EE2F4)) {
        *(float *)0xC1EE2F4 = (-1.0f);
    }
    if ((*(float *)0xC1EE2F4) > 1.0f) {
        *(float *)0xC1EE2F4 = 1.0f;
    }
    t16 = *(signed char *)0xC1EE265;
    u17 = *(float *)0xC1EE300;
    u18 = *(float *)0xC1EE308;
    *(float *)0xC1EE2EC = (((float)(unsigned char)t16 - u17) / u18);
    *(float *)0xC1EE2F8 = (((float)(unsigned char)t16 - u17) / u18);
    if (0.0f > (*(float *)0xC1EE2F8)) {
        *(float *)0xC1EE2F8 = 0.0f;
    }
    if ((*(float *)0xC1EE2F8) > 1.0f) {
        *(float *)0xC1EE2F8 = 1.0f;
    }
    t23 = *(signed char *)0xC1EE266;
    u24 = *(float *)0xC1EE30C;
    u25 = *(float *)0xC1EE314;
    *(float *)0xC1EE2F0 = (((float)(unsigned char)t23 - u24) / u25);
    *(float *)0xC1EE2FC = (((float)(unsigned char)t23 - u24) / u25);
    if (0.0f > (*(float *)0xC1EE2FC)) {
        *(float *)0xC1EE2FC = 0.0f;
    }
    if ((*(float *)0xC1EE2FC) > 1.0f) {
        *(float *)0xC1EE2FC = 1.0f;
    }
}
