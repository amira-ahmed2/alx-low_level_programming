#include "main.h"

/**
 * get_prime_number - get prime number
 * @n: the number value
 * @num: the number value
 * Return: integer is prime number
 */
int get_prime_number(int n, int num)
{
if (num >= n && n > 1)
return (1);
else if (n % num == 0 || n <= 2)
return (0);
else
return (get_prime_number(n, num + 1));
}
/**
 * is_prime_number -input integer is a prime number
 * @n: the number value
 * Return: integer 1, 0
 */
int is_prime_number(int n)
{
return (get_prime_number(n, 2));
}
