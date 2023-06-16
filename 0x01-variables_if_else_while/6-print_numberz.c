#include <stdio.h>
/**
 * main - Prints all single digit numbers drom 0 to 10 using putchar.
 * Return: - 0 if success.
 */
int main(void)
{
	int i;

	i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
