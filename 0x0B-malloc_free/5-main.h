#ifndef MAIN_H
#define MAIN_H

/* Function prototype for create_array */
char *create_array(unsigned int size, char c);

/* Function prototype for alloc_grid */
int **alloc_grid(int width, int height);

/* Function prototype for free_grid */
void free_grid(int **grid, int height);

/* Function prototype for argstostr */
char *argstostr(int ac, char **av);

#endif /* MAIN_H */

