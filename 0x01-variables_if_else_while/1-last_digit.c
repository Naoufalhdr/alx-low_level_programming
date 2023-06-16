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

	if (n % 10 == 0)
		printf("Last digit of %d is 0  and is 0\n", n);
	else if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else if (n < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	return (0);
}
