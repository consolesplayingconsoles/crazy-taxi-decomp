/* The VMU LCD's per-frame entry. Written by hand from the Dreamcast code: Exec_LCD is 32 bytes, three tests and a tail-jump
   (`bf 0x0C0604A2`) into Exec_LCDLogoDemo's entry. functions.txt had given it 210 bytes, over LCDAccessOK, DO_NOT_LCDAccess,
   Set_LCDLogoFlag, EndVM_CTLogo and the first half of Exec_LCDLogoDemo; the generated C then called into the middle of
   Exec_LCDLogoDemo (0C06052E, 0C06053C), where the original has r11-r14, PR and a stack argument pushed, and the build from C
   froze at the first frame with LCD access on (the memory card load window). */

int Exec_LCDLogoDemo(void);

/* manual: written by hand from the Dreamcast code; tools must not regenerate it */
void Exec_LCD(void)
{
    int f;

    if (*(int *)0x0C2A9FF0 != 0)                                /* DO_NOT_LCDAccess */
        return;
    f = *(int *)0x0C2A9FA8;                                     /* the LCD state flags */
    if ((f & 2) == 2)
        return;
    if ((f & 4) == 4)                                           /* a load or save owns the LCD (Start_LoadSave) */
        return;
    Exec_LCDLogoDemo();
}
