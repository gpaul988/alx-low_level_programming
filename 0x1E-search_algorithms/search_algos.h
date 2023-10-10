#ifndef __SEARCH_ALGOS_H__
#define __SEARCH_ALGOS_H__

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define __local __attribute__((weak))

/**
 * struct listint_s - The singly linked list
 *
 * @n: The integer
 * @index: The index of the node in the list
 * @next: The Locator to the next node
 *
 * Description: The singly linked list node structure
 * for Holberton project
 * Graham S. Paul (search_algos.h)
 */
typedef struct listint_s
{
		int n;
		size_t index;
		struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - The singly linked list with an express lane
 *
 * @n: The integer
 * @index: The index of the node in the list
 * @next: The locator to next node
 * @express: The locator to next node in express lane
 *
 * Description: The singly linked list node structure with an express lane
 * for Holberton project
 */
typedef struct skiplist_s
{
				int n;
				size_t index;
				struct skiplist_s *next;
				struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

/**
 * print_array - Pulls an array
 * @array: The array to pull
 * @start: The point ot begin pulling
 * @stop: The Point to stop
 */
__local void print_array(int *array, int start, int stop)
{
	int i = start;

	for (; i < stop; ++i)
		printf("%d, ", array[i]);

	printf("%d\n", array[i]);
}

#endif
