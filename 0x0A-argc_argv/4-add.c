#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a simple program that adds positive numbers.
 * @argc: count of the arguments supplied to the program.
 * @argv: an array of strings that hold the argumetns.
 * Return: 0 if succes
 */

int main(int argc, char *argv[])
{
	int i, j;
	int res = 0;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			char *element = argv[i];

			for (j = 0; element[j]; j++)
			{
				if (!isdigit(element[j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			res += atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	else
		printf("0\n");
	return (0);
}
