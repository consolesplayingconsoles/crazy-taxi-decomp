/* Straight-line functions with calls and guards (batch gen_pn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c05322c(float, float);
int FUN_0c053236(float, float);
int FUN_0c053240(float, float, float);
int FUN_0c0714f2(void);

int FUN_0c0714f2(void)
{
    float u0;
    float u1;

    *(unsigned int *)0xC2AE368 = 0x0;
    *(unsigned int *)0xC2AE364 = 0x0;
    *(float *)0xC2AE36C = 420.0f;
    *(float *)0xC2AE370 = 250.0f;
    *(float *)0xC2AE374 = (-1.0f);
    *(float *)0xC2AE378 = -30.0f;
    *(float *)0xC2AE380 = 0.5f;
    *(float *)0xC2AE37C = 0.5f;
    *(float *)0xC2AE384 = 15.0f;
    u0 = *(float *)0xC2AE370;
    u1 = *(float *)0xC2AE36C;
    FUN_0c05322c(u1, u0);
    FUN_0c053236(0.5f, 0.5f);
    return FUN_0c053240(0.899999976f, 0.899999976f, 0.599999964f);
}
