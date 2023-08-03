#include "main.h"

/**
 * get_endianness - check the endianness of the machine.
 *
 * Return: 0 if big endian;
 *         1 if little endian.
 */
int get_endianness(void)
{
	unsigned int num;
	char *ptr;

	num = 100;
	ptr = (char *)&num;

	return (*ptr);
}
