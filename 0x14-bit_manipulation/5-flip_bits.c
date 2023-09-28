#include "main.h"

/**
 * flip_bits - that returns the number of bits you would need to flip
 * @n: the one number
 * @m: the two number
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int numberXOR = n ^ m;
unsigned int counter = 0;

while (numberXOR)
{
if (numberXOR & 1UL)
counter++;

numberXOR  >>= 1;
}
return (counter);
}
