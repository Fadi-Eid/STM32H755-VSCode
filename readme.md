# STM32H7 Dual-Core VS Code Setup

## Introduction
This repository provides a lightweight *Makefile-based* project for the STM32H755 dual-core microcontroller, designed to work with Visual Studio Code. It aims to simplify and dimistify embedded development and learning, without the overhead of STM32CubeIDE or STM32CubeMX and all it's hidden scripts.

It serves as a clean starting point—a blinky-style project—that can be expanded and studied.

## Project Structure

* Code is generated using STM32CubeMX with the Makefile project option.
* Each core (Cortex-M7 and Cortex-M4) has its own source directory and build process.
* Each core must be built and flashed separately.

**Important**: .vscode Directory

The .vscode folder is preconfigured to help VS Code understand the include paths and build options for each core.

When editing main.c of the CM7 core, you should switch VS Code to the CM7 configuration via the bottom right GUI command. Likewise, switch to CM4 when editing files for the other core.

This ensures correct IntelliSense support and header resolution during development.

## Build Instructions

To build a core:

```bash
cd Makefile/CMx      # Replace x with 7 or 4
make
```

To flash the binary, use your preferred method (e.g., OpenOCD or STM32CubeProgrammer).

## Toolchain Installation (Linux)

To set up the necessary tools:

```bash
sudo apt update
sudo apt install gcc-arm-none-eabi openocd binutils-arm-none-eabi gdb-multiarch
```

## Why This Setup?

* Avoids vendor lock-in with STM32CubeIDE.
* Offers a deeper understanding of dual-core development.
* Keeps things simple and version-controllable with Makefiles and VS Code.
* Encourages hands-on learning of the STM32H7 architecture.

## Next Steps

* Add peripherals, RTOS, or inter-core communication (e.g., using OpenAMP).
* Integrate debugging support via OpenOCD or GDB.
* Use this as a teaching tool or template for your next dual-core project.

## License

MIT License — Feel free to use and modify.
