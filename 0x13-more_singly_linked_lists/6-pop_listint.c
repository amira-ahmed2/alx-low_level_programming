#include "lists.h"

/**
 * pop_listint - that deletes the head node of a listint_t
 * @head: the pointer node
 *
 * Return: the integer i or 0
 */
int pop_listint(listint_t **head)
{
int i;
listint_t *curr_node;
if (head == NULL || *head == NULL )
return (0);

curr_node = (*head)->next;
i = (*head)->n;
free(*head);
*head = curr_node;
return (i);
}
