#include "lists.h"

/**
 * free_list - that frees a list_t list.
 * @head: the pointer node
 *
 */
void free_list(list_t *head)
{
list_t *currentnode;

while ((currentnode = head) != NULL)
{
head = head->next;
free(currentnode->str);
free(currentnode);
}
}
