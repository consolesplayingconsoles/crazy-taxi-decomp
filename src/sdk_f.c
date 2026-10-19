/* Small SDK (nl*, km glue, libc) functions, batch f: this game's own builds of library functions that differ from
   the common ones. */

extern float nlExp(float x);

/* As the common build, but this build's constant is 6.283185f (0x40C90FDA), one bit below it. */
float nlCosh(unsigned short x)
{
    float e = nlExp((float)x * 6.283185f / 65536.0f);
    return (e + 1.0f / e) / 2.0f;
}
