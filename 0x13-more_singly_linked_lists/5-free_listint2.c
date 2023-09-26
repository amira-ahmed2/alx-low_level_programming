#include "lists.h"

/**
 * free_listint2 - that frees a listint_t list.
 * @head: the pointer node
 *
 */
void free_listint2(listint_t **head)
{
listint_t *x;

if (!head)
return;

while (*head)
{
*head = (*head)->next;
free(*head);
*head = x;
}
*head = NULL;
}
