/* Straight-line functions with calls and guards (batch gen_akf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_SetLpFlg(int a4, int a5);

int ADXT_SetLpFlg(int a4, int a5)
{
    *(unsigned char *)((a4 + 0x6C)) = a5;
    return 0x6C;
}
