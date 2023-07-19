#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array using a given comparison
 *             function.
 * @array: a pointer to  the integer array.
 * @size: the number of elements in the array.
 * @cmp: a pointer to the function used for comparison.
 *
 * Return: the index of the first matching element if the element is found
 *         if no element matches the condition, or if the size is less than
 *         or equal to 0, the function returns -1 'failure'.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, check;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			check = cmp(array[i]);
			if (check == 1)
				return (i);
		}
	}
	return (-1);
}
