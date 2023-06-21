#include <stdio.h>
/**
 * main - prints the first 98 fibonacci numbers.
 * Return: 0 if success.
 */
int main(void)
{
	unsigned long a, b, c, i;

	a = 0;
	b = 1;

	for (i = 0; i < 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i != 97)
			printf("%lu, ", c);
		else
			printf("%lu\n", c);
	}
	return (0);
}
