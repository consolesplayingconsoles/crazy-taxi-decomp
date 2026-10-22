/* Straight-line functions with calls and guards (batch gen_rb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void Init_EEPROM(void);

void Init_EEPROM(void)
{
    { struct mv7 { int w[7]; }; *(struct mv7 *)(0xC1789C4) = *(struct mv7 *)(0xC08A668); }
}
