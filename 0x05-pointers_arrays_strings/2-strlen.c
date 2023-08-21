#include "main.h"

/**
 * _strlen - that swaps the values of two integers
 * @s : value it points
 * Return : returns the length of a string
 */
int _strlen(char *s)
{
int cont;

for (cont = 0; *s != '\0'; *s++)
{
cont++;
}
return (cont);
}
