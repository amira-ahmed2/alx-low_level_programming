#include "lists.h"

/**
 * sum_dlistint - sum of elements in list
 * @head: head first data.
 * Return: sum node
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
 
if (head == NULL)
return (0);
 
while (head != NULL)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
