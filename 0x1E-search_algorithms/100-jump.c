#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located, or -1 if the value
 * is not present or the array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = (size_t) sqrt(size);
	size_t prev = 0, curr = 0;
	size_t i;

	if (!array || !size)
		return (-1);

	while (curr < size && array[curr] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", curr, array[curr]);
		prev = curr;
		curr += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, curr);

	for (i = prev; i < size && i <= curr; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
