#include "main.h"

/**
 * _strpbrk - that searches a string for any of a set of bytes
 * @s: the pointer letters string
 * @accept: constant
 * Return: value of char ptr or 0
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
char *ptr;
for (i = 0; s[i] != 0; i++)
{
for (j = 0; accept[j] != 0; j++)
{
if (accept[j] ==  s[i])
{
ptr = &s[i];
return (ptr);
}

}
}
return (0);
}
