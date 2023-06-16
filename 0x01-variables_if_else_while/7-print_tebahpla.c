#include <stdio.h>
/**
 * main - Prints out the lowercase alphabet in reverse.
 * Return: - 0 if success.
 */
int main(void)
{
	char a;

	a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
