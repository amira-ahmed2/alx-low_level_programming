#include "main.h"

/**
 * reverse_array - that reverses the content of an array of int
 * @a: the array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
int j;
int temp;
for (j = 0;  j < n / 2; j++)
{
temp = a[j];
a[j] = a[n - j - 1];
a[n - j - 1] = temp;
}
}
