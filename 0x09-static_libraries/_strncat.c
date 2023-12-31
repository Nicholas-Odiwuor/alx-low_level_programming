#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes.
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes to concatenate
 *
 * Return: The pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    char *ptr = dest;

    while (*dest)
        dest++;

    while (*src && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    *dest = '\0';

    return ptr;
}

