#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: always 0;
 *
 */
void print_alphabet_x10(void)
{

char c;
for (int n = 1; n <= 10; n++)
{
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);

}
putchar('\n');
}
}
