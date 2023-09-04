#include <stdio.h>
#include <stdlib>
#include "main.h"

/**
 * free_grid - that frees a 2 dimensional grid previously
 * @grid : int grid
 * @height : int height
*/
void free_grid(int **grid, int height)
{
int j;

for (j = 0; j < height; j++)
{
free(grid[j]);
}
free(grid);
}
