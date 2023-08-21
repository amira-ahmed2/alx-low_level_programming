#include "main.h"

/**
 * print_rev - Write a function that prints a string, in reverse
 * @s: character to getString
 */
void print_rev(char *s)
{

int i;

for (i = _strlen(s) - 1; i >= 0; i--)
_putchar(*(s + i));

_putchar('\n');
}
