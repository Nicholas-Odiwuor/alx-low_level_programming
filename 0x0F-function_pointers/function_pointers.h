#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/* Function prototype for array_iterator */
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* FUNCTION_POINTERS_H */

