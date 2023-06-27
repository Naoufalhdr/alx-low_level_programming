#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates keygen.
 * Return: 0 Always.
 */

int main(void)
{
	int i, r;

	srand(time(NULL));

	for (i = 0; i < 15; i++)
	{
		r = rand() % 127;
		printf("%c", r);
	}
	return (0);
}

