/* Shinobi library, SG_SYBT (boot): our own C, written from the disassembly. */

extern unsigned char syBtFlagA;
extern unsigned char syBtFlagB;
extern void syBtEntry(void);
extern unsigned int syBtHookSlot;
extern void (*syBtVector)(int);

void syBtExit(void)
{
    if (syBtFlagA == 1) {
        if (syBtFlagB == 1) {
            syBtEntry();
        } else {
            syBtHookSlot = 0x8C008000;
            syBtVector(3);
        }
    } else {
        syBtVector(1);
    }
}
