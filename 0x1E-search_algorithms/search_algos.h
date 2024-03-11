fndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>

int binary_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
#endif
