#include "lists.h"

/**
 * get_dnodeint_at_index - that returns the nth node of a dlistint_t
 * @head: head first data.
 * @index: the index of the node
 * Return: returns the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (counter < index && head->next)
	{
		head = head->next;
		counter++;
	}
	if (counter < index)
		return (NULL);
	return (head);
}
