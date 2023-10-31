# Malloc

Brief project description.

## Description

A C program that creates an array of characters and initializes it with a specific character.

## Requirements

- Code follows Betty style.
- Compiles on Ubuntu 20.04 with `gcc`.
- No global variables.
- Use only `malloc` and `free`.
- `main.h` contains function prototypes.

## File Descriptions

- `0-create_array.c`: Implements `create_array` function.
- `main.h`: Header with function prototypes.

## Usage

```c
#include "main.h"

int main(void) {
    char *array = create_array(10, 'H');
    /* Use the array. */
    free(array);
    return (0);
}

