#include "function_pointers.h"

/**
 * array_iterator - exucutes a given fucntion on each element of
 *                  an integer array.
 * @array: a pointer to the integer array.
 * @size: size of the array.
 * @action: a pointer to the fucntion to be executed on each element.
 *
 * Return: none.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
