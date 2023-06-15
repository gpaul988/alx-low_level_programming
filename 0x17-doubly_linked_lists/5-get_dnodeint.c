#include "lists.h"

/**
* get_dnodeint_at_index - Returns nth node of dlistint_t connected list.
* @head: Directs to the beginning node of the list.
* @index: Index of Selected node, beginning from 0.
*
* Return: Directs to nth node, or NULL if node doesn’t exist.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
unsigned int count = 0;

while (current != NULL)
{
if (count == index)
return (current);
current = current->next;
count++;
}

return (NULL);
}
