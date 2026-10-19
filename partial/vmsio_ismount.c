/* Draft: generated C that the check did not accept (did not compile). Not proven equivalent. */

int kdGetDevice(int);
int kdGetDeviceInfo(void);
int kdIsChanged(void);

void vmsio_ismount(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)(((a4 << 2) + 0xC176948));
    t1 = kdGetDevice(t0);
    t2 = kdGetDeviceInfo();
    t3 = *(signed char *)((t1 + 0x0));
    if (t3 != 0) {
        t4 = kdIsChanged();
        if (t4 == 0) {
            t5 = *(int *)((t2 + 0x0));
            if ((t5 & 2) == 0) {
                return;
            }
            return;
        }
        return;
    }
}

