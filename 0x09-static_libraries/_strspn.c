#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to check
 * @accept: The set of characters to match
 *
 * Return: The number of bytes in the initial segment of s
 *         which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int is_accept;

    while (*s)
    {
        is_accept = 0;

        while (*accept)
        {
            if (*s == *accept)
            {
                count++;
                is_accept = 1;
                break;
            }

            accept++;
        }

        if (!is_accept)
            break;

        s++;
        accept = accept - count;
    }

    return count;
}

