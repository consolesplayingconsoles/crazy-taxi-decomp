/* Straight-line functions with calls and guards (batch gen_abz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float GetLightAmbience(void);

float GetLightAmbience(void)
{
    return (*(float *)0xC0EA5B8);
}
