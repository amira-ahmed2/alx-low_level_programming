#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: character to compare
 *
 */
void puts2(char *str)
{
int i;

for (int i = 0; str[i] != 0; ++i)
{
if (i % 2 == 0)
putchar(str[i]);
}
putchar('\n');
}
