#include "main.h"

/**
 * clear_bit - that sets the value of a bit to 0.
 * @n: the pointer number
 * @index:  is the index, starting from 0
 * Return: the number given index
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(n) * 4)
return (-1);

if (*n & (1L << index))
*n ^= 1L << index;
return (1);
}
