#include <stdio.h>
#include <stdlib.h>

/**
 * main - a simple program that adds positive numbers.
 * @argc: count of the arguments supplied to the program.
 * @argv: an array of strings that hold the argumetns.
 * Return: 0 if succes
 */

int main(int argc, char *argv[])
{
	int i;
	int res = 0;

	if (argc > 2)
	{
		for (i = 2; i < argc; i++)
		{
			if (*argv[i] > '0' && *argv[i] < '9')
				res += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", res);
	}
	else
		printf("0\n");
	return (0);
}
