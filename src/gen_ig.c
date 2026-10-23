/* Straight-line functions with calls and guards (batch gen_ig): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int nlSprPut();
int PutAdvLogoSprite(int a4, int a5, int a6);

int PutAdvLogoSprite(int a4, int a5, int a6)
{
    int t0;

    *(unsigned int *)0xC26E188 = 0xEA;
    *(float *)0xC26E18C = 320.0f;
    *(float *)0xC26E190 = 384.0f;
    t0 = ((int (*)(int, int, int))(nlSprPut))(0xC26E188, a5, a6);
    *(unsigned int *)0xC26E188 = 0xEB;
    *(float *)0xC26E18C = 320.0f;
    *(float *)0xC26E190 = 224.0f;
    return ((int (*)(int))(nlSprPut))(0xC26E188);
}
