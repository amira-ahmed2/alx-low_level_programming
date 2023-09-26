#include "lists.h"

/**
 * sum_listint -  the function sum of all the data (n) of a listint_t
 * @head : the pointer node
 *
 * Return : integer sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *curr_node = head;
while (curr_node)
{
sum += curr_node->n;
curr_node = curr_node->next;
}
return (sum);
}
