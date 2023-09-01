#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: the pointer letters string
 * @needle: constant
 * Return: value of char ptr or 0
*/
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j;
char *ptr;
for (i = 0; haystack[i] != 0; i++)
{
for (j = 0; needle[j] && (haystack[i] == needle[0]); j++)
{
if (needle[j] ==  haystack[i])
{
ptr = &haystack[i];
return (ptr);
}
}
}
return (0);
}
