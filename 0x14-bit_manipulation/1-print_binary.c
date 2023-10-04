#include "main.h"

/**
 * print_binary - that prints the binary representation of a number
 * @n : the long int binary number
 *
 */

void print_binary(unsigned long int n)
{
int i, counter = 0;
unsigned long int number;

for (i = sizeof(n) * 4 - 1; i >= 0; i--)
{
number = n >> i;

if (number & 1)
{
putchar('1');
counter++;
}
else if (counter)
putchar('0');
}
if (!counter)
putchar('0');
}
