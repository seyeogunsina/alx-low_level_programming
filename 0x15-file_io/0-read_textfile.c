#include "main.h"

/**
 * read_textfile - reads a textfile and prints it to standard output
 * @filename: pointer to filehandle
 * @letters: the number of characters to be read
 * Return: the number of characters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters));

	if (buffer == NULL)
		return (0);

	n_read = read(fd, buffer, letters);
	n_write = write(STDOUT_FILENO, buffer, n_read);

	close(fd);
	free(buffer);
	return (n_write);
}
