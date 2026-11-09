/* Straight-line functions with calls and guards (batch gen_acr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int TrainCarInit(int, int, int);
int set_event(int, int);
int CableControlInit(int a4);
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct oD80_int { char p[0xD80]; int v; };
struct oD8C_int { char p[0xD8C]; int v; };


int CableControlInit(int a4)
{
    int t0;
    int t1;
    int t4;
    int t8;
    int t10;
    int t13;
    int t17;

    *(unsigned int *)0xC2A4E44 = 0x0;
    t0 = set_event(0x5C, 0xC047C84);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x14)) = a4;
        *(unsigned int *)((t0 + 0x18)) = 0x0;
        *(unsigned int *)((t0 + 0x20)) = 0x0;
        (((struct o28_float *)(t0))->v) = 5300.0f;
        (((struct o2C_float *)(t0))->v) = 1370.19995f;
        (((struct o30_float *)(t0))->v) = 3100.0f;
        (((struct o48_uint *)(t0))->v) = 0x0;
        (((struct o40_uint *)(t0))->v) = 0x0;
        (((struct o50_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x1C)) = 0x4;
        *(unsigned int *)((t0 + 0x24)) = 0x0;
        (((struct o34_float *)(t0))->v) = 5150.0f;
        (((struct o38_float *)(t0))->v) = -1049.79993f;
        (((struct o3C_float *)(t0))->v) = 11530.0f;
        (((struct o4C_uint *)(t0))->v) = 0x6000;
        (((struct o44_uint *)(t0))->v) = 0x6000;
        (((struct o54_uint *)(t0))->v) = 0x0;
        (((struct o58_uint *)(t0))->v) = 0x0;
        t1 = *(int *)0xC2A6690;
        t4 = *(int *)(((*(int *)(((t1 + 0xD80) + 0x4))) + 0x0));
        TrainCarInit(0xF, 0x120, (((((t4 << 1) + t4) << 2) + ((((struct oD80_int *)(t1))->v))) - 120));
        t8 = *(int *)(((*(int *)(((t1 + 0xD80) + 0x4))) + 0x0));
        TrainCarInit(0xF, 0x120, (((((t8 << 1) + t8) << 2) + ((((struct oD80_int *)(t1))->v))) - 1920));
        t10 = *(int *)0xC2A6690;
        t13 = *(int *)(((*(int *)(((t10 + 0xD8C) + 0x4))) + 0x0));
        TrainCarInit(0xF, 0x121, (((((t13 << 1) + t13) << 2) + ((((struct oD8C_int *)(t10))->v))) - 120));
        t17 = *(int *)(((*(int *)(((t10 + 0xD8C) + 0x4))) + 0x0));
        return TrainCarInit(0xF, 0x121, (((((t17 << 1) + t17) << 2) + ((((struct oD8C_int *)(t10))->v))) - 1920));
    }
    return t0;
}
