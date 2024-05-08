#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 if not found or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1, prev_bound;

    if (array == NULL)
        return (-1);

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        prev_bound = bound;
        bound *= 2;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev_bound, bound < size ? bound : size - 1);
    return (binary_search(array, prev_bound, bound < size ? bound : size - 1, value));
}

/**
 * binary_search - searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @start: starting index of the array
 * @end: ending index of the array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t start, size_t end, int value)
{
    size_t mid;

    while (start <= end)
    {
        mid = (start + end) / 2;

        printf("Searching in array: ");
        for (size_t i = start; i <= end; i++)
        {
            printf("%d", array[i]);
            if (i < end)
                printf(", ");
            else
                printf("\n");
        }

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return (-1);
}

