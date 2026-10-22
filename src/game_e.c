/* Game functions (batch e): the combo counters, traffic level, a stepped index, the bonus time and the course-mode
   toggle. Globals are addressed directly where the decomp has no name for them yet. */

void ConvertSwitch2(void)
{
    int *r4 = (int *)0x0C1EE2B4;
    int *p;

    *((char *)r4 + 44) = 2;
    *((char *)r4 + 43) = 0;
    r4[3] = r4[0];
    p = *(int **)0x0C1EE134;
    r4[0] = p[2];
    p = *(int **)0x0C1EE134;
    r4[1] = p[4];
    p = *(int **)0x0C1EE134;
    r4[2] = p[5];
}

void AdvNextCourseMode(void)
{
    int v;

    *(int *)0x0C1EE23C = 0;
    v = *(int *)0x0C1EE768;
    if (v == 0) {
        *(int *)0x0C1EE20C = v;
        *(int *)0x0C1EE768 = 1;
    } else if (v == 1) {
        *(int *)0x0C1EE20C = v;
        *(int *)0x0C1EE768 = 0;
    }
}

void GS_GuestEject(void)
{
    int *g = (int *)0x0C1EE788;

    g[6] = 0;
    g[17] = 0;
    g[1] = 0;
    if (g[21]) {
        if (g[22] > 0) {
            g[22]--;
            g[21] = 0;
        }
    }
    if (g[16]) {
        if (g[15] > 0) {
            g[15]--;
            g[16] = 0;
        }
    }
}

void TrafficLevelChange(int d)
{
    int *level = (int *)0x0C2A1B6C;
    int v;

    if (*(int *)0x0C2A4494 > 0) {
        v = *level + d;
        *level = v;
        if (v > 23)
            *level = 23;
        else if (v < *(int *)0x0C2A4488)
            *level = *(int *)0x0C2A4488;
        *(int *)0x0C2A4494 = -180;
    }
}

/* x stepped up by bit 5 and down by bit 4 of the word at 0C1EE284, kept in 0-21 (wrapping). */
int padStepIndex(int x)
{
    int g = ((int *)0x0C1EE280)[1];

    x += ((g & 32) != 0) - ((g & 16) != 0);
    if (x < 0)
        x = 21;
    else if ((unsigned int)x >= 22)
        x = 0;
    return x;
}

/* Moves up to 60 of the pending amount at **0C2A8C58 into *(*0C2A8C54). */
void Put_Remain_Time_Add(void)
{
    int **src = (int **)0x0C2A8C58;
    int *dst = *(int **)0x0C2A8C54;

    if (**src > 0) {
        if (**src >= 60) {
            *dst += 60;
            **src -= 60;
        } else {
            *dst += **src;
            **src = 0;
        }
    }
}
