#include "lists.h"
/**
 * add_nodeint_end - adding node to the end of a linked list
 * @head: Pointer to first element in lists
 * @n: Data to insert in new element
 *
 * Return: Pointer to new node, or NULL if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *temp = *head;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (temp->next)
temp = temp->next;
temp->next = new;
return (new);
}
