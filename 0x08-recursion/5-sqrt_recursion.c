#include "main.h"

/**
 * squr - get root squr
 * @n: the number value
 * @v: the number value
 * Return: integer is squr
 */
int squr(int n, int v)
{
if (v * v == n)
return (v);
else if (v * v < n)
return (squr(n, v + 1));
else
return (-1);
}
/**
 * _sqrt_recursion - the natural square root of a numbe
 * @n: the number value
 * Return: integer is squr
 */
int _sqrt_recursion(int n)
{
return (squr(n, 1));
}
