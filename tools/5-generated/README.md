# Step 5: script-generated decomp

| tool | what it does |
|---|---|
| [audit_equivalent.py](audit_equivalent.py) | Every function tests/equivalent.txt calls Equivalent must have C behind it. |
| [classify.py](classify.py) | Which functions can have Equivalent C written for them (tools/equiv.py), and which not. |
| [diverge.py](diverge.py) | Why the generated C of one function differs from the original. |
| [gen_equiv/](gen_equiv) | Writes Equivalent C for the functions that need no thinking, and checks each against the original. |
| [overreads.py](overreads.py) | Which Equivalent C reads memory the original does not: reruns the cases with junk in unused RAM and reports the functions that now differ. |
| [remaining.py](remaining.py) | Every function that is not done yet, by its current state and the cause it shares with others. |
| [sdk_source.py](sdk_source.py) | Library functions the SDK's own source reproduces; the source files that reproduce whole are written as C units a build can take (`sdk-source/units/`). |
| [sdk_place.py](sdk_place.py) | The SDK's C in its library's folder: `sdk/<library>/`, out of the game's `src/`; `--fix` moves a one-library file whole and splits a mixed one by function. |
| [rawcalls.py](rawcalls.py) | C that calls original code by a raw address no function in `functions.txt` starts at: it passes `equiv.py` but a build from C has nothing to call; a ratchet list that only shrinks. |
