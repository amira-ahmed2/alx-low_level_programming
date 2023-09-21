#include "lists.h"

/**
 * list_len - of elements in a linked list_t list.
 * @h: the first node
 *
 * Return: returns the number
 */
size_t list_len(const list_t *h)
{
size_t i;

for (i = 0; h != 0; i++)
{
h = h->next;
}
return (i);
}
