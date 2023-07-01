#include "main.h"
#include <stdio.h>

/**
 * print_buffer - print buffer.
 * @b: a pointer to the buffer to be printed.
 * @size: the number of bytes in the buffer to be printed
 * Retunr: nothing.
 */

void print_buffer(char *b, int size)
{
	int i, position, end, a;

	a = size;
	position = 0;
	end = 10;

	while (size > 0)
	{
		printf("%08x:", position);
		for (i = position; i < end; i++)
		{
			if (i < a)
			{
				if (i % 2 == 0)
					printf(" ");
				printf("%02x", b[i]);
			}
			else
			{
				if (i % 2 == 0)
					printf(" ");
				printf("  ");
			}
		}
		printf(" ");
		for (i = position; i < end; i++)
		{
			if (i < a)
			{
				if (b[i] >= ' ' && b[i] <= '~')
					printf("%c", b[i]);
				else
					printf(".");
			}
		}
		position += 10;
		size -= 10;
		end += 10;
		printf("\n");
	}
}
