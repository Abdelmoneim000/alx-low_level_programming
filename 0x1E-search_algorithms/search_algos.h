#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <stdlib.h>



/*Functions prototypes*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/*Helper functions*/
void print_arr(int *array, int *left, int *right);

#endif
