#include "main.h"

/**
 * get_bit - that returns the value of a bit at a given index
 * @n: the number
 * @index:  is the index, starting from 0
 * Return: the number given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(n) * 4)
return (-1);

return (n >> index & 1);
}
