#include "search_algos.h"

/**
 * print_i - The assisted func to pull idx each check
 * @array: The array
 * @i: The index checked
 * Graham S.Paul (102-interpolation.c)
 */
void print_i(int *array, size_t i)
{
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);
}

/**
 * interpolation_search - SImilar to binary search, but use idx based on formula
 * @array: The given array of ints
 * @size: The size of array
 * @value: The worth to search for
 * Return: The  index at which value's found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);

	pos = l + (((double)(r - l) / (array[r] - array[l]))
		   * (value - array[l]));
	while (pos < size)
	{
		print_i(array, pos);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			l = pos + 1;
		else
			r = pos - 1;
		pos = l + (((double)(r - l) / (array[r] - array[l]))
			   * (value - array[l]));
	}
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
