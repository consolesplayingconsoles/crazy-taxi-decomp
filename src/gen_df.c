/* Straight-line functions with calls and guards (batch gen_df): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Exec_Balloon(int);
int KillColliObj(int);
int nlCloseEvent(int);
int Exec_Balloon_Event(int a4);

int Exec_Balloon_Event(int a4)
{
    int t1;
    int t2;

    Exec_Balloon(a4);
    t1 = *(int *)((a4 + 0x7C));
    if (t1 == 1) {
        t2 = *(int *)((a4 + 0x78));
        *(unsigned int *)((a4 + 0x78)) = (t2 + 0x1);
        if ((int)(t2 + 0x1) >= (int)0x14) {
            KillColliObj((a4 + 0x48));
            return nlCloseEvent(a4);
        }
        return 0x78;
    }
    return t1;
}
