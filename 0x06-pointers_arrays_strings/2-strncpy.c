#include "main.h"

/**
 * _strncpy - hat copies a string.
 * @dest: destination of concat
 * @src: source array to concat
 * @n: number of entry times
 * Return: char value dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int j;

for (j = 0;  j < n  && src[j] != '\0'; j++)
{
dest[j] = src[j];
}
while (j < n)
{
dest[j] = 0;
j++;
}
return (dest);
}
