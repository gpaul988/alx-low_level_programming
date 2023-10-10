#include "search_algos.h"

/**
 * linear_skip - Looks for an algorithm in a sorted singly
 * connected list of integers using linear skip.
 * @list: Directs to the  head of the connected list to search.
 * @value: Worth to look for.
 *
 * Return: If the worth is not present or the head of the list is NULL, NULL.
 * OTW, Directs to the first node where the value is located.
 *
 * Description: Pulls worth every time it is compared in the list.
 * Makes use of the square root of the list size as the jump step.
 * Graham S. Paul (106-linear_skip.c)
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	if (list == NULL)
		return (NULL);

	for (node = jump = list; jump->next != NULL && jump->n < value;)
	{
		node = jump;
		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
					jump->index, jump->n);
		}
		else
		{
			while (jump->next != NULL)
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
