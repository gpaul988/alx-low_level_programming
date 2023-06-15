#include "lists.h"

/**
* dlistint_len - Pull doubly connected list
* @h: List
*
* Return: Number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t nodes = 0;

for (; h; nodes++)
h = h->next;

return (nodes);
}
