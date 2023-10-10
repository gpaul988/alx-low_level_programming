#include "search_algos.h"

/**
  * advanced_binary_recursive - Looks recursively for the worth in a sorted
  * array of integers using binary search.
  * @array: The locator to first element of the [sub]array to find.
  * @left: Beginning index of the [sub]array to find.
  * @right: Final index of the [sub]array to find.
  * @value: Worth to look for.
  *
  * Return: If value is not present, -1.
  * OTW, index where the value is located.
  *
  * Description: Pulls the [sub]array being found after each change.
  * Graham S. Paul (104-advanced_binary.c)
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
  * advanced_binary - Looks for the worth in a sorted array
  * of integers using advanced binary search.
  * @array: The locator to first element of the array to find.
  * @size: Number of elements in the array.
  * @value: Worth to look for.
  *
  * Return: If value is not present or the array is NULL, -1.
  * OTW, first index where the value is located.
  *
  * Description: Pulls the [sub]array being searched after each change.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
