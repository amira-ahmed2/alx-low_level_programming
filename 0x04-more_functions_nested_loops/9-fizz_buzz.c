#include <stdio.h>

/**
 * main - Write a program that prints the numbers from 1 to 100,
 * followed by a new line.
 *
 * Return: a number 0
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
if (i % 3 == 0)
{
printf("Fizz");
}
if (i % 5 == 0)
{
printf("Buzz");
}
}
else
{
printf("%d", i);
}
if (i != 100)
printf(" ");
}
printf("\n");
return (0);
}
