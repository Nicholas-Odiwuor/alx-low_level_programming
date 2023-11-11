#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to search
 * @needle: The substring to find
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack)
    {
        char *start = haystack;
        char *needle_ptr = needle;

        while (*needle_ptr && *haystack && (*needle_ptr == *haystack))
        {
            needle_ptr++;
            haystack++;
        }

        if (!*needle_ptr)
            return start;

        haystack = start + 1;
    }

    return NULL;
}

