#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head : the pointer
 * @n : the first node
 * Return: returns new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nw_node = malloc(sizeof(listint_t));

if (!head || !nw_node)
return (NULL);

nw_node->next = NULL;
nw_node->n = n;
if (*head)
{
nw_node->next = *head;
}
*head = nw_node;
return (nw_node);
}
