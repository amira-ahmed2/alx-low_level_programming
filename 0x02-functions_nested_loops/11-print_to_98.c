#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @nums: parm integer
 * Return: Always 0.
 */
void print_to_98(int nums)
{

if (nums < 99)
{
for (; nums < 99; nums++)
{
printf("%d", nums);
if (nums != 98)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
else
{
for (; nums >= 98; nums--)
{
printf("%d", nums);
if (nums != 98)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
}
