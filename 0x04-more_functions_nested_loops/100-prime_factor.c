#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143.
 * Return: 0 if success.
 */

int main(void)
{
	long  num, i;

	num = 612852475143;
	i = 2;

	while (1)
	{
		if (num % i == 0)
			num /= i;
		else
			i++;
		if (num == i)
			break;
	}
	printf("%ld\n", i);
	return (0);
}

