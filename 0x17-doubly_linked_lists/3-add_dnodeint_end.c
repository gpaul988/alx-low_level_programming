#include "lists.h"

/**
* add_dnodeint_end – Includes latest node at the close of list.
* @head: Directs to the beginning of list.
* @n: Integer for the current node to hold.
*
* Return: If not working - NULL.
*         O/W - Location of the latest node.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *last;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}

last = *head;
while (last->next != NULL)
last = last->next;
last->next = new;
new->prev = last;

return (new);
}
