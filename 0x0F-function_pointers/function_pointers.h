#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Function pointer for printing a name */
void print_name(char *name, void (*f)(char *));

/* Function pointer for _putchar (if required) */
int _putchar(char c);

#endif /* FUNCTION_POINTERS_H */

