#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: one string
 * @s2: two string
 * Return: value of int
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
for (; s1[i] - s2[i] == 0 && s1[i] != 0;)
++i;
return (s1[i] - s2[i]);
}
