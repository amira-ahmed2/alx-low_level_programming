#include <stdio.h>
#include <stdlib.h>

/**
 * main - that prints the minimum number
 * @argc: lenght  argv
 * @argv: array
 * Return: lesscents in error
 */
 int main(int argc, char *argv[])
{
if (argc)
{
int i, lesscents = 0, moneys = atoi(argv[1]);
int cents[] = {25, 10, 5, 2, 1};

for (i = 0; i < 5; i++)
{
if (moneys >= cents[i])
{
lesscents += moneys / cents[i];
moneys = moneys % cents[i];
if (moneys % cents[i] == 0)
{
break;
}
}
}
printf("%d\n", lesscents);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
