#include "search_algos.h"

/**
 * binary_search - Search algorith
 * @array: Array of integers
 * @size: The size of array/list
 * @value: The value to find
 * Return: THe index of element in the array OTW -1
 * Graham S. Paul (1-binary.c)
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, start, stop;

	if (!size)
		goto KILL;

	stop = size - 1;
	i = stop / 2;
	start = 0;

	for (; start <= stop;)
	{
		printf("Searching in array: ");
		print_array(array, start, stop);
		if (value == array[i])
			return (i);
		else if (value < array[i])
			stop = i - 1;
		else
			start = i + 1;
		i = (stop - start) / 2;
		i += start;
	}
KILL:	return (-1);
}
