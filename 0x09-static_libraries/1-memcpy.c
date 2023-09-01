#include "main.h"

/**
 * _memcpy - that fills memory with a constant byte.
 * @dest: the pointer letters string
 * @src: constant
 * @n: max bytes
 * Return: value of char s
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; n > i; i++)
{
dest[i] = src[i];
}
return (dest);
}
