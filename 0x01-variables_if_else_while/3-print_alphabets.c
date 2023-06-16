#include <stdio.h>
/**
 * main - Prints out the alphabet in lowercase and uppercase.
 * Return: - 0 if success.
 */
int main(void)
{
	char a, b;

	a = 'a';
	b = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
