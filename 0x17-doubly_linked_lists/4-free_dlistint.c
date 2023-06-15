#include "lists.h"

/**
 * free_dlistint – Allows connected dlistint_t list.
 * @head: Begining of the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
