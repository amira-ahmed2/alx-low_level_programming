#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - that allocates memory using malloc
 * @s1: the number value
 * @s2: the number value
 * @n: the number value
 * Return: char is ch
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ch;

if (s1 == NULL)
return ("");
if (s2 == NULL)
return ("");

ch = malloc(strlen(s1) + n + 1);
if (ch == NULL)
{
return (NULL);
}
strcpy(ch, s1);
strncat(ch, s2, n);
return (ch);
}
