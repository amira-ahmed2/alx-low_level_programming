i#include "main.h"
#include<stdio.h>

/**
 * swap_int - function that swaps the values of two integers
 * @a : value it points one
 * @b : value it points two
 */
void swap_int(int *a, int *b)
{
int t;

t = *a;
*a = *b;
*b = t;
}
