/* Straight-line functions with calls and guards (batch gen_alr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int camSetAngles(int, int, int, int);
int camSetMode(int);
int SetAdvCamera(int a4, int a5);

int SetAdvCamera(int a4, int a5)
{
    int t1;
    int t3;

    t1 = 0x3;
    if (((int)a5 >= 0) && ((int)a5 <= (int)0x4)) {
        t1 = a5;
    }
    *(unsigned int *)0xC0E4E38 = t1;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179968) = *(struct mv3 *)(a4); }
    camSetAngles(0x0, 0x0, 0x0, 0x0);
    t3 = camSetMode(0x8);
    *(unsigned int *)0xC179974 = 0x1;
    return t3;
}
