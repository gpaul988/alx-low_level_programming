#include "search_algos.h"

/**
 * linear_search - Search algorithm
 * @array: The integer array
 * @size: The size of the array
 * @value: The value to search for
 * Return: The value index in array OTW -1
 * Graham S. Paul (0-linear.c)
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!size)
		goto KILL;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

KILL:	return (-1);
}
