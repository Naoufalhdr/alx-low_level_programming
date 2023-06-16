#include <stdio.h>
/**
 * main - Prints all possible different combination of 3 digits.
 * Return: - 0 if success.
 */
int main(void)
{
	int a;
	int b;
	int c;

	a = '0';
	b = '0';
	c = '0';

	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				if ((a != b && a != c && b != c) && (c > b && b > a))
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a == '7' && b == '8' && c == '9')
						putchar('\n');
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			b++;
		}
		a++;
	}
	return (0);
}
