#include "main.h"

/**
 * _strncat - that concatenates two strings.
 * @dest: destination of concat
 * @src: source array to concat
 * @n: number of entry times
 * Return: char value dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;

for (i = 0; dest[i] != '\0'; ++i)
{}
for (j = 0;  j < n && src[j] != '\0'; ++j)
{
dest[i + j] = src[j];
}

return (dest);
}
