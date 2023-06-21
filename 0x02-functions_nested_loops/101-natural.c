#include <stdio.h>
/**
 * main - calculate the sum of all multiples of 3 or 5 below 1024.
 * Return: 0 if success.
 */
int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
