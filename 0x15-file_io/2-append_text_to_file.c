#include "main.h"

/**
 * append_text_to_file - appends a text to a file
 * @filename: the name of the file
 * @text_content: the text content to be appended
 * Return: 1 i successful, -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int no_letters = 0;
	int n_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[no_letters])
			no_letters++;

		n_write = write(fd, text_content, no_letters);

		if (n_write == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
