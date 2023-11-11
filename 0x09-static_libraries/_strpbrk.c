#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search
 * @accept: The set of characters to match
 *
 * Return: A pointer to the first occurrence in s
 *         of any of the characters in accept,
 *         or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        if (_strchr(accept, *s))
            return s;
        s++;
    }

    return NULL;
}

