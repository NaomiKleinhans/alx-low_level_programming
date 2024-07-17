# 0x1E-search_algorithms

This project contains implementations of various search algorithms in C.

## Files

- `0-linear.c`: Contains the implementation of the linear search algorithm.
- `1-binary.c`: Implementation of the binary search algorithm.
- `search_algos.h`: Header file with the function prototype.
- `0-main.c`: Example main file for testing the linear search algorithm.

## Requirements

- All files are compiled on Ubuntu 20.04 LTS using gcc, with options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Code uses the Betty style.
- No global variables are used.
- No more than 5 functions per file.
- Only the `printf` function from the standard library is allowed.

## Usage

To compile the code:
```sh
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-binary.c -o 1-binary