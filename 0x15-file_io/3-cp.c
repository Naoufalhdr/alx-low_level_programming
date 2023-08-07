#include "main.h"

/**
 * error_exit - print an error message and exit with the specified status.
 * @file_name: the name of the file caused the error.
 * @message: error message to be printed.
 * @exit_code: exit code to return.
 *
 * Return: none (void function).
 */
void error_exit(char *file_name, const char *message, int exit_code)
{
	if (file_name == NULL)
		dprintf(STDERR_FILENO, "%s\n", message);
	else
		dprintf(STDERR_FILENO, "%s %s\n", message, file_name);
	exit(exit_code);
}

/**
 * main - copies the content of one file to another
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 if success.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	int bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(NULL, "Usage: cp file_from file_to\n", 97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_exit(argv[1], "Error: Can't read from file", 98);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		error_exit(argv[2], "Error: Can't write to file", 99);

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
			error_exit(argv[2], "Error: Can't write to file", 99);
	}

	if (bytes_read == -1)
		error_exit(argv[1], "Error: Can't read from file", 98);

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
