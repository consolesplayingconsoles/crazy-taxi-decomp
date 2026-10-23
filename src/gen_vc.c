/* Straight-line functions with calls and guards (batch gen_vc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ExecStartCamera(void);
int Put_Here_We_Go(int);
int Put_ReadySetGo(int);
int camSetMode(int);
int gdc_PlayStreamSongDisk(void);
int GS_StartWait(void);

int GS_StartWait(void)
{
    int t1;
    int t18;
    int t7;
    int t14;
    int t9;
    int t22;
    int t35;
    int t37;
    int t36;
    int t2;
    int t41;

    *(unsigned int *)0xC1EE7F0 = ((*(int *)0xC1EE7F0) - 1);
    t1 = *(int *)0xC1EE210;
    t18 = t1;
    if ((t1 == 2) && (t2 = *(int *)0xC1EE214, t2 != 0)) {
        t7 = *(int *)0xC1EE788;
        t14 = t7;
        if (t7 == 1) {
            t9 = *(int *)0xC2A9904;
            if (t9 == 0) {
                *(unsigned int *)0xC1EE794 = ((*(int *)0xC1EE794) - 1);
            }
            t14 = t9;
        }
        t18 = t14;
    }
    t22 = *(int *)0xC1EE7F0;
    if ((int)t22 <= 0) {
        *(unsigned int *)0xC1EE7EC = ((*(int *)0xC1EE7EC) + 0x1);
        t41 = t18;
    } else {
        if ((*(int *)0xC1EE210) != 2) {
            Put_Here_We_Go(t22);
        } else {
            Put_ReadySetGo(t22);
        }
        if ((*(int *)0xC1EE210) != 2) {
            ExecStartCamera();
        } else {
            camSetMode(0x0);
        }
        t35 = *(int *)0xC1EE7F0;
        t37 = t35;
        if (t35 == 60) {
            *(unsigned int *)0xC179120 = 0x1;
            t36 = gdc_PlayStreamSongDisk();
            *(unsigned int *)0xC1EE788 = 0x1;
            t37 = t36;
        }
        t41 = t37;
    }
    return t41;
}
