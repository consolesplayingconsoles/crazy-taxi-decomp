/* Straight-line functions with calls and guards (batch gen_ahb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ResetFadeColor(void);
int SetFadeColorBase(float, float, float);
int SetFadeColorOffset(float, float, float);
int LightEffect(int a4);

int LightEffect(int a4)
{
    if (a4 != 0) {
        SetFadeColorBase(0.5f, 0.599999964f, 1.0f);
        SetFadeColorOffset(0.299999982f, 0.399999976f, 0.5f);
    } else {
        SetFadeColorBase(1.0f, 1.0f, 1.0f);
        SetFadeColorOffset(1.0f, 1.0f, 1.0f);
    }
    return ResetFadeColor();
}
