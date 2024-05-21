#include "search_algos.h"

/**
 * print_array - Prints the current array being searched.
 * @array: The array to be printed.
 * @low: The starting index of the subarray to print.
 * @high: The ending index of the subarray to print.
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");
}

/**
 * rec_advanced_binary - Helper function to perform advanced binary search.
 * @array: Pointer to the first element of the array to search in.
 * @low: The starting index of the subarray.
 * @high: The ending index of the subarray.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if the value is not present
 */
int rec_advanced_binary(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low > high)
		return (-1);

	print_array(array, low, high);

	mid = (high + low) / 2;
	if (array[mid] == value)
	{
		if (mid == low || array[mid - 1] != value)
			return (mid);
		return (rec_advanced_binary(array, low, mid, value));
	}
	else if (array[mid] < value)
		return (rec_advanced_binary(array, mid + 1, high, value));
	else
		return (rec_advanced_binary(array, low, mid - 1, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers using
 * an advanced binary search algorithm to find the first occurrence.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where value is located,
 *         or -1 if the value is not present
 *         or the array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);

	return (rec_advanced_binary(array, 0, size - 1, value));
}
