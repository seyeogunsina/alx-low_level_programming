#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: the text to be written into the file
 * Return: number of characters written
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int no_letters = 0;
	int n_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[no_letters])
		no_letters++;

	n_write = write(fd, text_content, no_letters);
	if (n_write == -1)
		return (-1);

	close(fd);
	return (1);
}
