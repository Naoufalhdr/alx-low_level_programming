#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 * @n: the  unsigned long integer from which to get the bit value.
 * @index: the index of the bit to retrieve (starting from 0).
 *
 * Return: the value of the bit at the specified index (0 or 1);
 *         or -1 if an error occurred (index is out of range).
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num_bits;

	num_bits = sizeof(n) * 8;

	if (index >= num_bits)
		return (-1);
	return ((n >> index) & 1);
}
