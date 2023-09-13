#include <stdio.h>
#include <stdlib.h>

/**
 * main - hat prints the opcodes of its own main
 * @argc: the number
 * @argv: poin char
 * Return: Always 0
 */
int main(int argc, char **argv)
{
char *pi = (char *)main;
int i;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
i = atoi(argv[1]);

if (i < 0)
{
printf("Error\n");
exit(2);
}
while (i--)
printf("%02hhx%s", *pi++, i ? " " : "\n");

return (0);
}
