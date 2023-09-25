#include "lists.h"

/**
 * free_listint22 - that frees a listint_t list.
 * @head: the pointer node
 *
 */
void free_listint2(listint_t **head)
{
listint_t *currentnode;
listint_t *x;

if (!head)
;

currentnode = *head;

while (currentnode)
{
x = currentnode;
currentnode = currentnode->next;
free(x);
}
*head = NULL;
}
