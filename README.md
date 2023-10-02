# OpenMP Parallilzaion of Monte Carlo Simulation for Failure Probability

This repository contains a very basic implementation of Monte Carlo simulation designed to estimate the failure probability based on the limit state function \( g = R - L \). The code is written in C++ and is parallelized using OpenMP for enhanced performance.

## Table of Contents
1. [Project Structure](#project-structure)
2. [Installation and Compilation](#installation-and-compilation)
3. [Usage](#usage)
4. [Contribute](#contribute)
5. [License](#license)

## Project Structure

The project has a modular structure as follows:

```
.
|-- src/
|   |-- main.cpp
|   |-- MonteCarloSimulator.cpp
|
|-- include/
|   |-- MonteCarloSimulator.h
|
|-- Makefile
|-- README.md
```

- The `src/` directory contains the source files.
- The `include/` directory contains the header files.
- `Makefile` helps in compiling the source files.

## Installation and Compilation

1. **Clone the Repository**

    ```bash
    git clone https://github.com/mbm6448/MC_openMP.git
    cd MC_openMP
    ```


2. **Compile the Code**

    Using the provided Makefile, simply run:

    ```bash
    make
    ```

    This will generate object files in an `obj/` directory and the final executable in the `bin/` directory.

3. **Clean Build Files (Optional)**

    If you want to remove the object files and the binary, run:

    ```bash
    make clean
    ```

## Usage

After compilation, you can run the simulation using:

```bash
./bin/monte_carlo_sim
```
