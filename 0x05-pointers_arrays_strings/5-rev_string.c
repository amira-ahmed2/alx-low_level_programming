#include "main.h"

/**
 * rev_string - that reverses a string
 * @s: character to compare
 *
 */
void rev_string(char *s)
{
int c = 0, i;
char temp;

while (s[c] != '\0')
c++;
for (int i = 0; i < c / 2; i++)
{
temp = s[i];
s[i] = s[c - 1 - i];
s[c - 1 - i] = temp;
}
}
