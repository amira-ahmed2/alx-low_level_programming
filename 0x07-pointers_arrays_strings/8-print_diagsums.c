#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a squaree
 * @a: the pointer letters string
 * @size: size array
*/
void print_diagsums(int *a, int size)
{
unsigned int i, sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += a[i];
sum2 += a[size - i - 1];
a += size;
}
printf("%d, ", sum1);
printf("%d\n", sum2);
}
