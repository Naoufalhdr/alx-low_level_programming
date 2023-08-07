#include "main.h"

/**
 * create_file - creates a file with the specified text content
 * @filename: the name of  the file to create
 * @text_content: the NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int bytes_written, text_len;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_len = 0;
		while (text_content[text_len] != '\0')
			text_len++;
		bytes_written = write(file, text_content, text_len);
		if (bytes_written == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
