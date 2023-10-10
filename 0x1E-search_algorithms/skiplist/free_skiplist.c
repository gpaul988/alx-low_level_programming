#include <stdlib.h>
#include "../search_algos.h"

/**
 * free_skiplist - Refuse a singly linked list
 *
 * @list: Directs to the linked list to be freed
 * Graham S. Paul (free_skiplist.c)
 */
void free_skiplist(skiplist_t *list)
{
	skiplist_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_skiplist(node);
	}
}
