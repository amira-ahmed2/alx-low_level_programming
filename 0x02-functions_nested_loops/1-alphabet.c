#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * Return: always 0;
 *
 */
void print_alphabet(void)
{
char c;
c = 'a';
while (c <= 'z')
{
_putchar(c);
c = c + 1;
}
_putchar('\n');
}
