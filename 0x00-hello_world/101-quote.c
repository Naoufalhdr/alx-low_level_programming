#include <stdio.h>
/**
 * main - Print a sting to a standard error.
 * Return: - 1 if success.
 */
int main(void)
{
	char error[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s\n", error);
	return (1);
}
