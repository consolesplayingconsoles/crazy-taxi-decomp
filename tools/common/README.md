# Tools many steps share

Used by three steps or more, so no single step owns them.

| tool | what it does |
|---|---|
| [layout.py](layout.py) | The executable's layout, for the tools that need it: `layout.txt` in the repo, one region per line. |
| [consistency.py](consistency.py) | Every function with C in src/ has its cases where the check looks for them and a recorded outcome. |
| [ledger.py](ledger.py) | Nothing the tools learn about a function is thrown away. |
| [boundaries.py](boundaries.py) | Function boundaries from reachability: which code addresses are functions of their own (a branch to another listed function is a tail jump). |
| [fcmp.py](fcmp.py) | Compare a C unit with the game function by function, instruction by instruction (`--score` for the permuter). |
| [rename.py](rename.py) | Rename functions (and globals) everywhere in the repo at once. |
| [docker_check.sh](docker_check.sh) | Checks Docker is installed and running, and whether Ghidra steps run one at a time (sourced by build.sh) |
