#include <stdio.h>
/**
 * main -
 * Return: 0 if success.
 */
int main(void)
{
	long a, b, c, i, sum;

	a = 0;
	b = 1;
	sum = 0;

	for (i = 0; i < 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if ((c % 2 == 0) && (c < 4000000))
			sum += c;
	}
	printf("%ld\n", sum);
	return (0);
}
