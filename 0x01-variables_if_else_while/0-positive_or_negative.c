#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Checks if the random number is positive, negative, or equal to 0.
 * Return: 0 if success.
 */
int main(void)
{
	int n;

	srand(time(NULL));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
