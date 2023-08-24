#include "main.h"

/**
 * cap_string - that capitalizes all words of a string.
 * @s: string
 * Return: string capitalized
 */
char *cap_string(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (separs_of_wor(s[i]))
continue;
if (s[i] >= 'a' && s[i] <= 'z' && (separs_of_wor(s[i - 1]) || i == 0))
s[i] = s[i] - 32;
}
return (s);
}

/**
 * separs_of_wor - if Separators of words
 * @a: character to return
 * Return: 1 or 0
 */
int separs_of_wor(char a)
{
int j;
char cap_arr[13] = {'\n', '\t', ' ', '.', ',', ';', ',', '!', '?', '(',
')', '{', '}'};

for (j = 0; j < 13; j++)
{
if (cap_arr[j] == a)
return (1);
}
return (0);
}
