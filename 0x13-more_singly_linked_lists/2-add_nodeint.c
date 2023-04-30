#include "lists.h"
/**
 * add_nodeint - Linked list adds new node at beginning
 * @head: List pointer to first node
 * @n: New enode data to insert
 *
 * Return: pointer to new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
