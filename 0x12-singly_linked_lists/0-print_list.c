#include "lists.h"
#include <string.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: the first node
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
size_t i;
for (i = 0; h != 0; i++)
{
if (h->str)
printf("[%d] %s\n", strlen(h->str), h->str);
else
printf("[%d] %s\n", strlen(h->str), "(nil)");
h = h->next;
}
return (i);
}
