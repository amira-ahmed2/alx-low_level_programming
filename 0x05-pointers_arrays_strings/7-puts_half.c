#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: number to compare
 */
void puts_half(char *str)
{
int i = 0;

while (str[i])
i++;
for (i /= 2; str[i] != '\0'; i++)
{
putchar(str[i]);
}
putchar('\n');
}
