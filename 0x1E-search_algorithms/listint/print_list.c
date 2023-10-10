#include <stdio.h>
#include "../search_algos.h"

/**
 * print_list - Pulls the content of a listint_t
 *
 * @list: Directs to the head of the list
 * Graham S. Paul (print_list.c)
 */
void print_list(const listint_t *list)
{
	printf("List :\n");
	while (list)
	{
		printf("Index[%lu] = [%d]\n", list->index, list->n);
		list = list->next;
	}
	printf("\n");
}
