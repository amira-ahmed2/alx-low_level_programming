#include "lists.h"

/**
 * get_nodeint_at_index - that returns the nth node of a listint_t
 * @head: the pointer node
 * @index : index
 * Return : pointer the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
int i;
listint_t *node;
node = head;
i = 0;
while (node && i < index)
{
node = node->next;
i++;
}
return (node);
}
