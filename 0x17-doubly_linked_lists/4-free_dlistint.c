#include "lists.h"

/**
 * free_dlistint - that frees a dlistint_t list
 * @head: head first data.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *currentNode = head;
dlistint_t *nextNode;

while (currentNode != NULL)
{
nextNode = currentNode->next;
free(currentNode);
currentNode = nextNode;
}
}
