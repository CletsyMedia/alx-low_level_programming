#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

#define READ_ERR "Error: Can't read from file %s\n"
#define WRITE_ERR "Error: Can't write to %s\n"
#define CLOSE_ERR "Error: Can't close fd %d\n"

/**
 * main - Entry point for the file
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to strings
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int from, to, close_status, w, r;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]), exit(97);

	from = open(argv[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);

	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
		dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);

	while (1)
	{
		r = read(from, buffer, 1024);
		if (r == -1)
			dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);
		if (r > 0)
		{
			w = write(to, buffer, r);
			if (w == -1)
				dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
		}
		else
			break;
	}
	close_status = close(from);
	if (close_status == -1)
		dprintf(STDERR_FILENO, CLOSE_ERR, from), exit(100);

	close_status = close(to);
	if (close_status == -1)
		dprintf(STDERR_FILENO, CLOSE_ERR, to), exit(100);
	return (0);
}
