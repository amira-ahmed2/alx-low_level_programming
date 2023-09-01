#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c : input for uppercase
 * Return: 1 or 0.
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
