#ifndef __SEARCH_ALGOS_H__
#define __SEARCH_ALGOS_H__

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define __local __attribute__((weak))

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

/**
 * print_array - Pulls an array
 * @array: The array to pull
 * @start: The point ot begin pulling
 * @stop: The Point to stop
 * Graham S. Paul (search_algos.h)
 */
__local void print_array(int *array, int start, int stop)
{
	int i = start;

	for (; i < stop; ++i)
		printf("%d, ", array[i]);

	printf("%d\n", array[i]);
}

#endif
