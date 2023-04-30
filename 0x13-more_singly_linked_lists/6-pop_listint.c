#include "lists.h"
/**
 * pop_listint - Linked list head node delete
 * @head: Linked list first elelmenet to pointer
 *
 * Return: Data inside elements which was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;
if (!head || !*head)
return (0);
num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (num);
}
