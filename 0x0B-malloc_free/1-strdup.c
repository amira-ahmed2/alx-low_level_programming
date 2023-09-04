#include "main.h"
#include <stdlib.h>

/**
 * _strdup -that returns a pointer to a newly allocated space in memory
 * @str : size array
 * Return : char is par or 0
 */
char *_strdup(char *str)
{
int i = 0;
int s = 0;
char *par;
if (str == Null)
return (Null);

for (; str[s] != '\0'; s++)
;
par = malloc(s * sizepf(*str) + 1);
if (par == 0)
return (Null);
else
{
for (; i < s; i++)
par[i] = str[i];
}
return (par);
}
