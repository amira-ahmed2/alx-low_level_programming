#include "main.h"

/**
 * _strchr - that locates a character in a string.
 * @s: the pointer letters string
 * @c: constant
 * Return: value of char s
*/
char *_strchr(char *s, char c)
{
unsigned int i;

for (i = 0; s[i] >= 0; i++)
{
if (s[i] == c)
return (s + i);
}
return (0);
}
