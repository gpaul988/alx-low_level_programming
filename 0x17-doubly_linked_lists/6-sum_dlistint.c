#include "lists.h"

/**
* sum_dlistint - Retrieves total of all data (n)
* of doubly connect list
*
* @head: Beginning of list
* Return: Total of data
*/
int sum_dlistint(dlistint_t *head)
{
int sum;

sum = 0;

if (head != NULL)
{
while (head->prev != NULL)
head = head->prev;

while (head != NULL)
{
sum += head->n;
head = head->next;
}
}

return (sum);
}
