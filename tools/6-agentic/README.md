# Step 6: agentic decomp

| tool | what it does |
|---|---|
| [codeaddr.py](codeaddr.py) | Addresses of the game's own functions written as numbers in the C become the functions' names. |
| [frametest.py](frametest.py) | The C against the original on a real RAM snapshot of the game (the display lists, memory, results): finds a missing stack word or a wrong argument the cases cannot. |
| [handcase.py](handcase.py) | Prove a function on cases written by hand, with the C the generator writes. |
| [poolconst.py](poolconst.py) | Turn the C's reads of the original code's literal pools into constants. |
| [poollist.py](poollist.py) | What a function's literal pool holds, and which of it still has no name. |
| [unpoke_code.py](unpoke_code.py) | Take the code out of what a test case may change. |
