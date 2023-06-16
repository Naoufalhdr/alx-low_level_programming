#include <stdio.h>
/**
 * main - Prints all the numbers of base-16 in lowercase.
 * Return: - 0 if success.
 */
int main(void)
{
	int a;

	a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	a = 'a';
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
