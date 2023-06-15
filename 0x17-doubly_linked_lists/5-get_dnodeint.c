#include "lists.h"

/**
* get_dnodeint_at_index – Pinpoint a node in a dlistint_t list.
* @head: Beginning of the dlistint_t list.
* @index: Node to detect.
*
* Return: Node does not exist - NULL.
*         O/W - Dectets the located node.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
for (; index != 0; index--)
{
if (head == NULL)
return (NULL);
head = head->next;
}

return (head);
}
