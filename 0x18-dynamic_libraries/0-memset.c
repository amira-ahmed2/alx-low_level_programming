#include "main.h"

/**
 * _memset - that fills memory with a constant byte.
 * @s: the pointer letters string
 * @b: constant
 * @n: max bytes
 * Return: value of char s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int n2;

for (n2 = 0; n > 0; n2++, n--)
{
s[n2] = b;
}
return (s);
}
