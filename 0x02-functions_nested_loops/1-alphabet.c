#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase.
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
