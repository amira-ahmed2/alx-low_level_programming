#include <stdlib.h>
#include "function_pointers.h"
#include<stdio.h>

/**
 * int_index - that searches for an integer.
 * @size : size array
 * @array : the pointer array
 * @cmp : the pointer fun
 * Return: int inde
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int inde = 0;

if (array && size && cmp)
{
while (inde < size)
{
if (cmp(array[inde]))
return (inde);
inde++;
}
}
return (-1);
}
