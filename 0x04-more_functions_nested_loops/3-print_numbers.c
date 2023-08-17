#include "main.h"

/**
 * print_numbers-  prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
{
printf("%d", n);
}
printf('\n');
return (0);
}
