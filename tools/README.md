# Tools several steps use

The tools of each step are in their own folder: [1-2-baseline/](1-2-baseline/), [3-assets/](3-assets/), [4-boosts/](4-boosts/), [5-generated/](5-generated/), [6-agentic/](6-agentic/), [7-reduction/](7-reduction/), [8-build/](8-build/). `toolpath.py` puts every folder on the import path, so a tool imports another by name wherever it lives. [hooks/](hooks/) holds the pre-commit hook, [tools-image/](tools-image/) the Docker image the SDK tools run in.

| tool | what it does |
|---|---|
| [apply_bin.py](apply_bin.py) | Write a modified executable's changes into the repo's asm data words. |
| [boundaries.py](boundaries.py) | Function boundaries from reachability: which code addresses are functions of their own. |
| [consistency.py](consistency.py) | Every function with C in src/ has its cases where the check looks for them and a recorded outcome. |
| [docker_check.sh](docker_check.sh) | Checks Docker is installed and running, and whether Ghidra steps run one at a time (sourced by build.sh) |
| [equiv.py](equiv.py) | Behaviour check: does a C file's code do what the original does? |
| [gdi_read.py](gdi_read.py) | List or extract files from a Dreamcast GDI, across every data track. |
| [ledger.py](ledger.py) | Nothing the tools learn about a function is thrown away. |
| [progress.py](progress.py) | The decomp's state, in several measures. |
| [rename.py](rename.py) | Rename functions (and globals) everywhere in the repo at once. |
| [sh4sim.py](sh4sim.py) | A small SH-4 interpreter for behaviour checks: run one function from a known state and record what it does. |
| [shdis.py](shdis.py) | SH-4 disassembly of part of the executable, FPU included, with names. |
| [sizes.py](sizes.py) | Compiled size of every proven function's C against the original's size. |
| [status.py](status.py) | What is running in this repo right now, and where to follow it. |
| [watch.py](watch.py) | One line of progress with an estimate per running generator run, every few minutes, and a result line when all are done. |
