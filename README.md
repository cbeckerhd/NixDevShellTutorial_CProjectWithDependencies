# Nix DevShell Tutorial—C Project with Dependencies

This repository is part of a [short tutorial](https://github.com/cbeckerhd/NixDevShellTutorial) that shows one way of creating reproducible development environments with Nix.

`swap.c` contains a short C program that multiplies two matrices and thereby swaps two columns. It depends on [OpenBLAS](https://github.com/OpenMathLib/OpenBLAS).

```
gcc -o swap swap.c -lblas
```
