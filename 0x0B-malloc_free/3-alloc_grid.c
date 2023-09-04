#include <stdio.h>
#include <stdlib>
#include "main.h"

/**
 * alloc_grid - that a pointer to a 2 dimensional
 * @width : int width
 * @height : int height
 * Return: integer 2 dimensional arr
*/
int **alloc_grid(int width, int height)
{
int **tabs;
int i;
int j;
tabs = malloc(sizeof(*tabs) * height);
if (width <= 0 || height <= 0 || tabs == 0)
return (NULL);
else
{
for (i = 0; i < height; i++)
{
tabs[i] = malloc(sizeof(**tabs) * width);
if (tabs[i] == 0)
{
while (i--)
free(tabs[i]);
free(tabs);
return (NULL);
}
for (j = 0; j < width; j++)
tabs[i][j] = 0;
}
}
return (tabs);
}
