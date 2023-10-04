#include "main.h"

/**
 * get_endianness - that checks the endianness.
 * Return: the number endianness 0 or 1
 */

int get_endianness(void)
{
long int n = 1;
return (*(char *) &n);
}
