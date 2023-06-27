#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random valid passwords for the program 101-crackme.
 * Return: 0 if success.
 */

int main(void)
{
	int r, sum;

	sum = 0;

	srand(time(NULL));

	while (sum < 2772)
	{
		r = rand() % 94 + 33;
		sum += r;
		if (sum < 2772)
			printf("%c", r);
		else
		{
			sum = 2772 - (sum - r);
			printf("%c", sum);
			break;
		}

	}
	return (0);
}

