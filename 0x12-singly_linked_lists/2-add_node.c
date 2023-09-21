#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head : the pointer
 * @str : the first node
 * Return: returns new node
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *newnode = malloc(sizeof(list_t));
if (!head || !newnode)
return (NULL);

newnode->str = strdup(str);
newnode->next = *head;
*head = newnode;
return (newnode);
}
