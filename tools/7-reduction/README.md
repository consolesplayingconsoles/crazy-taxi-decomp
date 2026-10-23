# Step 7: code size reduction

| tool | what it does |
|---|---|
| [hoist.py](hoist.py) | Hold a value the C recomputes again and again in a local, as the original held it in a register. |
| [shrink.py](shrink.py) | Write proven functions again with the current generator and keep the new C only when it is smaller and still proven. |
