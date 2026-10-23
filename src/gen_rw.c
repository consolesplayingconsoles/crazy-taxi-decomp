/* Straight-line functions with calls and guards (batch gen_rw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlsndSeqRequest(int);
int nlsndGdControl(int a4, int a5);

int nlsndGdControl(int a4, int a5)
{
    int t0;

    if (a4 == 0xA3) {
        t0 = nlsndSeqRequest((a4 + ((a5 & 0xF) << 16)));
        if (t0 != 0) {
            return t0;
        }
        return nlsndSeqRequest(((a4 + ((a5 & 0xF) << 16)) + 0x100));
    }
    return 0xFFFFFFFE;
}
