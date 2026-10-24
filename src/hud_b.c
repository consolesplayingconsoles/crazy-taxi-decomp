/* HUD functions written by hand from the Dreamcast code, where the generated form called into the middle of a function.
   Put_TotalDrum is 166 bytes with its literal pool in the middle of the body (0C0546BA-0C054722); functions.txt had sized it to
   the pool (60 bytes), so the generator saw its second half as another function and "called" 0C054724 and 0C054726, two
   instructions apart, with the frame already pushed. */

int nlObjPutSetFadeColor(float, float, float);
int Put_TotalDrum_Roll(void);
int Put_TotalDrum_Digits(void);
int Put_TotalDrum_Money(void);

/* manual: written by hand from the Dreamcast code; tools must not regenerate it */
void Put_TotalDrum(void)
{
    float c;

    c = 1.0f;
    if (*(int *)0x0C2A8CB4 == 0 && *(int *)0x0C2A8EAC > 0 && *(int *)0x0C2A8CB8 == 48)
        c = 0.54999995f;                                        /* 0x3F0CCCCC: the drum dims while the last fare counts down */
    nlObjPutSetFadeColor(c, c, c);
    Put_TotalDrum_Roll();
    Put_TotalDrum_Digits();
    Put_TotalDrum_Money();
}
