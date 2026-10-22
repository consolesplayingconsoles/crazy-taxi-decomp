/* Straight-line functions with calls and guards (batch gen_pk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int BigOneResetState(void);

int BigOneResetState(void)
{
    float u0;
    float u1;
    float u2;
    float u3;

    u0 = *(float *)0xC073140;
    *(float *)0xC2AEC20 = u0;
    u1 = *(float *)0xC073144;
    *(float *)0xC2AEC24 = u1;
    u2 = *(float *)0xC073148;
    *(float *)0xC2AEC28 = u2;
    *(unsigned int *)0xC2AEC34 = 0x0;
    *(unsigned int *)0xC2AEC30 = 0x0;
    *(unsigned int *)0xC2AEC2C = 0x0;
    *(unsigned int *)0xC2AEC3C = 0x0;
    *(float *)0xC2AEC48 = 0.0f;
    *(float *)0xC2AEC44 = 0.0f;
    *(float *)0xC2AEC40 = 0.0f;
    *(unsigned int *)0xC2AEC54 = 0x0;
    *(unsigned int *)0xC2AEC50 = 0x0;
    *(unsigned int *)0xC2AEC4C = 0x0;
    *(float *)0xC2AEC58 = 0.0f;
    u3 = *(float *)0xC07314C;
    *(float *)0xC2AEC5C = u3;
    *(unsigned int *)0xC2AEC68 = 0x0;
    *(unsigned int *)0xC2AEC64 = 0x0;
    *(unsigned int *)0xC2AEC60 = 0x0;
    *(unsigned int *)0xC2AEC74 = 0x0;
    *(unsigned int *)0xC2AEC70 = 0x0;
    *(unsigned int *)0xC2AEC6C = 0x0;
    *(unsigned int *)0xC2AEC80 = 0x0;
    *(unsigned int *)0xC2AEC7C = 0x0;
    *(unsigned int *)0xC2AEC78 = 0x0;
    return 0x58;
}
