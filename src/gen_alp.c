/* Straight-line functions with calls and guards (batch gen_alp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int camSetAngles(int, int, int, int);
int camSetEye(int, int);
int camSetMode(int);
int camSetTarget(int, int);
int camRestore(void);

int camRestore(void)
{
    camSetMode((*(int *)0xC2AD550));
    camSetEye(0xC2AD554, 0x0);
    camSetTarget(0xC2AD560, 0x0);
    return camSetAngles((unsigned short)(*(short *)0xC2AD56C), (unsigned short)(*(short *)0xC2AD56E), (unsigned short)(*(short *)0xC2AD570), 0x0);
}
