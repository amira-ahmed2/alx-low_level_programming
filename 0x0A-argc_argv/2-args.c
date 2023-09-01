#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: lenght argv
 * @argv: array
 * Return: 0
 */
int main(int argc, char const *argv[])
{
int itr = 0;

while (argc--)
{
printf("%s\n", argv[itr]);
itr++;
}
return (0);
}
