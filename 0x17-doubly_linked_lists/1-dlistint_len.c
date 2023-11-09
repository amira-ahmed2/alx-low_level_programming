#include "lists.h"

/**
 * dlistint_len - that returns the number of elements
 * @h: head first data.
 * Return: length double list
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t counter = 0;

while (h != NULL)
{
h = h->next;
counter++;
}
return (counter);
}
