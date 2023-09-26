#include "lists.h"

/**
 * get_nodeint_at_index - that returns the nth node of a listint_t
 * @head: the pointer node
 * @index : index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *node = head;

while (node && i < index)
{
node = node->next;
i++;
}

return (node ? node : NULL);
}
