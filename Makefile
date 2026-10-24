# Crazy Taxi decomp. Every target runs the repo's own scripts; see README.md.
#
#   make setup GDI="your disc.gdi"   read your disc and split the executable (once)
#   make                             rebuild 1ST_READ.BIN from asm/ and check it matches the original
#   make c                           build the executable from the C (build/cbuild/game.bin)
#   make disc GDI="your disc.gdi"    the same, plus a copy of your disc with it (build/disc-cbuild/)
#   make progress                    where the decomp stands

.PHONY: match setup c disc progress

match:
	bash build.sh

setup:
	@test -n "$(GDI)" || { echo 'usage: make setup GDI="your disc.gdi"'; exit 1; }
	bash setup.sh "$(GDI)"

c:
	python3 tools/8-build/retcheck.py
	python3 tools/8-build/cbuild.py prep
	python3 tools/8-build/cbuild.py compile
	python3 tools/8-build/cbuild.py prelim
	python3 tools/8-build/cbuild.py unity
	python3 tools/8-build/cbuild.py prelim
	python3 tools/8-build/cbuild.py fit

disc:
	@test -n "$(GDI)" || { echo 'usage: make disc GDI="your disc.gdi"'; exit 1; }
	$(MAKE) c
	rm -rf build/disc-cbuild
	python3 tools/8-build/disc_patch.py "$(GDI)" build/disc-cbuild 1ST_READ.BIN=build/cbuild/game.bin

progress:
	python3 tools/progress.py
