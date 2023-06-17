#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 * Return: - 0 if success.
 */
int main(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
