#include "main.h"

/**
 * binary_to_uint - that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the number unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int number = 0;

if (!b)
return (0);

while (*b)
{
if (*b != '1' && *b != '0')
return (0);

number = number * 2 + (*b++ - '0');
}

return (number);
}
