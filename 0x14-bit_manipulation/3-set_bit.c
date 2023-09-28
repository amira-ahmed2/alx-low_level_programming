#include "main.h"

/**
 * set_bit - that sets the value of a bit to 1 at a given index.
 * @n: the pointer number
 * @index:  is the index, starting from 0
 * Return: the number given index
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(n) * 4)
return (-1);

*n = (*n | (1L << index));
return (1);
}
