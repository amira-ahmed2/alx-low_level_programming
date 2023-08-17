#include "main.h"

/**
 * print_square- that prints a square, followed by a new line
 *
 * @size : is pramiter to print
 */
void print_square(int size)
{
int i, j;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i <= n; i++)
{
for (j = 0; j < i; j++)
{
_putchar('#');
}
}
_putchar('\n');
}
}
