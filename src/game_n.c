/* Game functions with single-precision floats (batch n): a counter reset, the stand-wait distances, the car's engine pitch
   and a clamped scaling. */

#define F(a)    (*(float *)(a))

void nd_peopleInitialize(int x)
{
    int i;

    *(int *)0x0C2A6FE0 = 0;
    *(int *)0x0C2A6FDC = x;
    *(int *)0x0C2A71F4 = 0;
    *(int *)0x0C2A71F8 = 0;
    for (i = 0; i < 100; i++) {
        *(int *)0x0C2A71FC = 12;
        ((int *)0x0C2A7064)[i] = 0;
    }
    *(int *)0x0C2A7200 = 0;
    F(0x0C2A7204) = 0.0f;
    *(int *)0x0C2A6FD8 = 0;
}

/* The engine sound's pitch from the car's speed word: 20 minus its share of 3434 times 20, kept between 0.1 and 38.9. */
float Drv_DriveFrame(void)
{
    short s = *(short *)(0x0C1790CC + 0x114);
    float f = -((float)s * 20.0f / 3434.0f) + 20.0f;

    if (f > 38.899998f)
        f = 38.899998f;
    else if (0.099999994f > f)
        f = 0.099999994f;
    return f;
}

float Drv_BikePedalStep(void)
{
    float x = F(0x0C2AD2B8);
    float y;

    if (x > 10.0f)
        y = 10.0f;
    else if (0.0f > x)
        y = 0.0f;
    else
        y = x;
    return y * 2.5f / 10.0f;
}

void Set_StandWaitDist(int m)
{
    if (m == 1) {
        F(0x0C13EED0) = 300.0f;
        F(0x0C13EED4) = 450.0f;
        F(0x0C13EED8) = 350.0f;
        F(0x0C13EEDC) = 250.0f;
    } else {
        F(0x0C13EED0) = 500.0f;
        F(0x0C13EED4) = 1000.0f;
        F(0x0C13EED8) = 750.0f;
        F(0x0C13EEDC) = 500.0f;
    }
    F(0x0C13EEE0) = 150.0f;
}
