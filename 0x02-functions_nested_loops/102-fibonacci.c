#include <stdio.h>
/**
 * main - print the first 50 fibonacci numbers.
 * Return: 0 if success.
 */
int main(void)
{
	long i, a, b, c;

	a = 0;
	b = 1;

	for (i = 0; i < 48; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%ld", c);
		if (i == 47)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
