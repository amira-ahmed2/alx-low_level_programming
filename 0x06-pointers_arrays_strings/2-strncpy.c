#include "main.h"

/**
 * _strncpy - hat copies a string.
 * @dest: destination of concat
 * @src: source array to concat
 * @n: number of entry times
 * Return: char value dest
 */
ichar *_strncpy(char *dest, char *src, int n)
{
int j;

j = 0;
while (j < n  && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = 0;
j++;
}

return (dest);
}
