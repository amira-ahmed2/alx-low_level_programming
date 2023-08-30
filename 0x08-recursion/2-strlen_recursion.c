#include "main.h"

/**
 * _strlen_recursion - the length of a string.
 * @s: the pointer letters string
 * Return: integer is length of str
*/
int _strlen_recursion(char *s)
{
int count = 0;

if (*s > '\0')
{
count += _strlen_recursion(s + 1) + 1;
}
return (count);
}
