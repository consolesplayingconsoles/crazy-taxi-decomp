/* Straight-line functions with calls and guards (batch gen_aj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlExp(int, float);

void nlFraction(float f4)
{
    if (!(8388608.0f > (f4 < 0.0f ? -f4 : f4))) {
        return;
    }
    if (0.0f > f4) {
        return;
    }
}

void nlSinh(int a4)
{
    if (((((float)(unsigned short)a4 * 6.28318501f) / 65536.0f) < 0.0f ? -(((float)(unsigned short)a4 * 6.28318501f) / 65536.0f) : (((float)(unsigned short)a4 * 6.28318501f) / 65536.0f)) > 0.00999999978f) {
        nlExp((unsigned short)a4, (((float)(unsigned short)a4 * 6.28318501f) / 65536.0f));
        return;
    }
}
