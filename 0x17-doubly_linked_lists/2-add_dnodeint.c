#include "lists.h"

/**
* add_dnodeint – Include a node to the beginning of a list
* @head: Directs to the beginning
* @n:  node to add
*
* Return: Latest list
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

if (!head)
return (NULL);

new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);

new->n = n;
new->prev = NULL;
new->next = *head;
if (*head)
(*head)->prev = new;
*head = new;

return (new);
}

