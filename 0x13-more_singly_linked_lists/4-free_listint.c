#include "lists.h"

/**
 * free_listint - that frees a listint_t list.
 * @head: the pointer node
 *
 */
void free_listint(listint_t *head)
{
listint_t *currentnode;

while (head)
{
currentnode = head;
head = head->next;
free(currentnode);
}
}
