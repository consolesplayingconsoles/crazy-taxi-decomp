/* Straight-line functions with calls and guards (batch gen_ada): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSetBackColor(int, int, int, float);
int InitAdvLogoSprite(void);

int InitAdvLogoSprite(void)
{
    *(float *)0xC26E194 = 1.0f;
    *(float *)0xC26E1A0 = 0.0f;
    *(float *)0xC26E1A4 = 0.0f;
    *(float *)0xC26E1A8 = 1.0f;
    *(float *)0xC26E1AC = 1.0f;
    *(unsigned int *)0xC26E1B0 = 0x0;
    *(unsigned int *)0xC26E1BC = 0x80A;
    *(float *)0xC26E1B4 = 1.0f;
    *(unsigned int *)0xC26E1B8 = 0x2;
    *(float *)0xC26E19C = 1.0f;
    *(float *)0xC26E198 = 1.0f;
    return nlSetBackColor(0xFFBFBFBF, 0xFFBFBFBF, 0xFFBFBFBF, 1.0f);
}
