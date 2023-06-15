#include "lists.h"

/**
* delete_dnodeint_at_index – Removes a node from a dlistint_t
* at a given index.
* @head: Directs to the beginning of the dlistint_t.
* @index: Index of the node to removed.
*
* Return: If successful- 1.
*         O/W - -1.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp = *head;

if (*head == NULL)
return (-1);

for (; index != 0; index--)
{
if (tmp == NULL)
return (-1);
tmp = tmp->next;
}

if (tmp == *head)
{
*head = tmp->next;
if (*head != NULL)
(*head)->prev = NULL;
}

else
{
tmp->prev->next = tmp->next;
if (tmp->next != NULL)
tmp->next->prev = tmp->prev;
}

free(tmp);
return (1);
}
