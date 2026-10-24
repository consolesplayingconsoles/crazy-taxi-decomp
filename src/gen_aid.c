/* Straight-line functions with calls and guards (batch gen_aid): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlLength(int, int, float, float);
float camGetOnSelect(float f4, float f5);

float camGetOnSelect(float f4, float f5)
{
    float t2;

    *(unsigned int *)0xC2AD580 = 0x0;
    t2 = nlLength(((*(int *)0xC2AD548) + 0x4), ((*(int *)0xC2AD54C) + 0x4), f4, f5);
    if (4e+01f > t2) {
        *(unsigned int *)0xC2AD57C = 0x1;
    } else {
        if (8e+01f > t2) {
            *(unsigned int *)0xC2AD57C = 0x2;
        } else {
            *(unsigned int *)0xC2AD57C = 0x3;
        }
    }
    return t2;
}
