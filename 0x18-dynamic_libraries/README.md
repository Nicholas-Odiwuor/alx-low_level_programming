# Dynamic Library Project

This repository contains a dynamic library (`libdynamic.so`) that implements various functions. The library includes functions for character manipulation, string operations, and more.

## Functions Implemented

- `_putchar`: Writes a character to the standard output (stdout).
- `_islower`: Checks if a character is a lowercase letter.
- `_isalpha`: Checks if a character is an alphabetic character.
- `_abs`: Computes the absolute value of an integer.
- `_isupper`: Checks if a character is an uppercase letter.
- `_isdigit`: Checks if a character is a digit.
- `_strlen`: Computes the length of a string.
- `_puts`: Writes a string to the standard output (stdout).
- `_strcpy`: Copies a string to another.
- `_atoi`: Converts a string to an integer.
- `_strcat`: Concatenates two strings.
- `_strncat`: Concatenates n characters from one string to another.
- `_strncpy`: Copies n characters from one string to another.
- `_strcmp`: Compares two strings.
- `_memset`: Fills the first n bytes of memory with a constant byte.
- `_memcpy`: Copies n bytes from one memory area to another.
- `_strchr`: Locates the first occurrence of a character in a string.
- `_strspn`: Computes the length of a prefix substring.
- `_strpbrk`: Searches a string for any of a set of bytes.
- `_strstr`: Locates a substring within a string.

## Compilation and Usage

1. Compile the library:

```bash
$ gcc -Wall -pedantic -Werror -Wextra -shared -fPIC -o libdynamic.so *.c

