#include <stdio.h>
#include <stdlib.h>

/**
 * main - that multiplies two numbers.
 * @argc: lenght argv
 * @argv: array
 * Return: 1 in error
 */
int main(int argc, char const *argv[])
{
int resultSum;

if (argc == 3)
{
resultSum = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", resultSum);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
