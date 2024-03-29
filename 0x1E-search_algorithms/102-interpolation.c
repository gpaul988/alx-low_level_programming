#include "search_algos.h"

/**
  * interpolation_search - Looks for the worth in a sorted array
  * of integers using interpolation search.
  * @array: Directs to first element of the array to search.
  * @size: Number of elements in the array.
  * @value: Worth to look for.
  *
  * Return: If worth is not present or the array is NULL, -1.
  * OTW, first index where the value is located.
  *
  * Description: Pulls worth every time it is compared in the array..
  * Graham S. Paul ( 102-interpolation.c)
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}

	return (-1);
}
