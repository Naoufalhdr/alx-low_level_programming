#include <stdio.h>
/**
 * main - Print all the alphabet in lowercase except 'q' and 'e'.
 * Return: - 0 if success.
 */
int main(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
