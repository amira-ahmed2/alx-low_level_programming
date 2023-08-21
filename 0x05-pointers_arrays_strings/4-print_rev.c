#include "main.h"

/**
 * print_rev - prints a string, in reverse.
 * @s: character to compare
 *
 */
void print_rev(char *s)
{
int c = 0;

while (s[c])
{
c++;
}
while (c--)
{
putchar(s[c]);
}
putchar('\n');
}
