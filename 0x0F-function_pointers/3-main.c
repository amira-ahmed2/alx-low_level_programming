#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - ckeck the code
 * @argc: the number
 * @argv: poin char
 * Return: integer sum
*/
int main(int argc, char **argv)
{
int (*opr_fun)(int, int), a, b;

if (arc != 4)
printf("Error\n"), exit(98);

a = atoi(argv[1]);
b = atoi(argv[3]);

opr_fun = get_op_func(argv[2]);
if (!opr_fun)
printf("Error\n"), exit(99);

if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
printf("Error\n"), exit(100);

printf("%d\n", opr_fun(a, b));
return (0);
}
