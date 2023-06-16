#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Checks if the number is positive, negative, or equal to 0.
 * Return: 0 if success.
 */
int main(void)
{
	srand(time(NULL));
	int n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is postivie\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
