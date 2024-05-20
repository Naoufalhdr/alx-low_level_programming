#include "search_algos.h"


/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the Interpolation search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located, or -1 if the value
 * is not present or the array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos, a;

	if (!array || !size)
		return (-1);

	while (low <= high && array[low] <= value && array[high] >= value)
	{
		a = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		pos = low + a;
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}

	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
