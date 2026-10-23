/* Straight-line functions with calls and guards (batch gen_d): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Put_Time_Spark(int, float);
int Sound_Request(int, int);
int thunk_nlCloseEvent(int);
int Exec_Time_Spark(int a4, float f4);

int Exec_Time_Spark(int a4, float f4)
{
    Put_Time_Spark(a4, f4);
    if (120.0f > (*(float *)((a4 + 0x1C)))) {
        Sound_Request(0x5A9, 0x0);
        return thunk_nlCloseEvent(a4);
    }
    return 0x1C;
}
