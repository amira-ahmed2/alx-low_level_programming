#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head : the pointer
 * @n : the first node
 * Return: returns new node last
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nw_node = malloc(sizeof(listint_t));
listint_t *nd;

if (!head || !nw_node)
return (NULL);
nw_node->next = NULL;
nw_node->n = n;
if (!*head)
{
*head = nw_node;
}
else
{
nd = *head;
while (nd->next)
{
nd = nd->next;
}
nd->next = nw_node;
}
return (nw_node);
}
