#include "search_algos.h"


/**
 * _binary_search - Searches for a value in a sorted array of integers
 * using the binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @low: The starting index of the subarray to search in.
 * @high: The ending index of the subarray to search in.
 * @value: The value to search for.
 *
 * Return: The index where the value is located,
 *         or -1 if the value is not present.
 */
int _binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i > low)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");

		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located, or -1 if the value
 * is not present or the array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	size_t low, high;

	if (!array || !size)
		return (-1);

	if (array[i - 1] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	low = i / 2;
	high = i < size ? i : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	return (_binary_search(array, low, high, value));
}
