# RISC-V Development Environment Setup

## Overview
This repository documents the process of setting up a RISC-V development environment on macOS, including the installation of essential tools like spike (RISC-V ISA Simulator) and QEMU.

## Prerequisites
- macOS
- Homebrew package manager
- Git

## Installation Steps
1. Install RISC-V GNU Toolchain
2. Install spike simulator
3. Install QEMU
4. Set up development environment

## Directory Structure
- `examples/`: Example RISC-V programs
- `docs/`: Additional documentation
- `setup.sh`: Installation script

## Getting Started
1. Install RISC-V GNU Toolchain
```
brew tap riscv-software-src/riscv
brew install riscv-tools
```
2. Install spike simulator

## References
- [RISC-V GNU Toolchain](https://github.com/riscv/riscv-gnu-toolchain)
- [spike Simulator](https://github.com/riscv-software-src/riscv-isa-sim)
- [QEMU](https://www.qemu.org/)
