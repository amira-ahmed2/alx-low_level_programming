#include "main.h"

/**
 * leet - that encodes a string into 1337.
 * @s: letters string
 * Return: value of char s
*/
char *leet(char *s)
{
int j, i;

for (j = 0; s[j] != '\0'; j++)
{
for (i = 0; i < s[j]; i++)
{
if (s[i] == 'a' || s[i] == 'A')
s[i] = '4';
else if (s[i] == 'e' || s[i] == 'E')
s[i] = '3';
else if (s[i] == 'o' || s[i] == 'O')
s[i] = '0';
else if (s[i] == 't' || s[i] == 'T')
s[i] = '7';
else if (s[i] == 'l' || s[i] == 'L')
s[i] = '1';
}
}
return (s);
}
