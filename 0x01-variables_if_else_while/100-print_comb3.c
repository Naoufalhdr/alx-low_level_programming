#include <stdio.h>
/**
 * main - Prints all possible different combination of two digits.
 * Return: - 0 if succes.
 */
int main(void)
{
	int a;
	int b;

	a = '0';

	while (a <= '9')
	{
		b = '1';
		while (b <= '9')
		{
			if (a < b && a != b)
			{
				putchar(a);
				putchar(b);
				if (a == '8' && b == '9')
					putchar('\n');
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	return (0);
}
