/* Straight-line functions with calls and guards (batch gen_aen): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int pfSetFont(int a4);

int pfSetFont(int a4)
{
    int t1;
    int t6;
    float u8;
    int t16;

    t1 = 0x0;
    if (((int)a4 >= 0) && ((int)a4 < (int)0x4)) {
        t1 = a4;
    }
    *(unsigned int *)0xC26E1EC = t1;
    t6 = *(int *)(((((((*(int *)(((t1 << 2) + 0xC0ED258))) + (*(int *)0xC2B3184)) << 2) << 1) + (*(int *)0xC2AEC84)) + 0x4));
    *(unsigned int *)0xC26E1E8 = (*(int *)(((t1 << 2) + 0xC0ED278)));
    *(float *)0xC26E20C = (*(float *)(((t1 << 2) + 0xC0ED288)));
    u8 = *(float *)(((t1 << 2) + 0xC0ED298));
    *(float *)0xC26E208 = u8;
    *(float *)0xC26E204 = ((*(float *)0xC26E1F8) * u8);
    *(unsigned int *)0xC0ED1C8 = ((*(int *)0xC0ED1C8) & 0xFFFFFFC0);
    *(unsigned int *)0xC0ED1C8 = ((*(int *)0xC0ED1C8) | (*(int *)(((t1 << 2) + 0xC0ED268))));
    t16 = 0xC0ED268;
    if ((*(int *)0xC26E1F0) != 0) {
        *(float *)0xC26E204 = ((*(float *)0xC26E204) * 0.5f);
        t16 = 0xC03112C;
    }
    *(unsigned int *)0xC0ED1CC = (*(int *)((((t6 * 0x3C) + (*(int *)0xC2B29C0)) + 0x34)));
    return t16;
}
