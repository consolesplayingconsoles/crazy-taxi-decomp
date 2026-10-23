/* Straight-line functions with calls and guards (batch gen_gd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlLocate(int, int);
int nlPrintf(int, ...);
int nlSetBackColor(int, int, int, float);
int nlSetFontSize(int, int);
int Warning(float f4);

int Warning(float f4)
{
    int t12;

    nlSetBackColor(0xFF000000, 0xFF000000, 0xFF000000, f4);
    nlSetFontSize(0x10, 0x10);
    nlLocate(0x1, 0x4);
    nlPrintf(0xC08AB64);
    nlPrintf(0xC08AB90);
    nlPrintf(0xC08ABBC);
    nlPrintf(0xC08ABE8);
    nlPrintf(0xC08AC14);
    nlPrintf(0xC08AC40);
    nlPrintf(0xC08AC6C);
    nlPrintf(0xC08AC98);
    nlPrintf(0xC08ACC4);
    t12 = nlSetFontSize(0x8, 0x8);
    if ((int)(*(int *)0xC1EE330) > (int)0x3C) {
        *(unsigned int *)0xC1EE234 = 0x0;
        *(unsigned int *)0xC1EE238 = 0x0;
    }
    return t12;
}
