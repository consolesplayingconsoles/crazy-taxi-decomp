/* Straight-line functions with calls and guards (batch gen_abj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void adxb_DefAddWr(int a4, int a5, int a6);
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };


void adxb_DefAddWr(int a4, int a5, int a6)
{
    (((struct o9C_uint *)(a4))->v) = (((((struct o9C_int *)(a4))->v)) + a6);
    (((struct o98_uint *)(a4))->v) = (((((struct o98_int *)(a4))->v)) + a6);
}
