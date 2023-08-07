#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

#define READ_ERROR "Error: Can't read from file %s\n"
#define WRITE_ERROR "Error: Can't write to %s\n"
#define CLOSE_ERROR "Error: Can't close fd %d\n"

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, other values on error.
 */

int main(int argc, char **argv)
{
	int src_fd, dest_fd, close_result, bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(EXIT_FAILURE);

	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_fd == -1)
		dprintf(STDERR_FILENO, WRITE_ERROR, argv[2]), exit(EXIT_FAILURE);

	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
		dprintf(STDERR_FILENO, READ_ERROR, argv[1]), exit(EXIT_FAILURE);

	while (1)
	{
		bytes_read = read(src_fd, buffer, 1024);
		if (bytes_read == -1)
			dprintf(STDERR_FILENO, READ_ERROR, argv[1]), exit(EXIT_FAILURE);

		if (bytes_read > 0)
		{
			bytes_written = write(dest_fd, buffer, bytes_read);
			if (bytes_written == -1)
				dprintf(STDERR_FILENO, WRITE_ERROR, argv[2]), exit(EXIT_FAILURE);
		}
		else
			break;
	}

	close_result = close(src_fd);
	if (close_result == -1)
		dprintf(STDERR_FILENO, CLOSE_ERROR, src_fd), exit(EXIT_FAILURE);

	close_result = close(dest_fd);
	if (close_result == -1)
		dprintf(STDERR_FILENO, CLOSE_ERROR, dest_fd), exit(EXIT_FAILURE);

	return (EXIT_SUCCESS);
}
