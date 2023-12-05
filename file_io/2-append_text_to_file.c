#include "main.h"

/**
 * append_text_to_file - Appends text to a file
 * @filename: The name of to which the text should be appended.
 * @text_content: The content to append to the file.
 *
 * Return: Upon sucess, returns 1. Otherwise, returns -1 if there was an error
 * opening or writing to the file, or 1 if @text_content is NULL.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = -1;
	int size = 0;
	int bytes_written = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}

	fd = open(filename, O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}
	while (text_content[size] != '\0')
	{
		size++;
	}

	bytes_written = write(fd, text_content, size);

	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
