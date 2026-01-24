# Codeforces CP 31 — Solutions and Practice

This repository collects solutions for the "CP 31" Codeforces practice sheet (problems grouped by difficulty/ratings and contest practice). It is organized to make it easy to find, compile, and run individual problem solutions.

## Repository structure

- `1000/`, `1100/`, `1200/`, `800/`, `900/`, ... — folders named by common Codeforces rating tiers. Each folder contains solution source files for problems at that rating (for example `01_swap_and_delete.cpp`).
- `contests/` — space for full contest solutions or multi-file contest projects.
- `README.md` — this file.

Each solution file follows a simple naming convention:

- `NN_description.cpp` or `NN_description.ext` where `NN` is a two-digit index and `description` is a short snake_case title for the problem.

Examples from this repo:

- `1000/01_swap_and_delete.cpp` — solution for the first problem in the 1000-rating group.
- `1200/05_vika_and_the_bridge.cpp`

## Build and run

Most solutions are standalone C++ source files. Two convenient ways to compile and run a solution are shown below.

1) Using g++ directly (macOS, Linux):

- Compile a file:
  g++ -std=c++17 -O2 -Wall -o solution source.cpp
- Run (optionally using redirected input):
  ./solution < input.txt > output.txt

2) Using the provided VS Code tasks

This workspace includes tasks you can run from VS Code:

- "compile" — compiles the current open file using g++.
- "compile and run" — compiles the current open file and runs it, redirecting stdin from `input.txt` and writing output to `output.txt`.

Run tasks from the Command Palette (Tasks: Run Task) or the Run/Build menu.

## Testing

- For interactive testing, create an `input.txt` file next to a solution and run the "compile and run" task.
- Use small custom tests and compare output with expected results.