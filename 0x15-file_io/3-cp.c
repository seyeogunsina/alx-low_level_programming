#include "main.h"

/**
 * check_error - checks if the files were opened successfully
 * @file_from: file to be copied from
 * @file_to: file to copied to
 * @argv: command line arguments
 * Return: void
 */
void check_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the files
 * @argc: argument counts
 * @argv: argument list
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t n_letters, n_write;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_error(file_from, file_to, argv);

	n_letters = 1024;
	while (n_letters == 1024)
	{
		n_letters = read(file_from, buf, 1024);
		if (n_letters == -1)
			check_error(-1, 0, argv);

		n_write = write(file_to, buf, n_letters);
		if (n_write == -1)
			check_error(0, -1, argv);
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
