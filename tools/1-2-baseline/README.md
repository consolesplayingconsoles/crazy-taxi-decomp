# Steps 1-2: setup and baseline

| tool | what it does |
|---|---|
| [checksizes.py](checksizes.py) | Functions whose size in functions.txt looks wrong. |
| [fill.py](fill.py) | Shc's asm output laid out exactly like the game. |
| [missed_funcs.py](missed_funcs.py) | List code the analysis did not make into functions. |
| [sdk_identical.py](sdk_identical.py) | Open functions whose bytes are verbatim in the SDK's own compiled library code. |
| [sdk_masked.py](sdk_masked.py) | Name more SDK functions after the signature tables: compare instructions, not hashes. |
| [split_asm.py](split_asm.py) | Split a Dreamcast executable into one Hitachi asmsh source per function. |
| [units.py](units.py) | The link order with C units in place of the asm files they replace. |
