#include "main.h"

/**
 * create_file - Creates a file with specified content
 * and permissions.
 * @filename: Name of the file to create
 * @text_content: NULL-terminated string to write to the file.
 *
 * Return: 1 sucess, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd = -1;
	int bytes_written = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}

	bytes_written = write(fd, text_content, strlen(text_content));
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
