#include "main.h"
/**
 * _isalpha -checks for is a letter, lowercase or uppercase
 * @c: character to compare
 * Return: always 0;
 *
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
