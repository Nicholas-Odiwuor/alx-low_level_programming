# libmy.a - Static C Library

## Description
This project contains a static C library named `libmy.a` that includes a collection of functions for various tasks, such as string manipulation, character checks, and more. This library is intended to be used in C programs to simplify common tasks.

## Function List
The library includes the following functions (and more):

- `_putchar`: Output a character to the standard output.
- `_islower`: Check if a character is lowercase.
- `_isalpha`: Check if a character is alphabetic.
- `_abs`: Calculate the absolute value of an integer.
- `_isupper`: Check if a character is uppercase.
- `_isdigit`: Check if a character is a digit.
- `_strlen`: Calculate the length of a string.
- `_puts`: Output a string to the standard output.
- `_strcpy`: Copy a string.
- `_atoi`: Convert a string to an integer.
- ...

## Usage
To use this library in your C programs, include the `main.h` header and link against the `libmy.a` static library.

Example usage in a C program:
```c
#include "main.h"

int main(void) {
    char str[] = "Hello, World!";
    int length = _strlen(str);
    _puts("String length: ");
    _putchar(length + '0');
    _putchar('\n');
    return (0);
}

