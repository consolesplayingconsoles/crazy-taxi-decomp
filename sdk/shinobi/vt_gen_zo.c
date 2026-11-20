/* Library code: C that behaves like this game's own bytes. */
/* An interrupt handler written by hand (SHC #pragma interrupt: the compiler saves what it uses and ends with rte). */

#pragma interrupt(syIntBrkHandler3)
void syIntBrkHandler3(void);


void syIntBrkHandler3(void)
{
    ((void (*)(int, int))0xAC004000)(0x200, 3);
}
