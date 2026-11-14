# Crazy Taxi decomp. Every target runs the repo's own scripts; see README.md.
#
#   make setup GDI="your disc.gdi"   read your disc and split the executable (once)
#   make                             rebuild 1ST_READ.BIN from asm/ and check it matches the original
#   make c                           build the executable from the C on the movable split (build/mbuild/game.bin)
#   make disc GDI="your disc.gdi"    the game built the way status.txt's MODE says, in a copy of your disc (build/disc-cbuild/):
#                                      MODE: equivalent (or no MODE line)  make c, and its executable on the disc
#                                      MODE: matching                      make (and the overlays), which must match, on the disc
#   make progress                    where the decomp stands

.PHONY: match setup c disc progress

match:
	bash build.sh

setup:
	@test -n "$(GDI)" || { echo 'usage: make setup GDI="your disc.gdi"'; exit 1; }
	bash setup.sh "$(GDI)"

c:
	python3 tools/8-build/retcheck.py
	python3 tools/1-2-baseline/pointers.py
	python3 tools/1-2-baseline/symbolize.py build/sym
	python3 tools/1-2-baseline/movecheck.py
	python3 tools/8-build/mbuild.py

disc:
	@test -n "$(GDI)" || { echo 'usage: make disc GDI="your disc.gdi"'; exit 1; }
	python3 tools/8-build/disc.py "$(GDI)"

progress:
	python3 tools/progress.py
