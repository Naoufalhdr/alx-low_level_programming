#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers.
 * Return: - 0 if success.
 */
int main(void)
{
	int a;

	a = '0';

	while (a <= '9')
	{
		putchar(a);
		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
