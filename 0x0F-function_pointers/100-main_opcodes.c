#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main fucntion
 * @argc: the number of arguments.
 * @argv: an array of strings containing the command line arguments
 *
 * Return: 0 if success.
 */

int main(int argc, char *argv[])
{
	unsigned char *ptr;
	int number_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_bytes = atoi(argv[1]);

	if (number_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (unsigned char *)main;

	for (i = 0; i < number_bytes; i++)
		printf("%02x ", ptr[i]);
	printf("\n");

	return (0);
}

