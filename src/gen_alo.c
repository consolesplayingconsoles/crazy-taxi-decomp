/* Straight-line functions with calls and guards (batch gen_alo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int pfCleanString(void);
int pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
int pfTextPut(int a4, int a5, int a6);

int pfTextPut(int a4, int a5, int a6)
{
    pfCleanString();
    pfLength(a6);
    pfLocate((float)a4, (float)a5);
    return pfPuts(a6);
}
