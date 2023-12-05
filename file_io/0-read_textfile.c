#include "main.h"

/**
 * read_textfile - hat reads a text file and prints it to the
 * POSIX standard output.
 * @filename: The name of the text file to read
 * @letters: The maximum of bytes to read and print
 *
 * Return: The number of bytes read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	char *taille_file = NULL;
	ssize_t bytes_read = 0;
	ssize_t bytes_written = 0;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	taille_file = malloc(sizeof(char) * letters);

	if (taille_file == NULL)
	{
		free(taille_file);
		close(fd);
		return (0);
	}
	bytes_read = read(fd, taille_file, letters);
	bytes_written = write(STDOUT_FILENO, taille_file, bytes_read);
	free(taille_file);
	close(fd);
	return (bytes_written);
}
