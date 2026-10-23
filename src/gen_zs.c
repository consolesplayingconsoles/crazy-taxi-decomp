/* Straight-line functions with calls and guards (batch gen_zs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
int nlSprPut(int);
int Put_GearBox(void);

int Put_GearBox(void)
{
    int t2;

    t2 = 0x0;
    if ((*(int *)(((*(int *)0xC2A8C60) + 0x0))) != 0) {
        t2 = 0x1;
    }
    if ((*(int *)0xC2A8DE8) != t2) {
        Sound_Request(0xBA9, 0x0);
        *(unsigned int *)0xC2A8DE8 = t2;
    }
    if (t2 == 0) {
        *(unsigned int *)0xC2A892C = 0x12;
    } else {
        *(unsigned int *)0xC2A892C = 0x11;
    }
    return nlSprPut(0xC2A892C);
}
