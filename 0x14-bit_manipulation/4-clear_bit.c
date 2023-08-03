#include "main.h"

/**
 * set_bit - set the value of a bit to 0 at a given index.
 * @n: a pointer to the  unsigned long integer where the bit will be set.
 * @index: the index of the bit to set (starting from 0).
 *
 * Return: 1 if the bit was set successfully;
 *         or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num_bits;

	num_bits = sizeof(n) * 8;

	if (index >= num_bits)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
