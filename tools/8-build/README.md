# Step 8: build from C

| tool | what it does |
|---|---|
| [cbuild.py](cbuild.py) | A build of the game from the proven C: the game code region is the compiled C, everything else is the original. |
| [disc_patch.py](disc_patch.py) | Build a playable disc image: a copy of the original GDI with some files replaced. |
| [relocasm.py](relocasm.py) | Assembly pieces that can move: real instructions, labels for branches, symbols for the functions they call. |
| [relocptr.py](relocptr.py) | Pointers to game functions, in the pieces that stay where they are, follow the functions. |
| [codeconsts.py](codeconsts.py) | C that reads a constant from the original's code by its address (a literal pool the build overwrites): lists them, `--write` puts the values in. |
| [retcheck.py](retcheck.py) | Each function's result register, from the original's code before its `rts`, against its C declaration; `make c` and the pre-commit hook run it. |
