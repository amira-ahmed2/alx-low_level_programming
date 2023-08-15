#include "main.h"

/**
* main - prints the alphabet in lowercase,followed by a new line
* description : alphabet to the variable c
* Return: Always 0 (Success)
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
