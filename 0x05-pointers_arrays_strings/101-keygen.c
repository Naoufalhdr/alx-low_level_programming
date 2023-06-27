#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates keygen.
 * Return: 0 Always.
 */

int main(void)
{
	srand(time(NULL));

	int r, i;
	
	r = 0;

	for (i = 0; i < 25; i++)
	{
		r = rand() % 94 + 33;
		printf("%c", r);
		if (i == 24)
		printf("\n");
	}
	return (0);
}

