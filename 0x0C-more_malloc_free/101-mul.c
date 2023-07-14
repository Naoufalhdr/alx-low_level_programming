#include <stdlib.h>
#include <stdio.h>

int _isdigit(char *argv);
int _strlen(char *argv);
int *_atoi(char *argv, int lenght);
int *multiplication(int *digits1, int len1, int *digits2, int len2);
int _putchar(char c);

/**
 * main - a program that multiplies two positive numbers and print the resullt
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 if success,
 *         if not print error and exit with a status 98.
 */

int main(int argc, char *argv[])
{
	int len1, len2, max_len;
	int *digits1, *digits2, *product;
	int i;

	if (argc != 3)
		exit(98);

	for (i = 1; i < 3; i++)
	{
		if (_isdigit(argv[i]))
			exit(98);
	}

	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	max_len = len1 + len2 - 1;

	digits1 = _atoi(argv[1], len1);
	digits2 = _atoi(argv[2], len2);
	product = multiplication(digits1, len1, digits2, len2);

	while (max_len > 0 && product[max_len] == 0)
		max_len--;

	for (i = max_len; i >= 0; i--)
		printf("%d", product[i]);
	printf("\n");
	free(digits1);
	free(digits2);
	free(product);

	return (0);
}

/**
 * _isdigit - checks if a string is composed entirely of digits.
 * @argv: the input   string to be checked.
 *
 * Return: 1 if the  string contains non-digit characters,
 *         0 otherwise.
 */

int _isdigit(char *argv)
{
	int i;

	i = 0;

	while (argv[i] != '\0')
	{
		if (argv[i] < '0' || argv[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

/**
 * _strlen - calculates thea length of a string.
 * @argv: the input  string.
 *
 * Return: the length of the string.
 */

int _strlen(char *argv)
{
	int lenght;

	lenght = 0;

	while (argv[lenght] != '\0')
		lenght++;
	return (lenght);
}

/**
 * _atoi - converts a string of digits to an array of integers.
 * @argv: the input string  containing the digits.
 * @length: the length of  the input string.
 *
 * Return: a dynamically allocated array of integers representing the digits.
 *         otherwise return NULL if memory allocation fails.
 */

int *_atoi(char *argv, int length)
{
	int *digits;
	int i, j;

	digits = (int *) malloc(length * sizeof(int));
	if (digits == NULL)
		return (NULL);

	for (i = length - 1, j = 0; i >= 0 ; i--, j++)
		digits[j] = argv[i] - '0';

	return (digits);
}

/**
 * multiplication - performs multiplication of two arrays of digits.
 * @digits1: the first array of digits.
 * @len1: the length of the first array.
 * @digits2: the second array of digits.
 * @len2: the length of the second array.
 *
 * Return: a dynamically allocated array of integers representing the product.
 *         otherwise return NULL if memory allocation fails.
 */

int *multiplication(int *digits1, int len1, int *digits2, int len2)
{
	int *product;
	int max_length = len1 + len2;
	int i, j;

	product = malloc((max_length * 2) * sizeof(int));
	if (product == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			product[i + j] += digits1[i] * digits2[j];
			product[i + j + 1] += product[i + j] / 10;
			product[i + j] %= 10;
		}
	}
	return (product);
}
