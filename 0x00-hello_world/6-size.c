#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
long int b;
long long int c;
float d;
char f;
printf("Size of a int %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of b long int %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of c long long int %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of d float %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of f char %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
