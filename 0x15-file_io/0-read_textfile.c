#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the text file to read
 * @letters: the number of letters to read and  print
 *
 * Return: the actual number of letters read and printed;
 *         - If the file cannot be opened or read, or if write fails,
 *         or does not write the expected amount of bytes return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t bytes_written, bytes_read;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	bytes_read = read(file, buffer, letters);
	if (bytes_read == -1)
	{
		close(file);
		free(buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(file);
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file);
	return (bytes_written);
}

