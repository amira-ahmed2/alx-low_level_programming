#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * fill_mem - fill memory
 * @s: the number value
 * @v: the number value
 * @len: the number value
 * Return: char is pt
 */
char *fill_mem(char *s, char v, unsigned int len)
{
char *pt = s;
while (len--)
*s++ = v;
return (pt);
}
/**
 * _calloc -  that allocates memory for an array
 * @nmemb: the number value
 * @size: the number value
 * Return: char is mal number
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ma;

if (nmemb == 0 || size == 0)
return (NULL);

ma = malloc(sizeof(int) * nmemb);
if (ma == 0)
return (NULL);

fill_mem(ma, 0, sizeof(int) * nmemb);

return (ma);
}
