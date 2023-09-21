#include "lists.h"
#include <string.h>

/**
 * _strlen - Write a function that returns the length of a string
 *
 * @s: value it points
 * Return: returns length
 */
int _strlen(char *s)
{
int cont = 0;

for (; *s != '\0'; s++)
cont++;

return (cont);
}

/**
 * print_list - prints all the elements of a list_t list
 * @h: the first node
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
size_t i;

for (i = 0; h; i++)
{
if (h->str)
printf("[%d] %s\n", _strlen(h->str), h->str);
else
printf("[%d] %s\n", _strlen(h->str), "(nil)");
h = h->next;
}
return (i);
}
