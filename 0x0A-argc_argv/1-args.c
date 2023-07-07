#include <stdio.h>

/**
 * main - a simple programe that number of arguments passed into it.
 * @argc: count of the arguments supplied to the program.
 * @argv: an array of strings that hold the argumetns.
 * Return: 0 if succes
 */

int main(int argc, char *argv[])
{
	argv[0] = 0;

	printf("%d\n", argc - 1);

	return (0);
}
