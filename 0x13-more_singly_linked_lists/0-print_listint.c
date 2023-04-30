#include "lists.h"
/**
 * print_listint - Linked list prints all the elements
 * @h: linked lists of type listint_t to be printed
 *
 * Return: number of the nodes
 */
size_t print_listint(const listint_t *h)
{
size_t num = 0;
while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}
return (num);
}
