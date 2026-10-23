/* Straight-line functions with calls and guards (batch gen_ahg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float Fmod(float f4, float f5);

float Fmod(float f4, float f5)
{
    return (f4 - ((float)(int)(f4 / f5) * f5));
}
