/* Straight-line functions with calls and guards (batch gen_aii): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int DramRoll_Anime(void);
struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o8_float { char p[0x8]; float v; };


int DramRoll_Anime(void)
{
    float u5;
    float u8;

    (((struct o20_uint *)0xC2A970C)->v) = 0xE;
    (((struct o0_float *)0xC2A970C)->v) = ((((((struct o0_float *)0xC2A9758)->v)) - ((float)((((struct o34_int *)0xC2A9758)->v)) * 0.25f)) + 1.0f);
    (((struct o8_float *)0xC2A970C)->v) = ((float)((((struct o34_int *)0xC2A9758)->v)) * 0.25f);
    (((struct o10_float *)0xC2A970C)->v) = 1.0f;
    (((struct o20_uint *)0xC2A970C)->v) = 0x6;
    u5 = ((((struct o0_float *)0xC2A9758)->v));
    u5 = u5 + 0.25f * (float)((((struct o34_int *)0xC2A9758)->v));
    (((struct o0_float *)0xC2A970C)->v) = u5;
    (((struct o8_float *)0xC2A970C)->v) = 0.0f;
    u8 = ((((struct o0_float *)0xC2A9758)->v));
    u8 = u8 + 0.25f * (float)((((struct o34_int *)0xC2A9758)->v));
    (((struct o10_float *)0xC2A970C)->v) = u8;
    return 0x24;
}
