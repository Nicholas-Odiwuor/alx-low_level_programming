#ifndef MAIN_H
#define MAIN_H

/* Function prototype for create_array */
char *create_array(unsigned int size, char c);

/* Function prototype for alloc_grid */
int **alloc_grid(int width, int height);

/* Function prototype for free_grid */
void free_grid(int **grid, int height);

#endif /* MAIN_H */

