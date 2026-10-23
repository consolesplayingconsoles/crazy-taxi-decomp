/* Straight-line functions with calls and guards (batch gen_zw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXERR_CallErrFunc(void);
int adxini_rnaerr_cbfn(int a4, int a5);

int adxini_rnaerr_cbfn(int a4, int a5)
{
    return (ADXERR_CallErrFunc());
}
