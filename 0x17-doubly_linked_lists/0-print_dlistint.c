#include "lists.h"

/**
 * print_dlistint - hat prints all the elements of a dlistint_t list
 * @h: head first data.
 * Return: length double list
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t counter = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
counter++;
}
return (counter);
}
