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
unsigned int i, j, len_s1, len_s2;

if (s1 == NULL)
return ("");
if (s2 == NULL)
return ("");

for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
;
for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
;

ch = malloc(len_s1 + n + 1);
if (ch == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
ch[i] = s1[i];
for (j = 0; j < n; j++)
{
ch[i] = s1[j];
i++;
}
ch[i] = '\0';
return (ch);
}
