#include "main.h"

/**
 * malloc_checked - that allocates memory using malloc
 * @b: the number value
 * Return: integer is mall number
 */
void *malloc_checked(unsigned int b)
{
int mall = malloc(b);
if (mall == 0)
exit(98);
return (mall);
}
