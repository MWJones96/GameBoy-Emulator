# Game Boy Emulator

An early-stage C++ project intended to become an emulator for the original Nintendo Game Boy. At present it is a CMake project skeleton: no emulation is implemented yet.

## Overview

The goal is to emulate the original Game Boy as an isolated process, targeting Windows 10 first, with possible support for macOS and Linux distributions later. To make that possible, the design calls for operating-system-specific code to be fully decoupled from the emulator core, following Robert C. Martin's ("Uncle Bob") clean architecture principles: OS functionality (display, input, audio and so on) should be plugged in to the core rather than built into it, so that the platform can change without touching the emulator.

Design decisions so far:

- **Implementation language:** C++.
- **Frameworks and libraries:** undecided; still to be researched against the project's needs.
- **Execution environment:** a single monolithic executable that takes one argument, the path to a valid Game Boy ROM file.

## What is implemented

Only the build scaffolding:

- A top-level CMake project that builds two targets.
- `cpu`: a static library intended to hold the CPU (Sharp LR35902) model. It currently contains a single placeholder function, `CPU::sumNumbers(int, int)`.
- `gbe`: the emulator executable. It prints a start-up message and the result of `CPU::sumNumbers(10, 7)`, which demonstrates that the executable links against the `cpu` library.

There is no CPU instruction decoding, memory map, graphics, audio, input or ROM loading yet, and the executable does not read any command-line arguments.

## Tech stack

- C++
- CMake 3.18 or later

## Getting started

### Prerequisites

- A C++ compiler (MSVC, GCC or Clang)
- CMake 3.18 or later

### Build

```sh
cmake -S . -B build
cmake --build build
```

### Run

The executable target is `gbe`. Its location depends on the generator; for example:

```sh
./build/emulator/gbe               # single-configuration generators (Make, Ninja)
build\emulator\Debug\gbe.exe       # Visual Studio generator
```

Expected output:

```
Game Boy Emulator Starting Point
17
```

## Project structure

```
.
├── CMakeLists.txt          # Top-level project; adds the CPU and emulator subdirectories
├── CPU/
│   ├── CMakeLists.txt      # Builds the `cpu` library and exports CPU/src as an include path
│   └── src/CPU/
│       ├── lib.hpp         # CPU namespace declarations (placeholder)
│       └── lib.cpp         # CPU namespace definitions (placeholder)
└── emulator/
    ├── CMakeLists.txt      # Builds the `gbe` executable and links it to `cpu`
    └── main.cpp            # Program entry point
```

## Status and limitations

- The project is a starting point only; none of the Game Boy hardware is emulated.
- `emulator/main.cpp` includes `<cpu/lib.hpp>` while the directory on disk is `CPU/`. This resolves on case-insensitive file systems (the default on Windows and macOS) but will fail to compile on a case-sensitive file system such as a typical Linux installation unless the include or directory name is changed to match.
