#include "lists.h"

/**
* insert_dnodeint_at_index – Includes new node in a dlistint_t
*                            list at given Location.
* @h: Directs to the beginning of the dlistint_t list.
* @idx: Location to include the new node.
* @n: Integer for the latest node to hold.
*
* Return: If purpose fails - NULL.
*         O/W - Location of the latest node.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *tmp = *h, *new;

if (idx == 0)
return (add_dnodeint(h, n));

for (; idx != 1; idx--)
{
tmp = tmp->next;
if (tmp == NULL)
return (NULL);
}

if (tmp->next == NULL)
return (add_dnodeint_end(h, n));

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->prev = tmp;
new->next = tmp->next;
tmp->next->prev = new;
tmp->next = new;

return (new);
}
