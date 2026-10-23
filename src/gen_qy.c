/* Straight-line functions with calls and guards (batch gen_qy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlPushMultiViewMatrix(void);
int nlObjPut(int);
int nlPopMatrix(int);
int nlScale(float, float, float);
int nlUnitRotation(void);
int Put2DObj(int a4, float f4, float f5);

int Put2DObj(int a4, float f4, float f5)
{
    nlPushMultiViewMatrix();
    nlUnitRotation();
    nlScale(f4, f5, 1.0f);
    nlObjPut(a4);
    return nlPopMatrix(0x1);
}
