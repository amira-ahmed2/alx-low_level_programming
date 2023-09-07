#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range -  that creates an array of integers.
 * @min: the number value
 * @max: the number value
 * Return: int is pr number
 */
int *array_range(int min, int max)
{
int len, i;
int *pr;

if (min > max)
{
return (NULL);
}
len = max - min + 1;
pr = malloc(sizeof(int) * len);

if (!pr)
return (NULL);
for (i = 0; i < len; i++)
pr[i] = min++;
return (pr);
}
