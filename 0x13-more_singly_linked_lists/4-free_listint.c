#include "lists.h"
/**
 * free_listint - frees linked lists
 * @head: listint_t list that will be freed
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
