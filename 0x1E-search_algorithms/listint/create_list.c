#include <stdlib.h>
#include "../search_algos.h"

void free_list(listint_t *list);

/**
 * create_list - Dvelopes a single linked list
 *
 * @array: Directs to the array to be used to fill the list
 * @size: Size of the array
 *
 * Return: The Locator to head of the created list (NULL on failure)
 * Graham S. Paul (create_list.c)
 */
listint_t *create_list(int *array, size_t size)
{
	listint_t *list;
	listint_t *node;

	list = NULL;
	while (array && size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
		{
			free_list(list);
			return (NULL);
		}
		node->n = array[size];
		node->index = size;
		node->next = list;
		list = node;
	}
	return (list);
}
