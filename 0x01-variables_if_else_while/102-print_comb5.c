#include <stdio.h>
/**
 * main - Prints all possible different combination of 3 digits.
 * Return: - 0 if success.
 */
int main(void)
{
	int a, b;

	a = 0;

	while (a < 100)
	{
		b = 0;
		while (b < 100)
		{
			if (a != b && a < b)
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(' ');
				putchar((b / 10) + '0');
				putchar((b % 10) + '0');
				if (a != 98 || b != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
