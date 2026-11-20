/* Straight-line functions with calls and guards (batch gen_ars): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmSetHSyncLine(int);
int nlIntrSetHSynchLine(int a4);

int nlIntrSetHSynchLine(int a4)
{
    return kmSetHSyncLine(a4);
}
