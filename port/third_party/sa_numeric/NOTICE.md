# sa_numeric

The SH-4 "play math" library from the Sonic Adventure decompilation by reshaped,
<https://github.com/reshaped/sonic-adventure> (`engine/numeric/`, commit 0976f2c), used here with the author's
permission. It gives the SH-4's floating-point operations (FADD..FDIV under round-toward-zero, FMAC, FIPR, FTRV, FSCA,
FSRRA, conversions) with the console's bits on any host.

`sh4_fpu_approx.h` carries its own MIT licence notice (Stefanos Kornilios Mitsis Poiitidis), kept as is.

The files are unchanged. The port links `math.c`, the reference build; `fast.c` needs the sine table `sine.c` prints.
