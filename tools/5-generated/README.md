# Step 5: script-generated decomp

| tool | what it does |
|---|---|
| [audit_equivalent.py](audit_equivalent.py) | Every function tests/equivalent.txt calls Equivalent must have C behind it. |
| [classify.py](classify.py) | Which functions can have Equivalent C written for them (tools/equiv.py), and which not. |
| [diverge.py](diverge.py) | Why the generated C of one function differs from the original. |
| [gen_equiv/](gen_equiv) | Writes Equivalent C for the functions that need no thinking, and checks each against the original. |
| [remaining.py](remaining.py) | Every function that is not done yet, by its current state and the cause it shares with others. |
| [sdk_source.py](sdk_source.py) | Library functions the SDK's own source reproduces. |
