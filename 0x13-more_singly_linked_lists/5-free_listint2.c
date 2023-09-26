#include "lists.h"

/**
 * free_listint22 - that frees a listint_t list.
 * @head: the pointer node
 *
 */
void free_listint2(listint_t **head)
{
listint_t *x;

if (!head)
;

while (*head)
{
*head = *head->next;
free(x);
*head = x;
}
*head = NULL;
}
