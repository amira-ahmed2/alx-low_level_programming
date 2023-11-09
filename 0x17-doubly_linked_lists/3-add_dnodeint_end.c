#include "lists.h"

/**
 * add_dnodeint_end - that adds a new node at the end
 * @head: head first data.
 * @n: int new data
 * Return: dlistint_t list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newNode = malloc(sizeof(dlistint_t));
dlistint_t *endNode = *head

if (newNode == NULL)
return (NULL);

newNode->n = n;
newNode->next = NULL;
if ((*head) == NULL)
{
newNode->prev = NULL;
*head = newNode;
return (newNode);
}

while (endNode->next != NUL)
endNode = endNode->next;

endNode->next = newNode;
newNode->prev = endNode;
return (newNode);
}
