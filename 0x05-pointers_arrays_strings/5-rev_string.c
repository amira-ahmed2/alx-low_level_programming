#include "main.h"

/**
 * rev_string - prints a string, in reverse.
 * @s: character to compare
 *
 */
void rev_string(char *s)
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
