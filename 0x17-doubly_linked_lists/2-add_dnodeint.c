#include "lists.h"

/**
 * add_dnodeint - that adds a new node at the beginning
 * @head: head first data.
 * @n: int new data
 * Return: dlistint_t list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newNode = malloc(sizeof(dlistint_t));
if (newNode ==NULL)
    return (NULL);

newNode->n = n;
newNode->prev = NULL;
newNode->next = *head;

(*head)->prev = newNode;
*head = newNode;
return (newNode);

}
