#include <stdio.h>
#include <stdlib.h>

/**
 * main - that adds positive numbers.
 * @argc: lenght  argv
 * @argv: array
 * Return: resultsum in error
 */
int main(int argc, char const *argv[])
{
int resultSum;
char *ch;

while (--argc)
{
for (ch = argv[argc]; *ch; ch++)
{
if (*ch < '0' || *ch > '9')
return (printf("Error\n", 1));
resultSum += atoi(argv[argc]);
}
printf("%d\n", resultSum);
}
}
