# Tools

The tools of each step are in their own folder, the simulator and its checker in [sim/](sim/), the tools many steps share in
[common/](common/); only `toolpath.py` (every folder on the import path) and `progress.py` stay at the top. The step folders: [1-2-baseline/](1-2-baseline/) (its `setup/` holds the kickoff's own scripts and is not copied into repos), [3-assets/](3-assets/), [4-boosts/](4-boosts/), [5-generated/](5-generated/), [6-agentic/](6-agentic/), [7-reduction/](7-reduction/), [8-build/](8-build/), [10-port/](10-port/). `toolpath.py` puts every folder on the import path, so a tool imports another by name wherever it lives. [overlay/](overlay/) holds the code overlays' tools (`docs/overlays.md` in the kickoff skill; only a game with `overlays.tsv` uses them), [hooks/](hooks/) holds the pre-commit hook, [tools-image/](tools-image/) the Docker image the SDK tools run in.

| tool | what it does |
|---|---|
| [progress.py](progress.py) | The decomp's state, in several measures. |
