#include <stdlib.h>
#include "function_pointers.h"
#include<stdio.h>

/**
 * array_iterator - given as a parameter on each element of an array
 * @size : size array
 * @array : the pointer array
 * @action : the pointer fun
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
int *e = array + size - 1;

if (array && size && action)
while (array <= e)
{
action(*array++);
}
}
