#include <stdio.h>
#include <stdlib.h>

/**
 * main - a simple programe that multiplies two numbers.
 * @argc: count of the arguments supplied to the program.
 * @argv: an array of strings that hold the argumetns.
 * Return: 0 if succes
 */

int main(int argc, char *argv[])
{
	int i;
	int res = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		res *= atoi(argv[i]);
	printf("%d\n", res);
	return (0);
}
