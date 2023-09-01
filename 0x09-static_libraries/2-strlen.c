#include "main.h"
/**
 * _strlen - Write a function that returns the length of a string
 *
 * @s: value it points
 * Return: returns length
 */
int _strlen(char *s)
{
int cont;

for (cont = 0; *s != '\0'; s++)
cont++;

return (cont);
}
