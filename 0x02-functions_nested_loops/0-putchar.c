#include "main.h"
/**
 * main - Print '_putchar'.
 * Return: - 0 if succes.
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i <= 8; i++)
		_putchar(c[i]);
	_putchar('\n');
	return (0);
}
