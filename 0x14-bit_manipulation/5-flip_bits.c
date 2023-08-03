#include "main.h"

/**
 * flip_bits - count the number of bits needed to flip to get from n to m.
 * @n: the first unsigned long integer
 * @m: the second unsigned long integer
 *
 * Return: the number of bits needed to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff_bits;
	int count;

	diff_bits = n ^ m;
	count = 0;

	while (diff_bits != 0)
	{
		diff_bits &= (diff_bits - 1);
		count++;
	}

	return (count);
}
