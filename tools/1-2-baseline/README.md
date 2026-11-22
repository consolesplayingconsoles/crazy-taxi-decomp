# Steps 1-2: setup and baseline

| tool | what it does |
|---|---|
| [checksizes.py](checksizes.py) | Functions whose size in functions.txt looks wrong. |
| [fill.py](fill.py) | Shc's asm output laid out exactly like the game. |
| [missed_funcs.py](missed_funcs.py) | List code the analysis did not make into functions. |
| [movecheck.py](movecheck.py) | Does the executable move: the named split linked with pads between groups and run against the original. Pieces that share a pool, a far branch or a conditional tail jump stay together. |
| [sdk_identical.py](sdk_identical.py) | Open functions whose bytes are verbatim in the SDK's own compiled library code. |
| [sdk_masked.py](sdk_masked.py) | Name more SDK functions after the signature tables: compare instructions, not hashes. |
| [shc_flags.txt](shc_flags.txt) | The shc flags of every C unit (build.sh and tools/common/fcmp.py read them; a unit adds its own in its header). `shc_flags.<x>.txt`: the set a unit's `+<x>flags` picks instead. |
| [split_asm.py](split_asm.py) | Split a Dreamcast executable into one Hitachi asmsh source per function. |
| [units.py](units.py) | The link order with C units in place of the asm files they replace. |
| [overlay_scan.py](overlay_scan.py) | Classify every file of an extracted disc (SH-4 code, ARM code, sound bank, texture, data) and prove whether it holds SH-4 code. |
| [sdk_txt.py](sdk_txt.py) | Mark which code is Sega's SDK (not the game) for the repo's progress report (`sdk.txt`). |
| [seed_funcs.py](seed_funcs.py) | Function starts the analysis never reached, as seeds for `setup/ghidra/SeedFuncs.java`. |
| [apply_bin.py](apply_bin.py) | Write a modified executable's changes into the repo's asm data words. |
| [gdi_read.py](gdi_read.py) | List or extract files from a Dreamcast GDI, across every data track. |

## setup/ (the kickoff's own scripts: not copied into decomp repos)

They run from the skill while the repo is being made: the SDK, its signatures and Ghidra, before there is a repo to hold them.

| script | what it does |
|---|---|
| [banners.py](setup/banners.py) | Print the SDK/middleware version banners linked into a Dreamcast executable. |
| [sdk_scan.py](setup/sdk_scan.py) | Which Katana SDK built this game? Match its library banners against SDK releases. |
| [sdk_unpack.sh](setup/sdk_unpack.sh) | Unpack an SDK image (`.iso`, `.zip` or folder), InstallShield archives included (`unshield-image/`). |
| [sdk_from_iso.py](setup/sdk_from_iso.py) | Lay out the Katana SDK 1.55J from its two disc images. |
| [sdk_sigs.sh](setup/sdk_sigs.sh) | Signatures of an SDK's library functions, for `ghidra/ApplySigs.java`. |
| [sdk_headers.py](setup/sdk_headers.py) | Copy an SDK's C headers in a form Ghidra's C parser reads. |
| [map_names.py](setup/map_names.py) | The code symbols of a linked library from its `.map`. |
| [linkbase.py](setup/linkbase.py) | Guess the address a Dreamcast executable was linked at, by counting self-pointers. |
| [iso_extract.py](setup/iso_extract.py) | Copy every file out of a disc image or zip. |
| [is3_extract.py](setup/is3_extract.py) | Extract InstallShield 3 archives. |
| [setup_tools.sh](setup/setup_tools.sh) | Install the tools `DC_LOCAL=1` runs on, for a machine without Docker. |
| [ghidra/](setup/ghidra/) | The Ghidra scripts (headless, in Docker): analysis, signatures, headers, seeds, feature export. |
| [port/](setup/port/) | Names from a later port that kept its symbols (`docs/port-symbols.md`). |
| [unshield-image/](setup/unshield-image/) | The Docker image `sdk_unpack.sh` uses for InstallShield archives. |
