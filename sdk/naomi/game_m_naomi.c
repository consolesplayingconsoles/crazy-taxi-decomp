/* Game functions with single-precision floats (batch m): camera target setters, print scale and size, small stores. */

void Result_Light(void);

#define F(a)    (*(float *)(a))


/* out = a + b for 3-vectors. */
void nlAddVector3op(float *out, float *a, float *b)
{
    out[0] = a[0] + b[0];
    out[1] = a[1] + b[1];
    out[2] = a[2] + b[2];
}


