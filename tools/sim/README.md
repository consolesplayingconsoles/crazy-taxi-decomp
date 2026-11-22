# The simulator and its checker

The SH-4 simulator, the behaviour check built on it (a C function against the original, case by case), and the
disassembler both read. Every step that proves C uses them.

| tool | what it does |
|---|---|
| [sh4sim.py](sh4sim.py) | A small SH-4 interpreter for behaviour checks: run one function from a known state and record what it does. |
| [equiv.py](equiv.py) | Behaviour check: does a C file's code do what the original does? |
| [shdis.py](shdis.py) | SH-4 disassembly of part of the executable, FPU included, with names. |
| [sh4fpu.py](sh4fpu.py) | The hardware's own results for fipr, ftrv, fsrra and fsca (a bit-exact model of the SH-4's approximating datapath), used by sh4sim. |
