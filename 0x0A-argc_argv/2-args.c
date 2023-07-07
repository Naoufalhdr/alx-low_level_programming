#include <stdio.h>

/**
 * main - a simple programe that print all argument it receives.
 * @argc: count of the arguments supplied to the program.
 * @argv: an array of strings that hold the argumetns.
 * Return: 0 if succes
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
