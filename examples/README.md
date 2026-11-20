# Examples

Four mods that use this decomp. Each is this repository plus a stack of small source changes (layers), 
built by the decomp's own `make` and`make c` into a copy of your own disc. 
Nothing from the game is shipped: you bring the disc and the Katana SDK.

## Tux Racer

A course from [Extreme Tux Racer](https://sourceforge.net/projects/extremetuxracer/) in place of Arcade's city, with fares.
[Tux Racer Video](https://www.instagram.com/reel/DfCv8f5x_46/).

<table>
  <tr>
    <td><img src="screenshots/tux-racer-1.jpg" width="170" alt="Cab on the snow course, brakes warning"></td>
    <td><img src="screenshots/tux-racer-2.jpg" width="170" alt="Cab skidding past a snowy tree"></td>
    <td><img src="screenshots/tux-racer-3.jpg" width="170" alt="Cab sliding sideways through the snow"></td>
    <td><img src="screenshots/tux-racer-4.jpg" width="170" alt="The setup: monitor, Dreamcast, pad"></td>
  </tr>
</table>

## DOOM

E1M1 of Doom in place of Original's city, with fares. [Doom Video](https://www.instagram.com/reel/DfF62DVxLiG/).

<table>
  <tr>
    <td><img src="screenshots/doom-1.jpg" width="170" alt="Cab in Doom's E1M1 with the arrow"></td>
    <td><img src="screenshots/doom-2.jpg" width="170" alt="Cab drifting down an E1M1 corridor"></td>
    <td><img src="screenshots/doom-3.jpg" width="170" alt="Top-down drop-off view over the cab"></td>
    <td><img src="screenshots/doom-4.jpg" width="170" alt="A passenger leaving the cab outside"></td>
  </tr>
</table>

## PAC-MAN

The Pac-Man maze in place of Arcade's city: Pac-Man drives, the ghosts are the fares, there are three camera views (change with Y) and the tunnels wrap as in PAC-MAN.
[Pac-Man Video](https://www.instagram.com/reel/Dfy8q-7RTQ7/).

<table>
  <tr>
    <td><img src="screenshots/pac-man-1.jpg" width="170" alt="A ghost over the Pac-Man cab"></td>
    <td><img src="screenshots/pac-man-2.jpg" width="170" alt="Top-down view of the maze"></td>
    <td><img src="screenshots/pac-man-3.jpg" width="170" alt="Top-down drop-off close-up in the maze"></td>
    <td><img src="screenshots/pac-man-4.jpg" width="170" alt="Cab in the maze with a ghost passenger"></td>
  </tr>
</table>

## Walking Tour

Get out of the cab and walk, run and jump around Crazy Taxi's city, take over traffic cars and trams, and hail a taxi, with no time limit.
[Walking Tour Video](https://www.instagram.com/reel/DexUUJZxsxl/).

<table>
  <tr>
    <td><img src="screenshots/walking-tour-1.jpg" width="170" alt="Walking Tour: picture 1"></td>
    <td><img src="screenshots/walking-tour-2.jpg" width="170" alt="Walking Tour: picture 2"></td>
    <td><img src="screenshots/walking-tour-3.jpg" width="170" alt="Walking Tour: picture 3"></td>
    <td><img src="screenshots/walking-tour-4.jpg" width="170" alt="Walking Tour: picture 4"></td>
  </tr>
</table>

## Layout

```
examples/
  common.sh        copies this decomp into a work tree and applies layers
  layers/          the layers the examples share: fares, no-sea, no-demo, empty-city, course-kit, no-route
  tools/           course_kit.py: the game's model and collision records, as the layers' C reads them
  tux-racer/  doom/  pac-man/
    build.sh       the build
    config.json    the example's name and the shared layers it uses, in order
    layer.patch    its own source changes, applied after the shared layers
    tools/         writes the example's data file (COLDC1.BIN or COLDC2.BIN) and the header its C reads
  walking-tour/
    build.sh  config.json  layer.patch
```

## Building a mod

```bash
make setup GDI="path/to/your disc.gdi"
echo 'SDK_PATH="/path/to/katana-sdk"' > .env
make
python3 -m pip install numpy Pillow
```

```bash
cp examples/tux-racer/.env.sample examples/tux-racer/.env
cp examples/doom/.env.sample examples/doom/.env
cp examples/pac-man/.env.sample examples/pac-man/.env
cp examples/walking-tour/.env.sample examples/walking-tour/.env
```

### Dreamcast

Build the mod into a copy of your game disc.

```bash
bash examples/tux-racer/build.sh
bash examples/doom/build.sh
bash examples/pac-man/build.sh
bash examples/walking-tour/build.sh
```

### Native (x86-64 Linux)

Builds the mod into a native game (prints how to run it)

```bash
bash examples/native.sh tux-racer
bash examples/native.sh doom
bash examples/native.sh pac-man
bash examples/native.sh walking-tour
```

## Licences and credits

What each example contains:

| Example      | Included in this repository                                                                                                        | Licence                                                                         |
|--------------|------------------------------------------------------------------------------------------------------------------------------------|---------------------------------------------------------------------------------|
| Tux Racer    | the layer, the build script, the tools, and the `bunny_hill` course with the Extreme Tux Racer data it needs (`tux-racer/assets/`) | GPL-2.0-or-later, [`COPYING`](tux-racer/assets/COPYING)                         |
| Doom         | the layer, the build script, the tools, and the unmodified shareware `doom1.wad` (`doom/assets/`)                                  | id Software's licence, [`doom1.wad.copyright`](doom/assets/doom1.wad.copyright) |
| Pac-Man      | the layer, the build script, the tools, and the maze and character models in `pac-man/assets/`                                     | the models are CC BY 4.0 (below)                                                |
| Walking Tour | the layer and the build script                                                                                                     | none included                                                                   |

The layers, scripts and tools are this repository's own. The game's disc and the Katana SDK are never included.

### Tux Racer

The `bunny_hill` course and the data it needs are from [Extreme Tux Racer](https://sourceforge.net/projects/extremetuxracer/) 0.8.1, licensed under
GPL-2.0-or-later ([`COPYING`](tux-racer/assets/COPYING)).

### Doom

`doom/assets/doom1.wad` is the shareware WAD, copyright id Software, under id Software's Limited Use Software License Agreement
([`doom1.wad.copyright`](doom/assets/doom1.wad.copyright)).

### Pac-Man

This work is based on [Pac-Man Level (Namco) (NES)](https://sketchfab.com/3d-models/pac-man-level-namco-nes-48b1251436b04c14951f9f614503099f)
by [Alfking49](https://sketchfab.com/alfking49), licensed under [CC-BY-4.0](http://creativecommons.org/licenses/by/4.0/).

This work is based on [Pacman Ghost](https://sketchfab.com/3d-models/pacman-ghost-a1c987366ca54b098ca24adfe374aa44) by elina_ailurophile,
licensed under [CC-BY-4.0](http://creativecommons.org/licenses/by/4.0/).
