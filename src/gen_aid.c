/* Straight-line functions with calls and guards (batch gen_aid): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlLength(int, int, float, float);
float camGetOnSelect(float f4, float f5);
struct o0_int { int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };


float camGetOnSelect(float f4, float f5)
{
    float t2;

    (((struct o38_uint *)0xC2AD548)->v) = 0x0;
    t2 = nlLength((((((struct o0_int *)0xC2AD548)->v)) + 0x4), (((((struct o4_int *)0xC2AD548)->v)) + 0x4), f4, f5);
    if (4e+01f > t2) {
        (((struct o34_uint *)0xC2AD548)->v) = 0x1;
    } else {
        if (8e+01f > t2) {
            (((struct o34_uint *)0xC2AD548)->v) = 0x2;
        } else {
            (((struct o34_uint *)0xC2AD548)->v) = 0x3;
        }
    }
    return t2;
}
