#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a simple program that prints the minimum number of coins
 *        to make change for an amount of money.
 * @argc: count of the arguments supplied to the program.
 * @argv: an array of strings that hold the argumetns.
 * Return: 0 if success.
 *         otherwise 1 if the number of arguments is not 1.
 */

int main(int argc, char *argv[])
{
	int units[] = {25, 10, 5, 2, 1};
	int i, temp, cents, count;

	count = 0;
	cents = atoi(argv[1]);
	temp = 0;

	if (argc == 2)
	{
		if (cents > 0)
		{
			for (i = 0; i < 5; i++)
			{
				temp = cents / units[i];
				cents -= temp * units[i];
				count += temp;
			}
			printf("%d\n", count);
		}
		else
			printf("0\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
