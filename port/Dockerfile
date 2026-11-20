# The native port's build container: clang 16 and LLVM 16 (the game's C goes through LLVM IR, tools/10-port/native_build.py),
# SDL 3 (the window, the controller, the sound), Mesa (OpenGL, also without a screen under Xvfb) and gdb.
#   docker build -t <name>-port port
FROM debian:bookworm
RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
    clang-16 llvm-16 binutils python3 make cmake git ca-certificates pkg-config \
    libgl-dev libegl-dev libx11-dev libxext-dev libxrandr-dev libxcursor-dev libxi-dev libxfixes-dev libxss-dev \
    libasound2-dev libpulse-dev libudev-dev libdbus-1-dev \
    libgl1-mesa-dri libglx-mesa0 xvfb xauth gdb && rm -rf /var/lib/apt/lists/*
ENV CC=clang-16 OPT=opt-16
RUN git clone --depth 1 --branch release-3.2.10 https://github.com/libsdl-org/SDL.git /tmp/SDL && \
    cmake -S /tmp/SDL -B /tmp/SDL/build -DCMAKE_BUILD_TYPE=Release -DCMAKE_C_COMPILER=clang-16 -DSDL_TESTS=OFF -DSDL_EXAMPLES=OFF \
          -DCMAKE_INSTALL_PREFIX=/usr/local && \
    cmake --build /tmp/SDL/build -j6 && cmake --install /tmp/SDL/build && ldconfig && rm -rf /tmp/SDL
RUN ln -sf /usr/lib/llvm-16/bin/opt /usr/local/bin/opt
WORKDIR /work
