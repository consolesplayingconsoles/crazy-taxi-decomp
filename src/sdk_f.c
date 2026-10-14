/* Small SDK (nl*, km glue, libc) functions, batch f: this game's own builds of library functions that differ from
   Virtua Tennis's. */

extern float nlExp(float x);

/* As Virtua Tennis's, but this build's constant is 6.283185f (0x40C90FDA), one bit below the other game's. */
float nlCosh(unsigned short x)
{
    float e = nlExp((float)x * 6.283185f / 65536.0f);
    return (e + 1.0f / e) / 2.0f;
}
