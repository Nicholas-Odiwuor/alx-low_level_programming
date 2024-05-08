#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers
 *                   using the Advanced Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if not found or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);

    return (advanced_binary_rec(array, 0, size - 1, value));
}

/**
 * advanced_binary_rec - recursively searches for a value in a sorted array
 *                       of integers using the Advanced Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @start: starting index of the array
 * @end: ending index of the array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if not found
 */
int advanced_binary_rec(int *array, size_t start, size_t end, int value)
{
    size_t mid, i;

    if (start > end)
        return (-1);

    printf("Searching in array: ");
    for (i = start; i < end; i++)
        printf("%d, ", array[i]);
    printf("%d\n", array[i]);

    mid = (start + end) / 2;

    if (array[mid] == value)
    {
        if (mid == start || array[mid - 1] != value)
            return (mid);
        else
            return (advanced_binary_rec(array, start, mid, value));
    }
    else if (array[mid] < value)
        return (advanced_binary_rec(array, mid + 1, end, value));
    else
        return (advanced_binary_rec(array, start, mid, value));
}

