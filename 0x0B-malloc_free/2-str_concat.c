#include <stdlib.h>
#include "main.h"
#include<stdio.h>

/**
 * getStrlen - get leangth array
 * @s : string one
 * Return: integer len arr
*/
int getStrlen(char *s)
{
int size = 0;
while (s[size] != '\0')
size++;
return (size);
}
/**
 * str_concat - that concatenates two strings
 * @s1 : string one
 * @s2 : string two
 * Return: char is par or 0
*/
char *str_concat(char *s1, char *s2)
{
int size_one;
int size_two;
char *par;
int i;
if (s1 == Null)
s1 = "\0";
if (s2 == Null)
s2 = "\0";
size_one = getStrlen(s1);
size_two = getStrlen(s2);
per = malloc((size_one + size_two) *sizeof(char + 1));

if (per == 0)
return (0);

for (i = 0; i <= c + size_two; i++)
{
if (i < size_one)
per[i] = s1[i];
else
per[i] = s2[i - size_one];
}
per[i] = '\0';
return (per);

for (; str[s] != '\0'; s++)
;
par = malloc(s * sizeof(*str) + 1);
if (par == 0)
return (Null);
else
{
for (; i < s; i++)
par[i] = str[i];
}
return (par);
}
