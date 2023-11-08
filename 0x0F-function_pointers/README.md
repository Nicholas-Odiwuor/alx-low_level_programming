# Array Iterator Function

This project includes a C function called `array_iterator` that allows you to execute a specified function on each element of an array. It follows the requirements provided.

## Function Description

The `array_iterator` function takes three parameters:

- `array`: A pointer to the integer array to be iterated.
- `size`: The size of the array.
- `action`: A function pointer to the function that you want to execute on each element of the array.

## Requirements

- The code follows the provided requirements, including using the given compilation options and adhering to the Betty coding style.
- The only standard library functions used are `malloc`, `free`, and `exit`. Other standard library functions like `printf`, `puts`, `calloc`, and `realloc` are forbidden.
- A header file named `function_pointers.h` is included, containing the function prototype for `array_iterator`.
- The code does not use global variables.
- No more than 5 functions per file.

## Compilation

To compile the project using GCC on Ubuntu 20.04 LTS, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o your_program your_program.c

