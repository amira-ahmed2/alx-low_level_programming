#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * @head : the pointer
 * @str : the first node
 * Return: returns new node last
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newnode = malloc(sizeof(list_t));
list_t *nodehead = *head;

if (!head || !newnode)
return (NULL);
if (str)
{
newnode->str = strdup(str);
if (!newnode->str)
{
free(newnode);
return (NULL);
}
newnode->len = strlen(newnode->str);
}
if (nodehead)
{
while (nodehead->next)
{
nodehead = nodehead->next;
}
nodehead->next = newnode;
}
else
{
*head = newnode;
}
return (newnode);
}
