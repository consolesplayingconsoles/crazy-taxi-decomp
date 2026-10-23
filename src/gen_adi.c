/* Straight-line functions with calls and guards (batch gen_adi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetRotVec(int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int GetRotVec4Ang(int a4, int a5, int a6, int a7);

int GetRotVec4Ang(int a4, int a5, int a6, int a7)
{
    nlPushUnitMatrix();
    nlRotateAY(a6);
    nlRotateAX(a5);
    nlRotateAZ(a7);
    GetRotVec(a4);
    return nlPopMatrix(0x1);
}
