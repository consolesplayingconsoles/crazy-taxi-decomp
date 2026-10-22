/* Straight-line functions with calls and guards (batch gen_pw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02bc24(void);
int FUN_0c0577dc(void);
int FUN_0c0579c0(void);
int gdc_SpriteSetAdv(void);
int FUN_0c02bc4e(void);

int FUN_0c02bc4e(void)
{
    int t0;

    *(unsigned int *)0xC1EE770 = 0x0;
    t0 = *(int *)0xC1EE238;
    *(unsigned int *)0xC1EE238 = (t0 + 0x1);
    *(unsigned int *)0xC1EE240 = 0x0;
    FUN_0c02bc24();
    *(unsigned int *)0xC1EE334 = 0x11;
    FUN_0c0577dc();
    FUN_0c0579c0();
    return gdc_SpriteSetAdv();
}
