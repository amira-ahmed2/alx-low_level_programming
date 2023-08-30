#include "main.h"

/**
 * factorial - that returns the factorial of a given numbe
 * @n: the number Factorial
 * Return: integer is factorial number
*/
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
