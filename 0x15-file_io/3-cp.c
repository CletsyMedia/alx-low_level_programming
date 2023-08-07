#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

#define READ_ERROR "Error: Unable to read from file %s\n"
#define WRITE_ERROR "Error: Unable to write to %s\n"

/**
 * main - Copy content from one file to another.
 * @argc: The number of arguments.
 * @argv: Array of argument strings.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int from, to, close_status;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO,
			"Usage: custom_cp source_file destination_file\n"), exit(97);

	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
		dprintf(STDERR_FILENO, WRITE_ERROR, argv[2]), exit(99);

	from = open(argv[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO, READ_ERROR, argv[1]), exit(98);

	while (1)
	{
		int r = read(from, buffer, 1024);

		if (r == -1)
			dprintf(STDERR_FILENO, READ_ERROR, argv[1]), exit(98);

		if (r > 0)
		{
			int w = write(to, buffer, r);

			if (w == -1)
				dprintf(STDERR_FILENO, WRITE_ERROR, argv[2]), exit(99);
		}
		else
			break;
	}
	close_status = close(from);
	if (close_status == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from), exit(100);
	close_status = close(to);
	if (close_status == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to), exit(100);
	return (0);
}
